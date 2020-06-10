/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:39 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@class NSString;

@interface TVNavigationFadeAnimator : NSObject <UIViewControllerAnimatedTransitioning> {

	BOOL _usesCustomEasing;
	BOOL _shouldAnimateHalfwayThenPopIn;
	double _transitionDuration;

}

@property (assign,nonatomic) double transitionDuration;                       //@synthesize transitionDuration=_transitionDuration - In the implementation block
@property (assign,nonatomic) BOOL usesCustomEasing;                           //@synthesize usesCustomEasing=_usesCustomEasing - In the implementation block
@property (assign,nonatomic) BOOL shouldAnimateHalfwayThenPopIn;              //@synthesize shouldAnimateHalfwayThenPopIn=_shouldAnimateHalfwayThenPopIn - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(double)transitionDuration;
-(void)setTransitionDuration:(double)arg1 ;
-(void)_beginFadeAnimationFromViewController:(id)arg1 toViewController:(id)arg2 containerView:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)usesCustomEasing;
-(void)setUsesCustomEasing:(BOOL)arg1 ;
-(BOOL)shouldAnimateHalfwayThenPopIn;
-(void)setShouldAnimateHalfwayThenPopIn:(BOOL)arg1 ;
@end

