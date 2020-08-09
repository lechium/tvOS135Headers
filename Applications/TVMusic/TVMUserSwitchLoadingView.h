//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIActivityIndicatorView, UILabel, UIVisualEffectView, UIWindow;

@interface TVMUserSwitchLoadingView : UIView
{
    _Bool _hiding;	// 8 = 0x8
    _Bool _isTimeoutEnabled;	// 9 = 0x9
    UIWindow *_userSwitchOverlayWindow;	// 16 = 0x10
    UIView *_userSwitchSnapshotView;	// 24 = 0x18
    UIVisualEffectView *_userSwitchEffectView;	// 32 = 0x20
    UILabel *_userSwitchLabel;	// 40 = 0x28
    UIActivityIndicatorView *_userSpinnerView;	// 48 = 0x30
}

+ (id)loadingScreen;	// IMP=0x00000001000aabdc
- (void).cxx_destruct;	// IMP=0x00000001000ac308
@property(nonatomic) _Bool isTimeoutEnabled; // @synthesize isTimeoutEnabled=_isTimeoutEnabled;
@property(nonatomic) _Bool hiding; // @synthesize hiding=_hiding;
@property(retain, nonatomic) UIActivityIndicatorView *userSpinnerView; // @synthesize userSpinnerView=_userSpinnerView;
@property(retain, nonatomic) UILabel *userSwitchLabel; // @synthesize userSwitchLabel=_userSwitchLabel;
@property(retain, nonatomic) UIVisualEffectView *userSwitchEffectView; // @synthesize userSwitchEffectView=_userSwitchEffectView;
@property(retain, nonatomic) UIView *userSwitchSnapshotView; // @synthesize userSwitchSnapshotView=_userSwitchSnapshotView;
@property(retain, nonatomic) UIWindow *userSwitchOverlayWindow; // @synthesize userSwitchOverlayWindow=_userSwitchOverlayWindow;
- (_Bool)isVisible;	// IMP=0x00000001000ac1e4
- (void)hide;	// IMP=0x00000001000abc68
- (void)timeout;	// IMP=0x00000001000abc24
- (void)showOverKeyWindowWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000aac98
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000aab40

@end
