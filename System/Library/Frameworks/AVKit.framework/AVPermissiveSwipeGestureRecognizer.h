/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:37 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>

@class _AVDetachedSwipeGestureRecognizer, _AVPermissiveSwipeGestureDelegate;

@interface AVPermissiveSwipeGestureRecognizer : UIGestureRecognizer {

	unsigned _numberOfTouchMovedEventsReceived;
	BOOL _transportBarVisible;
	BOOL _transportBarVisibleAtTouchesBegan;
	BOOL _swipeGestureActive;
	BOOL _swipeGestureRecognizedOrFailed;
	double _minimumRestTimeBeforeSwipe;
	double _timeSinceTouchesBegan;
	_AVDetachedSwipeGestureRecognizer* _swipeGestureRecognizer;
	_AVPermissiveSwipeGestureDelegate* _permissiveDelegate;
	double _timeTouchesBegan;
	CGPoint _currentTouchLocation;
	CGPoint _currentDigitizerLocation;

}

@property (nonatomic,readonly) long long avTouchPosition; 
@property (nonatomic,readonly) _AVDetachedSwipeGestureRecognizer * swipeGestureRecognizer;                             //@synthesize swipeGestureRecognizer=_swipeGestureRecognizer - In the implementation block
@property (assign,getter=isSwipeGestureActive,nonatomic) BOOL swipeGestureActive;                                      //@synthesize swipeGestureActive=_swipeGestureActive - In the implementation block
@property (assign,getter=isSwipeGestureRecognizedOrFailed,nonatomic) BOOL swipeGestureRecognizedOrFailed;              //@synthesize swipeGestureRecognizedOrFailed=_swipeGestureRecognizedOrFailed - In the implementation block
@property (assign,nonatomic) CGPoint currentTouchLocation;                                                             //@synthesize currentTouchLocation=_currentTouchLocation - In the implementation block
@property (assign,nonatomic) CGPoint currentDigitizerLocation;                                                         //@synthesize currentDigitizerLocation=_currentDigitizerLocation - In the implementation block
@property (nonatomic,retain) _AVPermissiveSwipeGestureDelegate * permissiveDelegate;                                   //@synthesize permissiveDelegate=_permissiveDelegate - In the implementation block
@property (assign,nonatomic) double timeTouchesBegan;                                                                  //@synthesize timeTouchesBegan=_timeTouchesBegan - In the implementation block
@property (assign,nonatomic) unsigned long long direction; 
@property (assign,nonatomic) double minimumRestTimeBeforeSwipe;                                                        //@synthesize minimumRestTimeBeforeSwipe=_minimumRestTimeBeforeSwipe - In the implementation block
@property (assign,getter=isTransportBarVisible,nonatomic) BOOL transportBarVisible;                                    //@synthesize transportBarVisible=_transportBarVisible - In the implementation block
@property (nonatomic,readonly) BOOL transportBarVisibleAtTouchesBegan;                                                 //@synthesize transportBarVisibleAtTouchesBegan=_transportBarVisibleAtTouchesBegan - In the implementation block
@property (nonatomic,readonly) double timeSinceTouchesBegan;                                                           //@synthesize timeSinceTouchesBegan=_timeSinceTouchesBegan - In the implementation block
-(void)setState:(long long)arg1 ;
-(void)reset;
-(unsigned long long)direction;
-(void)setDirection:(unsigned long long)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)canBePreventedByGestureRecognizer:(id)arg1 ;
-(BOOL)canPreventGestureRecognizer:(id)arg1 ;
-(void)swipeGestureWasRecognized:(id)arg1 ;
-(void)_cancelTouchRestTimeout;
-(void)_fireTouchRestTimeout;
-(void)_scheduleTouchRestTimeout;
-(double)minimumRestTimeBeforeSwipe;
-(void)setMinimumRestTimeBeforeSwipe:(double)arg1 ;
-(BOOL)isTransportBarVisible;
-(void)setTransportBarVisible:(BOOL)arg1 ;
-(BOOL)transportBarVisibleAtTouchesBegan;
-(double)timeSinceTouchesBegan;
-(_AVDetachedSwipeGestureRecognizer *)swipeGestureRecognizer;
-(BOOL)isSwipeGestureActive;
-(void)setSwipeGestureActive:(BOOL)arg1 ;
-(BOOL)isSwipeGestureRecognizedOrFailed;
-(void)setSwipeGestureRecognizedOrFailed:(BOOL)arg1 ;
-(CGPoint)currentTouchLocation;
-(void)setCurrentTouchLocation:(CGPoint)arg1 ;
-(CGPoint)currentDigitizerLocation;
-(void)setCurrentDigitizerLocation:(CGPoint)arg1 ;
-(_AVPermissiveSwipeGestureDelegate *)permissiveDelegate;
-(void)setPermissiveDelegate:(_AVPermissiveSwipeGestureDelegate *)arg1 ;
-(double)timeTouchesBegan;
-(void)setTimeTouchesBegan:(double)arg1 ;
-(long long)avTouchPosition;
@end

