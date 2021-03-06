/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:57 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UITextFieldVisualStyleSubject;
@interface _UITextFieldVisualStyle : NSObject {

	id<_UITextFieldVisualStyleSubject> _styleSubject;

}

@property (assign,nonatomic,__weak) id<_UITextFieldVisualStyleSubject> styleSubject;              //@synthesize styleSubject=_styleSubject - In the implementation block
+(id)inferredVisualStyleWithStyleSubject:(id)arg1 ;
-(id)placeholderColor;
-(id)defaultTextColor;
-(id)defaultTextColorForKeyboardAppearance;
-(id)parentViewForTextContentView;
-(id)namesOfAttributesToOverrideForEditing;
-(id)overridingEditingAttributes:(id)arg1 forOriginalAttributes:(id)arg2 ;
-(id)defaultFocusedTextColor;
-(id)initWithStyleSubject:(id)arg1 ;
-(BOOL)textShouldUseVibrancy;
-(void)handleTextVibrancy;
-(id<_UITextFieldVisualStyleSubject>)styleSubject;
-(void)setStyleSubject:(id<_UITextFieldVisualStyleSubject>)arg1 ;
@end

