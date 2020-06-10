/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:40:48 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKSQLite.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface CKDMetadataCache : CKSQLite {

	NSObject*<OS_dispatch_queue> _cacheQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> cacheQueue;              //@synthesize cacheQueue=_cacheQueue - In the implementation block
+(id)sharedCache;
+(id)dbFileName;
-(void)setGlobalConfiguration:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)cacheQueue;
-(id)knownAppContainerTuplesForAccountID:(id)arg1 ;
-(void)setAppContainerIntersectionMetadata:(id)arg1 forAppContainerAccountTuple:(id)arg2 ;
-(void)setApplicationMetadata:(id)arg1 forApplicationBundleID:(id)arg2 sourceApplicationBundleID:(id)arg3 ;
-(id)appContainerIntersectionMetadataForAppContainerAccountTuple:(id)arg1 ;
-(id)applicationMetadataForApplicationBundleID:(id)arg1 sourceApplicationBundleID:(id)arg2 ;
-(void)removeContainerID:(id)arg1 ;
-(id)knownAppContainerAccountTuples;
-(id)_initWithCacheDir:(id)arg1 ;
-(void)setCacheQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)globalConfiguration;
-(void)setPushToken:(id)arg1 forAppContainerAccountTuple:(id)arg2 ;
-(void)setDateOfLastTokenUpdate:(id)arg1 ;
-(id)pushTokenForAppContainerAccountTuple:(id)arg1 filterOldTokens:(BOOL)arg2 ;
-(id)publicKeyOfType:(id)arg1 withIdentifier:(id)arg2 ;
-(void)setPublicKey:(id)arg1 ofType:(id)arg2 withIdentifier:(id)arg3 ;
-(void)setContainerInfo:(id)arg1 forContainerID:(id)arg2 accountID:(id)arg3 ;
-(id)containerInfoForContainerID:(id)arg1 accountID:(id)arg2 ;
-(void)expungeWithDeletedAccountID:(id)arg1 forceRemove:(BOOL)arg2 ;
-(void)inlock_setDateOfLastTokenUpdate:(id)arg1 ;
-(id)inlock_applicationMetadataForApplicationBundleID:(id)arg1 sourceApplicationBundleID:(id)arg2 ;
-(id)inlock_containerInfoForContainerID:(id)arg1 accountID:(id)arg2 ;
-(void)expungeStaleAccountIDs;
-(id)dateOfLastTokenUpdate;
-(id)knownApplicationBundleIDs;
-(id)knownContainerizedApplicationBundleIDs;
-(void)removeKnownApplicationBundleID:(id)arg1 sourceApplicationBundleID:(id)arg2 ;
@end

