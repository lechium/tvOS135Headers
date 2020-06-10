/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:04 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>

@protocol UIScrollViewDelayedTouchesBeganGestureRecognizerClient;
@class UIDelayedAction, UIView;

@interface UIScrollViewDelayedTouchesBeganGestureRecognizer : UIGestureRecognizer {

	UIDelayedAction* _touchDelay;
	CGPoint _startSceneReferenceLocation;
	UIView*<UIScrollViewDelayedTouchesBeganGestureRecognizerClient> _client;

}
+(BOOL)_shouldDefaultToTouches;
-(void)dealloc;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)_resetGestureRecognizer;
-(void)clearTimer;
-(void)sendDelayedTouches;
-(id)_clientView;
-(void)sendTouchesShouldBeginForDelayedTouches:(id)arg1 ;
-(void)sendTouchesShouldBeginForTouches:(id)arg1 withEvent:(id)arg2 ;
@end

