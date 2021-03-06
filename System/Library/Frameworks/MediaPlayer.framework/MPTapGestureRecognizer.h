/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:05 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>

@class UITouch, NSTimer;

@interface MPTapGestureRecognizer : UIGestureRecognizer {

	unsigned long long _lastTapCount;
	CGPoint _tapLocation;
	UITouch* _trackingTouch;
	NSTimer* _tapHandleTimer;

}

@property (assign) unsigned long long tapCount;              //@synthesize lastTapCount=_lastTapCount - In the implementation block
-(void)dealloc;
-(void)reset;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(CGPoint)locationInView:(id)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(unsigned long long)tapCount;
-(void)_setTapTimerWithDuration:(double)arg1 ;
-(void)_resetTapTimer;
-(void)_delayedHandleTaps:(id)arg1 ;
-(void)setTapCount:(unsigned long long)arg1 ;
@end

