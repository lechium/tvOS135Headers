/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:47 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SAAnswerAnswerProperty : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * value; 
@property (nonatomic,copy) NSString * valueAnnotation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)answerProperty;
+(id)answerPropertyWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)valueAnnotation;
-(void)setValueAnnotation:(NSString *)arg1 ;
@end

