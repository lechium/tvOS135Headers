/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:41 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIPresentationController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol UIPreviewPresentationControllerDelegate;
@class UITapGestureRecognizer, UIVisualEffectView, UIView, NSArray, NSHashTable, UIResponder, UIWindow, NSString;

@interface UIPreviewPresentationController : UIPresentationController <UIGestureRecognizerDelegate> {

	BOOL _appliesVisualEffectsToPresentingView;
	id<UIPreviewPresentationControllerDelegate> _previewPresentationDelegate;
	UITapGestureRecognizer* _dismissGestureRecognizer;
	UIVisualEffectView* _presentationContainerEffectView;
	UIView* _localStatusBar;
	NSArray* _keyboardSnapshotters;
	NSHashTable* _keyboardWindows;
	UIResponder* _currentPinnedResponder;
	UIWindow* _presentationWindow;
	/*^block*/id _containerViewConfigurationBlock;
	/*^block*/id _dismissalTransitionDidEndBlock;

}

@property (assign,nonatomic,__weak) id<UIPreviewPresentationControllerDelegate> previewPresentationDelegate;              //@synthesize previewPresentationDelegate=_previewPresentationDelegate - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * dismissGestureRecognizer;                                           //@synthesize dismissGestureRecognizer=_dismissGestureRecognizer - In the implementation block
@property (assign,nonatomic) BOOL appliesVisualEffectsToPresentingView;                                                   //@synthesize appliesVisualEffectsToPresentingView=_appliesVisualEffectsToPresentingView - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * presentationContainerEffectView;                                        //@synthesize presentationContainerEffectView=_presentationContainerEffectView - In the implementation block
@property (nonatomic,retain) UIView * localStatusBar;                                                                     //@synthesize localStatusBar=_localStatusBar - In the implementation block
@property (nonatomic,copy) NSArray * keyboardSnapshotters;                                                                //@synthesize keyboardSnapshotters=_keyboardSnapshotters - In the implementation block
@property (nonatomic,copy) NSHashTable * keyboardWindows;                                                                 //@synthesize keyboardWindows=_keyboardWindows - In the implementation block
@property (assign,nonatomic,__weak) UIResponder * currentPinnedResponder;                                                 //@synthesize currentPinnedResponder=_currentPinnedResponder - In the implementation block
@property (assign,nonatomic,__weak) UIWindow * presentationWindow;                                                        //@synthesize presentationWindow=_presentationWindow - In the implementation block
@property (nonatomic,copy) id containerViewConfigurationBlock;                                                            //@synthesize containerViewConfigurationBlock=_containerViewConfigurationBlock - In the implementation block
@property (nonatomic,copy) id dismissalTransitionDidEndBlock;                                                             //@synthesize dismissalTransitionDidEndBlock=_dismissalTransitionDidEndBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_shouldApplyVisualEffectsToPresentingView;
+(id)_backgroundEffectForTraitCollection:(id)arg1 interactive:(BOOL)arg2 ;
+(BOOL)_shouldInterdictServiceViewTouches;
-(long long)presentationStyle;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 ;
-(void)presentationTransitionWillBegin;
-(void)presentationTransitionDidEnd:(BOOL)arg1 ;
-(void)dismissalTransitionDidEnd:(BOOL)arg1 ;
-(UIWindow *)presentationWindow;
-(void)setPresentationWindow:(UIWindow *)arg1 ;
-(void)dismissalTransitionWillBegin;
-(void)_handleDismissGestureRecognizer:(id)arg1 ;
-(CGRect)_frameForTransitionViewInPresentationSuperview:(id)arg1 ;
-(BOOL)_keyboardShouldAnimateAlongsideForInteractiveTransitions;
-(BOOL)_presentationPotentiallyUnderlapsStatusBar;
-(BOOL)_shouldKeepCurrentFirstResponder;
-(BOOL)_shouldDisableInteractionDuringTransitions;
-(BOOL)_shouldSavePresentedViewControllerForStateRestoration;
-(BOOL)_allowsAutorotation;
-(UIVisualEffectView *)presentationContainerEffectView;
-(void)setPresentationContainerEffectView:(UIVisualEffectView *)arg1 ;
-(id)_presentationContainerView;
-(void)_prepareContainerViewForPresentationTransition;
-(void)_preparePresentationAnimationsForTransitionCoordinator:(id)arg1 ;
-(void)_prepareDismissGestureRecognizersIfNeeded;
-(id)containerViewConfigurationBlock;
-(void)_finalizeAfterDismissalTransition;
-(void)_prepareDismissAnimationsForTransitionCoordinator:(id)arg1 ;
-(BOOL)appliesVisualEffectsToPresentingView;
-(void)_prepareStatusBarForPresentationTransition;
-(void)_prepareKeyboardForPresentationTransition;
-(void)_presentationTransitionWillBeginForContainerEffectView:(id)arg1 ;
-(BOOL)_shouldBlurStatusBar;
-(void)setLocalStatusBar:(UIView *)arg1 ;
-(void)setCurrentPinnedResponder:(UIResponder *)arg1 ;
-(void)setKeyboardSnapshotters:(NSArray *)arg1 ;
-(void)setKeyboardWindows:(NSHashTable *)arg1 ;
-(UIView *)localStatusBar;
-(NSHashTable *)keyboardWindows;
-(NSArray *)keyboardSnapshotters;
-(UIResponder *)currentPinnedResponder;
-(void)_layoutForInteractiveHighlight;
-(void)_layoutForPreview;
-(void)_animatePreviewTransitionIfNeeded:(id)arg1 ;
-(void)_layoutForCancel;
-(id<UIPreviewPresentationControllerDelegate>)previewPresentationDelegate;
-(void)setDismissGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(UITapGestureRecognizer *)dismissGestureRecognizer;
-(void)_applyVisualEffectsForPresentationPhase:(unsigned long long)arg1 ;
-(void)_interactiveHighlightTransitionDidEnd:(BOOL)arg1 ;
-(void)_previewTransitionDidEnd:(BOOL)arg1 ;
-(void)_cancelTransitionDidEnd:(BOOL)arg1 ;
-(void)setPreviewPresentationDelegate:(id<UIPreviewPresentationControllerDelegate>)arg1 ;
-(void)setAppliesVisualEffectsToPresentingView:(BOOL)arg1 ;
-(void)setContainerViewConfigurationBlock:(id)arg1 ;
-(id)dismissalTransitionDidEndBlock;
-(void)setDismissalTransitionDidEndBlock:(id)arg1 ;
@end

