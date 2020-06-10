/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:03 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIViewControllerTransitionCoordinator, _UINavigationBarDelegatePrivate;
@class NSMutableArray, UINavigationBar, NSArray;

@interface _UINavigationBarTransitionAssistant : NSObject {

	long long _animationCount;
	NSMutableArray* _animationIDs;
	BOOL _interruptable;
	BOOL _interactive;
	BOOL _needsLifetimeExtended;
	BOOL _cancelledTransition;
	BOOL _cancelledCleanUp;
	BOOL _shouldHideBackButtonDuringTransition;
	BOOL _shouldUpdatePromptAfterTransition;
	int _transition;
	id<UIViewControllerTransitionCoordinator> _transitionCoordinator;
	UINavigationBar* _navigationBar;
	id<_UINavigationBarDelegatePrivate> _delegate;
	double _duration;

}

@property (nonatomic,__weak,readonly) id<UIViewControllerTransitionCoordinator> transitionCoordinator;              //@synthesize transitionCoordinator=_transitionCoordinator - In the implementation block
@property (nonatomic,__weak,readonly) UINavigationBar * navigationBar;                                              //@synthesize navigationBar=_navigationBar - In the implementation block
@property (nonatomic,__weak,readonly) id<_UINavigationBarDelegatePrivate> delegate;                                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) int transition;                                                                      //@synthesize transition=_transition - In the implementation block
@property (nonatomic,readonly) double duration;                                                                     //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) BOOL interruptable;                                                                  //@synthesize interruptable=_interruptable - In the implementation block
@property (nonatomic,readonly) BOOL interactive;                                                                    //@synthesize interactive=_interactive - In the implementation block
@property (assign,nonatomic) BOOL needsLifetimeExtended;                                                            //@synthesize needsLifetimeExtended=_needsLifetimeExtended - In the implementation block
@property (nonatomic,readonly) BOOL shouldAnimateAlongside; 
@property (nonatomic,readonly) BOOL shouldCrossfade; 
@property (nonatomic,readonly) BOOL cancelledTransition;                                                            //@synthesize cancelledTransition=_cancelledTransition - In the implementation block
@property (nonatomic,readonly) BOOL cancelledCleanUp;                                                               //@synthesize cancelledCleanUp=_cancelledCleanUp - In the implementation block
@property (assign,nonatomic) BOOL shouldHideBackButtonDuringTransition;                                             //@synthesize shouldHideBackButtonDuringTransition=_shouldHideBackButtonDuringTransition - In the implementation block
@property (assign,nonatomic) BOOL shouldUpdatePromptAfterTransition;                                                //@synthesize shouldUpdatePromptAfterTransition=_shouldUpdatePromptAfterTransition - In the implementation block
@property (nonatomic,readonly) NSArray * animationIDs;                                                              //@synthesize animationIDs=_animationIDs - In the implementation block
+(id)pushTransitionAssistantForNavigationBar:(id)arg1 delegate:(id)arg2 crossfade:(BOOL)arg3 ;
+(id)popTransitionAssistantForNavigationBar:(id)arg1 delegate:(id)arg2 crossfade:(BOOL)arg3 ;
-(id<_UINavigationBarDelegatePrivate>)delegate;
-(double)duration;
-(int)transition;
-(BOOL)interactive;
-(id<UIViewControllerTransitionCoordinator>)transitionCoordinator;
-(UINavigationBar *)navigationBar;
-(BOOL)shouldCrossfade;
-(void)startInteractiveTransition;
-(void)_startTrackingAnimations;
-(void)_finishTrackingAnimations;
-(NSArray *)animationIDs;
-(void)updateInteractiveTransitionPercent:(double)arg1 ;
-(void)finishInteractiveTransitionPercent:(double)arg1 completionSpeed:(double)arg2 completionCurve:(long long)arg3 ;
-(void)cancelInteractiveTransitionPercent:(double)arg1 completionSpeed:(double)arg2 completionCurve:(long long)arg3 ;
-(BOOL)cancelledCleanUp;
-(BOOL)cancelledTransition;
-(void)finishTrackingInteractiveTransition;
-(void)setShouldHideBackButtonDuringTransition:(BOOL)arg1 ;
-(void)setShouldUpdatePromptAfterTransition:(BOOL)arg1 ;
-(BOOL)needsLifetimeExtended;
-(void)setNeedsLifetimeExtended:(BOOL)arg1 ;
-(id)initWithNavigationBar:(id)arg1 delegate:(id)arg2 ;
-(void)_getTransitionCoordinator;
-(void)_getPushDurationAndTransitionAlwaysCrossfade:(BOOL)arg1 ;
-(void)_getInteractive;
-(void)_getPopDurationAndTransitionAlwaysCrossfade:(BOOL)arg1 ;
-(void)_clearAnimationsWithDuration:(double)arg1 curve:(long long)arg2 reverse:(BOOL)arg3 ;
-(BOOL)shouldAnimateAlongside;
-(void)cancelCleanUp;
-(void)incrementAnimationCount;
-(void)decrementAnimationCount;
-(BOOL)interruptable;
-(BOOL)shouldHideBackButtonDuringTransition;
-(BOOL)shouldUpdatePromptAfterTransition;
@end

