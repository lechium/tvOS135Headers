/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:38 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIKeyboardTextSelectionGestureController.h>

@interface _UIKeyboardBasedTextSelectionGestureController : _UIKeyboardTextSelectionGestureController {

	BOOL _delayForceMagnify;
	BOOL _didLongForcePress;

}

@property (assign,nonatomic) BOOL delayForceMagnify;              //@synthesize delayForceMagnify=_delayForceMagnify - In the implementation block
@property (assign,nonatomic) BOOL didLongForcePress;              //@synthesize didLongForcePress=_didLongForcePress - In the implementation block
+(id)sharedInstance;
-(BOOL)oneFingerForcePressShouldFailWithoutForce;
-(BOOL)oneFingerForcePressShouldCancelTouchesInView;
-(double)oneFingerForcePressMinimumDuration;
-(void)_cleanupDeadGesturesIfNecessary;
-(Class)textInteractionClass;
-(BOOL)allowOneFingerDeepPress;
-(void)setDidLongForcePress:(BOOL)arg1 ;
-(void)setDelayForceMagnify:(BOOL)arg1 ;
-(BOOL)delayForceMagnify;
-(BOOL)didLongForcePress;
@end

