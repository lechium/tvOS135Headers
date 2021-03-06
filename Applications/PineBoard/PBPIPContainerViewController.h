//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "PGPictureInPictureViewControllerContentContainer-Protocol.h"

@class NSString, PBPIPControlsViewController, PGPictureInPictureViewController, _PBPIPHintView;
@protocol PBPIPContainerViewControllerAnimationDelegate;

@interface PBPIPContainerViewController : UIViewController <PGPictureInPictureViewControllerContentContainer>
{
    PGPictureInPictureViewController *_pictureInPictureViewController;	// 8 = 0x8
    id <PBPIPContainerViewControllerAnimationDelegate> _animationDelegate;	// 16 = 0x10
    PBPIPControlsViewController *_controlsViewController;	// 24 = 0x18
    _PBPIPHintView *_hintView;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100033a4c
@property(nonatomic) __weak _PBPIPHintView *hintView; // @synthesize hintView=_hintView;
@property(readonly, nonatomic) PBPIPControlsViewController *controlsViewController; // @synthesize controlsViewController=_controlsViewController;
@property(nonatomic) __weak id <PBPIPContainerViewControllerAnimationDelegate> animationDelegate; // @synthesize animationDelegate=_animationDelegate;
@property(retain, nonatomic) PGPictureInPictureViewController *pictureInPictureViewController; // @synthesize pictureInPictureViewController=_pictureInPictureViewController;
- (void)performStopAnimationWithFinalInterfaceOrientation:(long long)arg1 finalLayerFrame:(struct CGRect)arg2 animationHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000001000337d0
- (void)prepareStopAnimationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100033740
- (void)performStartAnimationWithAnimationHandler:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100033678
- (void)prepareStartAnimationWithInitialInterfaceOrientation:(long long)arg1 initialLayerFrame:(struct CGRect)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000335c8
- (void)preferredContentSizeDidChangeForPictureInPictureViewController;	// IMP=0x00000001000335b4
- (void)hideControlsHint;	// IMP=0x000000010003337c
- (void)showControlsHint;	// IMP=0x0000000100032c58
- (void)_hideControlsUsingAnimationStyle:(long long)arg1;	// IMP=0x0000000100032adc
- (void)_showControlsUsingAnimationStyle:(long long)arg1 inQuadrant:(long long)arg2;	// IMP=0x0000000100032504
- (void)setEditing:(_Bool)arg1 animationStyle:(long long)arg2 inQuadrant:(long long)arg3;	// IMP=0x00000001000323ec
- (id)preferredFocusEnvironments;	// IMP=0x00000001000322c0
- (void)viewDidLoad;	// IMP=0x0000000100031cfc
- (void)dealloc;	// IMP=0x0000000100031c64
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100031b54
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000100031a10
- (id)initWithPictureInPictureViewController:(id)arg1;	// IMP=0x00000001000318dc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

