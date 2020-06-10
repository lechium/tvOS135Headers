/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:38 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SASettingOpenSettings.h>
#import <SAObjects/SASettingSettingsAction.h>

@class NSString;

@interface SASettingOpenVoiceControl : SASettingOpenSettings <SASettingSettingsAction>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)openVoiceControl;
+(id)openVoiceControlWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
@end

