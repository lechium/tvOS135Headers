/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:01 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarFoundation/CalendarFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <CalendarFoundation/CalDateRangeProtocol.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSString;

@interface CalDateRange : NSObject <NSCopying, CalDateRangeProtocol, NSSecureCoding> {

	NSDate* _startDate;
	NSDate* _endDate;

}

@property (nonatomic,retain) NSDate * startDate;                    //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                      //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) double duration; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)rangeWithStartDate:(id)arg1 endDate:(id)arg2 ;
+(id)rangeWithRange:(id)arg1 ;
+(id)rangeWithStartDate:(id)arg1 duration:(double)arg2 ;
+(BOOL)rangesIntersectWithStartDate1:(id)arg1 endDate1:(id)arg2 startDate2:(id)arg3 endDate2:(id)arg4 ;
+(BOOL)rangesIntersectWithStartDate1:(id)arg1 endDate1:(id)arg2 startDate2:(id)arg3 endDate2:(id)arg4 allowSinglePointIntersection:(BOOL)arg5 ;
+(id)rangeByExpandingRange:(id)arg1 direction:(long long)arg2 duration:(double)arg3 ;
+(id)rangeByExpandingRange:(id)arg1 direction:(long long)arg2 multiplier:(unsigned long long)arg3 ;
+(id)rangeByExpandingRange:(id)arg1 direction:(long long)arg2 components:(id)arg3 calendar:(id)arg4 ;
+(BOOL)range:(id)arg1 intersectsRange:(id)arg2 ;
+(BOOL)range:(id)arg1 intersectsRange:(id)arg2 allowSinglePointIntersection:(BOOL)arg3 ;
+(BOOL)range:(id)arg1 intersectsRangeWithStartDate:(id)arg2 endDate:(id)arg3 ;
+(BOOL)range:(id)arg1 intersectsRangeWithStartDate:(id)arg2 endDate:(id)arg3 allowSinglePointIntersection:(BOOL)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(BOOL)isValid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithStartDate:(id)arg1 duration:(double)arg2 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(double)duration;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 ;
-(BOOL)containsDate:(id)arg1 ;
-(void)setDuration:(double)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(id)midpoint;
-(void)setStartDate:(id)arg1 endDate:(id)arg2 ;
-(BOOL)intersectsRangeWithStartDate:(id)arg1 endDate:(id)arg2 allowSinglePointIntersection:(BOOL)arg3 ;
-(BOOL)intersectsRange:(id)arg1 ;
-(id)_calculateMidnightsInCalendar:(id)arg1 ;
-(BOOL)containsRange:(id)arg1 ;
-(id)unionRange:(id)arg1 ;
-(id)briefDescription;
-(void)setStartDate:(id)arg1 duration:(double)arg2 ;
-(BOOL)intersectsRange:(id)arg1 allowSinglePointIntersection:(BOOL)arg2 ;
-(BOOL)intersectsRangeWithStartDate:(id)arg1 endDate:(id)arg2 ;
-(id)intersectionWithRange:(id)arg1 ;
-(id)subtractRange:(id)arg1 ;
-(id)midnightsForRangeInTimeZoneString:(id)arg1 ;
@end

