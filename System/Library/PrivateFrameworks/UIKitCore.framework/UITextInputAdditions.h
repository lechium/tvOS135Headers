/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:44 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UITextInputAdditions
@property (getter=isEditable,nonatomic,readonly) BOOL editable; 
@property (getter=isEditing,nonatomic,readonly) BOOL editing; 
@property (getter=_caretRect,nonatomic,readonly) CGRect caretRect; 
@optional
-(id)selectionInteractionAssistant;
-(BOOL)_allowAnimatedUpdateSelectionRectViews;
-(id)_textInputViewForAddingGestureRecognizers;
-(BOOL)_useGesturesForEditableContent;

@required
-(BOOL)isEditable;
-(BOOL)isEditing;
-(void)beginSelectionChange;
-(id)interactionAssistant;
-(void)endSelectionChange;
-(id)textInputView;
-(CGRect*)_caretRect;

@end
