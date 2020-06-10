/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:44 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PKPaymentSetupAssistantRegistrationUtilities : NSObject
+(BOOL)_phoneNeedsToRun:(unsigned long long*)arg1 ;
+(BOOL)_bridgeNeedsToRun:(unsigned long long*)arg1 ;
+(BOOL)_macNeedsToRun:(unsigned long long*)arg1 ;
+(BOOL)_shouldCheckMacNeedsToRun;
+(BOOL)_macNeedsToRun:(unsigned long long*)arg1 secureElementOwnershipState:(unsigned long long)arg2 ;
+(void)_phonePreflight:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
+(void)_bridgePreflight:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
+(void)_macPreflight:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
+(id)_peerPaymentCredentialFromPeerPaymentWebService:(id)arg1 ;
+(void)_handlePreflightFinishedWithSuccess:(BOOL)arg1 paymentCredentials:(id)arg2 provisioningController:(id)arg3 completion:(/*^block*/id)arg4 ;
+(id)_bridgeContextDefaultLocalCredential;
+(BOOL)setupAssistantNeedsToRun:(unsigned long long)arg1 returningRequirements:(unsigned long long*)arg2 ;
+(void)preflightPaymentSetupProvisioningController:(id)arg1 forSetupAssistant:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3 ;
+(id)retrieveLocalAppletSubcredentialPassCredentials;
@end

