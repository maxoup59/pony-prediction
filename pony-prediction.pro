#-------------------------------------------------
#
# Project created by QtCreator 2015-04-01T20:55:43
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = pony-prediction
TEMPLATE = app


SOURCES += \
    core/main.cpp \
    ui/main-window.cpp \
    core/simulation.cpp \
    core/race.cpp \
    core/pony.cpp \
    brain/brain.cpp \
    brain/neuron.cpp \
    brain/layer.cpp

HEADERS  += \
    ui/main-window.hpp \
    core/simulation.hpp \
    core/race.hpp \
    core/pony.hpp \
    brain/brain.hpp \
    brain/neuron.hpp \
    brain/layer.hpp

FORMS    += \
    ui/main-window.ui

CONFIG += mobility
MOBILITY = 

