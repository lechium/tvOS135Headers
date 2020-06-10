/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:41 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAWebWebResult.h>

@class NSDate, NSString;

@interface SAWebNewsResult : SAWebWebResult

@property (nonatomic,copy) NSDate * publicationDate; 
@property (nonatomic,copy) NSString * source; 
+(id)newsResult;
+(id)newsResultWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setSource:(NSString *)arg1 ;
-(NSString *)source;
-(id)groupIdentifier;
-(void)setPublicationDate:(NSDate *)arg1 ;
-(NSDate *)publicationDate;
-(id)encodedClassName;
@end

