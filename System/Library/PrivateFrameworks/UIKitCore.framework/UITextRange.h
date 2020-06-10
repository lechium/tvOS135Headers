/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:39 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UITextRangeImpl, UITextPosition;

@interface UITextRange : NSObject

@property (getter=_isCaret,nonatomic,readonly) BOOL isCaret; 
@property (getter=_isRanged,nonatomic,readonly) BOOL isRanged; 
@property (getter=_isImpl,nonatomic,readonly) UITextRangeImpl * isImpl; 
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
@property (nonatomic,readonly) UITextPosition * start; 
@property (nonatomic,readonly) UITextPosition * end; 
-(BOOL)isEmpty;
-(UITextPosition *)start;
-(UITextPosition *)end;
-(BOOL)_isCaret;
-(BOOL)_isRanged;
-(id)_isImpl;
@end

