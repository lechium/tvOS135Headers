//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIPresentationController.h>

@class UIVisualEffectView;

@interface TVPModalPresentationController : UIPresentationController
{
    UIVisualEffectView *_visualEffectView;	// 8 = 0x8
    long long _blurStyle;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000331d8
@property(readonly, nonatomic) long long blurStyle; // @synthesize blurStyle=_blurStyle;
@property(readonly, nonatomic) UIVisualEffectView *visualEffectView; // @synthesize visualEffectView=_visualEffectView;
- (void)_animateWithCoordinator:(id)arg1 isPresenting:(_Bool)arg2;	// IMP=0x0000000100032ea4
- (void)_configureSubviews;	// IMP=0x0000000100032de4
- (void)dismissalTransitionWillBegin;	// IMP=0x0000000100032d5c
- (void)presentationTransitionWillBegin;	// IMP=0x0000000100032cd4
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;	// IMP=0x0000000100032c74
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 blurStyle:(long long)arg3;	// IMP=0x0000000100032bf0

@end

