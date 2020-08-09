//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, SATVNavigationController;
@protocol SATVBaseStep;

@interface SATVUIFlowController : NSObject
{
    SATVNavigationController *_navigationController;	// 8 = 0x8
    NSArray *_flowStepClasses;	// 16 = 0x10
    NSMutableArray *_presentedSteps;	// 24 = 0x18
    NSMutableDictionary *_presentedStepClassesToViewControllers;	// 32 = 0x20
    id <SATVBaseStep> _lastPresentedStep;	// 40 = 0x28
}

+ (void)initialize;	// IMP=0x0000000100015264
- (void).cxx_destruct;	// IMP=0x00000001000160a4
@property(retain, nonatomic) id <SATVBaseStep> lastPresentedStep; // @synthesize lastPresentedStep=_lastPresentedStep;
@property(retain, nonatomic) NSMutableDictionary *presentedStepClassesToViewControllers; // @synthesize presentedStepClassesToViewControllers=_presentedStepClassesToViewControllers;
@property(retain, nonatomic) NSMutableArray *presentedSteps; // @synthesize presentedSteps=_presentedSteps;
@property(copy, nonatomic) NSArray *flowStepClasses; // @synthesize flowStepClasses=_flowStepClasses;
@property(retain, nonatomic) SATVNavigationController *navigationController; // @synthesize navigationController=_navigationController;
- (_Bool)_isPresentableStepAfterCurrentlyActiveStep:(id)arg1;	// IMP=0x0000000100015e70
- (id)_presentedStepClassesToSteps;	// IMP=0x0000000100015d1c
- (void)_removeAllStepsTillStep:(id)arg1;	// IMP=0x0000000100015c1c
- (_Bool)_wasStepPresented:(id)arg1;	// IMP=0x0000000100015b00
- (void)_configurePresentableStep:(id)arg1 withViewController:(id)arg2;	// IMP=0x0000000100015714
- (void)popToStepViewControllerForStep:(id)arg1;	// IMP=0x0000000100015578
- (void)presentStepViewController:(id)arg1 forStep:(id)arg2;	// IMP=0x00000001000153dc
- (id)viewControllerForStepClass:(Class)arg1;	// IMP=0x00000001000153a8
- (id)initWithNavigationController:(id)arg1 flowStepClasses:(id)arg2;	// IMP=0x00000001000152c8

@end

