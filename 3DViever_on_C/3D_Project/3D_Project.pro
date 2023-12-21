QT       += core gui openglwidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

qmake
TARGET = 3DViewer

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    glwidget.cpp \
    main.cpp \
    mainwindow.cpp \
    ../backend/s21_parser.c \
    ../backend/transformations.c \
    settigs_viewer.cpp

HEADERS += \
    glwidget.h \
    mainwindow.h \
    ../backend/s21_parser.h \
    ../backend/transformations.h \
    settigs_viewer.h

FORMS += \
    mainwindow.ui



# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
