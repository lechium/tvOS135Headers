//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CMStrideCalibrationStats : NSObject
{
    struct CLStrideCalibrationSessionMetrics fSessionMetrics;	// 8 = 0x8
    long long fHeightCM;	// 104 = 0x68
    struct CMFixedSizeQueue<double, 2> fLastAWDTimestamps;	// 112 = 0x70
}

- (id).cxx_construct;	// IMP=0x00000001002f869c
- (void).cxx_destruct;	// IMP=0x00000001002f8698
- (void)updateUserHeight:(long long)arg1;	// IMP=0x00000001002f8690
- (void)storeLastAWDTimestamps;	// IMP=0x00000001002f8624
- (void)loadLastAWDTimestamps;	// IMP=0x00000001002f8528
- (void)awdMotionFitnessStrideCalibration:(const CDStruct_9878d8f4 *)arg1;	// IMP=0x00000001002f8054
- (void)activityLoggerLogStrideCalEntry:(const CDStruct_9878d8f4 *)arg1;	// IMP=0x00000001002f7dfc
- (void)awdLogDistance:(double)arg1 status:(int)arg2 description:(id)arg3;	// IMP=0x00000001002f7b94
- (void)setReadyForSubmission;	// IMP=0x00000001002f7b80
- (void)endSessionMetrics:(double)arg1;	// IMP=0x00000001002f789c
- (void)startSessionMetricsWithTime:(double)arg1 session:(int)arg2;	// IMP=0x00000001002f7848
- (id)init;	// IMP=0x00000001002f77d8

@end

