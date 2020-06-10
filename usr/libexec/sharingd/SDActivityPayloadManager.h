//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDSServiceDelegate-Protocol.h"

@class CUSystemMonitor, IDSService, NSMutableArray, NSMutableDictionary, NSString, RPCompanionLinkClient, SDActivityAdvertiser, SDActivityScanner;

__attribute__((visibility("hidden")))
@interface SDActivityPayloadManager : NSObject <IDSServiceDelegate>
{
    IDSService *_activityService;	// 8 = 0x8
    IDSService *_encryptionService;	// 16 = 0x10
    RPCompanionLinkClient *_rapportDiscoveryClient;	// 24 = 0x18
    _Bool _restrictionsDisabled;	// 32 = 0x20
    SDActivityAdvertiser *_advertiser;	// 40 = 0x28
    SDActivityScanner *_scanner;	// 48 = 0x30
    CUSystemMonitor *_systemMonitor;	// 56 = 0x38
    _Bool _hsa2Enabled;	// 64 = 0x40
    NSMutableDictionary *_uniqueIDToKeyReplyDate;	// 72 = 0x48
    NSMutableDictionary *_messageIdentifierToKeyRequestRecords;	// 80 = 0x50
    NSMutableDictionary *_messageIdentifierToReplyRecords;	// 88 = 0x58
    NSMutableDictionary *_messageIdentifierToRequestRecords;	// 96 = 0x60
    int _systemPreferenceChangedToken;	// 104 = 0x68
    NSMutableArray *_cachedActivityPayloadsForDemo;	// 112 = 0x70
}

+ (id)sharedPayloadManager;	// IMP=0x00000001000f2da8
- (void).cxx_destruct;	// IMP=0x00000001000fc5b8
- (void)handleNewAdvertisementWithpayloadRequestProtobuf:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00000001000fc1fc
- (void)sendActivityPayloadWithAdvertisementData:(id)arg1 forAdvertisementPayload:(id)arg2 activityIdentifier:(id)arg3 activityPayload:(id)arg4;	// IMP=0x00000001000fb9f0
- (void)setUpHandoffPreferenceMonitor;	// IMP=0x00000001000fb9ec
- (id)createRapportClientWithDestinationDevice:(id)arg1;	// IMP=0x00000001000fb888
- (void)logDashboardHandoffRequestViaTransportLinkType:(int)arg1 type:(id)arg2 success:(_Bool)arg3 rtt:(double)arg4;	// IMP=0x00000001000fb660
- (void)setDecryptionKeyDataRepresentation:(id)arg1 forDeviceIdentifier:(id)arg2;	// IMP=0x00000001000fb3fc
- (id)protobufDataFromRequest:(id)arg1;	// IMP=0x00000001000fb268
- (id)requestFromProtobufData:(id)arg1;	// IMP=0x00000001000fb1c0
- (id)dataFromUUID:(id)arg1;	// IMP=0x00000001000fb14c
- (void)messageWithIdentifier:(id)arg1 didSendWithSuccess:(_Bool)arg2 error:(id)arg3;	// IMP=0x00000001000fadf4
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;	// IMP=0x00000001000fad54
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4;	// IMP=0x00000001000facf4
- (void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00000001000fac94
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00000001000fac10
- (void)handlePayloadReply:(id)arg1 forRequestRecord:(id)arg2 fromDevice:(id)arg3 transportLinkType:(int)arg4;	// IMP=0x00000001000fa6b8
- (void)handlePayloadReplyProtobuf:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00000001000fa444
- (void)handlePayloadReplyRapport:(id)arg1 options:(id)arg2 forRequestRecord:(id)arg3 fromDevice:(id)arg4;	// IMP=0x00000001000fa148
- (void)activityPayloadReplySuccess:(id)arg1;	// IMP=0x00000001000f9fdc
- (void)sendIDSActivityPayloadReply:(id)arg1 withReplyRecord:(id)arg2;	// IMP=0x00000001000f99a8
- (void)handlePayloadRequest:(id)arg1 fromIDSDevice:(id)arg2 withRequestIdentifier:(id)arg3 transportType:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000001000f9158
- (void)handlePayloadRequestProtobuf:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00000001000f8f58
- (void)handlePayloadRequestRapport:(id)arg1 options:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000f89f4
- (void)handleEncryptionKeyReply:(id)arg1 forRequestRecord:(id)arg2 fromDevice:(id)arg3 transportLinkType:(int)arg4;	// IMP=0x00000001000f871c
- (void)handleEncryptionKeyReplyRequestProtobuf:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00000001000f84ac
- (void)handleEncryptionKeyReplyRapport:(id)arg1 options:(id)arg2 forRequestRecord:(id)arg3 fromDevice:(id)arg4;	// IMP=0x00000001000f81b0
- (void)handleEncryptionKeyRequestProtobuf:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00000001000f7ef8
- (void)handleEncryptionKeyRequestRapport:(id)arg1 options:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000f7ab0
- (void)handleEncyptionKeyRequest:(id)arg1 fromIDSDevice:(id)arg2 withRequestIdentifier:(id)arg3 transportType:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000001000f77ec
- (void)sendIDSActivityPayloadRequest:(id)arg1 withRequestRecord:(id)arg2 desiredTimeout:(double)arg3;	// IMP=0x00000001000f6f40
- (void)sendRapportActivityPayloadRequest:(id)arg1 withRequestRecord:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000f6628
- (void)sendActivityPayloadRequestToDeviceIdentifier:(id)arg1 withAdvertisementPayload:(id)arg2 command:(id)arg3 timeout:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000001000f5e90
- (void)sendEncryptionKeyReplyRequestToDevice:(id)arg1 reply:(id)arg2 requestIdentifier:(id)arg3;	// IMP=0x00000001000f59c8
- (void)sendIDSEncryptionKeyRequest:(id)arg1 withRequestRecord:(id)arg2 desiredTimeout:(double)arg3;	// IMP=0x00000001000f5198
- (void)sendRapportEncryptionKeyRequest:(id)arg1 withRequestRecord:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000f4754
- (void)sendEncryptionKeyRequestToDeviceIdentifier:(id)arg1 previousKeyIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000f3fe0
- (void)clearPersistedKeyRequests;	// IMP=0x00000001000f3f90
@property(readonly) NSString *state;
- (void)requestTimedOut:(id)arg1;	// IMP=0x00000001000f37a0
- (id)idsDeviceWithUniqueID:(id)arg1 onService:(id)arg2;	// IMP=0x00000001000f3608
- (void)setUpIDSServices;	// IMP=0x00000001000f34bc
- (void)setUpRapport;	// IMP=0x00000001000f319c
- (void)setUpHSA2Monitor;	// IMP=0x00000001000f3000
- (id)init;	// IMP=0x00000001000f2e64

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

