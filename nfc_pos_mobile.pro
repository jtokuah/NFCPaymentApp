APP_NAME = NFC Payment App

CONFIG += qt warn_on cascades10
LIBS   += -lbbdata -lnfc -lnfc_bps -lbbsystem -lm -lQtNfcSubset -lbps -lbbutility
QT += network

include(config.pri)

device {
    CONFIG(debug, debug|release) {
        # Device-Debug custom configuration
    }

    CONFIG(release, debug|release) {
        # Device-Release custom configuration
    }
}

simulator {
    CONFIG(debug, debug|release) {
        # Simulator-Debug custom configuration
    }
}

