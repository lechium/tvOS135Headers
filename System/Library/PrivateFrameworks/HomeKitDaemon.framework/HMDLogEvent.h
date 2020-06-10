/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:06 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSUUID, NSError, NSDate;

@interface HMDLogEvent : HMFObject {

	BOOL _submitted;
	NSUUID* _eventType;
	NSError* _eventError;
	NSDate* _startDate;
	NSDate* _endDate;

}

@property (assign,getter=isSubmitted,nonatomic) BOOL submitted;              //@synthesize submitted=_submitted - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                               //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) NSUUID * eventType;                           //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,retain) NSError * eventError;                           //@synthesize eventError=_eventError - In the implementation block
@property (readonly) double durationInMilliseconds; 
@property (nonatomic,readonly) NSDate * startDate;                           //@synthesize startDate=_startDate - In the implementation block
+(id)stringForSource:(unsigned long long)arg1 ;
-(id)init;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(id)initWithEventType:(id)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(NSUUID *)eventType;
-(double)durationInMilliseconds;
-(void)setSubmitted:(BOOL)arg1 ;
-(BOOL)isSubmitted;
-(void)setEventError:(NSError *)arg1 ;
-(void)submitAtDate:(id)arg1 error:(id)arg2 ;
-(NSError *)eventError;
@end

