//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SATVBaseStep-Protocol.h"

@class NSString, SATVAirplay2ViewController;
@protocol SATVStepDelegate;

@interface SATVAirplay2Step : NSObject <SATVBaseStep>
{
    id <SATVStepDelegate> stepDelegate;	// 8 = 0x8
    SATVAirplay2ViewController *_airplay2ViewController;	// 16 = 0x10
}

+ (_Bool)_isSupportedForUpgrade;	// IMP=0x000000010000982c
+ (_Bool)_isSupported;	// IMP=0x00000001000097d8
+ (id)stepPresentationRecordKey;	// IMP=0x0000000100009488
+ (void)initialize;	// IMP=0x0000000100009424
- (void).cxx_destruct;	// IMP=0x0000000100009ce8
@property(retain, nonatomic) SATVAirplay2ViewController *airplay2ViewController; // @synthesize airplay2ViewController=_airplay2ViewController;
@property(nonatomic) __weak id <SATVStepDelegate> stepDelegate; // @synthesize stepDelegate;
- (void)_sendStepCompletionNotificationWithSuccessInfo:(_Bool)arg1;	// IMP=0x0000000100009b58
- (void)_presentAirplay2ViewController;	// IMP=0x0000000100009928
- (void)autoAdvance;	// IMP=0x0000000100009744
- (_Bool)executeStepForContext:(id)arg1;	// IMP=0x0000000100009494

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
