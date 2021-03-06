//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol OS_dispatch_source;

@interface AggDThermalMonitor : NSObject
{
    double cacheValues[8];	// 8 = 0x8
    NSObject<OS_dispatch_source> *theTimer;	// 72 = 0x48
    long long _scalarValues[16];	// 80 = 0x50
    NSArray *_temperatureHistograms;	// 208 = 0xd0
}

- (void)uploadAggdData;	// IMP=0x00000001000182d4
- (void)incrementHistogramMostRecentBin:(int)arg1 count:(unsigned int)arg2;	// IMP=0x0000000100018260
- (void)incrementHistogram:(int)arg1 temperature:(int)arg2 count:(int)arg3;	// IMP=0x00000001000181e4
- (void)incrementHistogram:(int)arg1 temperature:(int)arg2;	// IMP=0x00000001000181d4
- (void)incrementAggregateDictScalar:(int)arg1 value:(long long)arg2;	// IMP=0x00000001000180a8
- (void)resetScalarCounts;	// IMP=0x0000000100018090
- (void)updateAggregateCell:(int)arg1:(double)arg2;	// IMP=0x0000000100018058
- (void)updateAggregateDictStats:(int)arg1:(double)arg2:(_Bool)arg3;	// IMP=0x0000000100017fd8
- (double)maxValue:(_Bool)arg1;	// IMP=0x0000000100017fb4
- (void)dealloc;	// IMP=0x0000000100017f64
- (id)init;	// IMP=0x0000000100017f54
- (id)initForTemperatureHistogramTypes:(id)arg1;	// IMP=0x0000000100017cd4

@end

