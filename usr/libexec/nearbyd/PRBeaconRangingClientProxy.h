//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PRBeaconRangingProtocol-Protocol.h"
#import "PRClientProxy-Protocol.h"
#import "PRRangingClientProtocol-Protocol.h"

@class NSDictionary, NSString, PRNSXPCConnection;
@protocol PRRangingClientProtocol;

@interface PRBeaconRangingClientProxy : NSObject <PRClientProxy, PRRangingClientProtocol, PRBeaconRangingProtocol>
{
    PRNSXPCConnection<PRRangingClientProtocol> *_connWrapper;	// 8 = 0x8
    struct shared_ptr<PRRangingManagerClient> _rangingManagerClient;	// 16 = 0x10
    NSDictionary *_clientInfo;	// 32 = 0x20
    unsigned short _initiatorTicketId;	// 40 = 0x28
    unsigned short _responderTicketId;	// 42 = 0x2a
    _Bool _terminated;	// 44 = 0x2c
    double _initiationTime;	// 48 = 0x30
    struct map<unsigned long long, double, std::__1::less<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, double>>> _responders;	// 56 = 0x38
    struct mutex _mapMutex;	// 80 = 0x50
    unsigned short _pointToShareInitiatorServiceId;	// 144 = 0x90
}

- (id).cxx_construct;	// IMP=0x0000000100014248
- (void).cxx_destruct;	// IMP=0x00000001000141fc
@property unsigned short pointToShareInitiatorServiceId; // @synthesize pointToShareInitiatorServiceId=_pointToShareInitiatorServiceId;
@property(readonly, copy) NSDictionary *clientInfo; // @synthesize clientInfo=_clientInfo;
- (_Bool)createBeaconListenerJob:(id *)arg1;	// IMP=0x0000000100013b90
- (void)disablePTSInitiating:(CDUnknownBlockType)arg1;	// IMP=0x0000000100013468
- (void)enablePTSInitiating:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100012dc0
- (void)clearBeaconWhitelist:(CDUnknownBlockType)arg1;	// IMP=0x0000000100012bb4
- (void)pushBeaconWhitelist:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100012418
- (void)stopBeaconing:(long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000121d0
- (void)startBeaconing:(long long)arg1 options:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100011f5c
- (void)rangingRequestDidUpdateStatus:(unsigned long long)arg1;	// IMP=0x0000000100011e4c
- (void)rangingServiceDidUpdateState:(unsigned long long)arg1;	// IMP=0x0000000100011d3c
- (void)didReceiveNewSolutions:(id)arg1;	// IMP=0x00000001000119b8
- (void)didFailWithError:(id)arg1;	// IMP=0x000000010001184c
- (void)terminate;	// IMP=0x0000000100011798
- (void)activate;	// IMP=0x0000000100011618
- (void)dealloc;	// IMP=0x000000010001153c
- (void)connectWithClientInfo:(id)arg1;	// IMP=0x000000010001138c
- (id)initWithConnection:(id)arg1 queue:(id)arg2;	// IMP=0x00000001000110c8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
