//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CLFallNotifierSysdiagnoseLogCollector : NSObject
{
}

+ (void)writeOtherFallLoggerData:(id)arg1 otherLoggerDirectory:(id)arg2 otherLoggerFilePrefix:(id)arg3 destinationLogger:(id)arg4;	// IMP=0x000000010032dc20
+ (void)writeAnomalyInfoToFileWithLastFallEvent:(struct ImpactEvent *)arg1 writeMask:(unsigned long long)arg2 fallNotifierConfig:(struct Config *)arg3 stateLogger:(id)arg4 statsLogger:(id)arg5 sensorsLogger:(id)arg6 pressureLogger:(id)arg7 heartRateLogger:(id)arg8 wristStateLogger:(id)arg9 falsePositiveSuppressionFeaturesLogger:(id)arg10 logDirectory:(id)arg11 logFilePrefix:(id)arg12;	// IMP=0x000000010032d5f8
+ (id)getSysdiagnoseOutputFilename;	// IMP=0x000000010032d560
+ (id)getSysdiagnoseOutputPath;	// IMP=0x000000010032d4c8

@end

