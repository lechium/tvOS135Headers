//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HBTopShelfFetchTimerConfiguration, NSString, TVSStateMachine;
@protocol HBTopShelfFetchTimerDelegate, OS_dispatch_queue_serial, OS_dispatch_source;

@interface HBTopShelfFetchTimer : NSObject
{
    _Bool _contentActive;	// 8 = 0x8
    _Bool _shouldAdjustTimerWhenTopShelfContentChanges;	// 9 = 0x9
    NSString *_state;	// 16 = 0x10
    NSString *_applicationIdentifier;	// 24 = 0x18
    long long _fetchPriority;	// 32 = 0x20
    HBTopShelfFetchTimerConfiguration *_configuration;	// 40 = 0x28
    NSObject<OS_dispatch_queue_serial> *_processingQueue;	// 48 = 0x30
    id <HBTopShelfFetchTimerDelegate> _delegate;	// 56 = 0x38
    TVSStateMachine *_stateMachine;	// 64 = 0x40
    NSString *_inflightFetchIdentifier;	// 72 = 0x48
    double _lastFetchStartTime;	// 80 = 0x50
    double _lastFetchEndTime;	// 88 = 0x58
    NSObject<OS_dispatch_source> *_timer;	// 96 = 0x60
    double _timerFireTime;	// 104 = 0x68
    double _inactiveContentTimerFireTime;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x00000001000a889c
@property(nonatomic) _Bool shouldAdjustTimerWhenTopShelfContentChanges; // @synthesize shouldAdjustTimerWhenTopShelfContentChanges=_shouldAdjustTimerWhenTopShelfContentChanges;
@property(nonatomic) double inactiveContentTimerFireTime; // @synthesize inactiveContentTimerFireTime=_inactiveContentTimerFireTime;
@property(nonatomic) double timerFireTime; // @synthesize timerFireTime=_timerFireTime;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(nonatomic) double lastFetchEndTime; // @synthesize lastFetchEndTime=_lastFetchEndTime;
@property(nonatomic) double lastFetchStartTime; // @synthesize lastFetchStartTime=_lastFetchStartTime;
@property(nonatomic) NSString *inflightFetchIdentifier; // @synthesize inflightFetchIdentifier=_inflightFetchIdentifier;
@property(readonly, nonatomic) TVSStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(readonly, nonatomic) __weak id <HBTopShelfFetchTimerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue_serial> *processingQueue; // @synthesize processingQueue=_processingQueue;
@property(readonly, nonatomic) HBTopShelfFetchTimerConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) long long fetchPriority; // @synthesize fetchPriority=_fetchPriority;
@property(readonly, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
@property(nonatomic) NSString *state; // @synthesize state=_state;
@property(nonatomic, getter=isContentActive) _Bool contentActive; // @synthesize contentActive=_contentActive;
- (_Bool)_handleFetchDidCompleteWithIdentifier:(id)arg1;	// IMP=0x00000001000a872c
- (void)_stopTimerAndResetState:(_Bool)arg1;	// IMP=0x00000001000a8574
- (void)_stopTimer;	// IMP=0x00000001000a8564
- (double)_tryToAdjustTimerFireTime:(double)arg1;	// IMP=0x00000001000a84f0
- (void)_adjustTimerForActiveOrInactiveContent;	// IMP=0x00000001000a8488
- (void)_setTimerFireTime:(double)arg1;	// IMP=0x00000001000a82c4
- (double)_minimumRefetchTimerFireTimeWithFireTime:(double)arg1;	// IMP=0x00000001000a823c
- (_Bool)_haveUrgentFetchPriority;	// IMP=0x00000001000a8218
- (double)_firstFetchTimerFireTimeWithContentActive:(_Bool)arg1;	// IMP=0x00000001000a8180
- (_Bool)_hasStartedAtLeastOneFetch;	// IMP=0x00000001000a8154
- (_Bool)_haveValidFetchStartAndEndTimes;	// IMP=0x00000001000a80f0
- (double)_timerFireTimeWithContentActive:(_Bool)arg1;	// IMP=0x00000001000a8024
- (void)_startTimer;	// IMP=0x00000001000a7c58
- (void)_initializeStateMachine;	// IMP=0x00000001000a6988
- (void)internetDidBecomeAvailable;	// IMP=0x00000001000a6940
- (void)topShelfContentDidChange;	// IMP=0x00000001000a68f8
- (void)topShelfFetchDidCompleteWithIdentfier:(id)arg1;	// IMP=0x00000001000a6804
- (void)resume;	// IMP=0x00000001000a65f8
- (void)pause;	// IMP=0x00000001000a65b0
- (void)stop;	// IMP=0x00000001000a6568
- (void)start;	// IMP=0x00000001000a6520
- (void)dealloc;	// IMP=0x00000001000a64d4
- (id)initWithApplicationIdentifier:(id)arg1 configuration:(id)arg2 fetchPriority:(long long)arg3 processingQueue:(id)arg4 delegate:(id)arg5;	// IMP=0x00000001000a6310

@end

