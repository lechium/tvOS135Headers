/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:54 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UILongPressGestureRecognizer.h>

@protocol UITextInput;
@class UIResponder;

@interface UIVariableDelayLoupeGesture : UILongPressGestureRecognizer {

	UIResponder*<UITextInput> _textView;

}

@property (assign) UIResponder*<UITextInput> textView;              //@synthesize textView=_textView - In the implementation block
-(void)invalidate;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(UIResponder*<UITextInput>)textView;
-(void)setTextView:(UIResponder*<UITextInput>)arg1 ;
-(void)startTimer;
-(BOOL)_allowsForShortDelay;
-(BOOL)isCloseToCaret;
-(BOOL)isWithinRecentTap;
-(BOOL)shouldUseLegacyBehavior;
@end

