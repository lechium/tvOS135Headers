/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:01 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKViewElement.h>

@class IKTextElement, IKImageElement;

@interface IKHeaderElement : IKViewElement

@property (nonatomic,retain,readonly) IKTextElement * title; 
@property (nonatomic,retain,readonly) IKTextElement * subtitle; 
@property (nonatomic,retain,readonly) IKTextElement * descriptionText; 
@property (nonatomic,retain,readonly) IKImageElement * image; 
@property (nonatomic,readonly) long long separator; 
-(IKTextElement *)title;
-(IKTextElement *)subtitle;
-(IKImageElement *)image;
-(long long)separator;
-(IKTextElement *)descriptionText;
@end

