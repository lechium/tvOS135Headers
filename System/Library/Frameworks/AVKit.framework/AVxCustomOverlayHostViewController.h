/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:37 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class UITapGestureRecognizer, AVNonDigitizerTapRecognizer, AVPermissiveSwipeGestureRecognizer, UIVisualEffectView, UIViewController;

@interface AVxCustomOverlayHostViewController : UIViewController {

	UITapGestureRecognizer* _menuTapGestureRecognizer;
	AVNonDigitizerTapRecognizer* _downArrowTapGestureRecognizer;
	AVPermissiveSwipeGestureRecognizer* _swipeDownGestureRecognizer;
	BOOL _isTouching;
	BOOL _enforcingMargins;
	UIVisualEffectView* _backgroundView;

}

@property (nonatomic,readonly) UIViewController * hostedViewController; 
@property (assign,getter=isEnforcingMargins,nonatomic) BOOL enforcingMargins;              //@synthesize enforcingMargins=_enforcingMargins - In the implementation block
@property (nonatomic,readonly) UIVisualEffectView * backgroundView;                        //@synthesize backgroundView=_backgroundView - In the implementation block
-(void)dealloc;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)_dismiss;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(UIVisualEffectView *)backgroundView;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(UIViewController *)hostedViewController;
-(void)_updatePresentationStyle;
-(void)_updateCornerCurves:(BOOL)arg1 ;
-(void)_updatePresentationStyleAfterLayout;
-(void)_timeoutDismissal;
-(void)cancelAutoDismiss;
-(void)autoDismissAfterDelay;
-(void)_handleMenuTapGesture:(id)arg1 ;
-(void)_handleSwipeDownGesture:(id)arg1 ;
-(void)_handleDownArrowGesture:(id)arg1 ;
-(BOOL)isEnforcingMargins;
-(void)setEnforcingMargins:(BOOL)arg1 ;
@end

