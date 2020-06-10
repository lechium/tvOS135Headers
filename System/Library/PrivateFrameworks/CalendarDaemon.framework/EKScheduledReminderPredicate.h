/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:03 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarDaemon/CalendarDaemon-Structs.h>
#import <CalendarDaemon/EKPredicate.h>

@class NSDate;

@interface EKScheduledReminderPredicate : EKPredicate {

	NSDate* _day;
	unsigned long long _maxResults;

}

@property (nonatomic,retain) NSDate * day;                               //@synthesize day=_day - In the implementation block
@property (assign,nonatomic) unsigned long long maxResults;              //@synthesize maxResults=_maxResults - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)predicateForScheduledRemindersInCalendars:(id)arg1 onDay:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDay:(NSDate *)arg1 ;
-(NSDate *)day;
-(unsigned long long)maxResults;
-(void)setMaxResults:(unsigned long long)arg1 ;
-(id)copyMatchingItemsWithDatabase:(CalDatabase*)arg1 ;
@end
