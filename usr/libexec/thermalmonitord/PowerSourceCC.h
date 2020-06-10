//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ComponentControl.h"

#import "tGraphDataSource-Protocol.h"

@class NSArray;

@interface PowerSourceCC : ComponentControl <tGraphDataSource>
{
    int chargeLevel;	// 120 = 0x78
    int previousChargeLevel;	// 124 = 0x7c
    unsigned int pmuPowerService;	// 128 = 0x80
    unsigned short availableCurrent;	// 132 = 0x84
    unsigned short brickPowerID;	// 134 = 0x86
    unsigned short inputCurrent;	// 136 = 0x88
    unsigned int watts;	// 140 = 0x8c
    unsigned int familyCode;	// 144 = 0x90
    NSArray *maxLITable;	// 152 = 0x98
    NSArray *chargeLimitTable;	// 160 = 0xa0
}

- (struct __CFString *)copyFieldCurrentValueForIndex:(int)arg1;	// IMP=0x0000000100032678
- (struct __CFString *)copyHeaderForIndex:(int)arg1;	// IMP=0x00000001000325dc
- (int)numberOfFields;	// IMP=0x00000001000325a4
- (void)refreshTGraphTelemetry;	// IMP=0x0000000100032534
- (void)getAdaptorPMUValue;	// IMP=0x000000010003233c
- (void)defaultAction;	// IMP=0x0000000100032064
- (void)dealloc;	// IMP=0x0000000100031fe8
- (id)initWithParams:(struct __CFDictionary *)arg1;	// IMP=0x0000000100031c80

@end

