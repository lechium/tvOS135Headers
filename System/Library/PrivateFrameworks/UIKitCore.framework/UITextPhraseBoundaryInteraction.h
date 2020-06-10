/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:54 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UITextInteraction.h>

@class UITextGestureTuning;

@interface UITextPhraseBoundaryInteraction : UITextInteraction {

	UITextGestureTuning* _gestureTuning;

}
-(void)didMoveToView:(id)arg1 ;
-(void)_createGestureTuningIfNecessary;
-(CGPoint)touchAlignedPointForPoint:(CGPoint)arg1 translation:(CGPoint)arg2 ;
-(CGPoint)pointIfPlacedCarefully:(CGPoint)arg1 ;
-(id)initWithTextInput:(id)arg1 ;
-(void)updateVisibilityOffsetForGesture:(id)arg1 ;
-(id)_phraseBoundaryGestureRecognizer;
-(void)_phraseBoundaryGesture:(id)arg1 ;
@end

