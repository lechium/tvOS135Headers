//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ComponentControl.h"

#import "tGraphDataSource-Protocol.h"

@interface WiFiCC : ComponentControl <tGraphDataSource>
{
    struct __WiFiManagerClient *manager;	// 120 = 0x78
}

- (void)refreshTGraphTelemetry;	// IMP=0x000000010000ed28
- (void)defaultAction;	// IMP=0x000000010000ec24
- (id)initWithParams:(struct __CFDictionary *)arg1;	// IMP=0x000000010000eadc

@end

