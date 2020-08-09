//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TVSSSlideshowUtilities : NSObject
{
    long long _mode;	// 8 = 0x8
}

@property(nonatomic) long long mode; // @synthesize mode=_mode;
- (id)_getRandomizedMarimbaTheme;	// IMP=0x0000000100008038
- (void)_setTransitionTiming:(double)arg1 marimbaView:(id)arg2;	// IMP=0x0000000100007d1c
- (id)alertControllerDisplayingTimePerSlideOptionsForCell:(id)arg1;	// IMP=0x0000000100007958
- (_Bool)themeHasAdditionalOptions:(id)arg1;	// IMP=0x00000001000078e0
- (double)timePerSlide;	// IMP=0x0000000100007830
- (void)cleanUpMarimbaResources:(id)arg1;	// IMP=0x0000000100007794
- (void)updateMarimbaView:(id)arg1 transitionTiming:(double)arg2;	// IMP=0x00000001000074bc
- (void)updateTransitionTimingForMarimbaView:(id)arg1;	// IMP=0x00000001000074ac
- (void)updateMarimbaView:(id)arg1 currentTheme:(id)arg2 currentTransition:(id)arg3;	// IMP=0x0000000100006b60
- (id)updateMarimbaDocument:(id)arg1 photoAssets:(id)arg2;	// IMP=0x000000010000656c
- (id)init;	// IMP=0x0000000100006520
- (id)initWithMarimbaMode:(long long)arg1;	// IMP=0x00000001000064d8

@end
