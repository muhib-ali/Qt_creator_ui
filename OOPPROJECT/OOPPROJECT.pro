QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    addemployee.cpp \
    addmedicine.cpp \
    adminpanel.cpp \
    getemployee.cpp \
    history.cpp \
    login.cpp \
    main.cpp \
    mainwindow.cpp \
    shop.cpp

HEADERS += \
    addemployee.h \
    addmedicine.h \
    adminpanel.h \
    getemployee.h \
    history.h \
    login.h \
    mainwindow.h \
    shop.h

FORMS += \
    addemployee.ui \
    addmedicine.ui \
    adminpanel.ui \
    getemployee.ui \
    history.ui \
    login.ui \
    mainwindow.ui \
    shop.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
