//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MZAsynchronousTask, MZUPPAsynchronousTask, MZUniversalPlaybackPositionSyncHandler, NSDate, NSTimer;
@protocol MZUniversalPlaybackPositionDataSource, OS_dispatch_queue;

@interface MZUniversalPlaybackPositionStore : NSObject
{
    _Bool _hasLocalChangesToSync;	// 8 = 0x8
    _Bool _canRequestStoreSignIn;	// 9 = 0x9
    _Bool _refreshTimerActive;	// 10 = 0xa
    _Bool _isActive;	// 11 = 0xb
    _Bool _initialAutosyncNeeded;	// 12 = 0xc
    id <MZUniversalPlaybackPositionDataSource> _dataSource;	// 16 = 0x10
    unsigned long long _automaticSynchronizeOptions;	// 24 = 0x18
    MZUPPAsynchronousTask *_synchronizeTask;	// 32 = 0x20
    MZAsynchronousTask *_bagLookupTask;	// 40 = 0x28
    MZUniversalPlaybackPositionSyncHandler *_syncHandler;	// 48 = 0x30
    NSDate *_dateToFireNextTimer;	// 56 = 0x38
    NSTimer *_timer;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_queue;	// 72 = 0x48
    id _accountsObserver;	// 80 = 0x50
    id _prefsObserver;	// 88 = 0x58
    double _autorefreshRate;	// 96 = 0x60
    double _bagSpecifiedPollingInterval;	// 104 = 0x68
}

+ (id)keyValueStoreItemIdentifierForItem:(id)arg1;	// IMP=0x000000010004cca4
- (void).cxx_destruct;	// IMP=0x000000010004f848
@property(nonatomic) double bagSpecifiedPollingInterval; // @synthesize bagSpecifiedPollingInterval=_bagSpecifiedPollingInterval;
@property(nonatomic) double autorefreshRate; // @synthesize autorefreshRate=_autorefreshRate;
@property(nonatomic) id prefsObserver; // @synthesize prefsObserver=_prefsObserver;
@property(nonatomic) id accountsObserver; // @synthesize accountsObserver=_accountsObserver;
@property(nonatomic) _Bool initialAutosyncNeeded; // @synthesize initialAutosyncNeeded=_initialAutosyncNeeded;
@property(nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
@property(nonatomic) _Bool refreshTimerActive; // @synthesize refreshTimerActive=_refreshTimerActive;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSDate *dateToFireNextTimer; // @synthesize dateToFireNextTimer=_dateToFireNextTimer;
@property(retain, nonatomic) MZUniversalPlaybackPositionSyncHandler *syncHandler; // @synthesize syncHandler=_syncHandler;
@property(retain, nonatomic) MZAsynchronousTask *bagLookupTask; // @synthesize bagLookupTask=_bagLookupTask;
@property(retain, nonatomic) MZUPPAsynchronousTask *synchronizeTask; // @synthesize synchronizeTask=_synchronizeTask;
@property(nonatomic) _Bool canRequestStoreSignIn; // @synthesize canRequestStoreSignIn=_canRequestStoreSignIn;
@property(nonatomic) _Bool hasLocalChangesToSync; // @synthesize hasLocalChangesToSync=_hasLocalChangesToSync;
@property(nonatomic) unsigned long long automaticSynchronizeOptions; // @synthesize automaticSynchronizeOptions=_automaticSynchronizeOptions;
@property id <MZUniversalPlaybackPositionDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)_onQueueResumeTimer;	// IMP=0x000000010004f6d0
- (_Bool)_timerIsStopped;	// IMP=0x000000010004f64c
- (void)_onQueueSuspendTimer;	// IMP=0x000000010004f5b4
- (void)_onQueueStartNewTimer;	// IMP=0x000000010004f5a4
- (void)_onQueueStartNewTimerWithTimeIntervalSinceNow:(double)arg1;	// IMP=0x000000010004f524
- (void)_onQueueStopTimer;	// IMP=0x000000010004f4c0
- (void)_onQueueScheduleTimer;	// IMP=0x000000010004f170
- (void)_timerFired:(id)arg1;	// IMP=0x000000010004f100
- (void)_updateAutorefreshRateSettingAndRestartTimer:(_Bool)arg1;	// IMP=0x000000010004f048
- (double)_effectiveAutorefreshRate;	// IMP=0x000000010004ef38
- (void)_updateForStoreAccountsChange;	// IMP=0x000000010004ee84
- (void)_grabBagWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010004ec8c
- (void)_onQueueLoadBagContextWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010004e2b0
- (void)_updateSettingsFromLoadedBagContext:(id)arg1;	// IMP=0x000000010004e194
- (id)_accountForSyncing;	// IMP=0x000000010004e138
- (void)_onQueueSynchronizeImmediatelyWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010004d3b8
- (void)_onQueueSynchronizeWithAutosynchronizeMask:(unsigned long long)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010004d3a4
- (void)checkForAvailabilityWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010004d228
- (void)synchronizeImmediatelyWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010004d120
- (_Bool)automaticallySynchronizeOnBecomeActive;	// IMP=0x000000010004d114
- (_Bool)_automaticallySynchronizeOnBecomeActive;	// IMP=0x000000010004d0f4
- (void)setAutomaticallySynchronizeOnBecomeActive:(_Bool)arg1;	// IMP=0x000000010004d0ac
- (_Bool)automaticallySynchronizeLocalChangesOnResignActive;	// IMP=0x000000010004d0a0
- (_Bool)_automaticallySynchronizeLocalChangesOnResignActive;	// IMP=0x000000010004d080
- (void)setAutomaticallySynchronizeLocalChangesOnResignActive:(_Bool)arg1;	// IMP=0x000000010004d038
- (void)_onQueueSetHasLocalChangesToSync:(_Bool)arg1;	// IMP=0x000000010004cfbc
- (void)resignActive;	// IMP=0x000000010004ce08
- (void)becomeActive;	// IMP=0x000000010004cd54
- (void)_onQueueUpdateTimerForAutomaticSyncOptionChanges;	// IMP=0x000000010004cd2c
- (void)_onQueueUpdateTimerForActiveChanges;	// IMP=0x000000010004ccb8
- (void)dealloc;	// IMP=0x000000010004caec
- (id)initWithInitialUpdateDelay:(double)arg1;	// IMP=0x000000010004cadc
- (id)initWithInitialUpdateDelay:(double)arg1 isActive:(_Bool)arg2;	// IMP=0x000000010004c710
- (id)init;	// IMP=0x000000010004c6fc

@end
