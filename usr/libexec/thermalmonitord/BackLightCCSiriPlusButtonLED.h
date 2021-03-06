//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "BackLightCC.h"

#import "tGraphDataSource-Protocol.h"

@interface BackLightCCSiriPlusButtonLED : BackLightCC <tGraphDataSource>
{
    unsigned int gPowerServiceBL[2];	// 296 = 0x128
    unsigned char displayCount;	// 304 = 0x130
    int _brightnessMilliNitsCurrent[2];	// 308 = 0x134
    int _brightnessMilliNitsMaximum[2];	// 316 = 0x13c
    int currentBackLightLoadingIndex[2];	// 324 = 0x144
    _Bool _solarBehaviorSuppressed;	// 332 = 0x14c
    _Bool _solarDetectorPresent;	// 333 = 0x14d
}

- (void)setSolarDetectorPresent:(_Bool)arg1;	// IMP=0x0000000100009244
- (_Bool)solarDetectorPresent;	// IMP=0x0000000100009234
- (void)setSolarBehaviorSuppressed:(_Bool)arg1;	// IMP=0x0000000100009224
- (_Bool)solarBehaviorSuppressed;	// IMP=0x0000000100009214
- (struct __CFString *)copyFieldCurrentValueForIndex:(int)arg1;	// IMP=0x0000000100009088
- (struct __CFString *)copyHeaderForIndex:(int)arg1;	// IMP=0x0000000100008f90
- (int)numberOfFields;	// IMP=0x0000000100008f58
- (void)setBrightnessKey:(id)arg1 value:(int)arg2;	// IMP=0x0000000100008d50
- (void)refreshFunctionalTelemetry;	// IMP=0x00000001000089f8
- (_Bool)findBacklightServices;	// IMP=0x00000001000087f4
- (id)initWithParams:(struct __CFDictionary *)arg1;	// IMP=0x0000000100008750

@end

