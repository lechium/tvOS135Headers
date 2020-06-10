/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:48 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@protocol UIViewControllerContextTransitioning;
@class PKPassGroupsViewController, UIView, PKDiscoveryArticleViewController, NSString;

@interface PKDiscoveryArticleAnimatedTransitioningHandler : NSObject <UIViewControllerAnimatedTransitioning> {

	PKPassGroupsViewController* _presentingVC;
	UIView* _presentingView;
	PKDiscoveryArticleViewController* _presentedVC;
	UIView* _presentedView;
	UIView* _containerView;
	id<UIViewControllerContextTransitioning> _transitionContext;
	BOOL _completed;
	BOOL _presenting;
	double _duration;

}

@property (assign,getter=isPresenting,nonatomic) BOOL presenting;              //@synthesize presenting=_presenting - In the implementation block
@property (assign,nonatomic) double duration;                                  //@synthesize duration=_duration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(BOOL)isPresenting;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(void)setPresenting:(BOOL)arg1 ;
-(void)_updateWithTransitionContext:(id)arg1 ;
-(void)_moveCardView:(id)arg1 toView:(id)arg2 belowView:(id)arg3 ;
@end

