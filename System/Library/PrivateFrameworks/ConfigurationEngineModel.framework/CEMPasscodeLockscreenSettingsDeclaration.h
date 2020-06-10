/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:14 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMConfigurationBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class NSNumber, NSString;

@interface CEMPasscodeLockscreenSettingsDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {

	NSNumber* _payloadAllowVoiceDialing;
	NSNumber* _payloadAllowAssistantWhileLocked;
	NSNumber* _payloadAllowLockScreenTodayView;
	NSNumber* _payloadAllowPassbookWhileLocked;
	NSNumber* _payloadAllowLockScreenNotificationsView;
	NSNumber* _payloadAllowLockScreenControlCenter;
	NSNumber* _payloadAllowLockScreenWiFiModification;

}

@property (nonatomic,copy) NSNumber * payloadAllowVoiceDialing;                             //@synthesize payloadAllowVoiceDialing=_payloadAllowVoiceDialing - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowAssistantWhileLocked;                     //@synthesize payloadAllowAssistantWhileLocked=_payloadAllowAssistantWhileLocked - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowLockScreenTodayView;                      //@synthesize payloadAllowLockScreenTodayView=_payloadAllowLockScreenTodayView - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowPassbookWhileLocked;                      //@synthesize payloadAllowPassbookWhileLocked=_payloadAllowPassbookWhileLocked - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowLockScreenNotificationsView;              //@synthesize payloadAllowLockScreenNotificationsView=_payloadAllowLockScreenNotificationsView - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowLockScreenControlCenter;                  //@synthesize payloadAllowLockScreenControlCenter=_payloadAllowLockScreenControlCenter - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowLockScreenWiFiModification;               //@synthesize payloadAllowLockScreenWiFiModification=_payloadAllowLockScreenWiFiModification - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)profileType;
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)restrictionPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 ;
+(id)buildWithIdentifier:(id)arg1 withAllowVoiceDialing:(id)arg2 withAllowAssistantWhileLocked:(id)arg3 withAllowLockScreenTodayView:(id)arg4 withAllowPassbookWhileLocked:(id)arg5 withAllowLockScreenNotificationsView:(id)arg6 withAllowLockScreenControlCenter:(id)arg7 withAllowLockScreenWiFiModification:(id)arg8 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(int)activationLevel;
-(id)assetReferences;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadAllowVoiceDialing:(NSNumber *)arg1 ;
-(void)setPayloadAllowAssistantWhileLocked:(NSNumber *)arg1 ;
-(void)setPayloadAllowLockScreenTodayView:(NSNumber *)arg1 ;
-(void)setPayloadAllowPassbookWhileLocked:(NSNumber *)arg1 ;
-(void)setPayloadAllowLockScreenNotificationsView:(NSNumber *)arg1 ;
-(void)setPayloadAllowLockScreenControlCenter:(NSNumber *)arg1 ;
-(void)setPayloadAllowLockScreenWiFiModification:(NSNumber *)arg1 ;
-(NSNumber *)payloadAllowVoiceDialing;
-(NSNumber *)payloadAllowAssistantWhileLocked;
-(NSNumber *)payloadAllowLockScreenTodayView;
-(NSNumber *)payloadAllowPassbookWhileLocked;
-(NSNumber *)payloadAllowLockScreenNotificationsView;
-(NSNumber *)payloadAllowLockScreenControlCenter;
-(NSNumber *)payloadAllowLockScreenWiFiModification;
@end

