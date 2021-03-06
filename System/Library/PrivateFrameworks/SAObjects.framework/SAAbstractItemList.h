/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:35 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSArray, NSNumber;

@interface SAAbstractItemList : SADomainObject

@property (nonatomic,copy) NSArray * domainObjects; 
@property (nonatomic,copy) NSNumber * selectedIndex; 
+(id)abstractItemList;
+(id)abstractItemListWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSNumber *)selectedIndex;
-(void)setSelectedIndex:(NSNumber *)arg1 ;
-(id)encodedClassName;
-(NSArray *)domainObjects;
-(void)setDomainObjects:(NSArray *)arg1 ;
@end

