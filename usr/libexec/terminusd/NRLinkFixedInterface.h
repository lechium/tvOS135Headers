//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NRLink.h"

#import "NEIKEv2ListenerDelegate-Protocol.h"

@class NEIKEv2Listener, NEIKEv2Session, NSNumber, NSObject, NSString, NWAddressEndpoint;
@protocol OS_nw_path_evaluator;

@interface NRLinkFixedInterface : NRLink <NEIKEv2ListenerDelegate>
{
    _Bool _hasScheduledSendingLocalClassCUnlock;	// 72 = 0x48
    NSNumber *_listenerPort;	// 80 = 0x50
    NWAddressEndpoint *_localOuterEndpoint;	// 88 = 0x58
    NWAddressEndpoint *_remoteOuterEndpoint;	// 96 = 0x60
    NEIKEv2Listener *_ikeListener;	// 104 = 0x68
    NEIKEv2Session *_ikeSessionClassD;	// 112 = 0x70
    NSString *_fixedInterfaceName;	// 120 = 0x78
    NSObject<OS_nw_path_evaluator> *_pathEvaluator;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x0000000100031b98
@property(retain, nonatomic) NSObject<OS_nw_path_evaluator> *pathEvaluator; // @synthesize pathEvaluator=_pathEvaluator;
@property(nonatomic) _Bool hasScheduledSendingLocalClassCUnlock; // @synthesize hasScheduledSendingLocalClassCUnlock=_hasScheduledSendingLocalClassCUnlock;
@property(retain, nonatomic) NSString *fixedInterfaceName; // @synthesize fixedInterfaceName=_fixedInterfaceName;
@property(retain, nonatomic) NEIKEv2Session *ikeSessionClassD; // @synthesize ikeSessionClassD=_ikeSessionClassD;
@property(retain, nonatomic) NEIKEv2Listener *ikeListener; // @synthesize ikeListener=_ikeListener;
@property(retain, nonatomic) NWAddressEndpoint *remoteOuterEndpoint; // @synthesize remoteOuterEndpoint=_remoteOuterEndpoint;
@property(retain, nonatomic) NWAddressEndpoint *localOuterEndpoint; // @synthesize localOuterEndpoint=_localOuterEndpoint;
@property(retain, nonatomic) NSNumber *listenerPort; // @synthesize listenerPort=_listenerPort;
- (_Bool)resume;	// IMP=0x0000000100031994
- (_Bool)suspend;	// IMP=0x00000001000318ac
- (void)handleNotifyCode:(unsigned short)arg1 payload:(id)arg2;	// IMP=0x0000000100031798
- (_Bool)sendControlData:(id)arg1;	// IMP=0x0000000100031578
- (void)requestConfigurationForListener:(id)arg1 session:(id)arg2 sessionConfig:(id)arg3 childConfig:(id)arg4 validateAuthBlock:(CDUnknownBlockType)arg5 responseBlock:(CDUnknownBlockType)arg6;	// IMP=0x0000000100030d98
- (void)listener:(id)arg1 receivedNewSession:(id)arg2;	// IMP=0x0000000100030c9c
- (void)setupIPsecInitiatorIfNecessary:(unsigned char)arg1;	// IMP=0x0000000100030850
- (void)setupIKECallbacks:(unsigned char)arg1;	// IMP=0x0000000100030310
- (void)restartIKESessionForDataProtectionClass:(unsigned char)arg1;	// IMP=0x00000001000301c4
- (void)invalidateIKESessionClassD;	// IMP=0x00000001000301b4
- (id *)ikeSessionPointerForDataProtectionClass:(unsigned char)arg1;	// IMP=0x0000000100030088
- (void)invalidateIKESessionForClass:(unsigned char)arg1;	// IMP=0x000000010003001c
- (_Bool)cancelWithReason:(id)arg1;	// IMP=0x000000010002fec4
- (_Bool)start;	// IMP=0x000000010002f700
- (unsigned short)metric;	// IMP=0x000000010002f6f8
- (id)copyDescriptionInner;	// IMP=0x000000010002f624
- (void)dealloc;	// IMP=0x000000010002f5a4
- (void)invalidateLink;	// IMP=0x000000010002f408
- (id)initLinkWithQueue:(id)arg1 linkDelegate:(id)arg2 nrUUID:(id)arg3 fixedInterfaceName:(id)arg4 localOuterEndpoint:(id)arg5 remoteOuterEndpoint:(id)arg6 listenerPort:(id)arg7;	// IMP=0x000000010002f0f0
- (id)copyStatusString;	// IMP=0x000000010002ef94

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

