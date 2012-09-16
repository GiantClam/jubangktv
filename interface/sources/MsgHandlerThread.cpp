#include "MsgHandlerThread.h"
#include "server.h"
#ifdef _linux_
#include <netdb.h>
#else
#include <WinSock.h>
#endif
#include <stdlib.h>
#include <stdio.h>

MsgHandlerThread::MsgHandlerThread()
{
#ifndef _linux_
    WSADATA  Ws;
    WSAStartup(MAKEWORD(2,2), &Ws);
#endif
}

MsgHandlerThread::~MsgHandlerThread()
{
#ifndef _linux_
    WSACleanup();
#endif
}

void MsgHandlerThread::run()
{
	struct timeval tv;
	fd_set fdSet;
	int maxSock = 0;
	int fdArray[MAX_SOCKET_NUM] = {0,};
	int fdArrayIndex = 0;

	char nameBuff[100] = {0,};
    char ipStr[16] = {0,};
	gethostname(nameBuff, 100);
	struct hostent* ipAddr = gethostbyname(nameBuff);
    sprintf(ipStr, "%d.%d.%d.%d", (unsigned char)ipAddr->h_addr_list[0][0], 
        (unsigned char)ipAddr->h_addr_list[0][1], (unsigned char)ipAddr->h_addr_list[0][2],
        (unsigned char)ipAddr->h_addr_list[0][3]);
	int sock = tcp_server_setup(ipStr, 8000);
    maxSock = sock;
	int i =0;
	while (1)
	{
		FD_ZERO(&fdSet);
		FD_SET(sock, &fdSet);
		for (i = 0; i < MAX_SOCKET_NUM; i++) {
			if (fdArray[i] != 0) {
				FD_SET(fdArray[i], &fdSet);
			}
		}

		tv.tv_sec = 0;
		tv.tv_usec = 30;

		int ret = select(maxSock + 1, &fdSet, NULL, NULL, &tv);
		if (ret < 0) {
			perror("select");
			break;
		} else if (ret == 0) {
			printf("timeout\n");
			continue;
		}

		for (i = 0; i < fdArrayIndex; i++) {
			if (FD_ISSET(fdArray[i], &fdSet)) {
				msg_from_cli(fdArray[i]);
			}
		}

		if (FD_ISSET(sock, &fdSet)) {
			int acceptSocket = accept_cli(sock);

			if (acceptSocket <= 0) {
				perror("acceptSocket");
				continue;
			}

			// add to fd queue
			if (fdArrayIndex < MAX_SOCKET_NUM) {
				fdArray[fdArrayIndex++] = acceptSocket;
				if (acceptSocket > maxSock)
					maxSock = acceptSocket;
			}
			else {
				printf("max connections arrive, exit\n");
				send(acceptSocket, "bye", 4, 0);
				CLOSE(acceptSocket);
				break;
			}
		}
	}
}

