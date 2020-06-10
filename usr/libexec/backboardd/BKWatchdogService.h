//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BKHIDSystemInterface, BKSystemAppSentinel;

@interface BKWatchdogService : NSObject
{
    BKSystemAppSentinel *_systemAppSentinel;	// 8 = 0x8
    BKHIDSystemInterface *_hidSystem;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000250ac
@property(retain, nonatomic) BKHIDSystemInterface *hidSystem; // @synthesize hidSystem=_hidSystem;
@property(retain, nonatomic) BKSystemAppSentinel *systemAppSentinel; // @synthesize systemAppSentinel=_systemAppSentinel;
- (_Bool)isAlive;	// IMP=0x0000000100025074
- (void)registerClientsForMonitoring;	// IMP=0x0000000100025064
- (id)init;	// IMP=0x0000000100024fc4

@end

