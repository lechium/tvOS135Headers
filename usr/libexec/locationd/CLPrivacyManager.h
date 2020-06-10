//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LocationSupport/CLIntersiloService.h>

#import "CLPrivacyManagerProtocol-Protocol.h"

@class CLDispatchSilo, NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_source;

@interface CLPrivacyManager : CLIntersiloService <CLPrivacyManagerProtocol>
{
    struct unique_ptr<CLClientManager_Type::Client, std::__1::default_delete<CLClientManager_Type::Client>> _clientManagerClient;	// 8 = 0x8
    NSObject<OS_dispatch_source> *_deferVacuum;	// 16 = 0x10
    NSMutableDictionary *_activities;	// 24 = 0x18
    _Bool _disabled;	// 32 = 0x20
    unsigned long long _timeStarted;	// 40 = 0x28
}

+ (id)getSilo;	// IMP=0x000000010084ee4c
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x000000010084ee28
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x000000010084eda4
- (id).cxx_construct;	// IMP=0x000000010085097c
- (void).cxx_destruct;	// IMP=0x0000000100850954
- (void)onActivity:(id)arg1 withIdentifier:(id)arg2;	// IMP=0x00000001008503f0
- (void)retryActivityForEncryptionClass:(id)arg1 reason:(int)arg2;	// IMP=0x0000000100850138
- (_Bool)isReadyToVacuumEncryptionClass:(id)arg1;	// IMP=0x000000010084ff88
- (void)checkInForActivityWithIdentifier:(id)arg1;	// IMP=0x000000010084fe64
- (void)vacuumAll;	// IMP=0x000000010084f858
- (void)scheduleVacuumWithReason:(id)arg1;	// IMP=0x000000010084f4a8
- (void)onClientManagerNotification:(int)arg1 data:(struct NotificationData)arg2;	// IMP=0x000000010084f32c
- (void)beginService;	// IMP=0x000000010084ef88
- (void)dealloc;	// IMP=0x000000010084ef34
- (id)init;	// IMP=0x000000010084eec4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, retain, nonatomic) CLDispatchSilo *silo; // @dynamic silo;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
