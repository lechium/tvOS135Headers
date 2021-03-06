//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SATVBaseStep-Protocol.h"

@class NSString, NSTimer, SATVRemoteController;
@protocol SATVStepDelegate;

@interface SATVRemotePairingStep : NSObject <SATVBaseStep>
{
    _Bool _hasAttemptedSilentActivation;	// 8 = 0x8
    SATVRemoteController *_pairRemoteController;	// 16 = 0x10
    id <SATVStepDelegate> stepDelegate;	// 24 = 0x18
    NSTimer *_touchlessSetupTimer;	// 32 = 0x20
    NSTimer *_TFDEPPollTimer;	// 40 = 0x28
}

+ (id)stepPresentationRecordKey;	// IMP=0x0000000100007360
+ (void)initialize;	// IMP=0x000000010000711c
- (void).cxx_destruct;	// IMP=0x000000010000863c
@property(nonatomic) _Bool hasAttemptedSilentActivation; // @synthesize hasAttemptedSilentActivation=_hasAttemptedSilentActivation;
@property(retain, nonatomic) NSTimer *TFDEPPollTimer; // @synthesize TFDEPPollTimer=_TFDEPPollTimer;
@property(retain, nonatomic) NSTimer *touchlessSetupTimer; // @synthesize touchlessSetupTimer=_touchlessSetupTimer;
@property(nonatomic) __weak id <SATVStepDelegate> stepDelegate; // @synthesize stepDelegate;
- (void)_autoAdvanceNow;	// IMP=0x00000001000085d0
- (void)_notifyDelegateAboutCompletionWithSuccessInfo:(_Bool)arg1;	// IMP=0x0000000100008500
- (void)_autoAdvanceIfNeeded;	// IMP=0x0000000100008310
- (void)_presentRemotePairingController:(id)arg1;	// IMP=0x00000001000082a0
@property(readonly, nonatomic, getter=_pairRemoteController) SATVRemoteController *pairRemoteController; // @synthesize pairRemoteController=_pairRemoteController;
- (void)_invalidateAllTimers;	// IMP=0x0000000100008128
- (void)_invalidateTouchlessTimer;	// IMP=0x00000001000080f4
- (void)_setupTouchlessTimerAfterDelay:(double)arg1 invocation:(id)arg2;	// IMP=0x0000000100008024
- (void)_beginTouchlessSetupWithInvocation:(id)arg1 afterDelay:(double)arg2;	// IMP=0x0000000100007ea0
- (_Bool)_isResumingTouchlessSetup;	// IMP=0x0000000100007de8
- (void)TFDEPPollTimerFired:(id)arg1;	// IMP=0x0000000100007ce4
- (_Bool)isTeslaEnrolled;	// IMP=0x0000000100007c34
- (void)_stopTFDEPPolling;	// IMP=0x0000000100007bac
- (void)_startTFDEPPolling;	// IMP=0x0000000100007afc
- (void)_retrieveCloudConfigurationDetails;	// IMP=0x0000000100007948
- (void)_attemptSilentActivationIfPossible;	// IMP=0x00000001000074e8
- (void)autoAdvance;	// IMP=0x00000001000074e4
- (_Bool)executeStepForContext:(id)arg1;	// IMP=0x000000010000736c
- (id)init;	// IMP=0x0000000100007180

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

