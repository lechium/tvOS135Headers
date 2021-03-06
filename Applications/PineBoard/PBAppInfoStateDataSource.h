//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BBObserverDelegate-Protocol.h"
#import "FBSApplicationDataStoreObserver-Protocol.h"
#import "PBAppInfoStoreDynamicStateDataSource-Protocol.h"
#import "UISApplicationStateServiceDelegate-Protocol.h"

@class BBObserver, FBSApplicationDataStoreMonitor, NSMutableDictionary, NSMutableSet, NSString, UISApplicationStateService;
@protocol OS_dispatch_queue;

@interface PBAppInfoStateDataSource : NSObject <BBObserverDelegate, FBSApplicationDataStoreObserver, UISApplicationStateServiceDelegate, PBAppInfoStoreDynamicStateDataSource>
{
    NSObject<OS_dispatch_queue> *_accessQueue;	// 8 = 0x8
    NSMutableSet *_queue_bundleIdentifiersWithTerminationAssertions;	// 16 = 0x10
    NSMutableDictionary *_queue_appStateByBundleIdentifier;	// 24 = 0x18
    FBSApplicationDataStoreMonitor *_monitor;	// 32 = 0x20
    BBObserver *_bbObserver;	// 40 = 0x28
    UISApplicationStateService *_uiAppStateService;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000100193c80
@property(readonly, nonatomic) UISApplicationStateService *uiAppStateService; // @synthesize uiAppStateService=_uiAppStateService;
@property(readonly, nonatomic) BBObserver *bbObserver; // @synthesize bbObserver=_bbObserver;
@property(readonly, nonatomic) FBSApplicationDataStoreMonitor *monitor; // @synthesize monitor=_monitor;
@property(readonly, nonatomic) NSMutableDictionary *queue_appStateByBundleIdentifier; // @synthesize queue_appStateByBundleIdentifier=_queue_appStateByBundleIdentifier;
@property(readonly, nonatomic) NSMutableSet *queue_bundleIdentifiersWithTerminationAssertions; // @synthesize queue_bundleIdentifiersWithTerminationAssertions=_queue_bundleIdentifiersWithTerminationAssertions;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // @synthesize accessQueue=_accessQueue;
- (id)_queueDeleteStateForBundleIdentifier:(id)arg1;	// IMP=0x0000000100193a08
- (id)_queueAppStateForBundleIdentifier:(id)arg1;	// IMP=0x00000001001938f8
- (void)setNeedsUpdate;	// IMP=0x00000001001937b0
- (id)dataSourceForApplicationBundleIdentifier:(id)arg1;	// IMP=0x0000000100193730
- (void)dataStoreMonitor:(id)arg1 didInvalidateApplication:(id)arg2;	// IMP=0x00000001001936b0
- (void)dataStoreMonitor:(id)arg1 didUpdateApplication:(id)arg2 forKey:(id)arg3;	// IMP=0x00000001001935c0
- (void)observer:(id)arg1 noteServerConnectionStateChanged:(_Bool)arg2;	// IMP=0x0000000100193408
- (void)observer:(id)arg1 updateSectionInfo:(id)arg2;	// IMP=0x00000001001932d4
- (void)_updateBadgeEnabledWithInfos:(id)arg1;	// IMP=0x0000000100192f38
- (void)invalidateStateForApplicationWithBundleIdentifier:(id)arg1;	// IMP=0x0000000100192e08
- (void)setCacheDeleting:(_Bool)arg1 forApplicationWithBundleIdentifier:(id)arg2;	// IMP=0x0000000100192b84
- (void)setRecentlyUpdated:(_Bool)arg1 forApplicationWithBundleIdentifier:(id)arg2;	// IMP=0x00000001001929ac
- (void)setBadgeEnabled:(_Bool)arg1 forApplicationWithBundleIdentifier:(id)arg2;	// IMP=0x00000001001927d4
- (void)setBadgeValue:(id)arg1 forApplicationWithBundleIdentifier:(id)arg2;	// IMP=0x0000000100192500
- (_Bool)isApplicationCacheDeleting:(id)arg1;	// IMP=0x000000010019232c
- (_Bool)isApplicationRecentlyUpdated:(id)arg1;	// IMP=0x0000000100192130
- (_Bool)isBadgeEnabledForApplication:(id)arg1;	// IMP=0x0000000100191f34
- (id)badgeValueForApplication:(id)arg1;	// IMP=0x0000000100191c70
- (void)dealloc;	// IMP=0x0000000100191bc0
- (id)init;	// IMP=0x0000000100191858

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

