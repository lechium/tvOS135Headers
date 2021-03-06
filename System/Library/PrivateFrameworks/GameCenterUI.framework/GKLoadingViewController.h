/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:27 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/_GKStateMachineDelegate.h>

@class NSArray, GKLoadableContentStateMachine, UIActivityIndicatorView, NSString;

@interface GKLoadingViewController : UIViewController <_GKStateMachineDelegate> {

	NSArray* _viewsToHideWhileLoading;
	double _loadingIndicatorDelay;
	GKLoadableContentStateMachine* _loadingMachine;
	UIActivityIndicatorView* _activityIndicator;

}

@property (nonatomic,retain) GKLoadableContentStateMachine * loadingMachine;              //@synthesize loadingMachine=_loadingMachine - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;                 //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (nonatomic,retain) NSString * loadingState; 
@property (nonatomic,retain) NSArray * viewsToHideWhileLoading;                           //@synthesize viewsToHideWhileLoading=_viewsToHideWhileLoading - In the implementation block
@property (assign,nonatomic) double loadingIndicatorDelay;                                //@synthesize loadingIndicatorDelay=_loadingIndicatorDelay - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(UIActivityIndicatorView *)activityIndicator;
-(void)showLoadingIndicator;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(void)setLoadingState:(NSString *)arg1 ;
-(NSString *)loadingState;
-(void)setLoadingIndicatorDelay:(double)arg1 ;
-(void)setViewsToHideWhileLoading:(NSArray *)arg1 ;
-(GKLoadableContentStateMachine *)loadingMachine;
-(NSArray *)viewsToHideWhileLoading;
-(void)didEnterLoadingState;
-(void)didExitLoadingState;
-(void)didEnterLoadedState;
-(void)didExitLoadedState;
-(double)loadingIndicatorDelay;
-(void)setLoadingMachine:(GKLoadableContentStateMachine *)arg1 ;
-(void)setViewsToHideHidden:(BOOL)arg1 ;
-(void)didEnterRefreshingState;
-(void)didExitRefreshingState;
@end

