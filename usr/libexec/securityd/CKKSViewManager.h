//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CKKSCloudKitAccountStateListener-Protocol.h"
#import "CKKSControlProtocol-Protocol.h"
#import "NSXPCListenerDelegate-Protocol.h"

@class CKContainer, CKKSAccountStateTracker, CKKSCloudKitClassDependencies, CKKSCondition, CKKSListenerCollection, CKKSLockStateTracker, CKKSNearFutureScheduler, CKKSRateLimiter, CKKSReachabilityTracker, CKKSZoneChangeFetcher, CKKSZoneModifier, NSMutableDictionary, NSOperationQueue, NSSet, NSString, NSXPCListener, TPPolicy;
@protocol OTSOSAdapter;

__attribute__((visibility("hidden")))
@interface CKKSViewManager : NSObject <NSXPCListenerDelegate, CKKSCloudKitAccountStateListener, CKKSControlProtocol>
{
    _Bool _overrideCKKSViewsFromPolicy;	// 8 = 0x8
    _Bool _valueCKKSViewsFromPolicy;	// 9 = 0x9
    _Bool _startCKOperationAtViewCreation;	// 10 = 0xa
    _Bool _itemModificationsBeforePolicyLoaded;	// 11 = 0xb
    CKContainer *_container;	// 16 = 0x10
    CKKSAccountStateTracker *_accountTracker;	// 24 = 0x18
    CKKSLockStateTracker *_lockStateTracker;	// 32 = 0x20
    CKKSReachabilityTracker *_reachabilityTracker;	// 40 = 0x28
    CKKSZoneChangeFetcher *_zoneChangeFetcher;	// 48 = 0x30
    CKKSZoneModifier *_zoneModifier;	// 56 = 0x38
    CKKSCondition *_completedSecCKKSInitialize;	// 64 = 0x40
    CKKSRateLimiter *_globalRateLimiter;	// 72 = 0x48
    id <OTSOSAdapter> _sosPeerAdapter;	// 80 = 0x50
    TPPolicy *_policy;	// 88 = 0x58
    NSMutableDictionary *_views;	// 96 = 0x60
    NSXPCListener *_listener;	// 104 = 0x68
    NSSet *_viewAllowList;	// 112 = 0x70
    CKKSCloudKitClassDependencies *_cloudKitClassDependencies;	// 120 = 0x78
    NSMutableDictionary *_pendingSyncCallbacks;	// 128 = 0x80
    CKKSNearFutureScheduler *_savedTLKNotifier;	// 136 = 0x88
    NSOperationQueue *_operationQueue;	// 144 = 0x90
    CKKSListenerCollection *_peerChangeListenerCollection;	// 152 = 0x98
}

+ (id)manager;	// IMP=0x00000001000ccc64
+ (void)callSyncCallbackWithErrorNoAccount:(CDUnknownBlockType)arg1;	// IMP=0x00000001000ccbd4
+ (id)makeCKContainer:(id)arg1 usePCS:(_Bool)arg2;	// IMP=0x00000001000ccb08
- (void).cxx_destruct;	// IMP=0x00000001000ca8dc
@property _Bool itemModificationsBeforePolicyLoaded; // @synthesize itemModificationsBeforePolicyLoaded=_itemModificationsBeforePolicyLoaded;
@property(nonatomic) _Bool startCKOperationAtViewCreation; // @synthesize startCKOperationAtViewCreation=_startCKOperationAtViewCreation;
@property(nonatomic) _Bool valueCKKSViewsFromPolicy; // @synthesize valueCKKSViewsFromPolicy=_valueCKKSViewsFromPolicy;
@property(nonatomic) _Bool overrideCKKSViewsFromPolicy; // @synthesize overrideCKKSViewsFromPolicy=_overrideCKKSViewsFromPolicy;
@property(retain) CKKSListenerCollection *peerChangeListenerCollection; // @synthesize peerChangeListenerCollection=_peerChangeListenerCollection;
@property(retain) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain) CKKSNearFutureScheduler *savedTLKNotifier; // @synthesize savedTLKNotifier=_savedTLKNotifier;
@property(retain) NSMutableDictionary *pendingSyncCallbacks; // @synthesize pendingSyncCallbacks=_pendingSyncCallbacks;
@property(retain) CKKSCloudKitClassDependencies *cloudKitClassDependencies; // @synthesize cloudKitClassDependencies=_cloudKitClassDependencies;
@property(retain) NSSet *viewAllowList; // @synthesize viewAllowList=_viewAllowList;
@property(retain) NSXPCListener *listener; // @synthesize listener=_listener;
@property(readonly) NSMutableDictionary *views; // @synthesize views=_views;
@property(retain) TPPolicy *policy; // @synthesize policy=_policy;
@property(retain) id <OTSOSAdapter> sosPeerAdapter; // @synthesize sosPeerAdapter=_sosPeerAdapter;
@property(retain) CKKSRateLimiter *globalRateLimiter; // @synthesize globalRateLimiter=_globalRateLimiter;
@property(retain) CKKSCondition *completedSecCKKSInitialize; // @synthesize completedSecCKKSInitialize=_completedSecCKKSInitialize;
@property(retain) CKKSZoneModifier *zoneModifier; // @synthesize zoneModifier=_zoneModifier;
@property(retain) CKKSZoneChangeFetcher *zoneChangeFetcher; // @synthesize zoneChangeFetcher=_zoneChangeFetcher;
@property(retain) CKKSReachabilityTracker *reachabilityTracker; // @synthesize reachabilityTracker=_reachabilityTracker;
@property(retain) CKKSLockStateTracker *lockStateTracker; // @synthesize lockStateTracker=_lockStateTracker;
@property(retain) CKKSAccountStateTracker *accountTracker; // @synthesize accountTracker=_accountTracker;
@property(retain) CKContainer *container; // @synthesize container=_container;
- (void)haltAll;	// IMP=0x00000001000ca580
- (void)xpc24HrNotification;	// IMP=0x00000001000ca1f8
- (void)rpcCKMetric:(id)arg1 attributes:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000001000ca05c
- (void)rpcGetCKDeviceIDWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000001000c9fcc
- (void)rpcPushOutgoingChanges:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000c9b90
- (void)rpcFetchAndProcessChanges:(id)arg1 classA:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000001000c972c
- (void)rpcFetchAndProcessClassAChanges:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000c96d8
- (void)rpcFetchAndProcessChanges:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000c9684
- (void)rpcFastStatus:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000c9630
- (void)rpcStatus:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000c95dc
- (void)rpcStatus:(id)arg1 fast:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000001000c9054
- (void)rpcResyncLocal:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000c8c38
- (void)rpcResync:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000c87e0
- (void)rpcResetCloudKit:(id)arg1 reason:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000001000c82dc
- (void)rpcResetLocal:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000c7f00
- (id)views:(id)arg1 operation:(id)arg2 error:(id *)arg3;	// IMP=0x00000001000c7a74
- (void)performanceCounters:(CDUnknownBlockType)arg1;	// IMP=0x00000001000c7a5c
- (void)syncBackupAndNotifyAboutSync;	// IMP=0x00000001000c79b0
- (void)notifyNewTLKsInKeychain;	// IMP=0x00000001000c7928
- (void)cancelPendingOperations;	// IMP=0x00000001000c78e8
- (void)getCurrentItemForAccessGroup:(id)arg1 identifier:(id)arg2 viewHint:(id)arg3 fetchCloudValue:(_Bool)arg4 complete:(CDUnknownBlockType)arg5;	// IMP=0x00000001000c76ec
- (void)setCurrentItemForAccessGroup:(id)arg1 hash:(id)arg2 accessGroup:(id)arg3 identifier:(id)arg4 viewHint:(id)arg5 replacing:(id)arg6 hash:(id)arg7 complete:(CDUnknownBlockType)arg8;	// IMP=0x00000001000c7480
- (void)handleKeychainEventDbConnection:(struct __OpaqueSecDbConnection *)arg1 source:(unsigned long long)arg2 added:(struct SecDbItem *)arg3 deleted:(struct SecDbItem *)arg4;	// IMP=0x00000001000c6de4
- (void)cloudkitAccountStateChange:(id)arg1 to:(id)arg2;	// IMP=0x00000001000c6ad4
- (id)pendingCallbackUUIDs;	// IMP=0x00000001000c6a14
- (CDUnknownBlockType)claimCallbackForUUID:(id)arg1;	// IMP=0x00000001000c6868
- (void)registerSyncStatusCallback:(id)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x00000001000c66e8
- (id)viewNameForItem:(struct SecDbItem *)arg1;	// IMP=0x00000001000c63bc
- (_Bool)useCKKSViewsFromPolicy;	// IMP=0x00000001000c62fc
- (id)viewNameForViewHint:(id)arg1;	// IMP=0x00000001000c6258
- (id)restartZone:(id)arg1;	// IMP=0x00000001000c61e4
- (void)haltZone:(id)arg1;	// IMP=0x00000001000c60c4
- (id)activeTLKs;	// IMP=0x00000001000c5ea8
- (void)beginCloudKitOperationOfAllViews;	// IMP=0x00000001000c5d50
- (void)createViews;	// IMP=0x00000001000c5bb4
- (id)currentViews;	// IMP=0x00000001000c59c8
- (id)findOrCreateView:(id)arg1;	// IMP=0x00000001000c5694
- (id)findView:(id)arg1;	// IMP=0x00000001000c55c4
- (void)clearView:(id)arg1;	// IMP=0x00000001000c54b0
- (void)clearAllViews;	// IMP=0x00000001000c52bc
- (void)setView:(id)arg1;	// IMP=0x00000001000c5150
- (void)resetSyncingPolicy;	// IMP=0x00000001000c50b0
- (void)setSyncingViewsAllowList:(id)arg1;	// IMP=0x00000001000c50a4
- (void)setSyncingViews:(id)arg1 sortingPolicy:(id)arg2;	// IMP=0x00000001000c4834
- (id)viewList;	// IMP=0x00000001000c47c0
- (id)defaultViewList;	// IMP=0x00000001000c46e4
- (void)lockStateChangeNotification:(_Bool)arg1;	// IMP=0x00000001000c465c
- (id)getGlobalRateLimiter;	// IMP=0x00000001000c4554
- (void)dealloc;	// IMP=0x00000001000c4508
- (void)setupAnalytics;	// IMP=0x00000001000c4210
- (_Bool)waitForTrustReady;	// IMP=0x00000001000c4168
- (id)initWithContainer:(id)arg1 sosAdapter:(id)arg2 accountStateTracker:(id)arg3 lockStateTracker:(id)arg4 cloudKitClassDependencies:(id)arg5;	// IMP=0x00000001000c3d90

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
