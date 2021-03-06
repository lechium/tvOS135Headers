/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:12 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>

@class UIHoverEvent, UITouch;

@interface UIHoverGestureRecognizer : UIGestureRecognizer {

	UIHoverEvent* _currentHoverEvent;
	UITouch* _currentTouch;
	BOOL _pausesWhilePanning;

}

@property (assign,setter=_setPausesWhilePanning:,getter=_pausesWhilePanning,nonatomic) BOOL pausesWhilePanning;              //@synthesize pausesWhilePanning=_pausesWhilePanning - In the implementation block
-(void)reset;
-(BOOL)_paused;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(CGPoint)locationInView:(id)arg1 ;
-(BOOL)canBePreventedByGestureRecognizer:(id)arg1 ;
-(BOOL)canPreventGestureRecognizer:(id)arg1 ;
-(BOOL)_affectedByGesture:(id)arg1 ;
-(BOOL)_shouldReceiveTouch:(id)arg1 forEvent:(id)arg2 recognizerView:(id)arg3 ;
-(BOOL)_shouldReceivePress:(id)arg1 ;
-(BOOL)_wantsHoverEvents;
-(void)_hoverEntered:(id)arg1 withEvent:(id)arg2 ;
-(void)_hoverMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)_hoverExited:(id)arg1 withEvent:(id)arg2 ;
-(void)_hoverCancelled:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)_pausesWhilePanning;
-(void)_setPausesWhilePanning:(BOOL)arg1 ;
@end

