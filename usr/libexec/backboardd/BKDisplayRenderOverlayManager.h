//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BKBacklightManager, BKOrientationManager, CAWindowServer, NSMutableIndexSet, NSMutableSet;
@protocol OS_dispatch_queue;

@interface BKDisplayRenderOverlayManager : NSObject
{
    CAWindowServer *_windowServer;	// 8 = 0x8
    BKOrientationManager *_orientationManager;	// 16 = 0x10
    BKBacklightManager *_backlightManager;	// 24 = 0x18
    NSMutableSet *_activeOverlays;	// 32 = 0x20
    NSMutableSet *_overlaysDisablingUpdates;	// 40 = 0x28
    long long _lockedOrientation;	// 48 = 0x30
    _Bool _backlightLocked;	// 56 = 0x38
    NSMutableIndexSet *_frozenDisplayIDs;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_queue;	// 72 = 0x48
}

+ (id)sharedInstance;	// IMP=0x0000000100069e04
- (void).cxx_destruct;	// IMP=0x0000000100069458
@property(readonly, nonatomic) long long lockedOrientation; // @synthesize lockedOrientation=_lockedOrientation;
@property(readonly, nonatomic) _Bool backlightLocked; // @synthesize backlightLocked=_backlightLocked;
@property(readonly, nonatomic) NSMutableSet *overlaysDisablingUpdates; // @synthesize overlaysDisablingUpdates=_overlaysDisablingUpdates;
- (id)_updateWindowServerUpdatesForOverlays:(id)arg1;	// IMP=0x000000010006929c
- (void)_queue_setBacklightLocked:(_Bool)arg1;	// IMP=0x0000000100069214
- (void)_queue_setLockedOrientation:(long long)arg1;	// IMP=0x0000000100069194
- (void)_queue_updateStateForActiveOverlayChange;	// IMP=0x000000010006908c
- (void)_queue_freezeOverlay:(id)arg1;	// IMP=0x0000000100068dc0
- (void)_queue_setOverlaysDisablingUpdates:(id)arg1;	// IMP=0x0000000100068d64
- (_Bool)isShowingNonBootUIOverlays;	// IMP=0x0000000100068cd4
- (void)prepareForRestart;	// IMP=0x0000000100068c7c
- (_Bool)freezeOverlay:(id)arg1;	// IMP=0x0000000100068bc4
- (_Bool)removeOverlay:(id)arg1 withAnimationSettings:(id)arg2;	// IMP=0x0000000100068ac8
- (_Bool)applyOverlay:(id)arg1 withAnimationSettings:(id)arg2;	// IMP=0x00000001000689d0
@property(readonly, nonatomic) NSMutableSet *activeOverlays; // @synthesize activeOverlays=_activeOverlays;
- (id)activeOverlayWithDescriptor:(id)arg1;	// IMP=0x0000000100068830
- (id)description;	// IMP=0x00000001000687a8
- (id)_initWithPersistenceCoordinator:(id)arg1 orientationManager:(id)arg2 backlightManager:(id)arg3 windowServer:(id)arg4;	// IMP=0x00000001000682c0

@end

