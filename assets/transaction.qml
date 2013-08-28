import bb.cascades 1.0

TabbedPane {
	id: transaction	
	showTabsOnActionBar: true
    property string buttonText1
	
	//! [0]
	
    Tab {
        title: qsTr("Make Payment")
        imageSource: "asset:///images/retrieve.png"
        
        PageBase {
            tabTitle: "Make NFC Payment"
            buttonText1: "Begin Transaction"
            page: "MakePayment.qml"
        }
    }
	
	Tab {
		title: qsTr("Create")
		imageSource: "asset:///images/create.png"
		
		PageBase {
			page: "CreatePage.qml"
		}
	}
	
	Tab {
		title: qsTr("Update")
		imageSource: "asset:///images/update.png"
		
		PageBase {
			page: "UpdatePage.qml"
		}
	}
	
	Tab {
		title: qsTr("Delete")
		imageSource: "asset:///images/delete.png"
		
		PageBase {
			page: "DeletePage.qml"
		}
	}
	//! [0]
}
