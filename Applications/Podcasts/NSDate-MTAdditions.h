//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep  6 2019 11:16:02).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSDate.h>

#import "IMJSONSerializableValueProviding-Protocol.h"

@class NSString;

@interface NSDate (MTAdditions) <IMJSONSerializableValueProviding>
+ (id)mt_lessVerboseDateFormatter;	// IMP=0x000000010002da94
+ (id)mt_verboseDateFormatter;	// IMP=0x000000010002d990
+ (id)mt_dateFormatterNoYearAbbrevMonth;	// IMP=0x000000010002d88c
+ (id)mt_dateFormatterNoYear;	// IMP=0x000000010002d788
+ (id)mt_dateFormatterShortStyleWithYear;	// IMP=0x000000010002d6ac
+ (id)mt_dateFormatterNoDayWithYear;	// IMP=0x000000010002d5a8
+ (id)mt_dateFormatterJustYear;	// IMP=0x000000010002d474
+ (id)mt_dateFormatterWithYear;	// IMP=0x000000010002d370
+ (double)maxWidthForMicroFriendlyDateStringWithFont:(id)arg1;	// IMP=0x000000010002d230
+ (id)dayOfWeekFromDate:(id)arg1 abbreviated:(_Bool)arg2;	// IMP=0x000000010002ca18
+ (id)stringWithDurationLongMinutes:(double)arg1;	// IMP=0x00000001001ca954
+ (id)stringWithDurationRentalDuration:(double)arg1;	// IMP=0x00000001001ca488
+ (id)stringWithDurationRentalExpiration:(double)arg1 shouldWarn:(_Bool *)arg2;	// IMP=0x00000001001ca478
+ (id)stringWithDurationRentalExpiration:(double)arg1 shouldWarn:(_Bool *)arg2 abbreviated:(_Bool)arg3;	// IMP=0x00000001001ca0e0
+ (id)stringWithDurationSongWithHours:(double)arg1;	// IMP=0x00000001001c9f70
+ (id)stringWithDuration:(double)arg1;	// IMP=0x00000001001c9df4
+ (id)mailLikeDescriptionFromDate:(id)arg1;	// IMP=0x00000001001c9d14
+ (id)downloadDurationStringFromTime:(double)arg1;	// IMP=0x00000001001c9d08
+ (id)downloadDurationStringFromTime_Phone:(double)arg1;	// IMP=0x00000001001c9cfc
+ (id)shortStandardTimeStringFromDate:(id)arg1;	// IMP=0x00000001001c9c28
+ (id)amPMStringFromDate:(id)arg1;	// IMP=0x00000001001c9ad8
+ (id)postTimeStringFromDate:(id)arg1;	// IMP=0x00000001001c9a28
+ (id)dayOfWeekFromDate:(id)arg1;	// IMP=0x00000001001c9924
+ (id)monthYearFromDate:(id)arg1;	// IMP=0x00000001001c9898
+ (id)dateFormatterWithTemplate:(id)arg1;	// IMP=0x00000001001c960c
+ (id)longDayStringFromDate:(id)arg1;	// IMP=0x00000001001c9508
+ (id)shortTimeStringFromDate:(id)arg1;	// IMP=0x00000001001c94f0
+ (id)longDateStringFromDate:(id)arg1;	// IMP=0x00000001001c94d8
+ (id)mediumDateStringFromDate:(id)arg1;	// IMP=0x00000001001c94c0
+ (id)shortDateStringFromDate:(id)arg1;	// IMP=0x00000001001c94a8
+ (id)shortDateStringFromDateNoRel:(id)arg1;	// IMP=0x00000001001c9490
+ (id)dateStringFromDate:(id)arg1 withDateStyle:(unsigned long long)arg2 timeStyle:(unsigned long long)arg3 isRelative:(_Bool)arg4;	// IMP=0x00000001001c9258
+ (id)dateFormatter;	// IMP=0x00000001001c915c
+ (id)dateFromRFC1123:(id)arg1;	// IMP=0x00000001001cb170
- (id)mt_dateWithDeltaDays:(long long)arg1;	// IMP=0x000000010002dca8
- (_Bool)isLessThanWeekOld;	// IMP=0x000000010002db98
- (_Bool)isSameDayOfWeekAs:(id)arg1;	// IMP=0x000000010002d188
- (_Bool)inSameYearAs:(id)arg1;	// IMP=0x000000010002d094
- (_Bool)isThisYear;	// IMP=0x000000010002d034
- (id)timeString;	// IMP=0x000000010002cf80
- (id)verboseDisplayStringWithoutTime;	// IMP=0x000000010002cf1c
- (id)lessVerboseDisplayString;	// IMP=0x000000010002cdec
- (id)verboseDisplayString;	// IMP=0x000000010002ccbc
- (id)nanoFriendlyDisplayString;	// IMP=0x000000010002c7f4
- (id)microFriendlyDisplayString;	// IMP=0x000000010002c5d0
- (id)abbreviatedFriendlyDisplayString;	// IMP=0x000000010002c3ac
- (id)yearString;	// IMP=0x000000010002c348
- (id)friendlyDisplayString;	// IMP=0x000000010002c124
- (id)im_jsonSerializableValue;	// IMP=0x00000001001a6d44
- (id)daysFromToday;	// IMP=0x00000001001cafb4
- (_Bool)nextWeek;	// IMP=0x00000001001caf4c
- (_Bool)thisWeek;	// IMP=0x00000001001caeec
- (_Bool)lastWeek;	// IMP=0x00000001001cae84
- (_Bool)inSameWeekAs:(id)arg1;	// IMP=0x00000001001cad5c
- (id)dateForBeginningOfMonth;	// IMP=0x00000001001cac54
- (id)dateForEndOfDay;	// IMP=0x00000001001cab3c
- (id)dateForBeginningOfDay;	// IMP=0x00000001001caa24
- (id)dateAtWeekStart;	// IMP=0x00000001001c90e0
- (_Bool)isNextWeek;	// IMP=0x00000001001c9054
- (_Bool)wasLessThanAWeekAgo;	// IMP=0x00000001001c8fac
- (_Bool)wasLastWeek;	// IMP=0x00000001001c8f20
- (_Bool)isThisWeek;	// IMP=0x00000001001c8ec0
- (_Bool)wasYesterday;	// IMP=0x00000001001c8e34
- (_Bool)isFuture;	// IMP=0x00000001001c8dd0
- (_Bool)isToday;	// IMP=0x00000001001c8d70
- (id)dateWithDeltaWeeks:(long long)arg1;	// IMP=0x00000001001c8ccc
- (id)dateWithDeltaDays:(long long)arg1;	// IMP=0x00000001001c8c28
- (_Bool)isEqualToYear:(id)arg1;	// IMP=0x00000001001c8b00
- (_Bool)isEqualToWeek:(id)arg1;	// IMP=0x00000001001c89d8
- (_Bool)isEqualToDay:(id)arg1;	// IMP=0x00000001001c88a8
- (id)rfc1123String;	// IMP=0x00000001001cb440

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
