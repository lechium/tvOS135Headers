//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PRClientProxy-Protocol.h"
#import "PRCompanionRangingServerProtocol-Protocol.h"
#import "PRRangingClientProtocol-Protocol.h"

@class NSDictionary, NSString, PRNSXPCConnection, PRRemoteDevice;
@protocol OS_dispatch_queue, PRRangingClientProtocol;

@interface PRCompanionRangingClientProxy : NSObject <PRClientProxy, PRRangingClientProtocol, PRCompanionRangingServerProtocol>
{
    PRNSXPCConnection<PRRangingClientProtocol> *_connWrapper;	// 8 = 0x8
    struct shared_ptr<PRRangingManagerClient> _rangingManagerClient;	// 16 = 0x10
    unsigned short _p2pServiceId;	// 32 = 0x20
    struct unique_ptr<rose::RoseServiceRequest, std::__1::default_delete<rose::RoseServiceRequest>> _rangingRequest;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_queue;	// 48 = 0x30
    NSDictionary *_clientInfo;	// 56 = 0x38
    int _localRangingState;	// 64 = 0x40
    int _companionRangingState;	// 68 = 0x44
    int _companionRoseState;	// 72 = 0x48
    int _companionConnectionState;	// 76 = 0x4c
    int _clientRequestState;	// 80 = 0x50
    _Bool _cleaningUponDidFail;	// 84 = 0x54
    NSDictionary *_startOptions;	// 88 = 0x58
    PRRemoteDevice *_companion;	// 96 = 0x60
    optional_70f095c2 _peerDescriptor;	// 104 = 0x68
}

- (id).cxx_construct;	// IMP=0x000000010000d578
- (void).cxx_destruct;	// IMP=0x000000010000d510
@property optional_70f095c2 peerDescriptor; // @synthesize peerDescriptor=_peerDescriptor;
@property(retain) PRRemoteDevice *companion; // @synthesize companion=_companion;
@property(readonly, copy) NSDictionary *clientInfo; // @synthesize clientInfo=_clientInfo;
- (void)cleanupRangingManagerAndCompanionAfterError:(id)arg1;	// IMP=0x000000010000d234
- (_Bool)stopRangingMangagerAndCompanion:(id *)arg1;	// IMP=0x000000010000cebc
- (void)stopCompanionRanging:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010000cbcc
- (void)startRangingMangager;	// IMP=0x000000010000c7c4
- (_Bool)startRangingMangagerAndCompanion:(id *)arg1;	// IMP=0x000000010000c6a8
- (void)startCompanionRanging:(id)arg1 options:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000010000c0dc
- (void)configureForCompanionRanging:(id)arg1 options:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000010000b36c
- (void)didReceiveSessionStartNotification:(id)arg1;	// IMP=0x000000010000b368
- (void)remoteDevice:(id)arg1 didChangeState:(long long)arg2;	// IMP=0x000000010000b1f8
- (void)rangingRequestDidUpdateStatus:(unsigned long long)arg1;	// IMP=0x000000010000ad20
- (void)combineAndReportLocalAndCompanionRangingRequestStatus;	// IMP=0x000000010000aa3c
- (void)reportRangingRequestStatusUpdate:(unsigned long long)arg1;	// IMP=0x000000010000a92c
- (void)rangingServiceDidUpdateState:(unsigned long long)arg1;	// IMP=0x000000010000a81c
- (void)didReceiveNewSolutions:(id)arg1;	// IMP=0x000000010000a6b0
- (void)didFailWithError:(id)arg1;	// IMP=0x000000010000a4b0
- (void)handleError:(id)arg1;	// IMP=0x000000010000a314
- (void)terminate;	// IMP=0x000000010000a17c
- (void)activate;	// IMP=0x0000000100009fb8
- (void)dealloc;	// IMP=0x0000000100009f34
- (void)connectWithClientInfo:(id)arg1;	// IMP=0x0000000100009d84
- (id)initWithConnection:(id)arg1 queue:(id)arg2;	// IMP=0x00000001000099b8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

