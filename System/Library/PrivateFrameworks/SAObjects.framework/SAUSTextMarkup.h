/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:33 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAUSMarkup.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SAUSTextMarkup : AceObject <SAUSMarkup, SAAceSerializable>

@property (assign,nonatomic) BOOL emphasized; 
@property (nonatomic,copy) NSString * text; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)textMarkup;
+(id)textMarkupWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id)encodedClassName;
-(BOOL)emphasized;
-(void)setEmphasized:(BOOL)arg1 ;
@end

