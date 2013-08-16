/* 
 * 
*/
import bb.cascades 1.0
import "common"

Page {
    content: MenuContainer {
        onCreationCompleted: {
            animation.play ();
        }
        Container {
            preferredWidth: 768
            preferredHeight: 1280
            
            layout: DockLayout {
            }

            Container {
                layout: StackLayout {
                }

                topPadding: 20
                leftPadding: 20
                horizontalAlignment: HorizontalAlignment.Left
                verticalAlignment: VerticalAlignment.Top

                Label {
                    text: " Welcome to NFC Payment App V" + _about.appVersion
                    textStyle {
                        base: SystemDefaults.TextStyles.TitleText
                        fontWeight: FontWeight.W100
                        color: Color.White
                    }
                }

                Label {
                    text: "Mobile application for NFC-based mobile point-of-sale solution "
                    enabled: false
                    preferredWidth: 650
                    textStyle {
                        base: SystemDefaults.TextStyles.SmallText
                        fontStyle: FontStyle.Italic
                        color: Color.White
                        lineHeight: 1.1
                    }
                }

                ImageView {
	                layoutProperties: StackLayoutProperties {
	                }
                    imageSource: "asset:///images/generic_tag_larger.png"
                    onTouch: {
                        if (event.isDown ()) {
                            animation.play ()
                        }
                    }
                    attachedObjects: [
                        SequentialAnimation {
                            id: animation
                            animations: [
                                FadeTransition {
                                    duration: 1000
                                    fromOpacity: 0.0
                                    toOpacity: 1.0
                                },
                                RotateTransition {
                                    toAngleZ: -10
                                    duration: 125
                                },
                                RotateTransition {
                                    toAngleZ: 10
                                    duration: 250
                                },
                                RotateTransition {
                                    toAngleZ: -10
                                    duration: 250
                                },
                                RotateTransition {
                                    toAngleZ: 10
                                    duration: 250
                                },
                                RotateTransition {
                                    toAngleZ: 0
                                    duration: 125
                                }
                            ]
                        }
                    ]
                }

                Label {
                    text: "Written by:"
                    enabled: false
                    preferredWidth: 650
                    textStyle {
                        base: SystemDefaults.TextStyles.SmallText
                        fontWeight: FontWeight.W100
                        fontStyle: FontStyle.Default
                        color: Color.White
                    }
                }
                Label {
                    text: "Jefferson Tokurah (jeff.tokurah@gmail.com)"
                    enabled: false
                    preferredWidth: 650
                    textStyle {
                        base: SystemDefaults.TextStyles.SmallText
                        fontWeight: FontWeight.W100
                        fontStyle: FontStyle.Default
                        color: Color.White
                    }
                }
            }

            Container {
                layout: StackLayout {
                }
                leftPadding: 20
                bottomPadding: 20
                verticalAlignment: VerticalAlignment.Bottom
                horizontalAlignment: HorizontalAlignment.Left

                Label {
                    text: "NFC POS Solution V" + _about.appVersion
                    enabled: false
                    preferredWidth: 650
                    textStyle {
                        base: SystemDefaults.TextStyles.SmallText
                        fontWeight: FontWeight.W100
                        fontStyle: FontStyle.Default
                        color: Color.White
                    }
                }
                Label {
                    text: "© 2013 UofM ECE 4600 Thesis Project"
                    enabled: false
                    preferredWidth: 650
                    textStyle {
                        base: SystemDefaults.TextStyles.SmallText
                        fontWeight: FontWeight.W100
                        fontStyle: FontStyle.Default
                        color: Color.White
                    }
                }
            }
        }
    }
}
