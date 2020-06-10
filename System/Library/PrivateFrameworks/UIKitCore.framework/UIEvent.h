/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:45 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UIScreen, NSMutableSet, UIEventEnvironment, NSSet;

@interface UIEvent : NSObject {

	GSEventRef _gsEvent;
	IOHIDEventRef _hidEvent;
	UIScreen* _cachedScreen;
	NSMutableSet* _eventObservers;
	BOOL _hasValidModifiers;
	double _timestamp;
	UIEventEnvironment* _eventEnvironment;
	double __initialTouchTimestamp;

}

@property (assign,setter=_setTimestamp:,nonatomic) double timestamp;                    //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic,__weak) UIEventEnvironment * eventEnvironment;              //@synthesize eventEnvironment=_eventEnvironment - In the implementation block
@property (nonatomic,readonly) double _initialTouchTimestamp;                           //@synthesize _initialTouchTimestamp=__initialTouchTimestamp - In the implementation block
@property (nonatomic,readonly) long long type; 
@property (nonatomic,readonly) long long subtype; 
@property (nonatomic,readonly) long long modifierFlags; 
@property (nonatomic,readonly) long long buttonMask; 
@property (nonatomic,readonly) NSSet * allTouches; 
-(void)dealloc;
-(long long)type;
-(id)_init;
-(double)timestamp;
-(long long)subtype;
-(long long)_modifierFlags;
-(id)_unmodifiedInput;
-(long long)modifierFlags;
-(double)_initialTouchTimestamp;
-(id)_screen;
-(IOHIDEventRef)_hidEvent;
-(id)_cloneEvent;
-(BOOL)_isKeyDown;
-(id)_modifiedInput;
-(id)touchesForGestureRecognizer:(id)arg1 ;
-(CGPoint)_digitizerLocation;
-(id)touchesForWindow:(id)arg1 ;
-(NSSet *)allTouches;
-(id)touchesForView:(id)arg1 ;
-(GSEventRef)_gsEvent;
-(id)_initWithEvent:(GSEventRef)arg1 touches:(id)arg2 ;
-(void)_setTimestamp:(double)arg1 ;
-(void)_setHIDEvent:(IOHIDEventRef)arg1 ;
-(id)_triggeringPhysicalButton;
-(long long)buttonMask;
-(id)_windows;
-(unsigned long long)_focusHeading;
-(unsigned long long)_clickCount;
-(id)_gestureRecognizersForWindow:(id)arg1 ;
-(BOOL)_sendEventToGestureRecognizer:(id)arg1 ;
-(void)_gestureRecognizerNoLongerNeedsSendEvent:(id)arg1 ;
-(void)_wasDeliveredToGestureRecognizers;
-(long long)_buttonMask;
-(CGPoint)_swipeVelocityWithError:(id*)arg1 ;
-(id)coalescedTouchesForTouch:(id)arg1 ;
-(BOOL)_isPhysicalKeyEvent;
-(void)_setGSEvent:(GSEventRef)arg1 ;
-(void)_sendEventToResponder:(id)arg1 ;
-(long long)_moveDirection;
-(void)_cleanupAfterDispatch;
-(UIEventEnvironment *)eventEnvironment;
-(id)_eventObservers;
-(id)_touchesForGestureRecognizer:(id)arg1 ;
-(id)predictedTouchesForTouch:(id)arg1 ;
-(double)_wheelVelocity;
-(int)_shakeState;
-(long long)_keyModifierFlags;
-(BOOL)_isTouchRoutingPolicyBased;
-(id)_initWithEnvironment:(id)arg1 ;
-(BOOL)isKeyDown;
-(void)_addEventObserver:(id)arg1 ;
-(void)_removeEventObserver:(id)arg1 ;
-(void)setEventEnvironment:(UIEventEnvironment *)arg1 ;
@end
