//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NRLinkManager.h"

#import "APSConnectionDelegate-Protocol.h"
#import "NRLinkDelegate-Protocol.h"

@class APSConnection, NSMutableSet, NSObject, NSString;
@protocol NRLinkManagerQuickRelayDelegate, OS_nw_path, OS_nw_path_evaluator;

@interface NRLinkManagerQuickRelay : NRLinkManager <APSConnectionDelegate, NRLinkDelegate>
{
    _Bool _apsConnected;	// 8 = 0x8
    int _currentPathStatus;	// 12 = 0xc
    NSMutableSet *_links;	// 16 = 0x10
    NSObject<OS_nw_path_evaluator> *_pathEvaluator;	// 24 = 0x18
    NSObject<OS_nw_path> *_currentPath;	// 32 = 0x20
    APSConnection *_apsConnection;	// 40 = 0x28
    id <NRLinkManagerQuickRelayDelegate> _quickRelayManagerDelegate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000010008f648
@property(nonatomic) __weak id <NRLinkManagerQuickRelayDelegate> quickRelayManagerDelegate; // @synthesize quickRelayManagerDelegate=_quickRelayManagerDelegate;
@property(retain, nonatomic) APSConnection *apsConnection; // @synthesize apsConnection=_apsConnection;
@property(nonatomic) int currentPathStatus; // @synthesize currentPathStatus=_currentPathStatus;
@property(retain, nonatomic) NSObject<OS_nw_path> *currentPath; // @synthesize currentPath=_currentPath;
@property(retain, nonatomic) NSObject<OS_nw_path_evaluator> *pathEvaluator; // @synthesize pathEvaluator=_pathEvaluator;
@property(retain, nonatomic) NSMutableSet *links; // @synthesize links=_links;
@property(nonatomic) _Bool apsConnected; // @synthesize apsConnected=_apsConnected;
- (void)connection:(id)arg1 didChangeConnectedStatus:(_Bool)arg2;	// IMP=0x000000010008f44c
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;	// IMP=0x000000010008f3a0
- (void)checkEnabledDevices;	// IMP=0x000000010008f18c
- (void)linkDidReceiveData:(id)arg1 data:(id)arg2;	// IMP=0x000000010008f024
- (void)linkIsUnavailable:(id)arg1;	// IMP=0x000000010008eed4
- (void)linkIsReady:(id)arg1;	// IMP=0x000000010008edcc
- (void)linkIsSuspended:(id)arg1;	// IMP=0x000000010008ecc4
- (void)linkIsAvailable:(id)arg1;	// IMP=0x000000010008eb88
- (void)createLinkForNRUUID:(id)arg1;	// IMP=0x000000010008eab8
- (void)createLinkIfApplicable;	// IMP=0x000000010008e680
- (void)setup;	// IMP=0x000000010008e218
- (id)copyStatusString;	// IMP=0x000000010008e108
- (id)copyName;	// IMP=0x000000010008e0fc
- (void)dealloc;	// IMP=0x000000010008e07c
- (void)invalidateManager;	// IMP=0x000000010008df68
- (void)cancel;	// IMP=0x000000010008df30
- (id)initManagerWithQueue:(id)arg1 managerDelegate:(id)arg2 quickRelayManagerDelegate:(id)arg3;	// IMP=0x000000010008dd2c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

