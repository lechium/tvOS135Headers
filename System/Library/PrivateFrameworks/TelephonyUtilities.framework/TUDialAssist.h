/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:16 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CoreTelephonyClientCarrierBundleDelegate.h>

@class CoreTelephonyClient, NSString;

@interface TUDialAssist : NSObject <CoreTelephonyClientCarrierBundleDelegate> {

	int _dialAssistUserSettingsChangedToken;
	CoreTelephonyClient* _coreTelephonyClient;

}

@property (nonatomic,readonly) CoreTelephonyClient * coreTelephonyClient;              //@synthesize coreTelephonyClient=_coreTelephonyClient - In the implementation block
@property (nonatomic,readonly) int dialAssistUserSettingsChangedToken;                 //@synthesize dialAssistUserSettingsChangedToken=_dialAssistUserSettingsChangedToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)carrierBundleChange:(id)arg1 ;
-(void)operatorBundleChange:(id)arg1 ;
-(CoreTelephonyClient *)coreTelephonyClient;
-(int)dialAssistUserSettingsChangedToken;
@end

