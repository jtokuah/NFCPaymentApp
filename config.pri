# Auto-generated by IDE. Any changes made by user will be lost!
BASEDIR =  $$quote($$_PRO_FILE_PWD_)

device {
    CONFIG(debug, debug|release) {
        SOURCES +=  $$quote($$BASEDIR/src/About.cpp) \
                 $$quote($$BASEDIR/src/ApduDetails.cpp) \
                 $$quote($$BASEDIR/src/AppSettings.cpp) \
                 $$quote($$BASEDIR/src/Dialog.cpp) \
                 $$quote($$BASEDIR/src/EmulateSp.cpp) \
                 $$quote($$BASEDIR/src/EventLog.cpp) \
                 $$quote($$BASEDIR/src/HttpSampleApp.cpp) \
                 $$quote($$BASEDIR/src/Logger.cpp) \
                 $$quote($$BASEDIR/src/LoginDialog.cpp) \
                 $$quote($$BASEDIR/src/MainMenu.cpp) \
                 $$quote($$BASEDIR/src/Navigator.cpp) \
                 $$quote($$BASEDIR/src/NdefType.cpp) \
                 $$quote($$BASEDIR/src/NfcManager.cpp) \
                 $$quote($$BASEDIR/src/NfcWorker.cpp) \
                 $$quote($$BASEDIR/src/Person.cpp) \
                 $$quote($$BASEDIR/src/PostHttp.cpp) \
                 $$quote($$BASEDIR/src/QtObjectFormatter.cpp) \
                 $$quote($$BASEDIR/src/RequestHeaders.cpp) \
                 $$quote($$BASEDIR/src/SendVcard.cpp) \
                 $$quote($$BASEDIR/src/Settings.cpp) \
                 $$quote($$BASEDIR/src/StateManager.cpp) \
                 $$quote($$BASEDIR/src/Utilities.cpp) \
                 $$quote($$BASEDIR/src/WriteCustom.cpp) \
                 $$quote($$BASEDIR/src/WriteSp.cpp) \
                 $$quote($$BASEDIR/src/WriteText.cpp) \
                 $$quote($$BASEDIR/src/WriteURI.cpp) \
                 $$quote($$BASEDIR/src/alternatinglistdatamanager.cpp) \
                 $$quote($$BASEDIR/src/alternatinglistdatamodel.cpp) \
                 $$quote($$BASEDIR/src/alternatinglistitem.cpp) \
                 $$quote($$BASEDIR/src/app.cpp) \
                 $$quote($$BASEDIR/src/applicationui.cpp) \
                 $$quote($$BASEDIR/src/json.cpp) \
                 $$quote($$BASEDIR/src/main.cpp) \
                 $$quote($$BASEDIR/src/mylistmodel.cpp)

        HEADERS +=  $$quote($$BASEDIR/src/About.hpp) \
                 $$quote($$BASEDIR/src/ApduDetails.hpp) \
                 $$quote($$BASEDIR/src/AppSettings.hpp) \
                 $$quote($$BASEDIR/src/Dialog.hpp) \
                 $$quote($$BASEDIR/src/EmulateSp.hpp) \
                 $$quote($$BASEDIR/src/EventLog.hpp) \
                 $$quote($$BASEDIR/src/HttpSampleApp.hpp) \
                 $$quote($$BASEDIR/src/Logger.hpp) \
                 $$quote($$BASEDIR/src/LoginDialog.hpp) \
                 $$quote($$BASEDIR/src/MainMenu.hpp) \
                 $$quote($$BASEDIR/src/Navigator.hpp) \
                 $$quote($$BASEDIR/src/NdefType.hpp) \
                 $$quote($$BASEDIR/src/NfcManager.hpp) \
                 $$quote($$BASEDIR/src/NfcWorker.hpp) \
                 $$quote($$BASEDIR/src/Person.hpp) \
                 $$quote($$BASEDIR/src/PostHttp.hpp) \
                 $$quote($$BASEDIR/src/QtObjectFormatter.hpp) \
                 $$quote($$BASEDIR/src/RequestHeaders.hpp) \
                 $$quote($$BASEDIR/src/SendVcard.hpp) \
                 $$quote($$BASEDIR/src/Settings.hpp) \
                 $$quote($$BASEDIR/src/StateManager.hpp) \
                 $$quote($$BASEDIR/src/Utilities.hpp) \
                 $$quote($$BASEDIR/src/WriteCustom.hpp) \
                 $$quote($$BASEDIR/src/WriteSp.hpp) \
                 $$quote($$BASEDIR/src/WriteText.hpp) \
                 $$quote($$BASEDIR/src/WriteURI.hpp) \
                 $$quote($$BASEDIR/src/alternatinglistdatamanager.hpp) \
                 $$quote($$BASEDIR/src/alternatinglistdatamodel.hpp) \
                 $$quote($$BASEDIR/src/alternatinglistitem.hpp) \
                 $$quote($$BASEDIR/src/app.hpp) \
                 $$quote($$BASEDIR/src/applicationui.hpp) \
                 $$quote($$BASEDIR/src/json.hpp) \
                 $$quote($$BASEDIR/src/mylistmodel.hpp)
    }
}

INCLUDEPATH +=  $$quote($$BASEDIR/src)

CONFIG += precompile_header

PRECOMPILED_HEADER =  $$quote($$BASEDIR/precompiled.h)

lupdate_inclusion {
    SOURCES +=  $$quote($$BASEDIR/../src/*.c) \
             $$quote($$BASEDIR/../src/*.c++) \
             $$quote($$BASEDIR/../src/*.cc) \
             $$quote($$BASEDIR/../src/*.cpp) \
             $$quote($$BASEDIR/../src/*.cxx) \
             $$quote($$BASEDIR/../assets/*.qml) \
             $$quote($$BASEDIR/../assets/*.js) \
             $$quote($$BASEDIR/../assets/*.qs) \
             $$quote($$BASEDIR/../assets/720x720/*.qml) \
             $$quote($$BASEDIR/../assets/720x720/*.js) \
             $$quote($$BASEDIR/../assets/720x720/*.qs) \
             $$quote($$BASEDIR/../assets/common/*.qml) \
             $$quote($$BASEDIR/../assets/common/*.js) \
             $$quote($$BASEDIR/../assets/common/*.qs) \
             $$quote($$BASEDIR/../assets/images/*.qml) \
             $$quote($$BASEDIR/../assets/images/*.js) \
             $$quote($$BASEDIR/../assets/images/*.qs) \
             $$quote($$BASEDIR/../assets/models/*.qml) \
             $$quote($$BASEDIR/../assets/models/*.js) \
             $$quote($$BASEDIR/../assets/models/*.qs)

    HEADERS +=  $$quote($$BASEDIR/../src/*.h) \
             $$quote($$BASEDIR/../src/*.h++) \
             $$quote($$BASEDIR/../src/*.hh) \
             $$quote($$BASEDIR/../src/*.hpp) \
             $$quote($$BASEDIR/../src/*.hxx)
}

TRANSLATIONS =  $$quote($${TARGET}.ts)
