//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "RPCompanionLinkXPCServerInterface-Protocol.h"

@class CUBonjourDevice, NSMutableDictionary, NSMutableSet, NSString, NSXPCConnection, RPCompanionLinkClient, RPCompanionLinkDaemon, RPCompanionLinkDevice, RPConnection, RPDiscovery, RPServer, RPSession;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_transaction;

@interface RPCompanionLinkXPCConnection : NSObject <RPCompanionLinkXPCServerInterface>
{
    NSString *_appID;	// 8 = 0x8
    CDStruct_20fd928a _metricsCtx;	// 16 = 0x10
    _Bool _entitled;	// 40 = 0x28
    _Bool _localDeviceUpdated;	// 41 = 0x29
    _Bool _needsCLink;	// 42 = 0x2a
    unsigned int _xpcID;	// 44 = 0x2c
    CUBonjourDevice *_bonjourDevice;	// 48 = 0x30
    RPCompanionLinkClient *_client;	// 56 = 0x38
    RPCompanionLinkDaemon *_daemon;	// 64 = 0x40
    RPCompanionLinkDevice *_daemonDevice;	// 72 = 0x48
    NSMutableDictionary *_devices;	// 80 = 0x50
    RPDiscovery *_discoveryClient;	// 88 = 0x58
    NSObject<OS_dispatch_source> *_discoveryTimer;	// 96 = 0x60
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 104 = 0x68
    RPConnection *_netCnx;	// 112 = 0x70
    NSMutableDictionary *_registeredEvents;	// 120 = 0x78
    NSMutableSet *_registeredProfileIDs;	// 128 = 0x80
    NSMutableDictionary *_registeredRequests;	// 136 = 0x88
    NSObject<OS_os_transaction> *_osTransaction;	// 144 = 0x90
    RPServer *_server;	// 152 = 0x98
    RPSession *_session;	// 160 = 0xa0
    unsigned long long _startTicks;	// 168 = 0xa8
    NSXPCConnection *_xpcCnx;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x000000010002adac
@property(nonatomic) unsigned int xpcID; // @synthesize xpcID=_xpcID;
@property(readonly, nonatomic) NSXPCConnection *xpcCnx; // @synthesize xpcCnx=_xpcCnx;
@property(nonatomic) unsigned long long startTicks; // @synthesize startTicks=_startTicks;
@property(retain, nonatomic) RPSession *session; // @synthesize session=_session;
@property(retain, nonatomic) RPServer *server; // @synthesize server=_server;
@property(retain, nonatomic) NSObject<OS_os_transaction> *osTransaction; // @synthesize osTransaction=_osTransaction;
@property(readonly, nonatomic) NSMutableDictionary *registeredRequests; // @synthesize registeredRequests=_registeredRequests;
@property(readonly, nonatomic) NSMutableSet *registeredProfileIDs; // @synthesize registeredProfileIDs=_registeredProfileIDs;
@property(readonly, nonatomic) NSMutableDictionary *registeredEvents; // @synthesize registeredEvents=_registeredEvents;
@property(retain, nonatomic) RPConnection *netCnx; // @synthesize netCnx=_netCnx;
@property(nonatomic) _Bool needsCLink; // @synthesize needsCLink=_needsCLink;
@property(nonatomic) _Bool localDeviceUpdated; // @synthesize localDeviceUpdated=_localDeviceUpdated;
@property(readonly, nonatomic) _Bool entitled; // @synthesize entitled=_entitled;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *discoveryTimer; // @synthesize discoveryTimer=_discoveryTimer;
@property(retain, nonatomic) RPDiscovery *discoveryClient; // @synthesize discoveryClient=_discoveryClient;
@property(readonly, nonatomic) NSMutableDictionary *devices; // @synthesize devices=_devices;
@property(readonly, nonatomic) RPCompanionLinkDevice *daemonDevice; // @synthesize daemonDevice=_daemonDevice;
@property(readonly, nonatomic) RPCompanionLinkDaemon *daemon; // @synthesize daemon=_daemon;
@property(retain, nonatomic) RPCompanionLinkClient *client; // @synthesize client=_client;
@property(retain, nonatomic) CUBonjourDevice *bonjourDevice; // @synthesize bonjourDevice=_bonjourDevice;
- (void)xpcSessionActivate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010002ab40
- (void)xpcServerUpdate:(id)arg1;	// IMP=0x000000010002a850
- (void)xpcServerActivate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010002a194
- (void)xpcDiscoveryUpdate:(id)arg1;	// IMP=0x000000010002a0dc
- (void)xpcDiscoveryActivate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100029fa0
- (void)companionLinkTryPassword:(id)arg1;	// IMP=0x0000000100029eb0
- (void)companionLinkSendRequestID:(id)arg1 request:(id)arg2 destinationID:(id)arg3 options:(id)arg4 responseHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000100029c7c
- (void)companionLinkDeregisterRequestID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100029bc0
- (void)companionLinkRegisterRequestID:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100029ab0
- (void)companionLinkDeregisterProfileID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010002995c
- (void)companionLinkRegisterProfileID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000296ec
- (void)companionLinkSendEventID:(id)arg1 event:(id)arg2 destinationID:(id)arg3 options:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000001000294c8
- (void)companionLinkDeregisterEventID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010002934c
- (void)companionLinkRegisterEventID:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000290cc
- (void)companionLinkUpdateClient:(id)arg1;	// IMP=0x0000000100028d6c
- (void)companionLinkActivateClient:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000281dc
- (void)companionLinkInvalidateAssertion:(id)arg1;	// IMP=0x00000001000281d8
- (void)companionLinkActivateAssertion:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000281c0
- (void)reportChangedDevice:(id)arg1 changes:(unsigned int)arg2;	// IMP=0x0000000100027fec
- (void)reportLostDevice:(id)arg1;	// IMP=0x0000000100027e98
- (void)reportFoundDevice:(id)arg1;	// IMP=0x0000000100027d40
- (void)receivedRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100027c24
- (void)receivedEventID:(id)arg1 event:(id)arg2 options:(id)arg3;	// IMP=0x0000000100027b2c
- (void)promptForPasswordType:(int)arg1 flags:(unsigned int)arg2 throttleSeconds:(int)arg3;	// IMP=0x0000000100027a3c
- (id)_devicesForClient:(id)arg1;	// IMP=0x0000000100027768
- (void)authCompletion:(id)arg1;	// IMP=0x00000001000276ac
- (_Bool)_entitledAndReturnError:(id *)arg1;	// IMP=0x0000000100027538
- (void)connectionInvalidated;	// IMP=0x0000000100026e50
- (id)initWithDaemon:(id)arg1 xpcCnx:(id)arg2;	// IMP=0x0000000100026d94

@end

