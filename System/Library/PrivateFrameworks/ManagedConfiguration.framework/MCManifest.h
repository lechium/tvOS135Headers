/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:58 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSMutableDictionary, NSObject;

@interface MCManifest : NSObject {

	NSString* _systemFilePath;
	NSString* _userFilePath;
	NSMutableDictionary* _systemManifest;
	NSMutableDictionary* _userManifest;
	NSObject*<OS_dispatch_queue> _syncQueue;

}
+(id)sharedManifest;
+(id)installedProfileWithIdentifier:(id)arg1 ;
+(id)installedSystemProfileDataWithIdentifier:(id)arg1 ;
+(id)installedUserProfileDataWithIdentifier:(id)arg1 ;
+(id)installedSystemProfileWithIdentifier:(id)arg1 ;
+(id)installedUserProfileWithIdentifier:(id)arg1 ;
+(id)installedProfileDataWithIdentifier:(id)arg1 ;
+(void)_setSystemManifestPath:(id)arg1 userManifestPath:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(void)invalidateCache;
-(id)identifiersOfProfilesWithFilterFlags:(int)arg1 ;
-(id)installedProfileWithIdentifier:(id)arg1 ;
-(id)installedSystemProfileWithIdentifier:(id)arg1 ;
-(id)installedUserProfileWithIdentifier:(id)arg1 ;
-(id)installedProfileDataWithIdentifier:(id)arg1 ;
-(id)_systemManifest;
-(id)_userManifest;
-(id)systemManifest;
-(id)userManifest;
-(id)allInstalledProfileIdentifiers;
-(void)_adjustManifestIdentifier:(id)arg1 isUserInstall:(BOOL)arg2 flag:(int)arg3 addingIdentifier:(BOOL)arg4 ;
-(void)_setSystemManifest:(id)arg1 userManifest:(id)arg2 ;
-(id)installedMDMProfile;
-(id)allInstalledUserProfileIdentifiers;
-(id)allInstalledSystemProfileIdentifiers;
-(id)allProfileIdentifiersInstalledNonInteractivelyWithFilterFlags:(int)arg1 ;
-(id)allInstalledPayloadsOfClass:(Class)arg1 ;
-(void)addIdentifierToSystemManifest:(id)arg1 flag:(int)arg2 ;
-(void)addIdentifierToUserManifest:(id)arg1 flag:(int)arg2 ;
-(void)removeIdentifierFromSystemManifest:(id)arg1 flag:(int)arg2 ;
-(void)removeIdentifierFromUserManifest:(id)arg1 flag:(int)arg2 ;
@end
