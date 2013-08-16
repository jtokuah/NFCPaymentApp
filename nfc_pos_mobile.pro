APP_NAME = NFC Payment App

CONFIG += qt warn_on cascades10
LIBS   += -lbbdata -lnfc -lnfc_bps -lbbsystem -lQtNfcSubset

include(config.pri)
