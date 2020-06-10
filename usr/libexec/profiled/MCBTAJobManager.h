//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MCProfileServiceServer;
@protocol OS_dispatch_queue;

@interface MCBTAJobManager : NSObject
{
    int _profileChangeNotificationToken;	// 8 = 0x8
    int _managedAppChangeNotificationToken;	// 12 = 0xc
    int _effectiveSettingsChangedNotificationToken;	// 16 = 0x10
    MCProfileServiceServer *_server;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_workQueue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000010005c778
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(nonatomic) int effectiveSettingsChangedNotificationToken; // @synthesize effectiveSettingsChangedNotificationToken=_effectiveSettingsChangedNotificationToken;
@property(nonatomic) int managedAppChangeNotificationToken; // @synthesize managedAppChangeNotificationToken=_managedAppChangeNotificationToken;
@property(nonatomic) int profileChangeNotificationToken; // @synthesize profileChangeNotificationToken=_profileChangeNotificationToken;
@property(nonatomic) __weak MCProfileServiceServer *server; // @synthesize server=_server;
- (id)_xpcCriteriaWithDescription:(id)arg1 proposedStartDate:(id)arg2 proposedGracePeriod:(id)arg3 proposedPriority:(const char *)arg4;	// IMP=0x000000010005c408
- (void)_workQueueRescheduleAggregateLogJob:(id)arg1;	// IMP=0x000000010005c3a8
- (void)rescheduleAggregateLogJob:(id)arg1;	// IMP=0x000000010005c310
- (void)_workQueueRescheduleUpdateMISTrustJob:(id)arg1;	// IMP=0x000000010005c2b0
- (void)rescheduleUpdateMISTrustJob:(id)arg1;	// IMP=0x000000010005c218
- (void)_workQueueRescheduleManagedAppValidationJob:(id)arg1;	// IMP=0x000000010005c110
- (void)rescheduleManagedAppValidationJob:(id)arg1;	// IMP=0x000000010005c078
- (void)rescheduleManagedAppValidationJob;	// IMP=0x000000010005bfc4
- (void)_workQueueRescheduleActivationLockCleanupJob;	// IMP=0x000000010005bd10
- (void)rescheduleActivationLockCleanupJob;	// IMP=0x000000010005bca8
- (void)_workQueueRescheduleProfileJanitorJob;	// IMP=0x000000010005bbfc
- (void)rescheduleProfileJanitorJob;	// IMP=0x000000010005bb94
- (id)_jobWithDescription:(id)arg1 proposedStartDate:(id)arg2;	// IMP=0x000000010005b900
- (id)_nextRegularDate;	// IMP=0x000000010005b738
- (void)activationLockBypassCodeWasStored:(id)arg1;	// IMP=0x000000010005b6c0
- (void)stop;	// IMP=0x000000010005b64c
- (void)start;	// IMP=0x000000010005ad9c

@end
