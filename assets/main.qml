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
import my.Validator 1.0

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
                    Label { 
                        id: errorDrop
                        objectName: "errorDrop"
                        textStyle.color: Color.Red
                        textStyle.fontSize: FontSize.Small
                        text:  "You must select an account type"
                        visible: false
                    }
                    DropDown{
                        title: "Account Type (Select)*"
                        visible: false
                        id: userTypeDrop
                        objectName: "userTypeDrop"
                        onSelectedOptionChanged: {
                            errorDrop.visible = false
                            errorLabel.visible = false;
                        }
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
                    id: email
                    objectName: "email"
                    inputMode: TextFieldInputMode.EmailAddress
                    hintText: "Email address*"
                    visible: false
                    validator: Validator {
                        id: emailValidator
                        objectName: "emailValidator"
                        mode: ValidationMode.Immediate
                        errorMessage: "You must provide a valid email"
                        
                        onValidate: {
                            if (_app.validateEmail(email.text)){
                                state = ValidationState.Valid; 
                                errorLabel.visible = false;     
                            }                              
                            else
                                state = ValidationState.Invalid
                        }
                    }
                }
                
                TextField {
                    maxWidth: 500
                    id: username
                    objectName: "username"
                    hintText: "Choose a Username*"
                    visible: false
                    validator: Validator {
                        mode: ValidationMode.Immediate
                        errorMessage: "You must choose a username"
                        
                        onValidate: {
                            if (email.text.length >0){
                                state = ValidationState.Valid;
                                errorLabel.visible = false;
                            }  
                            else
                                state = ValidationState.Invalid
                        }
                    }
                }
                
                TextField {
                    maxWidth: 500
                    id: password
                    objectName: "password"
                    inputMode: TextFieldInputMode.Password
                    hintText: "Choose a password*"
                    visible: false
                    validator: Validator {
                        mode: ValidationMode.Immediate
                        errorMessage: "You must choose a password"                    
                        onValidate: {
                            if (password.text.length >0){
                                if (password.text.length >= 6){
                                    state = ValidationState.Valid;
                                    errorLabel.visible = false; 
                                } 
                                else {
                                    errorMessage = "Password must be at least characters long";
                                    state = ValidationState.Invalid;
                                }
                            }
                            else
                                state = ValidationState.Invalid;
                        }
                    }
                }
                TextField {
                    maxWidth: 500
                    id: passwordConfirm
                    objectName: "passwordConfirm"
                    inputMode: TextFieldInputMode.Password
                    hintText: "Re-enter password*"
                    visible: false
                    validator: Validator {
                        mode: ValidationMode.Immediate
                        errorMessage: "Passwords do not match"                       
                        onValidate: {
                            if (passwordConfirm.text == password.text){
                                state = ValidationState.Valid;
                                errorLabel.visible = false;  
                            }
                            else
                                state = ValidationState.Invalid;
                        }
                    }
                }
                TextField {
                    maxWidth: 600
                    id: poshwid
                    objectName: "poshwid"
                    inputMode: TextFieldInputMode.Password
                    hintText: "Hardware ID (Merchant only)"
                    visible: false
                    validator: Validator {
                        mode: ValidationMode.Immediate
                        errorMessage: "You must provide a 'Hardware ID'"                       
                        onValidate: {
                            if (userTypeDrop.selectedValue == "M"){
                                if (poshwid.text.length == 0)
                                    state = ValidationState.Invalid;
                                else {
                                    state = ValidationState.Valid;
                                    errorLabel.visible = false;  
                                }
                            }
                            else{
                                state = ValidationState.Valid;
                                errorLabel.visible = false;  
                            }
                        }
                    }
                }
                Label {
                    id: personalLabel
                    objectName: "personalLabel"
                    text: "Section 2 | Personal Information"
                    visible: false
                    opacity: 0.8          
                }
                TextField {
                    id: firstName
                    objectName: "firstName"
                    hintText: "First name*"
                    visible: false
                    validator: Validator {
                        mode: ValidationMode.Immediate
                        errorMessage: "Please provide your first name "                       
                        onValidate: {
                            if (firstName.text.length > 0){
                                state = ValidationState.Valid;
                                errorLabel.visible = false;  
                            }
                            else
                                state = ValidationState.Invalid
                        }
                    }
                }
                TextField {
                    id: middleName
                    objectName: "middleName"
                    hintText: "Middle name"
                    visible: false
                }
                TextField {
                    id: lastName
                    objectName: "lastName"
                    hintText: "Last name*"
                    visible: false
                    validator: Validator {
                        mode: ValidationMode.Immediate
                        errorMessage: "Please provide your last name"                       
                        onValidate: {
                            if (lastName.text.length > 0){
                                state = ValidationState.Valid;
                                errorLabel.visible = false;  
                            }
                            else
                                state = ValidationState.Invalid
                        }
                    }
                }
                Label {
                    id: dobLabel
                    objectName: "dobLabel"
                    text: "Date of birth*:"
                    visible: false
                    opacity: 0.4
                    rightPadding: 30
                }

                Container {
                    layout: StackLayout {
                        orientation: LayoutOrientation.LeftToRight
                    }
                    TextArea {
                        maxWidth: 100
                        id: dobDate
                        objectName: "dobDate"
                        hintText: "dd"
                        visible: false
                        maximumLength: 2
                    }
                    TextArea {
                        maxWidth: 100
                        id: dobMonth
                        objectName: "dobMonth"
                        hintText: "mm"
                        visible: false
                        maximumLength: 2
                    }
                    TextArea {
                        maxWidth: 130
                        id: dobYear
                        objectName: "dobYear"
                        hintText: "yyyy"
                        visible: false
                        maximumLength: 4
                    }
                }
                TextField {
                    id: occupation
                    objectName: "occupation"
                    hintText: "Occupation"
                    visible: false                    
                }
                TextArea {
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
                    id: address1
                    objectName: "address1"
                    hintText: "Address line 1"
                    visible: false
                }
                TextField {
                    id: address2
                    objectName: "address2"
                    hintText: "Address line 2 (optional)"
                    visible: false
                }
                TextField {
                    id: city
                    objectName: "city"
                    hintText: "City"
                    visible: false
                }
                TextField {
                    id: province
                    objectName: "province"
                    hintText: "Province or state"
                    visible: false
                }
                TextField {
                    id: country
                    objectName: "country"
                    hintText: "Country"
                    visible: false
                }
                TextArea {
                    id: postalCode
                    objectName: "postalCode"
                    hintText: "Postal code"
                    visible: false
                    maximumLength: 6
                }
                TextArea {
                    id: phoneNumber
                    objectName: "phoneNumber"
                    hintText: "Phone number"
                    visible: false
                }
                Label {
                    id: bankingLabel
                    objectName: "bankingLabel"
                    text: "Section 4 | Banking Information"
                    visible: false
                    opacity: 0.8          
                }
                TextField {
                    id: bankCode
                    objectName: "bankCode"
                    hintText: "Bank code*"
                    visible: false
                    validator: Validator {
                        mode: ValidationMode.Immediate
                        errorMessage: "Enter your bank code"                       
                        onValidate: {
                            if (bankCode.text.length > 0){
                                state = ValidationState.Valid;
                                errorLabel.visible = false;  
                            }
                            else
                                state = ValidationState.Invalid
                        }
                    }
                }
                TextField {
                    id: accountNum
                    objectName: "accountNum"
                    hintText: "Account number*"
                    visible: false
                    validator: Validator {
                        mode: ValidationMode.Immediate
                        errorMessage: "Enter your bank account number"                       
                        onValidate: {
                            if (accountNum.text.length > 0){
                                state = ValidationState.Valid;
                                errorLabel.visible = false;  
                            }
                            else
                                state = ValidationState.Invalid
                        }
                    }
                }
                TextField {
                    maxWidth: 500
                    id: accountPWD
                    objectName: "accountPWD"
                    inputMode: TextFieldInputMode.Password
                    hintText: "Account password*"
                    visible: false
                    validator: Validator {
                        mode: ValidationMode.Immediate
                        errorMessage: "Enter your account password"                       
                        onValidate: {
                            if (accountPWD.text.length > 0){
                                state = ValidationState.Valid;
                            }
                            else
                                state = ValidationState.Invalid
                        }
                    }
                }               
                TextArea {
                    leftPadding: 40
                    rightPadding: 40
                    id: contactAgreement
                    objectName: "contactAgreement"
                    opacity: 0.5
                    textStyle.fontSize: FontSize.Small
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
                Label {
                    id: errorLabel
                    objectName: "errorLabel"
                    textStyle.color: Color.Red
                    textStyle.fontSize: FontSize.Small
                    text:  "The field(s) indicated above contain error"
                    visible: false
                }
                Container {
                    layout: StackLayout {
                        orientation: LayoutOrientation.LeftToRight
                    }
                    Button {
                        id: submitButton
                        objectName: "submitButton"
                        visible: false
                        text: "Sign up"                                         
                        onClicked: {
                            if(userTypeDrop.selectedOptionSet == false){ 
                                errorDrop.visible = true; 
                                errorLabel.visible = true;
                            }
                            
                            //Ensure form data is valid
                            email.validator.validationRequested = true; if (email.validator.valid == false) errorLabel.visible = true; 
                            username.validator.validationRequested = true; if (username.validator.valid == false) errorLabel.visible = true;
                            password.validator.validationRequested = true; if (password.validator.valid == false) errorLabel.visible = true;
                            passwordConfirm.validator.validationRequested = true; if (passwordConfirm.validator.valid == false) errorLabel.visible = true;  
                            poshwid.validator.validationRequested = true; if (poshwid.validator.valid == false) errorLabel.visible = true;        
                            firstName.validator.validationRequested = true; if (firstName.validator.valid == false) errorLabel.visible = true;   
                            lastName.validator.validationRequested = true; if (lastName.validator.valid == false) errorLabel.visible = true; 
                            bankCode.validator.validationRequested = true; if (bankCode.validator.valid == false) errorLabel.visible = true;  
                            accountNum.validator.validationRequested = true; if (accountNum.validator.valid == false) errorLabel.visible = true;         
                            accountPWD.validator.validationRequested = true; if (accountPWD.validator.valid == false) errorLabel.visible = true;  
                                                                                 
                            titleBar.title = qsTr("NFC Payment App | Sign up")                            
                            visible : false
                            login.visible = false
                            signUp.visible = false                             
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
                                                      
                            //Submit the form if all the fields are valid
                            if (!(errorLabel.visible)&& !(errorDrop.visible)){
                                indicator.start()
                                indicator.visible = true
                                _app.createUserProfile();
                            }
                            
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
                            errorDrop.visible = false
                            errorLabel.visible = false
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
                        login.visible = false
                        signUp.visible = false
                        titleBar.title = qsTr("NFC Payment App | Login")
                        indicator.start()
                        indicator.visible = true
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