/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:43 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SASTTemplateItem.h>

@class SAUIDecoratedText, NSString;

@interface SASTSpecificAnswerItem : AceObject <SASTTemplateItem>

@property (nonatomic,retain) SAUIDecoratedText * decoratedFooter; 
@property (nonatomic,retain) SAUIDecoratedText * decoratedValue; 
@property (nonatomic,copy) NSString * footer; 
@property (nonatomic,copy) NSString * value; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)specificAnswerItem;
+(id)specificAnswerItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(SAUIDecoratedText *)decoratedValue;
-(void)setDecoratedValue:(SAUIDecoratedText *)arg1 ;
-(SAUIDecoratedText *)decoratedFooter;
-(void)setDecoratedFooter:(SAUIDecoratedText *)arg1 ;
-(NSString *)footer;
-(void)setFooter:(NSString *)arg1 ;
@end

