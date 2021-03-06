//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BKTouchLifecycleObserver-Protocol.h"

@class BKDisplayAnnotationController, NSString;
@protocol OS_dispatch_queue;

@interface BKTouchAnnotationController : NSObject <BKTouchLifecycleObserver>
{
    _Bool _shouldVisualizeTouches;	// 8 = 0x8
    _Bool _shouldVisualizeHitTestRegions;	// 9 = 0x9
    BKDisplayAnnotationController *_displayAnnotationController;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_workQueue;	// 24 = 0x18
}

+ (id)workQueue;	// IMP=0x0000000100024f4c
- (void).cxx_destruct;	// IMP=0x00000001000244d8
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) BKDisplayAnnotationController *displayAnnotationController; // @synthesize displayAnnotationController=_displayAnnotationController;
- (void)_queue_touchWasSoftCanceled:(unsigned int)arg1;	// IMP=0x00000001000242f0
- (void)_queue_touchWasHardCanceled:(unsigned int)arg1;	// IMP=0x0000000100024234
- (void)_queue_setCenter:(struct CGPoint)arg1 forTouchIdentifier:(unsigned int)arg2;	// IMP=0x00000001000240b4
- (id)_keyPathForTouchIdentifier:(unsigned int)arg1;	// IMP=0x000000010002407c
- (int)_pidForClientPort:(unsigned int)arg1;	// IMP=0x0000000100023ff0
- (id)_stringDescribingContextID:(unsigned int)arg1 clientPort:(unsigned int)arg2;	// IMP=0x0000000100023ec8
- (id)_stringDescribingPID:(int)arg1;	// IMP=0x0000000100023d84
- (void)_queue_annotateTouch:(unsigned int)arg1 withString:(id)arg2 uniqueIdentifier:(id)arg3 fromPID:(int)arg4;	// IMP=0x0000000100023ac8
- (void)_queue_annotateTouch:(unsigned int)arg1 withUniqueString:(id)arg2;	// IMP=0x0000000100023ab4
- (void)hitTestRegionsDidChange:(id)arg1;	// IMP=0x0000000100023a30
- (void)touchDidFinishProcessingTouchCollection;	// IMP=0x0000000100023a2c
- (void)touchWillStartProcessingTouchCollection;	// IMP=0x0000000100023a28
- (void)touchDidSoftCancel:(unsigned int)arg1;	// IMP=0x00000001000239cc
- (void)touch:(unsigned int)arg1 didAlwaysRouteToContext:(unsigned int)arg2 clientPort:(unsigned int)arg3;	// IMP=0x000000010002396c
- (void)touchDidHIDCancel:(unsigned int)arg1;	// IMP=0x0000000100023910
- (void)touch:(unsigned int)arg1 upAtPoint:(struct CGPoint)arg2;	// IMP=0x00000001000238b4
- (void)touch:(unsigned int)arg1 didMoveToPoint:(struct CGPoint)arg2 eventMask:(unsigned int)arg3;	// IMP=0x0000000100023854
- (void)touchDidDetach:(unsigned int)arg1;	// IMP=0x00000001000237f8
- (void)touch:(unsigned int)arg1 didHitTestToContextID:(unsigned int)arg2 clientPort:(unsigned int)arg3 hostingChainIndex:(long long)arg4;	// IMP=0x0000000100023798
- (void)touch:(unsigned int)arg1 downAtPoint:(struct CGPoint)arg2 eventMask:(unsigned int)arg3;	// IMP=0x0000000100023738
- (void)annotateTouch:(unsigned int)arg1 withString:(id)arg2 uniqueIdentifier:(id)arg3 fromPID:(int)arg4;	// IMP=0x000000010002365c
- (void)annotateTouch:(unsigned int)arg1 withString:(id)arg2 uniqueIdentifier:(id)arg3;	// IMP=0x0000000100023588
- (void)annotateTouch:(unsigned int)arg1 withUniqueString:(id)arg2;	// IMP=0x00000001000234f4
@property _Bool shouldVisualizeHitTestRegions;
@property _Bool shouldVisualizeTouches;
- (id)initWithDisplayUUID:(id)arg1;	// IMP=0x000000010002323c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

