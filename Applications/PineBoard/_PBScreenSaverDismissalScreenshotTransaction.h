//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BaseBoard/BSTransaction.h>

@class PBScreenSaverContentPresentingViewController;

@interface _PBScreenSaverDismissalScreenshotTransaction : BSTransaction
{
    _Bool _shouldUpdateWallpaper;	// 8 = 0x8
    PBScreenSaverContentPresentingViewController *_screenSaverViewController;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000fa86c
@property(retain, nonatomic) PBScreenSaverContentPresentingViewController *screenSaverViewController; // @synthesize screenSaverViewController=_screenSaverViewController;
@property(nonatomic) _Bool shouldUpdateWallpaper; // @synthesize shouldUpdateWallpaper=_shouldUpdateWallpaper;
- (void)_begin;	// IMP=0x00000001000fa294
- (_Bool)_canBeInterrupted;	// IMP=0x00000001000fa278

@end

