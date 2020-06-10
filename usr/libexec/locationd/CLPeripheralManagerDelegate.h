//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CBPeripheralManagerDelegate-Protocol.h"

@class CLSilo, NSString;

@interface CLPeripheralManagerDelegate : NSObject <CBPeripheralManagerDelegate>
{
    CLSilo *_silo;	// 8 = 0x8
    struct CLBTLEBeaconProvider *_provider;	// 16 = 0x10
}

@property(nonatomic) struct CLBTLEBeaconProvider *provider; // @synthesize provider=_provider;
@property(retain, nonatomic) CLSilo *silo; // @synthesize silo=_silo;
- (void)peripheralManagerDidStartAdvertising:(id)arg1 error:(id)arg2;	// IMP=0x00000001006ea5fc
- (void)peripheralManagerDidUpdateState:(id)arg1;	// IMP=0x00000001006ea3e0
- (id)initWithSilo:(id)arg1 provider:(struct CLBTLEBeaconProvider *)arg2;	// IMP=0x00000001006ea360

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

