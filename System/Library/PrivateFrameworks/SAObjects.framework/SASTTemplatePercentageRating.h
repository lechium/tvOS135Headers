/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:40 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SASTTemplateRating.h>

@class SAUILocalImageResource, SAUIDecoratedText;

@interface SASTTemplatePercentageRating : SASTTemplateRating

@property (nonatomic,retain) SAUILocalImageResource * localImageResource; 
@property (nonatomic,retain) SAUIDecoratedText * value; 
+(id)templatePercentageRating;
+(id)templatePercentageRatingWithDictionary:(id)arg1 context:(id)arg2 ;
-(SAUIDecoratedText *)value;
-(void)setValue:(SAUIDecoratedText *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(SAUILocalImageResource *)localImageResource;
-(void)setLocalImageResource:(SAUILocalImageResource *)arg1 ;
@end

