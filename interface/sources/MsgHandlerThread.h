#ifndef MSGHANDLERTHREAD_H
#define MSGHANDLERTHREAD_H

#include <QThread>

class MsgHandlerThread : public QThread
{
	Q_OBJECT

public:
	MsgHandlerThread();
	~MsgHandlerThread();

protected:
	void run();
};

#endif // MSGHANDLERTHREAD_H
