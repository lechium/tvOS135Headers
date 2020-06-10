/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:25 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIGestureRecognizer.h>

@class UIDelayedAction, NSMutableSet, NSSet;

@interface UIHBDownGestureRecognizer : UIGestureRecognizer {

	UIDelayedAction* _delayedAction;
	NSMutableSet* _currentlyPressedTypes;
	NSSet* _requiredPressTypes;
	double _maximumIntervalBetweenPresses;

}

@property (assign,nonatomic) double maximumIntervalBetweenPresses;              //@synthesize maximumIntervalBetweenPresses=_maximumIntervalBetweenPresses - In the implementation block
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setAllowedPressTypes:(id)arg1 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesChanged:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)_resetGestureRecognizer;
-(void)_processPresses:(id)arg1 ;
-(void)_succeed;
-(void)_fail;
-(BOOL)_allRequiredButtonsDown;
-(double)maximumIntervalBetweenPresses;
-(void)setMaximumIntervalBetweenPresses:(double)arg1 ;
@end

