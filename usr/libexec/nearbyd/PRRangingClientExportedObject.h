//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PRAidedRangingClientProtocol-Protocol.h"
#import "PRRangingClientProtocol-Protocol.h"

@class NSString;
@protocol PRRangingClientProtocol;

@interface PRRangingClientExportedObject : NSObject <PRRangingClientProtocol, PRAidedRangingClientProtocol>
{
    id <PRRangingClientProtocol> _rangingClient;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001000fa1b8
@property(nonatomic) __weak id <PRRangingClientProtocol> rangingClient; // @synthesize rangingClient=_rangingClient;
- (void)sendDataToPeers:(id)arg1;	// IMP=0x00000001000fa128
- (void)remoteDevice:(id)arg1 didChangeState:(long long)arg2;	// IMP=0x00000001000fa0b4
- (void)rangingRequestDidUpdateStatus:(unsigned long long)arg1;	// IMP=0x00000001000fa05c
- (void)didReceiveNewSolutions:(id)arg1;	// IMP=0x00000001000f9ff0
- (void)rangingServiceDidUpdateState:(unsigned long long)arg1;	// IMP=0x00000001000f9fb4
- (void)didFailWithError:(id)arg1;	// IMP=0x00000001000f9f64
- (id)initWithRangingClient:(id)arg1;	// IMP=0x00000001000f9ef8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

