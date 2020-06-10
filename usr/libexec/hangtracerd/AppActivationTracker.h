//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface AppActivationTracker : NSObject
{
    NSMutableDictionary *appActivationDictionary;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *logOutputQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *activationQueue;	// 24 = 0x18
    int statsToCapture;	// 32 = 0x20
    int reportingMethod;	// 36 = 0x24
}

+ (id)sharedInstance;	// IMP=0x00000001000099c0
- (void).cxx_destruct;	// IMP=0x000000010000ab84
- (void)endAppActivationTrackingForPID:(int)arg1 bundleID:(id)arg2 time:(unsigned long long)arg3 activationState:(int)arg4 activationResult:(int)arg5;	// IMP=0x000000010000a4b8
- (void)beginAppActivationTrackingForPID:(int)arg1 bundleID:(id)arg2 time:(unsigned long long)arg3 xpcStartTime:(unsigned long long)arg4 activationState:(int)arg5 activationType:(int)arg6;	// IMP=0x0000000100009fd4
- (void)setShouldReportData:(_Bool)arg1;	// IMP=0x0000000100009fc0
- (void)setShouldCaptureSystemState:(_Bool)arg1;	// IMP=0x0000000100009fac
- (void)setupMidnightTimer;	// IMP=0x0000000100009bd8
- (void)handleFirstUnlock;	// IMP=0x0000000100009b40
- (id)init;	// IMP=0x0000000100009a2c

@end
