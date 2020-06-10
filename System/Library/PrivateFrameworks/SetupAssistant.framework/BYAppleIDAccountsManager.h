/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:41 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AALoginPluginManager, AAStorableLoginContext, AASetupAssistantService;

@interface BYAppleIDAccountsManager : NSObject {

	AALoginPluginManager* _appleIDLoginPluginManager;
	AAStorableLoginContext* _storedLoginContext;
	AASetupAssistantService* _aaService;

}

@property (setter=setAAService:,nonatomic,retain) AASetupAssistantService * aaService;              //@synthesize aaService=_aaService - In the implementation block
+(id)sharedManager;
-(id)init;
-(void)preloadDefaultLoginParametersWithBundleIDs:(id)arg1 ;
-(id)initForDelegateBundleIDs:(id)arg1 ;
-(void)enableDataClassesForAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)loginDelegateAccountsWithUsername:(id)arg1 password:(id)arg2 rawPassword:(id)arg3 skipiTunes:(BOOL)arg4 onlyAppleIDPlugin:(BOOL)arg5 completion:(/*^block*/id)arg6 ;
-(void)performSilentICDPUpgrade;
-(void)runPostRestoreRenewCredentialsIfNeeded;
-(AASetupAssistantService *)aaService;
-(id)storedLoginContext;
-(void)clearStoredLoginContext;
-(void)repeatedlyAttemptPostRestoreRenewForAccount:(id)arg1 loginContext:(id)arg2 numberOfAttemptsAllowed:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)attemptPostRestoreRenewForAccount:(id)arg1 loginContext:(id)arg2 allowFollowUp:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)setAAService:(id)arg1 ;
@end

