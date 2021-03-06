//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SATVPrefetchStep-Protocol.h"

@class NSString, SATVVideoSubscriberAccountContainerViewController;
@protocol SATVStepDelegate;

@interface SATVVideoSubscriberAccountStep : NSObject <SATVPrefetchStep>
{
    id <SATVStepDelegate> stepDelegate;	// 8 = 0x8
    SATVVideoSubscriberAccountContainerViewController *_videoSubscriberContainerVC;	// 16 = 0x10
}

+ (id)stepPresentationRecordKey;	// IMP=0x0000000100058dc8
+ (id)triggers;	// IMP=0x0000000100058db0
+ (void)initialize;	// IMP=0x0000000100058ce0
- (void).cxx_destruct;	// IMP=0x0000000100059344
@property(retain, nonatomic, getter=_videoSubscriberContainerVC) SATVVideoSubscriberAccountContainerViewController *videoSubscriberContainerVC; // @synthesize videoSubscriberContainerVC=_videoSubscriberContainerVC;
@property(nonatomic) __weak id <SATVStepDelegate> stepDelegate; // @synthesize stepDelegate;
- (void)_presentVideoSubscriberContainerViewController;	// IMP=0x0000000100059294
- (id)_videoSubscriberContainerViewController;	// IMP=0x0000000100059044
- (void)autoAdvance;	// IMP=0x0000000100058fb0
- (_Bool)executeStepForContext:(id)arg1;	// IMP=0x0000000100058dd4
- (void)triggerStatusDidChangeForTriggers:(id)arg1 shouldReset:(_Bool)arg2;	// IMP=0x0000000100058dc4
- (void)deviceDidActivateWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100058d44

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

