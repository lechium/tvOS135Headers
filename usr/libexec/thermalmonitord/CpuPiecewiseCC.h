//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CpuCC.h"

@interface CpuPiecewiseCC : CpuCC
{
    int _polygonalCurveVertexCount;	// 176 = 0xb0
    int _maxLoadIndexLimits[9];	// 180 = 0xb4
    int _dvdFactor1Limits[9];	// 216 = 0xd8
}

- (int)maxLoadIndexToDVDFactor1:(int)arg1;	// IMP=0x0000000100011d3c
- (void)refreshFunctionalTelemetry;	// IMP=0x0000000100011ce0
- (id)initWithParams:(struct __CFDictionary *)arg1 listID:(int)arg2 needspowerZones:(_Bool)arg3;	// IMP=0x0000000100011a10

@end
