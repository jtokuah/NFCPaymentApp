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
//! [0]
Container {
    layout: DockLayout {
    }
    leftPadding: 30
    topPadding: 30
    rightPadding: 30
    bottomPadding: 150
    
    Label {
        objectName: "topText"
        horizontalAlignment: HorizontalAlignment.Left
        verticalAlignment: VerticalAlignment.Top
        text: ""
        
    }
    Container {
        topPadding: 250
        horizontalAlignment: HorizontalAlignment.Center 
        ActivityIndicator {
            objectName: "indicator"
            preferredWidth: 100                  
        }
    }
    
    Label {
        objectName: "statusText"
        horizontalAlignment: HorizontalAlignment.Center
        verticalAlignment: VerticalAlignment.Center
        text: ""
    }
    
    Container {
        topPadding: 620
        horizontalAlignment: HorizontalAlignment.Center
        Button {
            objectName: "exitButton"
            text: "Exit"
            visible: false
            onClicked: {
                Application.quit();
            }
        } 
    }
      
    Button {
        objectName: "button"
        horizontalAlignment: HorizontalAlignment.Center
        verticalAlignment: VerticalAlignment.Bottom
        text: qsTr(buttonText1)
        onClicked: {
            _app.handleTransaction();
        }
    }
    
}
//! [0]