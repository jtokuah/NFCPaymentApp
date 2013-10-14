/* Copyright (c) 2012 Research In Motion Limited.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

import bb.cascades 1.0
import Dialog.Login 1.0

// The root node has to inherit from AbstractPane -- in this case a Page.
// There is always only ONE root not in a QML file and it is typically
// an AbstractPane object like Page.

Page {
    id: root
    property string page 
    
    titleBar: TitleBar {
        title: qsTr("NFC Payment App | Login")
        scrollBehavior: TitleBarScrollBehavior.Sticky
    }
    Container {
        layout: DockLayout {
        }
        
        Container {
	        horizontalAlignment: HorizontalAlignment.Center
	        verticalAlignment: VerticalAlignment.Center
	        
	        leftPadding: 30
	        rightPadding: 30
	        
            Label { id: loginDialogLabel }
            Button {
                layoutProperties : StackLayoutProperties {
                }
                horizontalAlignment : HorizontalAlignment.Center
                text : "Login"
                onClicked: {
                    loginDialog.addCustomButton("Sign up","Login_Sign_up");
                    loginDialog.show();
                }
            }
            attachedObjects: [
                LoginDialog {
                    id: loginDialog
                    cancelButton : true
                    okButton : true
                    loginMessage : "'Login' to account or 'Sign up'"
                    usernamePlaceholder : "enter username here"
                    usernameLabel : "Twitter Email"
                    passwordPlaceholder : "enter password here"
                    passwordLabel : "Twitter Password"
                    remembermeLabel : "Save login info"
                    rememberme : true
                    titleText : "Login to NFC Payment App"
                    onOk: { 
                        _app.authenticateUser(loginDialog.username, loginDialog.password);
                    }
                    onCancel: {
                        loginDialogLabel.text = ""; 
                    }
                    onCustomButton: {
                        loginDialogLabel.text = "Sorry, 'Sign up' feature not yet supported.'"; 
                        //loginDialogLabel.text = "index: " + index + " label: " + label + " context: " + context; 
                    }
                }
            ]
         }
    }
}