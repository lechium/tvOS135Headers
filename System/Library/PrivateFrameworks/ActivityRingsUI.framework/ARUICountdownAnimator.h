/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:54 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ARUICountdownAnimation, ARUICountdownAnimatorDelegate;
#import <ActivityRingsUI/ActivityRingsUI-Structs.h>
@class ARUICountdownTimeline, ARUICountdownView;

@interface ARUICountdownAnimator : NSObject {

	struct {
		unsigned willBeginAnimating : 1;
		unsigned willBeginAnimation : 1;
		unsigned performingAnimation : 1;
		unsigned completedAnimation : 1;
		unsigned didFinishAnimating : 1;
	}  _delegateFlags;
	BOOL _animating;
	BOOL _canceled;
	id<ARUICountdownAnimation> _currentAnimation;
	ARUICountdownTimeline* _timeline;
	ARUICountdownView* _countdownView;
	id<ARUICountdownAnimatorDelegate> _delegate;

}

@property (nonatomic,retain) ARUICountdownTimeline * timeline;                               //@synthesize timeline=_timeline - In the implementation block
@property (assign,nonatomic,__weak) ARUICountdownView * countdownView;                       //@synthesize countdownView=_countdownView - In the implementation block
@property (assign,nonatomic,__weak) id<ARUICountdownAnimatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<ARUICountdownAnimatorDelegate>)delegate;
-(void)setDelegate:(id<ARUICountdownAnimatorDelegate>)arg1 ;
-(BOOL)canceled;
-(BOOL)isAnimating;
-(void)prepareToAnimate;
-(void)_delegate_willBeginAnimating;
-(void)_applyAnimationAtIndex:(unsigned long long)arg1 ;
-(void)_delegate_didFinishAnimating;
-(void)_delegate_willBeginAnimation:(id)arg1 afterDelay:(double)arg2 ;
-(void)_delegate_performingAnimation:(id)arg1 withDuration:(double)arg2 ;
-(void)_delegate_completedAnimation:(id)arg1 ;
-(void)_applyCancelAnimationAtIndex:(unsigned long long)arg1 ;
-(void)cancelAnimations;
-(id)initWithTimeline:(id)arg1 ;
-(void)beginAnimations;
-(ARUICountdownTimeline *)timeline;
-(void)setTimeline:(ARUICountdownTimeline *)arg1 ;
-(ARUICountdownView *)countdownView;
-(void)setCountdownView:(ARUICountdownView *)arg1 ;
@end

