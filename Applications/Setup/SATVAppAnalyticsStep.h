//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SATVBaseStep-Protocol.h"

@class NSString, SATVAppAnalyticsController;
@protocol SATVStepDelegate;

@interface SATVAppAnalyticsStep : NSObject <SATVBaseStep>
{
    id <SATVStepDelegate> stepDelegate;	// 8 = 0x8
    SATVAppAnalyticsController *_appAnalyticsController;	// 16 = 0x10
}

+ (id)stepPresentationRecordKey;	// IMP=0x0000000100006be8
+ (void)initialize;	// IMP=0x0000000100006b84
- (void).cxx_destruct;	// IMP=0x00000001000070f0
@property(retain, nonatomic) SATVAppAnalyticsController *appAnalyticsController; // @synthesize appAnalyticsController=_appAnalyticsController;
@property(nonatomic) __weak id <SATVStepDelegate> stepDelegate; // @synthesize stepDelegate;
- (void)_sendStepCompletionNotification;	// IMP=0x0000000100007048
- (void)_presentAppAnalyticsController;	// IMP=0x0000000100006e0c
- (void)autoAdvance;	// IMP=0x0000000100006d78
- (_Bool)executeStepForContext:(id)arg1;	// IMP=0x0000000100006bf4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

