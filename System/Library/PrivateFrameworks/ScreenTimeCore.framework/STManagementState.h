/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:19 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection;

@interface STManagementState : NSObject {

	BOOL _cachedShouldRequestMoreTime;
	BOOL _cachedIsRestrictionsPasscodeSet;
	BOOL _contactsEditable;
	NSXPCConnection* _connection;

}

@property (assign) BOOL cachedShouldRequestMoreTime;                        //@synthesize cachedShouldRequestMoreTime=_cachedShouldRequestMoreTime - In the implementation block
@property (assign) BOOL cachedIsRestrictionsPasscodeSet;                    //@synthesize cachedIsRestrictionsPasscodeSet=_cachedIsRestrictionsPasscodeSet - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                  //@synthesize connection=_connection - In the implementation block
@property (readonly) BOOL contactsEditable;                                 //@synthesize contactsEditable=_contactsEditable - In the implementation block
@property (readonly) BOOL needsToSetRestrictionsPasscode; 
@property (nonatomic,readonly) BOOL isRestrictionsPasscodeSet; 
@property (nonatomic,readonly) BOOL shouldRequestMoreTime; 
-(id)init;
-(void)dealloc;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(NSXPCConnection *)connection;
-(void)isRestrictionsPasscodeSet:(/*^block*/id)arg1 ;
-(BOOL)setScreenTimeEnabled:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)permitWebFilterURL:(id)arg1 pageTitle:(id)arg2 error:(id*)arg3 ;
-(id)communicationPoliciesWithError:(id*)arg1 ;
-(void)communicationPoliciesWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)primaryiCloudCardDAVAccountIdentifierWithError:(id*)arg1 ;
-(BOOL)contactsEditable;
-(BOOL)cachedShouldRequestMoreTime;
-(void)setCachedShouldRequestMoreTime:(BOOL)arg1 ;
-(BOOL)cachedIsRestrictionsPasscodeSet;
-(void)setCachedIsRestrictionsPasscodeSet:(BOOL)arg1 ;
-(void)screenTimeStateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setScreenTimeEnabled:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setScreenTimeSyncingEnabled:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)screenTimeSyncStateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)communicationPoliciesForDSID:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)contactManagementStateForDSID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)shouldRequestMoreTime;
-(void)shouldRequestMoreTime:(/*^block*/id)arg1 ;
-(BOOL)isRestrictionsPasscodeSet;
-(BOOL)clearRestrictionsPasscodeWithError:(id*)arg1 ;
-(BOOL)needsToSetRestrictionsPasscode;
-(BOOL)enableScreenTimeForDSID:(id)arg1 error:(id*)arg2 ;
-(void)setManageContactsEnabled:(BOOL)arg1 forDSID:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)requestToManageContactsForDSID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)performMigrationFromMCXSettings:(id)arg1 error:(id*)arg2 ;
-(id)shouldAllowOneMoreMinuteForBundleIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)shouldAllowOneMoreMinuteForWebsiteURL:(id)arg1 error:(id*)arg2 ;
-(id)shouldAllowOneMoreMinuteForCategoryIdentifier:(id)arg1 error:(id*)arg2 ;
-(void)isExplicitContentRestricted:(/*^block*/id)arg1 ;
@end

