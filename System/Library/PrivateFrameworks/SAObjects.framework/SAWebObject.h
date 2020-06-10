/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:41 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSString, SAWebWebSearchResult;

@interface SAWebObject : SADomainObject

@property (nonatomic,copy) NSString * query; 
@property (nonatomic,retain) SAWebWebSearchResult * results; 
+(id)object;
+(id)objectWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)query;
-(SAWebWebSearchResult *)results;
-(void)setQuery:(NSString *)arg1 ;
-(id)groupIdentifier;
-(void)setResults:(SAWebWebSearchResult *)arg1 ;
-(id)encodedClassName;
@end

