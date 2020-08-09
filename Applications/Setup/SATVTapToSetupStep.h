//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SATVBaseStep-Protocol.h"

@class NSString, SATVTapToSetupContainerViewController;
@protocol SATVStepDelegate;

@interface SATVTapToSetupStep : NSObject <SATVBaseStep>
{
    id <SATVStepDelegate> stepDelegate;	// 8 = 0x8
    SATVTapToSetupContainerViewController *_tapToSetupContainerViewController;	// 16 = 0x10
}

+ (id)stepPresentationRecordKey;	// IMP=0x0000000100011c0c
+ (void)initialize;	// IMP=0x0000000100011ba8
- (void).cxx_destruct;	// IMP=0x0000000100012298
@property(retain, nonatomic) SATVTapToSetupContainerViewController *tapToSetupContainerViewController; // @synthesize tapToSetupContainerViewController=_tapToSetupContainerViewController;
@property(nonatomic) __weak id <SATVStepDelegate> stepDelegate; // @synthesize stepDelegate;
- (_Bool)_isAuthenticated;	// IMP=0x000000010001220c
- (void)_notifyTriggerStatusChangeIfNeeded:(_Bool)arg1;	// IMP=0x00000001000120f4
- (void)_presentTapToSetupController;	// IMP=0x0000000100011e5c
- (void)autoAdvance;	// IMP=0x0000000100011dc8
- (_Bool)executeStepForContext:(id)arg1;	// IMP=0x0000000100011c18

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

