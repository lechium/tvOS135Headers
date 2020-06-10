/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:35 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSString;

@interface SAStockReference : SADomainObject

@property (nonatomic,copy) NSString * companyName; 
@property (nonatomic,copy) NSString * symbol; 
+(id)reference;
+(id)referenceWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)symbol;
-(id)groupIdentifier;
-(void)setCompanyName:(NSString *)arg1 ;
-(NSString *)companyName;
-(id)encodedClassName;
-(void)setSymbol:(NSString *)arg1 ;
@end

