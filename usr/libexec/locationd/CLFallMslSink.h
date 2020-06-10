//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CLFallMslSink : NSObject
{
    struct list<CMMsl::Item *, std::__1::allocator<CMMsl::Item *>> fOrderedSample;	// 8 = 0x8
    struct ImpactEvent fImpactEvent;	// 32 = 0x20
    _Bool fIncludeDerivedFeatures;	// 230 = 0xe6
}

- (id).cxx_construct;	// IMP=0x0000000100480378
- (void).cxx_destruct;	// IMP=0x0000000100480370
- (void)cleanUp;	// IMP=0x0000000100480360
- (void)cleanUpIncludingDerivedFeatures:(_Bool)arg1;	// IMP=0x0000000100480280
- (void)sendData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010047fcc0
- (void)logSuppressionFeartures:(const FalsePositiveSuppressionFeatures_8c0e6519 *)arg1;	// IMP=0x000000010047fb10
- (void)logFallStats:(const struct ImpactEvent *)arg1;	// IMP=0x000000010047f578
- (void)logFallState:(const struct ImpactEvent *)arg1;	// IMP=0x000000010047f408
- (void)logWristState:(const WristState_948f25b1 *)arg1;	// IMP=0x000000010047f2dc
- (void)logHeartRate:(const struct CLCatherineData *)arg1;	// IMP=0x000000010047f148
- (void)logPressure:(const Pressure_bceab11c *)arg1;	// IMP=0x000000010047f08c
- (void)logFilteredPressure:(const FilteredPressure_54a5c05a *)arg1;	// IMP=0x000000010047efd0
- (void)logDeviceMotion:(const struct ImpactData *)arg1;	// IMP=0x000000010047eeb0
- (void)logGyro200:(const struct ImpactData *)arg1;	// IMP=0x000000010047edbc
- (void)logGyro100:(id)arg1 startTime:(double)arg2 timestamp:(unsigned long long)arg3;	// IMP=0x000000010047ec0c
- (void)logAccel800:(const struct ImpactData *)arg1;	// IMP=0x000000010047eb18
- (void)logAccel100:(id)arg1 startTime:(double)arg2 timestamp:(unsigned long long)arg3;	// IMP=0x000000010047e968
- (void)dealloc;	// IMP=0x000000010047e91c
- (id)initInUniverse:(id)arg1;	// IMP=0x000000010047e8e0
- (void)_insertSample:(struct Item *)arg1;	// IMP=0x000000010047e6b0

@end

