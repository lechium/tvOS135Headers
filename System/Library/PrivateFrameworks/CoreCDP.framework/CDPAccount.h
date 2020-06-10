/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:24 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CDPAccount : NSObject
+(id)sharedInstance;
+(BOOL)isICDPEnabledForDSID:(id)arg1 checkWithServer:(BOOL)arg2 ;
+(BOOL)isICDPEnabledForDSID:(id)arg1 ;
-(id)authToken;
-(id)sharedAccountStore;
-(id)primaryAppleAccount;
-(unsigned long long)primaryAccountSecurityLevel;
-(id)iCloudEnv;
-(id)contextForPrimaryAccount;
-(id)primaryAccountAltDSID;
-(id)primaryAccountDSID;
-(id)primaryAccountUsername;
-(id)escrowURL;
-(id)primaryAccountStashedPRK;
@end
