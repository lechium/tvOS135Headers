/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:36 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicLibrary/ML3Predicate.h>

@class NSString;

@interface ML3PropertyPredicate : ML3Predicate {

	NSString* _property;

}

@property (nonatomic,copy) NSString * property;              //@synthesize property=_property - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)predicateWithProperty:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithProperty:(id)arg1 ;
-(NSString *)property;
-(void)setProperty:(NSString *)arg1 ;
-(id)SQLJoinClausesForClass:(Class)arg1 ;
-(void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2 ;
-(BOOL)isDynamicForEntityClass:(Class)arg1 ;
@end

