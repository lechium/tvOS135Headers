/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:53 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, UITextRange, NSAttributedString;


@protocol UITextDraggableGeometrySameViewDropOperation <NSObject>
@property (nonatomic,readonly) NSArray * sourceRanges; 
@property (nonatomic,readonly) UITextRange * targetRange; 
@property (nonatomic,readonly) NSAttributedString * text; 
@property (nonatomic,readonly) unsigned long long operation; 
@required
-(unsigned long long)operation;
-(NSAttributedString *)text;
-(UITextRange *)targetRange;
-(NSArray *)sourceRanges;

@end

