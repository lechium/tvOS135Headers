/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:23 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class NSArray, UIViewController;

@interface VideosUI.DocumentViewController : UIViewController {

	 document;
	 templateViewController;
	 isTransitioning;
	 loadingView;
	 opaqueBackground;

}

@property (readonly,nonatomic) long long preferredStatusBarStyle; 
@property (readonly,nonatomic) NSArray * preferredFocusEnvironments; 
@property (readonly,nonatomic) UIViewController * childViewControllerForStatusBarHidden; 
@property (readonly,nonatomic) BOOL shouldAutomaticallyForwardAppearanceMethods; 
-(id)initWithCoder:(id)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)willMoveToParentViewController:(id)arg1 ;
-(long long)preferredStatusBarStyle;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(NSArray *)preferredFocusEnvironments;
-(UIViewController *)childViewControllerForStatusBarHidden;
-(id)overrideTraitCollectionForChildViewController:(id)arg1 ;
@end

