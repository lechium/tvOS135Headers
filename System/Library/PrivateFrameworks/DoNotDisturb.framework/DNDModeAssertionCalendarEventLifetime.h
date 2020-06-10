/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:27 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DoNotDisturb/DNDModeAssertionLifetime.h>

@class NSString, NSDate;

@interface DNDModeAssertionCalendarEventLifetime : DNDModeAssertionLifetime {

	BOOL _onlyDuringEvent;
	NSString* _eventUniqueID;
	NSDate* _occurrenceDate;

}

@property (nonatomic,copy,readonly) NSString * eventUniqueID;                              //@synthesize eventUniqueID=_eventUniqueID - In the implementation block
@property (nonatomic,copy,readonly) NSDate * occurrenceDate;                               //@synthesize occurrenceDate=_occurrenceDate - In the implementation block
@property (getter=isOnlyDuringEvent,nonatomic,readonly) BOOL onlyDuringEvent;              //@synthesize onlyDuringEvent=_onlyDuringEvent - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)occurrenceDate;
-(NSString *)eventUniqueID;
-(unsigned long long)lifetimeType;
-(id)initWithEventUniqueID:(id)arg1 occurrenceDate:(id)arg2 onlyDuringEvent:(BOOL)arg3 ;
-(BOOL)isOnlyDuringEvent;
@end

