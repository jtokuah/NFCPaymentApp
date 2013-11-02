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
        title: qsTr("NFC Payment App | Welcome")
        scrollBehavior: TitleBarScrollBehavior.Sticky     
    }
    Container {
        layout: DockLayout {
        }
        bottomPadding: 50    
        Container {
            topPadding: 450
            horizontalAlignment: HorizontalAlignment.Center 
            ActivityIndicator {
                id: indicator
                objectName: "indicator"
                visible: false
                preferredWidth: 100                  
            }
        }   
        ScrollView {
            Container {
                topPadding: 40
                leftPadding: 30
                rightPadding: 30
                Label {
                    id: accountLabel
                    objectName: "accountLabel"
                    text: "Section 1 | Account Information"
                    visible: false
                    opacity: 0.8
                }
                Container{
                    DropDown{
                        title: "Account Type (Select)"
                        visible: false
                        id: userTypeDrop
                        objectName: "userTypeDrop"
                        Option {
                            id: option1
                            objectName: "option1"
                            text: "Regular Buyer"   
                            description: "Make retail payments only"
                            value: "C"
                        }
                        Option{
                            id: option2
                            objectName: "option2"
                            text: "Merchant"
                            description: "Already purchased POS terminal device"
                            value: "M"
                        }
                    }
                }
                TextField {
                    leftPadding: 30
                    rightPadding: 30
                    id: email
                    objectName: "email"
                    inputMode: TextFieldInputMode.EmailAddress
                    hintText: "Email address"
                    visible: false
                }
                
                TextField {
                    leftPadding: 40
                    rightPadding: 40
                    maxWidth: 500
                    id: username
                    objectName: "username"
                    hintText: "Choose a Username"
                    visible: false
                }
                
                TextField {
                    leftPadding: 40
                    rightPadding: 40
                    maxWidth: 500
                    id: password
                    objectName: "password"
                    inputMode: TextFieldInputMode.Password
                    hintText: "Choose a password"
                    visible: false
                }
                TextField {
                    leftPadding: 40
                    rightPadding: 40
                    maxWidth: 500
                    id: passwordConfirm
                    objectName: "passwordConfirm"
                    inputMode: TextFieldInputMode.Password
                    hintText: "Re-enter password"
                    visible: false
                }
                TextField {
                    leftPadding: 40
                    rightPadding: 40
                    maxWidth: 600
                    id: poshwid
                    objectName: "poshwid"
                    inputMode: TextFieldInputMode.Password
                    hintText: "Hardware ID (Merchant only)"
                    visible: false
                }
                Label {
                    id: personalLabel
                    objectName: "personalLabel"
                    text: "Section 2 | Personal Information"
                    visible: false
                    opacity: 0.8          
                }
                TextField {
                    leftPadding: 40
                    rightPadding: 40
                    id: firstName
                    objectName: "firstName"
                    hintText: "First name"
                    visible: false
                }
                TextField {
                    leftPadding: 40
                    rightPadding: 40
                    id: middleName
                    objectName: "middleName"
                    hintText: "Middle name"
                    visible: false
                }
                TextField {
                    leftPadding: 40
                    rightPadding: 40
                    id: lastName
                    objectName: "lastName"
                    hintText: "Last name"
                    visible: false
                }
                Label {
                    id: dobLabel
                    objectName: "dobLabel"
                    text: "Date of birth:"
                    visible: false
                    opacity: 0.4
                    rightPadding: 30
                }

                Container {
                    layout: StackLayout {
                        orientation: LayoutOrientation.LeftToRight
                    }
                    TextArea {
                        leftPadding: 40
                        rightPadding: 40
                        maxWidth: 200
                        id: dobDate
                        objectName: "dobDate"
                        hintText: "dd"
                        visible: false
                        maximumLength: 2
                    }
                    TextArea {
                        leftPadding: 40
                        rightPadding: 40
                        maxWidth: 200
                        id: dobMonth
                        objectName: "dobMonth"
                        hintText: "mm"
                        visible: false
                        maximumLength: 2
                    }
                    TextArea {
                        leftPadding: 40
                        rightPadding: 40
                        maxWidth: 200
                        id: dobYear
                        objectName: "dobYear"
                        hintText: "yyyy"
                        visible: false
                        maximumLength: 4
                    }
                }
                TextField {
                    leftPadding: 40
                    rightPadding: 40
                    id: occupation
                    objectName: "occupation"
                    hintText: "Occupation"
                    visible: false
                    
                }
                TextArea {
                    leftPadding: 40
                    rightPadding: 40
                    maxWidth: 570
                    id: sin
                    objectName: "sin"
                    inputMode: TextAreaInputMode.Text
                    hintText: "9-digit Social Insurance Number"
                    visible: false
                    maximumLength: 9
                }
                Label {
                    id: contactLabel
                    objectName: "contactLabel"
                    text: "Section 3 | Contact Information"
                    visible: false
                    opacity: 0.8          
                }
                TextField {
                    leftPadding: 40
                    rightPadding: 40
                    id: address1
                    objectName: "address1"
                    hintText: "Address line 1"
                    visible: false
                }
                TextField {
                    leftPadding: 40
                    rightPadding: 40
                    id: address2
                    objectName: "address2"
                    hintText: "Address line 2 (optional)"
                    visible: false
                }
                TextField {
                    leftPadding: 40
                    rightPadding: 40
                    id: city
                    objectName: "city"
                    hintText: "City"
                    visible: false
                }
                TextField {
                    leftPadding: 40
                    rightPadding: 40
                    id: province
                    objectName: "province"
                    hintText: "Province or state"
                    visible: false
                }
                TextField {
                    leftPadding: 40
                    rightPadding: 40
                    id: country
                    objectName: "country"
                    hintText: "Country"
                    visible: false
                }
                TextArea {
                    leftPadding: 40
                    rightPadding: 40
                    id: postalCode
                    objectName: "postalCode"
                    hintText: "Postal code"
                    visible: false
                    maximumLength: 6
                }
                TextArea {
                    leftPadding: 40
                    rightPadding: 40
                    id: phoneNumber
                    objectName: "phoneNumber"
                    hintText: "Phone number"
                    visible: false
                    maximumLength: 6
                }
                Label {
                    id: bankingLabel
                    objectName: "bankingLabel"
                    text: "Section 4 | Banking Information"
                    visible: false
                    opacity: 0.8          
                }
                TextField {
                    leftPadding: 40
                    rightPadding: 40
                    id: bankCode
                    objectName: "bankCode"
                    hintText: "Bank code"
                    visible: false
                }
                TextField {
                    leftPadding: 40
                    rightPadding: 40
                    id: accountNum
                    objectName: "accountNum"
                    hintText: "Account number"
                    visible: false
                }
                TextField {
                    leftPadding: 40
                    rightPadding: 40
                    maxWidth: 500
                    id: accountPWD
                    objectName: "accountPWD"
                    inputMode: TextFieldInputMode.Password
                    hintText: "Account password"
                    visible: false
                }               
                TextArea {
                    leftPadding: 40
                    rightPadding: 40
                    id: contactAgreement
                    objectName: "contactAgreement"
                    opacity: 0.5
                    text:  "By checking the box below, you agree to receive communications from us about products, serveices and promotions. We will not share your information with other parties wthout your permission"
                    visible: false
                    editable: false
                }
                CheckBox {
                    leftPadding: 40
                    rightPadding: 40
                    id: contactCheck
                    objectName: "contactCheck"
                    checked: false
                    visible: false
                    opacity: 0.5
                    horizontalAlignment : HorizontalAlignment.Left
                    text: "Check if you agree"
                }
                Container {
                    topPadding: 20
                    layout: StackLayout {
                        orientation: LayoutOrientation.LeftToRight
                    }
                    Button {
                        id: submitButton
                        objectName: "submitButton"
                        visible: false
                        text: "Sign up"                                         
                        onClicked: {
                            visible : false
                            login.visible = false
                            signUp.visible = false
                            titleBar.title = qsTr("NFC Payment App | Sign up") 
                            userTypeDrop.visible = false
                            email.visible = false
                            username.visible = false
                            password.visible = false
                            passwordConfirm.visible = false
                            firstName.visible = false
                            middleName.visible = false
                            lastName.visible = false
                            dobLabel.visible = false
                            dobDate.visible = false
                            dobMonth.visible = false
                            dobYear.visible = false
                            personalLabel.visible = false
                            accountLabel.visible = false
                            occupation.visible = false
                            sin.visible = false
                            contactLabel.visible = false
                            address1.visible = false
                            address2.visible = false
                            city.visible = false
                            province.visible = false
                            postalCode.visible = false
                            phoneNumber.visible = false
                            contactCheck.visible = false
                            contactAgreement.visible = false 
                            cancelButton.visible = false
                            submitButton.visible = false
                            bankingLabel.visible = false
                            bankCode.visible = false
                            accountNum.visible = false
                            accountPWD.visible = false
                            poshwid.visible = false
                            country.visible = false
                            indicator.start()
                            indicator.visible = true

                            _app.createUserProfile()
                            
                            indicator.stop()
                            indicator.visible = false
                            
                            visible : true
                            login.visible = false
                            signUp.visible = false
                            titleBar.title = qsTr("NFC Payment App | Sign up")    
                            userTypeDrop.visible = true
                            email.visible = true
                            username.visible = true
                            password.visible = true
                            passwordConfirm.visible = true
                            firstName.visible = true
                            middleName.visible = true
                            lastName.visible = true
                            dobLabel.visible = true
                            dobDate.visible = true
                            dobMonth.visible = true
                            dobYear.visible = true
                            personalLabel.visible = true
                            accountLabel.visible = true
                            occupation.visible = true
                            sin.visible = true
                            contactLabel.visible = true
                            address1.visible = true
                            address2.visible = true
                            city.visible = true
                            province.visible = true
                            postalCode.visible = true
                            phoneNumber.visible = true
                            contactCheck.visible = true
                            contactAgreement.visible = true 
                            cancelButton.visible = true
                            submitButton.visible = true
                            bankingLabel.visible = true
                            bankCode.visible = true
                            accountNum.visible = true
                            accountPWD.visible = true
                            poshwid.visible = true
                            country.visible = true
                        }
                    }
                    
                    Button {
                        id: cancelButton
                        objectName: "cancelButton"
                        visible: false
                        text: "Cancel"
                        layoutProperties : StackLayoutProperties {
                        }
                        horizontalAlignment : HorizontalAlignment.Right
                        onClicked: {
                            visible : false
                            login.visible = true
                            signUp.visible = true
                            titleBar.title = qsTr("NFC Payment App | Welcome") 
                            userTypeDrop.visible = false
                            email.visible = false
                            username.visible = false
                            password.visible = false
                            passwordConfirm.visible = false
                            firstName.visible = false
                            middleName.visible = false
                            lastName.visible = false
                            dobLabel.visible = false
                            dobDate.visible = false
                            dobMonth.visible = false
                            dobYear.visible = false
                            personalLabel.visible = false
                            accountLabel.visible = false
                            occupation.visible = false
                            sin.visible = false
                            contactLabel.visible = false
                            address1.visible = false
                            address2.visible = false
                            city.visible = false
                            province.visible = false
                            postalCode.visible = false
                            phoneNumber.visible = false
                            contactCheck.visible = false
                            contactAgreement.visible = false 
                            cancelButton.visible = false
                            submitButton.visible = false
                            bankingLabel.visible = false
                            bankCode.visible = false
                            accountNum.visible = false
                            accountPWD.visible = false
                            poshwid.visible = false
                            country.visible = false
                        }
                    }
                }

            }
        }
        
        
        
        Container {
            //loginDialog.show();
	        horizontalAlignment: HorizontalAlignment.Center
	        verticalAlignment: VerticalAlignment.Center
            leftPadding: 30
            rightPadding: 30
            
            //Label { id: loginDialogLabel }
            Button {
                id: login
                layoutProperties: StackLayoutProperties {        
                }
                text : "Login"
                onClicked: {
                    visible : false
                    loginDialog.addCustomButton("Sign up","Login_Sign_up");                    
                    loginDialog.show();
                }
            }

            
            //Label { id: loginDialogLabel }
            Button {
                id: signUp
                layoutProperties : StackLayoutProperties {
                }
                horizontalAlignment : HorizontalAlignment.Center
                text : "Sign Up"
                onClicked: {
                    visible : false
                    login.visible = false
                    signUp.visible = false
                    titleBar.title = qsTr("NFC Payment App | Sign up")    
                    userTypeDrop.visible = true
                    email.visible = true
                    username.visible = true
                    password.visible = true
                    passwordConfirm.visible = true
                    firstName.visible = true
                    middleName.visible = true
                    lastName.visible = true
                    dobLabel.visible = true
                    dobDate.visible = true
                    dobMonth.visible = true
                    dobYear.visible = true
                    personalLabel.visible = true
                    accountLabel.visible = true
                    occupation.visible = true
                    sin.visible = true
                    contactLabel.visible = true
                    address1.visible = true
                    address2.visible = true
                    city.visible = true
                    province.visible = true
                    postalCode.visible = true
                    phoneNumber.visible = true
                    contactCheck.visible = true
                    contactAgreement.visible = true 
                    cancelButton.visible = true
                    submitButton.visible = true
                    bankingLabel.visible = true
                    bankCode.visible = true
                    accountNum.visible = true
                    accountPWD.visible = true
                    poshwid.visible = true
                    country.visible = true
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
                    rememberme : false
                    titleText : "Login to NFC Payment App"
                    onOk: { 
                        _app.authenticateUser(loginDialog.username, loginDialog.password);
                        
                    }
                    onCancel: {
                        loginDialogLabel.text = ""; 
                    }
                    onCustomButton: {
                        login.visible = false
                        signUp.visible = false
                        titleBar.title = qsTr("NFC Payment App | Sign up")                
                        userTypeDrop.visible = true
                        email.visible = true
                        username.visible = true
                        password.visible = true
                        passwordConfirm.visible = true
                        firstName.visible = true
                        middleName.visible = true
                        lastName.visible = true
                        dobLabel.visible = true
                        dobDate.visible = true
                        dobMonth.visible = true
                        dobYear.visible = true
                        personalLabel.visible = true
                        accountLabel.visible = true
                        occupation.visible = true
                        sin.visible = true
                        contactLabel.visible = true
                        address1.visible = true
                        address2.visible = true
                        city.visible = true
                        province.visible = true
                        postalCode.visible = true
                        phoneNumber.visible = true
                        contactCheck.visible = true 
                        contactAgreement.visible = true
                        cancelButton.visible = true 
                        submitButton.visible = true
                        bankingLabel.visible = true
                        bankCode.visible = true
                        accountNum.visible = true
                        accountPWD.visible = true
                        poshwid.visible = true
                        country.visible = true
                    }
                }
            ]
         }
    }
}