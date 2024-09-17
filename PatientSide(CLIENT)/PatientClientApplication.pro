QT       += core gui network charts

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    appscreen.cpp \
    loadingscreen.cpp \
    main.cpp \
    mainwindow.cpp \
    tcpnetworkmanager.cpp \
    user.cpp

HEADERS += \
    appscreen.h \
    basevalidator.h \
    bloodpressurevalidator.h \
    inetworkmanager.h \
    loadingscreen.h \
    mainwindow.h \
    namevalidator.h \
    tcpnetworkmanager.h \
    user.h \
    uservalidator.h

FORMS += \
    appscreen.ui \
    loadingscreen.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources.qrc
