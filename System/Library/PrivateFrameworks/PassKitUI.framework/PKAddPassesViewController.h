/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:49 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIViewController.h>

@protocol PKAddPassesViewControllerDelegate;
@class NSArray, _UIAsyncInvocation, PKRemoteAddPassesViewController, PKAssertion;

@interface PKAddPassesViewController : UIViewController {

	BOOL _viewHasAppeared;
	BOOL _succeeded;
	unsigned long long _presentationSource;
	NSArray* _passDataArray;
	_UIAsyncInvocation* _viewServiceCancelRequest;
	PKRemoteAddPassesViewController* _remoteViewController;
	PKAssertion* _contactlessInterfaceAssertion;
	id<PKAddPassesViewControllerDelegate> _delegate;

}

@property (assign,nonatomic) id<PKAddPassesViewControllerDelegate> delegate; 
+(BOOL)_shouldForwardViewWillTransitionToSize;
+(BOOL)canAddPasses;
-(void)dealloc;
-(id<PKAddPassesViewControllerDelegate>)delegate;
-(void)setDelegate:(id<PKAddPassesViewControllerDelegate>)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)applicationWillResignActive:(id)arg1 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(BOOL)succeeded;
-(void)viewDidAppear:(BOOL)arg1 ;
-(long long)modalPresentationStyle;
-(id)childViewControllerForStatusBarStyle;
-(void)viewWillLayoutSubviews;
-(long long)preferredStatusBarStyle;
-(BOOL)shouldAutorotate;
-(BOOL)prefersStatusBarHidden;
-(id)initWithPass:(id)arg1 ;
-(id)childViewControllerForStatusBarHidden;
-(void)_requestRemoteViewController;
-(long long)modalTransitionStyle;
-(CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2 ;
-(id)initWithPasses:(id)arg1 presentationSource:(unsigned long long)arg2 ;
-(id)initWithPasses:(id)arg1 ;
-(void)_applyRemoteViewController:(id)arg1 ;
-(void)_ingestionDidFinishWithResult:(unsigned long long)arg1 ;
@end

