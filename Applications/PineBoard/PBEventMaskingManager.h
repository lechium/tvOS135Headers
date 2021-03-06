//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBSystemOverlayControllerDelegate-Protocol.h"
#import "PBSystemOverlayUIProvider-Protocol.h"
#import "PBSystemUIManaging-Protocol.h"

@class NSString, PBSystemOverlayController;

@interface PBEventMaskingManager : NSObject <PBSystemOverlayUIProvider, PBSystemOverlayControllerDelegate, PBSystemUIManaging>
{
    PBSystemOverlayController *_overlayController;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00000001000dfc18
- (void).cxx_destruct;	// IMP=0x00000001000e0210
@property(readonly, nonatomic) PBSystemOverlayController *overlayController; // @synthesize overlayController=_overlayController;
- (void)prepareUIForSystemOverlayPresentationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000e010c
- (void)dismiss;	// IMP=0x00000001000dffe4
- (void)present;	// IMP=0x00000001000dfeb0
@property(readonly, nonatomic, getter=isPresenting) _Bool presenting;
- (id)init;	// IMP=0x00000001000dfd14

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

