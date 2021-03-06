/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:59 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, NSURL, NSTextAttachment;


@protocol UITextItem <NSObject>
@property (nonatomic,readonly) NSArray * rects; 
@property (nonatomic,readonly) NSRange range; 
@property (nonatomic,readonly) long long type; 
@property (nonatomic,readonly) NSURL * link; 
@property (nonatomic,readonly) NSTextAttachment * attachment; 
@required
-(long long)type;
-(NSRange)range;
-(NSURL *)link;
-(NSTextAttachment *)attachment;
-(NSArray *)rects;

@end

