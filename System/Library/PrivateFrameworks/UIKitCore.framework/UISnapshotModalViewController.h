/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:12 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class UIViewController, UINavigationController;

@interface UISnapshotModalViewController : UIViewController {

	long long _interfaceOrientation;
	UIViewController* _disappearingViewController;
	UINavigationController* _parentController;

}

@property (nonatomic,retain) UIViewController * disappearingViewController;              //@synthesize disappearingViewController=_disappearingViewController - In the implementation block
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(UIViewController *)disappearingViewController;
-(BOOL)_isSupportedInterfaceOrientation:(long long)arg1 ;
-(id)initWithInterfaceOrientation:(long long)arg1 ;
-(void)setDisappearingViewController:(UIViewController *)arg1 ;
@end

