/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:00 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKViewElement.h>

@class IKTextElement, NSString, IKImageElement;

@interface IKButtonElement : IKViewElement

@property (nonatomic,readonly) long long buttonType; 
@property (nonatomic,retain,readonly) IKTextElement * text; 
@property (nonatomic,copy,readonly) NSString * confirmationText; 
@property (nonatomic,retain,readonly) IKImageElement * image; 
-(IKTextElement *)text;
-(IKImageElement *)image;
-(long long)buttonType;
-(NSString *)confirmationText;
@end

