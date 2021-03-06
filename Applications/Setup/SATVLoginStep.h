//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SATVBaseStep-Protocol.h"

@class NSString, SATVLoginViewController;
@protocol SATVStepDelegate;

@interface SATVLoginStep : NSObject <SATVBaseStep>
{
    id <SATVStepDelegate> stepDelegate;	// 8 = 0x8
    SATVLoginViewController *_loginViewController;	// 16 = 0x10
}

+ (id)stepPresentationRecordKey;	// IMP=0x000000010003335c
+ (void)initialize;	// IMP=0x00000001000332f8
- (void).cxx_destruct;	// IMP=0x0000000100033ad8
@property(retain, nonatomic) SATVLoginViewController *loginViewController; // @synthesize loginViewController=_loginViewController;
@property(nonatomic) __weak id <SATVStepDelegate> stepDelegate; // @synthesize stepDelegate;
- (_Bool)_isAuthenticated;	// IMP=0x0000000100033a4c
- (void)_notifyTriggerStatusChangeIfNeeded:(_Bool)arg1;	// IMP=0x00000001000339bc
- (void)_sendStepCompletionNotificationWithSuccessInfo:(_Bool)arg1;	// IMP=0x0000000100033820
- (void)_presentLoginViewController;	// IMP=0x00000001000335f0
- (void)autoAdvance;	// IMP=0x000000010003355c
- (_Bool)executeStepForContext:(id)arg1;	// IMP=0x0000000100033368

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

