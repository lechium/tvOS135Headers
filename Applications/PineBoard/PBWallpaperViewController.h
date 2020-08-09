//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "PBSystemOverlayContentPresenting-Protocol.h"

@class UIView;
@protocol PBSystemOverlayContentDelegate;

@interface PBWallpaperViewController : UIViewController <PBSystemOverlayContentPresenting>
{
    _Bool _idleModeActive;	// 8 = 0x8
    _Bool _allowsInteraction;	// 9 = 0x9
    _Bool _acceptsEventFocus;	// 10 = 0xa
    id <PBSystemOverlayContentDelegate> _contentDelegate;	// 16 = 0x10
    UIView *_wallpaperView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100107f78
@property(nonatomic) _Bool acceptsEventFocus; // @synthesize acceptsEventFocus=_acceptsEventFocus;
@property(readonly, nonatomic) _Bool allowsInteraction; // @synthesize allowsInteraction=_allowsInteraction;
@property(retain, nonatomic) UIView *wallpaperView; // @synthesize wallpaperView=_wallpaperView;
@property(readonly, nonatomic, getter=isIdleModeActive) _Bool idleModeActive; // @synthesize idleModeActive=_idleModeActive;
@property(nonatomic) __weak id <PBSystemOverlayContentDelegate> contentDelegate; // @synthesize contentDelegate=_contentDelegate;
- (void)dismissContentAnimated:(_Bool)arg1 clientOptions:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100107b10
- (void)presentContentAnimated:(_Bool)arg1 clientOptions:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x000000010010785c
@property(readonly, nonatomic) _Bool expectsEventForwarding;
@property(readonly, nonatomic, getter=isInterruptible) _Bool interruptible;
- (id)_wallpaperForFocusedProcessWithVariant:(long long)arg1;	// IMP=0x000000010010760c
- (void)_updateWallpaperForFocusedProcess;	// IMP=0x00000001001074b4
- (void)updateWallpaperWithTransitionContext:(id)arg1;	// IMP=0x00000001001070f4
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000100106fd0
- (void)setIdleModeActive:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100106c84
- (void)viewDidLoad;	// IMP=0x0000000100106c20
- (void)dealloc;	// IMP=0x0000000100106b5c
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000001001069d4

@end

