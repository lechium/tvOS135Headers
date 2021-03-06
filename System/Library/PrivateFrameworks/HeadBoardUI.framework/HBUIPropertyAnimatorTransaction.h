/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:31 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HeadBoardUI.framework/HeadBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSTransaction.h>

@protocol UITimingCurveProvider;
@class UIViewPropertyAnimator;

@interface HBUIPropertyAnimatorTransaction : BSTransaction {

	id<UITimingCurveProvider> _timingParameters;
	double _duration;
	double _delay;
	/*^block*/id _animations;
	UIViewPropertyAnimator* _animator;

}

@property (nonatomic,readonly) id<UITimingCurveProvider> timingParameters;              //@synthesize timingParameters=_timingParameters - In the implementation block
@property (nonatomic,readonly) double duration;                                         //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) double delay;                                            //@synthesize delay=_delay - In the implementation block
@property (nonatomic,readonly) id animations;                                           //@synthesize animations=_animations - In the implementation block
@property (nonatomic,retain) UIViewPropertyAnimator * animator;                         //@synthesize animator=_animator - In the implementation block
-(double)delay;
-(double)duration;
-(id)animations;
-(void)_begin;
-(BOOL)_canBeInterrupted;
-(void)_willFailWithReason:(id)arg1 ;
-(void)_willInterruptWithReason:(id)arg1 ;
-(UIViewPropertyAnimator *)animator;
-(id<UITimingCurveProvider>)timingParameters;
-(void)setAnimator:(UIViewPropertyAnimator *)arg1 ;
-(id)initWithTimingParameters:(id)arg1 duration:(double)arg2 delay:(double)arg3 animations:(/*^block*/id)arg4 ;
@end

