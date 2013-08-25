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

import bb.cascades 1.2

// The root node has to inherit from AbstractPane -- in this case a Page.
// There is always only ONE root not in a QML file and it is typically
// an AbstractPane object like Page.

Page {
    id: root
    property string page 
    
    titleBar: TitleBar {
        title: qsTr("Sign In")
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
	        
	        TextField {
	            id: usernameCreateTextField
	            horizontalAlignment: HorizontalAlignment.Center
	            
	            hintText: qsTr("Username")
	        }
	        
	        TextField {
	            id: passwordCreateTextField
	            horizontalAlignment: HorizontalAlignment.Center
	            
	            hintText: qsTr("Password")
	        }
	        
	        Button {
	            horizontalAlignment: HorizontalAlignment.Center
	            
	            text: qsTr("Sign In")
	            
	            onClicked: {
	                _app.authenticateUser(usernameCreateTextField.text, passwordCreateTextField.text);
	            }
	        }
         }
    }
}