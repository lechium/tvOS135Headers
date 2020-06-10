//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BKSDisplayRenderOverlayDescribing-Protocol.h"
#import "BSDescriptionProviding-Protocol.h"

@class BKDisplayRenderOverlayPersistenceCoordinator, BKSDisplayProgressIndicatorProperties, BKSDisplayRenderOverlayDescriptor, CADisplay, NSString;

@interface BKDisplayRenderOverlay : NSObject <BKSDisplayRenderOverlayDescribing, BSDescriptionProviding>
{
    BKSDisplayRenderOverlayDescriptor *_descriptor;	// 8 = 0x8
    BKDisplayRenderOverlayPersistenceCoordinator *_persistenceCoordinator;	// 16 = 0x10
    long long _type;	// 24 = 0x18
    float _level;	// 32 = 0x20
    _Bool _visible;	// 36 = 0x24
    _Bool _disablesDisplayUpdates;	// 37 = 0x25
    _Bool _animates;	// 38 = 0x26
    _Bool _frozen;	// 39 = 0x27
    double _scale;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000100022ed4
@property(nonatomic, getter=_scale, setter=_setScale:) double scale; // @synthesize scale=_scale;
@property(retain, nonatomic, getter=_persistenceCoordinator, setter=_setPersistenceCoordinator:) BKDisplayRenderOverlayPersistenceCoordinator *persistenceCoordinator; // @synthesize persistenceCoordinator=_persistenceCoordinator;
@property(readonly, nonatomic) _Bool isFrozen; // @synthesize isFrozen=_frozen;
@property(nonatomic) _Bool animates; // @synthesize animates=_animates;
@property(readonly, nonatomic) _Bool disablesDisplayUpdates; // @synthesize disablesDisplayUpdates=_disablesDisplayUpdates;
@property(nonatomic, setter=_setType:) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) float level; // @synthesize level=_level;
@property(readonly, nonatomic) BKSDisplayRenderOverlayDescriptor *descriptor; // @synthesize descriptor=_descriptor;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0000000100022dac
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0000000100022d58
- (id)succinctDescriptionBuilder;	// IMP=0x0000000100022cec
- (id)succinctDescription;	// IMP=0x0000000100022c98
@property(readonly, copy) NSString *description;
- (void)_wrapInCATransaction:(CDUnknownBlockType)arg1;	// IMP=0x0000000100022c18
- (id)_persistenceData;	// IMP=0x0000000100022b9c
- (void)_cleanup;	// IMP=0x0000000100022b98
- (void)_freeze;	// IMP=0x0000000100022b94
- (void)_dismissWithAnimationSettings:(id)arg1;	// IMP=0x0000000100022b90
- (void)_stopAnimating;	// IMP=0x0000000100022b8c
- (void)_startAnimating;	// IMP=0x0000000100022b88
- (_Bool)_presentWithAnimationSettings:(id)arg1;	// IMP=0x0000000100022b80
- (void)dismissWithAnimationSettings:(id)arg1;	// IMP=0x0000000100022a28
- (void)freeze;	// IMP=0x0000000100022850
- (_Bool)presentWithAnimationSettings:(id)arg1;	// IMP=0x0000000100022668
@property(readonly, nonatomic, getter=isInterstitial) _Bool interstitial;
@property(readonly, nonatomic) BKSDisplayProgressIndicatorProperties *progressIndicatorProperties;
@property(readonly, nonatomic) _Bool lockBacklight;
@property(readonly, nonatomic) long long interfaceOrientation;
@property(readonly, retain, nonatomic) CADisplay *display;
@property(readonly, copy, nonatomic) NSString *name;
- (void)dealloc;	// IMP=0x00000001000224ac
- (id)_initWithPersistenceData:(id)arg1;	// IMP=0x00000001000223f0
- (id)initWithOverlayDescriptor:(id)arg1 level:(float)arg2;	// IMP=0x0000000100022250

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
