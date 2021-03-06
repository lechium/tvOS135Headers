//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NEHelperDelegate-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface NEHelperCacheManager : NSObject <NEHelperDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    struct __SCPreferences *_prefs;	// 16 = 0x10
}

+ (id)sharedManager;	// IMP=0x00000001000158cc
- (void).cxx_destruct;	// IMP=0x000000010001c248
@property struct __SCPreferences *prefs; // @synthesize prefs=_prefs;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (id)onQueueCopyAppPaths;	// IMP=0x000000010001c184
- (void)cleanupAppCache:(id)arg1;	// IMP=0x000000010001bea4
- (void)clearCache;	// IMP=0x000000010001bdac
- (void)clearUUIDcache;	// IMP=0x000000010001bd20
- (void)onQueueClearUUIDCache;	// IMP=0x000000010001bc3c
- (id)onQueueCopyPreferredBundleID:(const char *)arg1;	// IMP=0x000000010001bb9c
- (id)onQueueCopySigningIdentifierForUUID:(const char *)arg1;	// IMP=0x000000010001bac4
- (void)copyUUIDsForSigningIdentifier:(id)arg1 executablePath:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010001b8b4
- (id)onQueueCopyUUIDsForSigningIdentifier:(id)arg1 executablePath:(id)arg2 allowSynthesis:(_Bool)arg3 uid:(unsigned int)arg4 depth:(unsigned long long)arg5;	// IMP=0x000000010001ab28
- (id)onQueueCopyUUIDsForSigningIdentifier:(id)arg1 executablePath:(id)arg2 allowSynthesis:(_Bool)arg3 uid:(unsigned int)arg4;	// IMP=0x000000010001aa90
- (void)updateBundleIDCacheWithPreferredBundleID:(id)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x000000010001a938
- (void)updateUUIDCacheWithSynthesizedUUID:(id)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x000000010001a748
- (void)updateUUIDCacheWithUUIDs:(id)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x000000010001a484
- (id)copyUUIDCache;	// IMP=0x000000010001a440
- (void)saveUUIDCache:(id)arg1;	// IMP=0x000000010001a32c
- (void)notifyUUIDCacheChanged;	// IMP=0x000000010001a270
- (id)onQueueAddUUIDsForBundle:(id)arg1 andPlugins:(id)arg2 toArray:(id)arg3;	// IMP=0x000000010001a094
- (id)onQueueAddUUIDsForBundle:(id)arg1 toArray:(id)arg2;	// IMP=0x0000000100019f10
- (id)onQueueExtraSigningIdentifierForUUID:(id)arg1;	// IMP=0x0000000100019d48
- (id)onQueueExtraUUIDForSigningIdentifier:(id)arg1;	// IMP=0x0000000100019b80
- (id)onQueueExtraDaemonPathsForSigningIdentifier:(id)arg1;	// IMP=0x000000010001992c
- (id)onQueueCopyExtraHardcodedPathForSigningIdentifier:(id)arg1;	// IMP=0x0000000100019904
- (id)onQueueReadUUIDsForPaths:(id)arg1;	// IMP=0x00000001000196ec
- (void)clearCacheForServiceID:(id)arg1;	// IMP=0x000000010001952c
- (_Bool)onQueueSetRoutes:(id)arg1 forServiceID:(id)arg2 type:(int)arg3;	// IMP=0x0000000100018dd4
- (_Bool)onQueueClearDomainDictionariesForServiceID:(id)arg1 type:(int)arg2 interfaceName:(const char *)arg3;	// IMP=0x0000000100018a40
- (_Bool)onQueueSetDomainDictionaries:(id)arg1 forServiceID:(id)arg2 type:(int)arg3 interfaceName:(const char *)arg4;	// IMP=0x000000010001868c
- (void)onQueueClearRedirectedAddresses:(const char *)arg1;	// IMP=0x00000001000184b8
- (_Bool)onQueueAddRedirectedAddress:(const struct sockaddr *)arg1 interfaceName:(const char *)arg2;	// IMP=0x0000000100017ed8
- (void)onQueueNotifyCacheChanged;	// IMP=0x0000000100017e54
- (void)onQueueHandleMessage:(id)arg1;	// IMP=0x000000010001748c
- (void)handleMessage:(id)arg1;	// IMP=0x000000010001738c
- (void)dealloc;	// IMP=0x0000000100015884
- (id)init;	// IMP=0x00000001000157d8
- (id)initWithFirstMessage:(id)arg1;	// IMP=0x00000001000157a4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *name;
@property(readonly) Class superclass;

@end

