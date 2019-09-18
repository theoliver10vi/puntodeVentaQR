#-------------------------------------------------
#
# Project created by QtCreator 2018-09-08T03:34:21
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = retoQR
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
        mainwindow.cpp \
    iniciotienda.cpp \
    formulariocompra.cpp \
    generarcodigo.cpp \
    gestioninventario.cpp \
    agregararticulo.cpp \
    eliminararticulo.cpp \
    administrar_articulos.cpp \
    editararticulo.cpp \
    buscararticulos.cpp \
    visualizaganancias.cpp

HEADERS  += mainwindow.h \
    iniciotienda.h \
    formulariocompra.h \
    generarcodigo.h \
    gestioninventario.h \
    agregararticulo.h \
    eliminararticulo.h \
    administrar_articulos.h \
    editararticulo.h \
    buscararticulos.h \
    visualizaganancias.h

FORMS    += mainwindow.ui \
    iniciotienda.ui \
    formulariocompra.ui \
    generarcodigo.ui \
    gestioninventario.ui \
    agregararticulo.ui \
    eliminararticulo.ui \
    administrar_articulos.ui \
    editararticulo.ui \
    buscararticulos.ui \
    visualizaganancias.ui

RESOURCES += \
    imagenes.qrc

DISTFILES +=
