QT += core gui widgets network charts
CONFIG += console c++17
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += \
    agechartwindow.cpp \
    dietplangenerator.cpp \
    feedbackhandler.cpp \
    foodcategories.cpp \
    genderchartwindow.cpp \
    logfileparser.cpp \
    main.cpp \
    mainwindow.cpp \
    nutritionserver.cpp \
    tcpnetworkmanager.cpp \
    userhandler.cpp

HEADERS += \
    agechartwindow.h \
    dietplangenerator.h \
    feedbackhandler.h \
    foodcategories.h \
    genderchartwindow.h \
    ifileparser.h \
    inetworkmanager.h \
    logfileparser.h \
    mainwindow.h \
    nutritionserver.h \
    tcpnetworkmanager.h \
    userhandler.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources.qrc

