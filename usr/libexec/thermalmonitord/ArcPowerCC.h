//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ComponentControl.h"

#import "tGraphDataSource-Protocol.h"

@class CommonProduct;

@interface ArcPowerCC : ComponentControl <tGraphDataSource>
{
    CommonProduct *_product;	// 120 = 0x78
    int _thresholdModuleTemperature;	// 128 = 0x80
    int _latestModuleTemperature;	// 132 = 0x84
    int _maxArcPower;	// 136 = 0x88
    int _minArcPower;	// 140 = 0x8c
    int _arcPowerTarget;	// 144 = 0x90
    int _arcCurrentPower;	// 148 = 0x94
}

- (struct __CFString *)copyFieldCurrentValueForIndex:(int)arg1;	// IMP=0x0000000100014cf4
- (struct __CFString *)copyHeaderForIndex:(int)arg1;	// IMP=0x0000000100014c44
- (int)numberOfFields;	// IMP=0x0000000100014c0c
- (void)refreshTGraphTelemetry;	// IMP=0x0000000100014c08
- (void)updatePowerTarget;	// IMP=0x0000000100014b48
- (void)defaultAction;	// IMP=0x0000000100014afc
- (id)initWithParams:(struct __CFDictionary *)arg1 product:(id)arg2;	// IMP=0x000000010001486c

@end

