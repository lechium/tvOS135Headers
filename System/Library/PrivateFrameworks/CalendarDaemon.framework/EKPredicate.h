/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:03 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarDaemon/CADPredicate.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSTimeZone, NSDate, NSArray, NSSet;

@interface EKPredicate : CADPredicate <NSSecureCoding> {

	NSString* _uuid;
	NSTimeZone* _timeZone;
	NSDate* _startDate;
	NSDate* _endDate;
	NSArray* _calendars;
	NSString* _title;
	NSSet* _restrictedCalendarRowIDs;

}

@property (nonatomic,retain) NSDate * startDate;                            //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                              //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,retain) NSArray * calendars;                           //@synthesize calendars=_calendars - In the implementation block
@property (nonatomic,retain) NSString * title;                              //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSSet * restrictedCalendarRowIDs;              //@synthesize restrictedCalendarRowIDs=_restrictedCalendarRowIDs - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(id)predicateFormat;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(id)initWithCalendars:(id)arg1 ;
-(NSArray *)calendars;
-(NSSet *)restrictedCalendarRowIDs;
-(void)setRestrictedCalendarRowIDs:(NSSet *)arg1 ;
-(void)setCalendars:(NSArray *)arg1 ;
@end

