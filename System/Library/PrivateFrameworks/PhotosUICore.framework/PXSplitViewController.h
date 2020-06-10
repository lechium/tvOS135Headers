/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:26 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UISplitViewController.h>
#import <UIKit/UISplitViewControllerDelegate.h>

@class UIViewController;

@interface PXSplitViewController : UISplitViewController <UISplitViewControllerDelegate> {

	BOOL _inViewWillTransitionToSize;
	long long _originalPreferredDisplayMode;
	BOOL _wantsSidebarHidden;
	UIViewController* _sidebarViewController;
	UIViewController* _contentViewController;

}

@property (nonatomic,readonly) UIViewController * sidebarViewController;              //@synthesize sidebarViewController=_sidebarViewController - In the implementation block
@property (nonatomic,readonly) UIViewController * contentViewController;              //@synthesize contentViewController=_contentViewController - In the implementation block
@property (assign,nonatomic) BOOL wantsSidebarHidden;                                 //@synthesize wantsSidebarHidden=_wantsSidebarHidden - In the implementation block
+(void)initialize;
-(id)initWithCoder:(id)arg1 ;
-(id)childViewControllerForStatusBarStyle;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(UIViewController *)contentViewController;
-(void)splitViewController:(id)arg1 willChangeToDisplayMode:(long long)arg2 ;
-(long long)targetDisplayModeForActionInSplitViewController:(id)arg1 ;
-(id)primaryViewControllerForCollapsingSplitViewController:(id)arg1 ;
-(id)primaryViewControllerForExpandingSplitViewController:(id)arg1 ;
-(id)initWithSidebarNavigationController:(id)arg1 contentViewController:(id)arg2 ;
-(BOOL)_isDisplayModeAllVisibleAllowed;
-(void)setWantsSidebarHidden:(BOOL)arg1 ;
-(id)childViewControllerForStatusBarHidden;
-(void)_splitViewController:(id)arg1 willUpdateDisplayModeButtonItemForTargetMode:(long long)arg2 withHidden:(BOOL*)arg3 image:(id*)arg4 title:(id*)arg5 showsBackButtonIndicator:(BOOL*)arg6 ;
-(void)_splitViewController:(id)arg1 willBeginAnimatedTransitionToStateRequest:(id)arg2 ;
-(void)_splitViewController:(id)arg1 didEndAnimatedTransitionToStateRequest:(id)arg2 ;
-(UIViewController *)sidebarViewController;
-(BOOL)wantsSidebarHidden;
@end
