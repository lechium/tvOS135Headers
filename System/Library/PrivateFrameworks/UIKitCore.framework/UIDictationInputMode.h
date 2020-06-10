/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:30 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UISpecializedInputMode.h>

@class UITouch, UIKeyboardInputMode;

@interface UIDictationInputMode : UISpecializedInputMode {

	UITouch* _triggeringTouch;
	UIKeyboardInputMode* _currentInputModeForDictation;

}

@property (nonatomic,retain) UITouch * triggeringTouch;                                       //@synthesize triggeringTouch=_triggeringTouch - In the implementation block
@property (nonatomic,retain) UIKeyboardInputMode * currentInputModeForDictation;              //@synthesize currentInputModeForDictation=_currentInputModeForDictation - In the implementation block
+(BOOL)currentInputModeSupportsDictation;
-(void)dealloc;
-(Class)viewControllerClass;
-(BOOL)includeBarHeight;
-(UITouch *)triggeringTouch;
-(void)setTriggeringTouch:(UITouch *)arg1 ;
-(UIKeyboardInputMode *)currentInputModeForDictation;
-(void)setCurrentInputModeForDictation:(UIKeyboardInputMode *)arg1 ;
@end

