/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:23 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterUI/GKBubblePathAnimator.h>

@interface GKScatterAnimator : GKBubblePathAnimator {

	long long _focusBubbleType;

}

@property (assign,nonatomic) long long focusBubbleType;              //@synthesize focusBubbleType=_focusBubbleType - In the implementation block
+(double)preferredDuration;
-(void)animateTransition:(id)arg1 ;
-(void)setFocusBubbleType:(long long)arg1 ;
-(long long)animatorType;
-(double)minimumDurationForViewAnimations;
-(id)scatterBubblesSortedLeftToRightInContext:(id)arg1 ;
-(id)scatterAnimationsForBubble:(id)arg1 sortedBubbles:(id)arg2 contractPoint:(id)arg3 ;
-(BOOL)scatterBubble:(id)arg1 shouldMoveLeftAmongBubbles:(id)arg2 context:(id)arg3 ;
-(long long)focusBubbleType;
-(BOOL)scatterBubble:(id)arg1 shouldMoveUpAmongBubbles:(id)arg2 ;
@end
