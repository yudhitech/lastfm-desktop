TEMPLATE = lib
TARGET = radio
CONFIG += ws types core
QT = core phonon

include( $$ROOT_DIR/common/qmake/include.pro )

SOURCES += $$findSources( cpp )
HEADERS += $$findSources( h )
DEFINES += _RADIO_DLLEXPORT

headers.files = Radio.h RadioStation.h Tuner.h
headers.path = $$INSTALL_DIR/include/lastfm/radio
INSTALLS = target headers
