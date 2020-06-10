/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:57 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIUndoTextOperation.h>

@class NSAttributedString;

@interface _UITextUndoOperationReplace : _UIUndoTextOperation {

	NSRange _replacementRange;
	NSAttributedString* _attributedString;

}
-(void)undoRedo;
-(id)initWithAffectedRange:(NSRange)arg1 inputController:(id)arg2 replacementRange:(NSRange)arg3 ;
@end

