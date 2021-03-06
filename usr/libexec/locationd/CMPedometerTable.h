//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface CMPedometerTable : NSObject
{
    NSString *_tableName;	// 8 = 0x8
    NSString *_valueInName;	// 16 = 0x10
    NSString *_valueOutName;	// 24 = 0x18
    double _defaultValue;	// 32 = 0x20
    vector_b67dfe3a _binBoundariesWalk;	// 40 = 0x28
    vector_b67dfe3a _binBoundariesRun;	// 64 = 0x40
    vector_b67dfe3a _binBoundaries;	// 88 = 0x58
    _Bool _testMode;	// 112 = 0x70
    struct CLPersistentStore *_persistentStore;	// 120 = 0x78
    NSMutableArray *_bins;	// 128 = 0x80
}

+ (id)convertToCMStrideCalibrationData:(id)arg1;	// IMP=0x00000001004360ec
+ (id)convertToCMPedometerBins:(id)arg1;	// IMP=0x0000000100435f7c
- (id).cxx_construct;	// IMP=0x00000001004362a8
- (void).cxx_destruct;	// IMP=0x0000000100436254
- (void)updateBinsWithValueOut:(double)arg1 valueIn:(double)arg2 alpha:(double)arg3;	// IMP=0x0000000100435b44
- (id)description;	// IMP=0x0000000100435944
- (unsigned long long)walkBinCount;	// IMP=0x0000000100435934
- (_Bool)testMode;	// IMP=0x000000010043592c
- (void)binsDidChange;	// IMP=0x0000000100435928
- (void)logBins;	// IMP=0x0000000100435924
- (void)setBins:(id)arg1;	// IMP=0x0000000100435840
- (CDStruct_2c43369c)binIntervalForValueIn:(double)arg1;	// IMP=0x00000001004357d0
- (_Bool)isValueInValid:(double)arg1;	// IMP=0x00000001004357ac
- (unsigned long long)binIndexForValueIn:(double)arg1;	// IMP=0x0000000100435708
- (_Bool)isValueInRun:(double)arg1;	// IMP=0x00000001004356f4
- (_Bool)isBin:(unsigned long long)arg1 sameActivityAsBin:(unsigned long long)arg2;	// IMP=0x0000000100435674
- (void)updateAdjacentBin:(unsigned long long)arg1 withAlpha:(double)arg2 valueOut:(double)arg3 nativeBin:(unsigned long long)arg4;	// IMP=0x000000010043552c
- (void)updateNativeBin:(unsigned long long)arg1 withAlpha:(double)arg2 valueOut:(double)arg3;	// IMP=0x0000000100435430
- (_Bool)isRunNativeValueOutAvailable;	// IMP=0x00000001004353e4
- (_Bool)isWalkNativeValueOutAvailable;	// IMP=0x0000000100435398
- (_Bool)isNativeValueOutAvailableInBinsFromIndex:(unsigned long long)arg1 withLength:(unsigned long long)arg2;	// IMP=0x0000000100435228
- (double)valueOutForValueIn:(double)arg1;	// IMP=0x0000000100434e38
- (id)copyBins;	// IMP=0x0000000100434dd4
- (void)dealloc;	// IMP=0x0000000100434d74
- (id)defaultBins;	// IMP=0x0000000100434cb0
- (id)initWithTableName:(id)arg1 valueInName:(id)arg2 valueOutName:(id)arg3 defaultValue:(double)arg4 binBoundariesWalk:(vector_b67dfe3a)arg5 binBoundariesRun:(vector_b67dfe3a)arg6 testMode:(_Bool)arg7;	// IMP=0x00000001004348e8

@end

