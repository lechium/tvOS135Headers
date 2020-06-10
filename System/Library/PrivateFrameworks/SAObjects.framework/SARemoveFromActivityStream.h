/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:38 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString, NSDate;

@interface SARemoveFromActivityStream : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * activityType; 
@property (nonatomic,copy) NSDate * fromDate; 
@property (nonatomic,copy) NSString * streamType; 
@property (nonatomic,copy) NSString * taskType; 
@property (nonatomic,copy) NSDate * toDate; 
@property (nonatomic,copy) NSString * visibility; 
+(id)removeFromActivityStream;
+(id)removeFromActivityStreamWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setTaskType:(NSString *)arg1 ;
-(void)setVisibility:(NSString *)arg1 ;
-(id)groupIdentifier;
-(NSString *)activityType;
-(NSString *)visibility;
-(void)setActivityType:(NSString *)arg1 ;
-(NSString *)taskType;
-(NSDate *)toDate;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)streamType;
-(void)setStreamType:(NSString *)arg1 ;
-(NSDate *)fromDate;
-(void)setFromDate:(NSDate *)arg1 ;
-(void)setToDate:(NSDate *)arg1 ;
@end
