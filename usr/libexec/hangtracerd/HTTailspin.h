//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface HTTailspin : NSObject
{
}

+ (_Bool)saveTailspinWithFileName:(id)arg1 path:(id)arg2 infoDict:(id)arg3 startTime:(unsigned long long)arg4 endTime:(unsigned long long)arg5 processString:(id)arg6 pid:(int)arg7 requestType:(long long)arg8 includeOSSignposts:(_Bool)arg9;	// IMP=0x000000010001abd0
+ (_Bool)saveTailSpinWithFileName:(id)arg1 infoDict:(id)arg2 startTime:(unsigned long long)arg3 endTime:(unsigned long long)arg4 processString:(id)arg5 pid:(int)arg6 requestType:(long long)arg7;	// IMP=0x000000010001a8a8
+ (_Bool)saveTailSpinForService:(id)arg1 reason:(id)arg2 processID:(int)arg3 threadID:(unsigned long long)arg4 procName:(id)arg5 procPath:(id)arg6 startTime:(unsigned long long)arg7 endTime:(unsigned long long)arg8;	// IMP=0x000000010001a3d0
+ (_Bool)saveActivationTailSpinWithType:(id)arg1 reason:(id)arg2 bundleID:(id)arg3 pid:(int)arg4 startTime:(unsigned long long)arg5 endTime:(unsigned long long)arg6;	// IMP=0x0000000100019d00
+ (_Bool)saveSentryTailspin:(id)arg1 infoDict:(id)arg2 startTime:(unsigned long long)arg3 endTime:(unsigned long long)arg4 error:(id *)arg5;	// IMP=0x000000010001967c
+ (void)incrementDailyLogGenerationCountForDuration:(double)arg1 isFirstPartyApp:(_Bool)arg2;	// IMP=0x00000001000191e8
+ (void)incrementAppGeneratedLogsCountForDuration:(double)arg1 procName:(id)arg2 isFirstPartyApp:(_Bool)arg3;	// IMP=0x0000000100018f2c
+ (_Bool)hasExceededDailyLimit:(double)arg1 isFirstPartyApp:(_Bool)arg2;	// IMP=0x0000000100018c44
+ (_Bool)hasAppExceededGeneratedLogsCountForDuration:(double)arg1 procName:(id)arg2 isFirstPartyApp:(_Bool)arg3;	// IMP=0x0000000100018b24
+ (void)resetPerAppCounts;	// IMP=0x0000000100018a90
+ (void)resetPerPeriodSentryTailspinCounts;	// IMP=0x00000001000189d8
+ (void)resetDailySentryTailspinCounts;	// IMP=0x0000000100018920
+ (void)resetDailyActivationTailspinCounts;	// IMP=0x0000000100018868
+ (void)resetAppActivationTailspinCounts;	// IMP=0x00000001000187dc
+ (void)resetDailyGeneratedLogsCounts;	// IMP=0x0000000100018604
+ (void)resetLogCountsForDailyRollover;	// IMP=0x0000000100018554
+ (void)resetLogCountsForEPL;	// IMP=0x00000001000184b4
+ (void)refreshPerPeriodSentryLogCount;	// IMP=0x00000001000183ec
+ (void)refreshAppGeneratedLogsCount;	// IMP=0x0000000100018134
+ (void)initialize;	// IMP=0x00000001000180e4

@end

