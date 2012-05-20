TEMPLATE = app
TARGET = KTV
QT += core \
    gui \
    sql \    multimedia \    phonon
HEADERS += interface/headers/HomeWidget.h \
    interface/headers/Atmospheres.h \
    interface/headers/Effection.h \
    interface/headers/Register.h \
    interface/headers/MainInterface.h \
    interface/headers/Pinyin.h \
    interface/headers/Private.h \
    interface/headers/Template.h \
    interface/headers/BaseTemplate.h \
    interface/headers/Star.h \
    interface/headers/Selected.h \
    interface/headers/Newest.h \
    interface/headers/Language.h \
    interface/headers/Digital.h \
    interface/headers/Category.h \
    interface/headers/Stroke.h \
    interface/headers/SongList.h \
    interface/headers/PlayScreen.h \
    baselib/headers/DataStruct.h \
    interface/headers/StarListTemplate.h \
    interface/headers/SongListTemplate.h \
    sqlite/DbUtil.h \
    sqlite/DB.h \
    Debug.h \
    interface/headers/KtvMainScreen.h \
    baselib/headers/GlobalData.h \
    interface/KtvScreenController.h \
    baselib/headers/Config.h \
    baselib/headers/MyButton.h
SOURCES += interface/sources/HomeWidget.cpp \
    interface/sources/Atmospheres.cpp \
    interface/sources/Effection.cpp \
    interface/sources/Register.cpp \
    interface/sources/Pinyin.cpp \
    interface/sources/Private.cpp \
    interface/sources/Template.cpp \
    interface/sources/BaseTemplate.cpp \
    interface/sources/Star.cpp \
    interface/sources/Selected.cpp \
    interface/sources/Newest.cpp \
    interface/sources/Language.cpp \
    interface/sources/Digital.cpp \
    interface/sources/Category.cpp \
    interface/sources/Stroke.cpp \
    interface/sources/SongList.cpp \
    interface/sources/StarListTemplate.cpp \
    interface/sources/SongListTemplate.cpp \
    interface/sources/PlayScreen.cpp \
    sqlite/DbUtil.cpp \
    sqlite/DB.cpp \
    interface/sources/KtvMainScreen.cpp \
    baselib/sources/GlobalData.cpp \
    interface/KtvScreenController.cpp \
    baselib/sources/Config.cpp \
    baselib/sources/MyButton.cpp \
    main.cpp
FORMS += 
RESOURCES += app.qrc
