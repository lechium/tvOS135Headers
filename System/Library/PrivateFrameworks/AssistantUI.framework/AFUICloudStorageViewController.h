/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:36 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class AFSettingsConnection;

@interface AFUICloudStorageViewController : PSListController {

	AFSettingsConnection* _settings;

}
-(void)viewDidLoad;
-(id)specifiers;
-(void)didReceiveMemoryWarning;
-(void)handleDisableAndDeleteButtonPress;
-(void)confirmDisableForMultiUserVoiceIdentification;
-(void)confirmDisable;
-(void)_disableAndDeleteCloudSync;
@end

