QT       += core gui
QT       += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    databaselibrary.cpp \
    dodaj_dialog.cpp \
    dodaj_grupe_dialog.cpp \
    dodaj_ocene_dialog.cpp \
    edytuj_dialog.cpp \
    konfiguracja.cpp \
    main.cpp \
    mainwindow.cpp \
    oceny_studenta.cpp \
    systemoceniania.cpp \
    szukaj_dialog.cpp \
    uczelniadb.cpp \
    usun_dialog.cpp

HEADERS += \
    databaselibrary.h \
    dodaj_dialog.h \
    dodaj_grupe_dialog.h \
    dodaj_ocene_dialog.h \
    edytuj_dialog.h \
    konfiguracja.h \
    mainwindow.h \
    oceny_studenta.h \
    systemoceniania.h \
    szukaj_dialog.h \
    uczelniadb.h \
    usun_dialog.h

FORMS += \
    dodaj_dialog.ui \
    dodaj_grupe_dialog.ui \
    dodaj_ocene_dialog.ui \
    edytuj_dialog.ui \
    mainwindow.ui \
    oceny_studenta.ui \
    szukaj_dialog.ui \
    usun_dialog.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
