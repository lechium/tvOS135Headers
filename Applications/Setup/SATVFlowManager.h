//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SATVStepDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, SATVFlowProvider, SATVNavigationController, SATVUIFlowController, TVSStateMachine;
@protocol SATVBaseStep;

@interface SATVFlowManager : NSObject <SATVStepDelegate, UINavigationControllerDelegate>
{
    _Bool _isTouchlessSetupTemporarilyDisabled;	// 8 = 0x8
    SATVNavigationController *_navigationController;	// 16 = 0x10
    SATVUIFlowController *_uiFlowController;	// 24 = 0x18
    SATVFlowProvider *_flowProvider;	// 32 = 0x20
    TVSStateMachine *_stateMachine;	// 40 = 0x28
    id <SATVBaseStep> _activeStep;	// 48 = 0x30
    CDUnknownBlockType _completionHandler;	// 56 = 0x38
    NSArray *_buddyFlowStepClasses;	// 64 = 0x40
    NSDictionary *_stepClassesToPrefetchSteps;	// 72 = 0x48
    NSMutableArray *_executedStepClasses;	// 80 = 0x50
    NSMutableDictionary *_executedStepClassesToSteps;	// 88 = 0x58
}

+ (void)initialize;	// IMP=0x000000010002dbd4
- (void).cxx_destruct;	// IMP=0x0000000100030df4
@property(nonatomic) _Bool isTouchlessSetupTemporarilyDisabled; // @synthesize isTouchlessSetupTemporarilyDisabled=_isTouchlessSetupTemporarilyDisabled;
@property(readonly, nonatomic) NSMutableDictionary *executedStepClassesToSteps; // @synthesize executedStepClassesToSteps=_executedStepClassesToSteps;
@property(readonly, nonatomic) NSMutableArray *executedStepClasses; // @synthesize executedStepClasses=_executedStepClasses;
@property(copy, nonatomic) NSDictionary *stepClassesToPrefetchSteps; // @synthesize stepClassesToPrefetchSteps=_stepClassesToPrefetchSteps;
@property(copy, nonatomic) NSArray *buddyFlowStepClasses; // @synthesize buddyFlowStepClasses=_buddyFlowStepClasses;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) id <SATVBaseStep> activeStep; // @synthesize activeStep=_activeStep;
@property(retain, nonatomic) TVSStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(retain, nonatomic) SATVFlowProvider *flowProvider; // @synthesize flowProvider=_flowProvider;
@property(retain, nonatomic) SATVUIFlowController *uiFlowController; // @synthesize uiFlowController=_uiFlowController;
@property(retain, nonatomic) SATVNavigationController *navigationController; // @synthesize navigationController=_navigationController;
- (void)_processAndHandleCurrentStepForClass:(Class)arg1 withPreviousStepPresentationInfo:(id)arg2;	// IMP=0x0000000100030cd8
- (void)_notifyPrefetchStepsForTriggersFromSet:(id)arg1 shouldReset:(_Bool)arg2;	// IMP=0x000000010003097c
- (id)_stepContextForStepClass:(Class)arg1 withPreviousPresentationInfo:(id)arg2;	// IMP=0x0000000100030630
- (void)_updateFlowStepsTillStep:(Class)arg1;	// IMP=0x0000000100030554
- (void)_updateFlowForStep:(Class)arg1 withStepContext:(id)arg2;	// IMP=0x0000000100030040
- (id)_stepInstanceForStepClass:(Class)arg1;	// IMP=0x000000010002fdfc
- (id)_nextState;	// IMP=0x000000010002fcc8
- (id)_previousState;	// IMP=0x000000010002fc1c
- (_Bool)_isActiveStep:(id)arg1;	// IMP=0x000000010002fbb0
- (void)_configureAndStartFlow;	// IMP=0x000000010002fb34
- (void)_registerStateMachineHandlers;	// IMP=0x000000010002e94c
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x000000010002e788
- (void)finishBuddyFlowForStep:(id)arg1;	// IMP=0x000000010002e690
- (void)didPressMenuForStep:(id)arg1;	// IMP=0x000000010002e4f8
- (void)step:(id)arg1 didFailToFetchCloudConfigDetailsWithInfo:(id)arg2;	// IMP=0x000000010002e404
- (void)step:(id)arg1 triggerStatusDidChangeForTriggers:(id)arg2 shouldReset:(_Bool)arg3;	// IMP=0x000000010002e28c
- (void)step:(id)arg1 didCompleteWithInfo:(id)arg2;	// IMP=0x000000010002df44
- (void)displayViewController:(id)arg1 forStep:(id)arg2;	// IMP=0x000000010002de54
- (id)initWithNavigationController:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010002dc38

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

