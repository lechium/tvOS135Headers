//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LocationSupport/CLIntersiloService.h>

#import "CLClientAuthorizationCacheClientProtocol-Protocol.h"
#import "CLRoutineMonitorClientProtocol-Protocol.h"
#import "CLSignificantVisitManagerProtocol-Protocol.h"

@class CLSettingsMirror, NSMutableArray, NSString;
@protocol CLClientAuthorizationCacheProtocol, CLClientManagerPublicProtocol, CLRoutineMonitorServiceProtocol;

@interface CLSignificantVisitManager : CLIntersiloService <CLRoutineMonitorClientProtocol, CLClientAuthorizationCacheClientProtocol, CLSignificantVisitManagerProtocol>
{
    struct unique_ptr<CLClientManager_Type::Client, std::__1::default_delete<CLClientManager_Type::Client>> _clientManagerClient;	// 8 = 0x8
    struct map<id<CLSignificantVisitManagerClientProtocol>, NSString *, std::__1::less<id<CLSignificantVisitManagerClientProtocol>>, std::__1::allocator<std::__1::pair<const id<CLSignificantVisitManagerClientProtocol>, NSString *>>> _clientToKey;	// 16 = 0x10
    CLSettingsMirror *fSettings;	// 40 = 0x28
    _Bool _monitoring;	// 48 = 0x30
    _Bool _leeching;	// 49 = 0x31
    _Bool _armed;	// 50 = 0x32
    struct CLPersistentStore *_clientInterest;	// 56 = 0x38
    struct CLPersistentStore *_clientAuthDate;	// 64 = 0x40
    id <CLClientAuthorizationCacheProtocol> _clientAuthorizationCache;	// 72 = 0x48
    NSMutableArray *_recentVisits;	// 80 = 0x50
    id <CLRoutineMonitorServiceProtocol> _routineMonitor;	// 88 = 0x58
    id <CLClientManagerPublicProtocol> _clientManager;	// 96 = 0x60
    unsigned long long _currentJournalIdentifier;	// 104 = 0x68
}

+ (_Bool)isSupported;	// IMP=0x000000010027ec50
+ (id)getSilo;	// IMP=0x000000010027ebd8
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x000000010027ebb4
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x000000010087f864
- (id).cxx_construct;	// IMP=0x0000000100283434
- (void).cxx_destruct;	// IMP=0x00000001002833dc
@property(nonatomic) unsigned long long currentJournalIdentifier; // @synthesize currentJournalIdentifier=_currentJournalIdentifier;
@property(nonatomic) _Bool armed; // @synthesize armed=_armed;
@property(retain, nonatomic) id <CLClientManagerPublicProtocol> clientManager; // @synthesize clientManager=_clientManager;
@property(retain, nonatomic) id <CLRoutineMonitorServiceProtocol> routineMonitor; // @synthesize routineMonitor=_routineMonitor;
@property(retain, nonatomic) NSMutableArray *recentVisits; // @synthesize recentVisits=_recentVisits;
@property(retain, nonatomic) id <CLClientAuthorizationCacheProtocol> clientAuthorizationCache; // @synthesize clientAuthorizationCache=_clientAuthorizationCache;
@property(nonatomic) struct CLPersistentStore *clientAuthDate; // @synthesize clientAuthDate=_clientAuthDate;
@property(nonatomic) struct CLPersistentStore *clientInterest; // @synthesize clientInterest=_clientInterest;
@property(nonatomic) _Bool leeching; // @synthesize leeching=_leeching;
@property(nonatomic) _Bool monitoring; // @synthesize monitoring=_monitoring;
- (void)settingsDidChange:(id)arg1;	// IMP=0x0000000100282f8c
- (void)onAuthDateStoreTimer;	// IMP=0x0000000100282f48
- (void)onInterestStoreTimer;	// IMP=0x0000000100282f04
- (void)onClientManagerNotification:(int)arg1 data:(struct NotificationData)arg2;	// IMP=0x0000000100282cd0
- (void)onVisit:(id)arg1;	// IMP=0x0000000100282b60
- (_Bool)clientInterestStoreSetValueForClientKey:(const char *)arg1 parameterKey:(const char *)arg2 value:(int)arg3;	// IMP=0x0000000100282a88
- (_Bool)clientInterestStoreGetValueForClientKey:(const char *)arg1 parameterKey:(const char *)arg2 value:(int *)arg3;	// IMP=0x00000001002829c8
- (_Bool)interestTypeForClientKey:(const char *)arg1 outType:(int *)arg2;	// IMP=0x0000000100282968
- (_Bool)interestForClientKey:(const char *)arg1 outInterest:(int *)arg2;	// IMP=0x0000000100282908
- (void)migrateClientInterestData;	// IMP=0x0000000100282518
- (void)checkForMonitoring;	// IMP=0x0000000100281f78
- (id)authorizationDateForClientWithKey:(id)arg1;	// IMP=0x0000000100281cec
- (void)notifyClientsOfVisit:(id)arg1;	// IMP=0x0000000100281770
- (void)disconnectClient:(byref id)arg1;	// IMP=0x00000001002816bc
- (void)simulateVisit:(id)arg1;	// IMP=0x00000001002815c8
- (void)actOnPendingDeleteForClientKey:(id)arg1;	// IMP=0x0000000100281278
- (void)removeInterestForClientKey:(id)arg1;	// IMP=0x00000001002811ac
- (void)stopMonitoringSignificantVisitsForClient:(byref id)arg1;	// IMP=0x0000000100281018
- (void)startMonitoringSignificantVisitsForClient:(byref id)arg1 type:(int)arg2;	// IMP=0x0000000100280ca0
- (void)connectClient:(byref id)arg1 withKey:(id)arg2;	// IMP=0x0000000100280aec
- (id)keyForClient:(byref id)arg1;	// IMP=0x0000000100280a58
- (void)performBlockWhenArmed:(CDUnknownBlockType)arg1;	// IMP=0x00000001002809dc
- (void)deliverVisit:(id)arg1 toClient:(byref id)arg2;	// IMP=0x0000000100280570
- (void)sendVisitsToClient:(byref id)arg1;	// IMP=0x0000000100280260
- (_Bool)isClientWithKeyInterested:(id)arg1;	// IMP=0x000000010028011c
- (void)removeOldVisits;	// IMP=0x000000010027ffac
- (void)ensureStop;	// IMP=0x000000010027fcfc
- (void)ensureMonitoringWithType:(int)arg1;	// IMP=0x000000010027f8c0
- (void)flushAll;	// IMP=0x000000010027f88c
- (void)flushInterest;	// IMP=0x000000010027f7a0
- (void)flushAuthDates;	// IMP=0x000000010027f6b4
- (void)endService;	// IMP=0x000000010027f4c0
- (void)beginService;	// IMP=0x000000010027ec9c
- (id)init;	// IMP=0x000000010027ec58

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

