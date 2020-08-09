//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BaseBoard/BSTransaction.h>

@class NSDictionary, PBScreenSaverContentPresentingViewController;

@interface PBScreenSaverPresentationTransaction : BSTransaction
{
    _Bool _animated;	// 8 = 0x8
    PBScreenSaverContentPresentingViewController *_screenSaverViewController;	// 16 = 0x10
    NSDictionary *_options;	// 24 = 0x18
    CDStruct_090c3085 _context;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000010013a9f4
@property(readonly, nonatomic) CDStruct_090c3085 context; // @synthesize context=_context;
@property(readonly, nonatomic, getter=isAnimated) _Bool animated; // @synthesize animated=_animated;
@property(readonly, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(readonly, nonatomic) PBScreenSaverContentPresentingViewController *screenSaverViewController; // @synthesize screenSaverViewController=_screenSaverViewController;
- (void)_prepareKioskAnimationInTransaction:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010013a2d4
- (id)_defaultAppAnimationTransaction;	// IMP=0x000000010013a160
- (void)_begin;	// IMP=0x0000000100139a04
- (_Bool)_canBeInterrupted;	// IMP=0x00000001001399e8
- (id)initWithScreenSaverViewController:(id)arg1 animated:(_Bool)arg2 options:(id)arg3;	// IMP=0x000000010013985c

@end

