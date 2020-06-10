/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:04 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UINavigationBarTransitionContext.h>

@interface _UINavigationBarTransitionContextPop : _UINavigationBarTransitionContext {

	CGRect _endingNewTitleViewFrame;
	CGRect _endingNewBackButtonFrame;
	CGSize _titleTransitionDistance;
	double _titleTransitionAdjustment;

}
-(void)cancel;
-(void)complete;
-(int)transition;
-(void)prepare;
-(void)animate;
-(void)_prepareContentView;
-(void)_animateBackgroundView;
-(id)viewUsingEaseInCurve;
-(void)_prepareScaleTransition;
-(void)_prepareLargeTitleView;
-(void)_prepareBackgroundView;
-(void)_prepareSearchBar;
-(void)_animateContentView;
-(void)_animateScaleTransition;
-(void)_animateLargeTitleView;
-(void)_animateSearchBar;
-(void)_finishWithFinalLayout:(id)arg1 invalidLayout:(id)arg2 ;
@end

