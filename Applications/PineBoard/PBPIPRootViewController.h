//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "PBPIPContainerViewControllerAnimationDelegate-Protocol.h"
#import "PBPIPControlsDelegate-Protocol.h"

@class NSArray, NSMutableDictionary, NSMutableSet, NSString, TVSStateMachine, _PBPIPPresentationRequest;
@protocol PBPIPRootViewControllerDelegate;

@interface PBPIPRootViewController : UIViewController <PBPIPContainerViewControllerAnimationDelegate, PBPIPControlsDelegate>
{
    id <PBPIPRootViewControllerDelegate> _delegate;	// 8 = 0x8
    long long _currentQuadrant;	// 16 = 0x10
    unsigned long long _presentationState;	// 24 = 0x18
    NSMutableSet *_containerViewControllerLayouts;	// 32 = 0x20
    NSMutableDictionary *_pipSafeAreaInsets;	// 40 = 0x28
    TVSStateMachine *_stateMachine;	// 48 = 0x30
    _PBPIPPresentationRequest *_pendingSwapRequest;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000100159a74
@property(readonly, nonatomic) _PBPIPPresentationRequest *pendingSwapRequest; // @synthesize pendingSwapRequest=_pendingSwapRequest;
@property(readonly, nonatomic) TVSStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(retain, nonatomic) NSMutableDictionary *pipSafeAreaInsets; // @synthesize pipSafeAreaInsets=_pipSafeAreaInsets;
@property(readonly, nonatomic) NSMutableSet *containerViewControllerLayouts; // @synthesize containerViewControllerLayouts=_containerViewControllerLayouts;
@property(readonly, nonatomic) unsigned long long presentationState; // @synthesize presentationState=_presentationState;
@property(nonatomic) long long currentQuadrant; // @synthesize currentQuadrant=_currentQuadrant;
@property(nonatomic) __weak id <PBPIPRootViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_animatorFromAnimationSettings:(id)arg1;	// IMP=0x00000001001595ec
- (id)_layoutForContainerViewControllerState:(long long)arg1;	// IMP=0x00000001001593c4
- (id)_layoutForContainerViewController:(id)arg1;	// IMP=0x0000000100159140
- (void)cancelPictureInPicture;	// IMP=0x0000000100159078
- (void)stopPictureInPicture;	// IMP=0x0000000100158fb0
- (void)controlsDidSelectTogglePlayPause:(id)arg1;	// IMP=0x0000000100158f28
- (void)controlsDidSelectDismissControls:(id)arg1;	// IMP=0x0000000100158e9c
- (void)controlsDidSelectCancelPictureInPicture:(id)arg1;	// IMP=0x0000000100158da8
- (void)controlsDidSelectStopPictureInPicture:(id)arg1;	// IMP=0x0000000100158cb4
- (long long)controlsDidSelectMovePictureInPictureToNextQuadrant:(id)arg1;	// IMP=0x0000000100158bd4
- (void)containerViewController:(id)arg1 performStopAnimationWithFinalLayerFrame:(struct CGRect)arg2 animationHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000001001588c0
- (void)containerViewController:(id)arg1 prepareStopAnimationWithCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010015866c
- (void)containerViewController:(id)arg1 performStartAnimationWithAnimationHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001001583b8
- (void)containerViewController:(id)arg1 prepareStartAnimationWithInitialLayerFrame:(struct CGRect)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010015810c
- (void)setPresentationState:(unsigned long long)arg1;	// IMP=0x0000000100158068
- (void)_handlePrepareStopRequestWithUserInfo:(id)arg1;	// IMP=0x0000000100157da0
- (void)_performAnimationOnLayout:(id)arg1 toTargetSize:(struct CGSize)arg2 animationHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100157a0c
- (void)_handlePrepareStartRequestWithLayout:(id)arg1 userInfo:(id)arg2;	// IMP=0x0000000100157814
- (CDUnknownBlockType)_machineStateChangeHandler;	// IMP=0x0000000100157678
- (id)_createStateMachine;	// IMP=0x0000000100154b64
- (void)setHidden:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001547d8
- (void)setHidden:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100154780
@property(nonatomic, getter=isHidden) _Bool hidden;
- (void)updateAdditionalSafeAreaInsets;	// IMP=0x00000001001543bc
- (void)applyInsets:(struct UIEdgeInsets)arg1 fromSource:(id)arg2 animated:(_Bool)arg3 withAnimationSettings:(id)arg4 usingAnimationFence:(id)arg5;	// IMP=0x0000000100153f30
- (void)moveContainerWithLayout:(id)arg1 toQuadrant:(long long)arg2 animated:(_Bool)arg3;	// IMP=0x0000000100153b08
- (void)_handleBackgroundViewWhenEditing:(_Bool)arg1 animationStyle:(long long)arg2;	// IMP=0x00000001001536c8
- (void)setEditing:(_Bool)arg1 animationStyle:(long long)arg2;	// IMP=0x000000010015355c
- (_Bool)isEditing;	// IMP=0x00000001001534bc
- (struct CGRect)currentContainerFrame;	// IMP=0x0000000100153314
- (void)removeContainerViewController:(id)arg1;	// IMP=0x0000000100153190
- (void)addContainerViewController:(id)arg1;	// IMP=0x0000000100152f8c
@property(readonly, nonatomic) NSArray *containerViewControllers;
- (id)preferredFocusEnvironments;	// IMP=0x0000000100152b60
- (id)fullscreenLayout;	// IMP=0x0000000100152b24
- (id)pictureInPictureLayout;	// IMP=0x0000000100152ae4
- (_Bool)isPictureInPictureActive;	// IMP=0x0000000100152a8c
- (id)initWithInitialQuadrant:(long long)arg1;	// IMP=0x0000000100152900

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

