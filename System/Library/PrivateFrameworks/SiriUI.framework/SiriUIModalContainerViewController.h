/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:31 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@protocol SiriUIModalContainerViewControllerDelegate;
@class UIViewController;

@interface SiriUIModalContainerViewController : UIViewController {

	UIViewController* _contentViewController;
	id<SiriUIModalContainerViewControllerDelegate> _delegate;

}

@property (nonatomic,readonly) UIViewController * contentViewController;                                  //@synthesize contentViewController=_contentViewController - In the implementation block
@property (assign,nonatomic,__weak) id<SiriUIModalContainerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<SiriUIModalContainerViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SiriUIModalContainerViewControllerDelegate>)arg1 ;
-(void)loadView;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)childViewControllerForStatusBarStyle;
-(BOOL)_canShowWhileLocked;
-(UIViewController *)contentViewController;
-(id)initWithContentViewController:(id)arg1 ;
-(id)childViewControllerForStatusBarHidden;
-(id)childViewControllerForHomeIndicatorAutoHidden;
@end

