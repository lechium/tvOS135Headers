/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:58 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UITextItemInteracting <UITextInput,_UITextContent>
@optional
-(BOOL)_allowHighlightForTextInteractableItem:(id)arg1;

@required
-(BOOL)_allowInteraction:(long long)arg1 forTextInteractableItem:(id)arg2;
-(BOOL)_mightHaveInteractableItems;
-(id)_anyTextItemConstrainedToLineAtPoint:(CGPoint)arg1;
-(id)_textInteractableItemAtPoint:(CGPoint)arg1 precision:(unsigned long long)arg2;

@end

