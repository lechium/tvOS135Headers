/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:59 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CNUIDate : NSObject
+(void)initialize;
+(void)localeDidChange:(id)arg1 ;
+(id)gregorianCalendarGMT;
+(id)componentsFromDate:(id)arg1 sourceCalendar:(id)arg2 destinationCalendar:(id)arg3 ;
+(BOOL)isYearlessComponents:(id)arg1 ;
+(id)yearlessComponentsFromDate:(id)arg1 calendar:(id)arg2 ;
+(id)currentCalendarGMT;
+(id)GMTComponentsFromDate:(id)arg1 sourceCalendar:(id)arg2 ;
+(id)yearlessComponentsFromDate:(id)arg1 ;
+(id)dateFromComponents:(id)arg1 destinationCalendar:(id)arg2 ;
+(id)dateByNormalizingToGMT:(id)arg1 ;
@end

