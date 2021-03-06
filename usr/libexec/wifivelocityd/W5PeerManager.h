//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString, W5IDSManager, W5MultipeerConnectivityManager;
@protocol OS_dispatch_queue;

@interface W5PeerManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSString *_localPeerID;	// 16 = 0x10
    W5IDSManager *_ids;	// 24 = 0x18
    W5MultipeerConnectivityManager *_multipeer;	// 32 = 0x20
    NSMutableArray *_waitingToDiscover;	// 40 = 0x28
    NSMutableArray *_waitingToSend;	// 48 = 0x30
    NSMutableArray *_waitingForAck;	// 56 = 0x38
    NSMutableArray *_waitingForResponse;	// 64 = 0x40
    NSMutableDictionary *_peerIDOutgoingQueueMap;	// 72 = 0x48
    unsigned long long _operationCount;	// 80 = 0x50
    NSMutableDictionary *_incomingResourceMap;	// 88 = 0x58
    NSMutableDictionary *_incomingFragmentMap;	// 96 = 0x60
    CDUnknownBlockType _discoveryCallback;	// 104 = 0x68
    CDUnknownBlockType _receivedMessageCallback;	// 112 = 0x70
}

@property(copy, nonatomic) CDUnknownBlockType receivedMessageCallback; // @synthesize receivedMessageCallback=_receivedMessageCallback;
@property(copy, nonatomic) CDUnknownBlockType discoveryCallback; // @synthesize discoveryCallback=_discoveryCallback;
- (void)__receivedData:(id)arg1 peerID:(id)arg2;	// IMP=0x0000000100050dc0
- (id)__peerWithPeerID:(id)arg1;	// IMP=0x0000000100050c40
- (void)__receivedMessage:(id)arg1 peer:(id)arg2;	// IMP=0x0000000100050424
- (void)__nextRequest;	// IMP=0x0000000100050054
- (_Bool)__isLocallyPairedPeerID:(id)arg1;	// IMP=0x000000010004ff18
- (void)__sendRequest:(id)arg1 useIDS:(_Bool)arg2;	// IMP=0x000000010004e8c0
- (void)__sendResourceRequest:(id)arg1 fileHandle:(id)arg2 index:(unsigned long long)arg3 useIDS:(_Bool)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x000000010004e258
- (void)__sendMessageRequest:(id)arg1 index:(unsigned long long)arg2 useIDS:(_Bool)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000010004dd78
- (id)__sendOperationWithData:(id)arg1 index:(unsigned long long)arg2 count:(unsigned long long)arg3 mapToURLCount:(unsigned long long)arg4 messageUUID:(id)arg5 resourceUUID:(id)arg6 peerID:(id)arg7 useIDS:(_Bool)arg8 reply:(CDUnknownBlockType)arg9;	// IMP=0x000000010004d8c4
- (id)__sendOperationWithFileHandle:(id)arg1 aggregateSize:(unsigned long long)arg2 index:(unsigned long long)arg3 count:(unsigned long long)arg4 mapToURLCount:(unsigned long long)arg5 messageUUID:(id)arg6 resourceUUID:(id)arg7 peerID:(id)arg8 useIDS:(_Bool)arg9 reply:(CDUnknownBlockType)arg10;	// IMP=0x000000010004d318
- (void)__cancelOutgoingFragmentsWithUUID:(id)arg1;	// IMP=0x000000010004d108
- (void)__removeRequestWithUUID:(id)arg1;	// IMP=0x000000010004ce90
- (id)__requestWithUUID:(id)arg1;	// IMP=0x000000010004cb1c
- (id)__waitingToSendRequestWithUUID:(id)arg1;	// IMP=0x000000010004c9dc
- (id)__waitingToDiscoverRequestWithUUID:(id)arg1;	// IMP=0x000000010004c89c
- (id)__waitingForAckRequestWithMessageUUID:(id)arg1;	// IMP=0x000000010004c74c
- (id)__waitingForResponseRequestWithMessageUUID:(id)arg1;	// IMP=0x000000010004c5fc
- (void)stopAdvertising;	// IMP=0x000000010004c568
- (void)startAdvertising;	// IMP=0x000000010004c4d4
- (void)stopBrowsing;	// IMP=0x000000010004c440
- (void)startBrowsing;	// IMP=0x000000010004c3ac
- (id)peers;	// IMP=0x000000010004c10c
- (id)localPeer;	// IMP=0x000000010004bfd0
- (id)__localPeer;	// IMP=0x000000010004be94
- (id)__model;	// IMP=0x000000010004bda0
- (void)endTransactionWithPeer:(id)arg1;	// IMP=0x000000010004bcc8
- (void)beginTransactionWithPeer:(id)arg1;	// IMP=0x000000010004bba8
- (void)cancelRequestWithUUID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010004b854
- (void)addRequest:(id)arg1;	// IMP=0x000000010004afc0
- (void)invalidate;	// IMP=0x000000010004aeb0
- (void)activate;	// IMP=0x000000010004a644
- (void)dealloc;	// IMP=0x000000010004a3e0
- (id)init;	// IMP=0x000000010004a204

@end

