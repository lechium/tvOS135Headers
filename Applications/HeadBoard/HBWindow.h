//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIWindow.h>

@class UIView;

@interface HBWindow : UIWindow
{
    _Bool _applicationWallpaperEnabled;	// 8 = 0x8
    UIView *_wallpaperView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100043280
@property(readonly, nonatomic) UIView *wallpaperView; // @synthesize wallpaperView=_wallpaperView;
@property(nonatomic, getter=isApplicationWallpaperEnabled) _Bool applicationWallpaperEnabled; // @synthesize applicationWallpaperEnabled=_applicationWallpaperEnabled;
- (_Bool)shouldUpdateFocusInContext:(id)arg1;	// IMP=0x0000000100043168
- (void)_didCompleteSystemSnapshot:(id)arg1;	// IMP=0x00000001000430d8
- (void)_willBeginSystemSnapshot:(id)arg1;	// IMP=0x0000000100042fb4
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100042e04

@end

