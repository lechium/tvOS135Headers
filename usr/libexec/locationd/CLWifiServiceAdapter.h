//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CLNotifierServiceAdapter.h"

#import "CLWifiServiceProtocol-Protocol.h"

@class NSString;

@interface CLWifiServiceAdapter : CLNotifierServiceAdapter <CLWifiServiceProtocol>
{
}

+ (id)getSilo;	// IMP=0x00000001001333fc
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00000001001333d8
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00000001008721f0
- (_Bool)syncgetSetAutoJoin:(_Bool)arg1;	// IMP=0x0000000100136390
- (void)setBackgroundExitScanCount:(int)arg1;	// IMP=0x00000001001361a4
- (void)setWifiPower:(_Bool)arg1;	// IMP=0x0000000100135f14
- (_Bool)syncgetSupportedChannelsAdd2GhzChannels:(_Bool)arg1 andAdd5GhzChannels:(_Bool)arg2 result:(vector_3203cf93 *)arg3;	// IMP=0x0000000100135a78
- (void)setQuiesceWifi:(_Bool)arg1;	// IMP=0x00000001001357fc
- (_Bool)syncgetSetAllowBeingRanged:(const vector_a730dc89 *)arg1 enable:(_Bool)arg2;	// IMP=0x000000010013558c
- (_Bool)syncgetStartRangingWithPeers:(const vector_a730dc89 *)arg1 andTimeout:(double)arg2;	// IMP=0x00000001001352b8
- (_Bool)syncgetStartScanWithParameters:(CDUnknownBlockType)arg1;	// IMP=0x0000000100134928
- (_Bool)syncgetStartScanWithType:(BOOL)arg1 lowPriority:(_Bool)arg2 passive:(_Bool)arg3 requester:(const char *)arg4;	// IMP=0x0000000100134874
- (void)clearExitAndEntryScanNetworks:(_Bool)arg1;	// IMP=0x0000000100134788
- (_Bool)syncgetHostedNetwork:(struct HostedNetwork *)arg1;	// IMP=0x00000001001345c4
- (_Bool)syncgetAssociatedNetwork:(struct AccessPoint *)arg1;	// IMP=0x00000001001343d8
- (void)fetchScanResultWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000010013430c
- (CDUnknownBlockType)syncgetBackgroundScanCacheResult;	// IMP=0x0000000100134250
- (CDUnknownBlockType)syncgetScanResult;	// IMP=0x00000001001340ec
- (CDUnknownBlockType)syncgetScanStats;	// IMP=0x0000000100133fd0
- (void)setScannerExitScanNetworks:(CDUnknownBlockType)arg1;	// IMP=0x0000000100133f60
- (void)setScannerEntryScanNetworks:(CDUnknownBlockType)arg1;	// IMP=0x0000000100133ef0
- (void)setEntryScanNetworks:(CDUnknownBlockType)arg1 andExitScanNetworks:(CDUnknownBlockType)arg2;	// IMP=0x0000000100133cdc
- (void)programEntryScanNetworks:(CDUnknownBlockType)arg1 andExitScanNetworks:(CDUnknownBlockType)arg2;	// IMP=0x0000000100133af8
- (_Bool)syncgetIsSimulationEnabled;	// IMP=0x0000000100133ad4
- (_Bool)syncgetIsAvailable;	// IMP=0x0000000100133a60
- (_Bool)syncgetIsWifiPoweredWithStatus:(_Bool *)arg1;	// IMP=0x0000000100133a18
- (_Bool)syncgetIsWifiPowered;	// IMP=0x00000001001339dc
- (_Bool)syncgetIsWifiTrackingAvailable;	// IMP=0x00000001001339bc
- (void)fetchIsWifiAvailableWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000100133964
- (_Bool)syncgetIsAssociated;	// IMP=0x0000000100133948
- (void)fetchIsAssociatedWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000100133698
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x000000010013365c
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100133618
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x00000001001335e4
- (struct CLWifiService *)adaptee;	// IMP=0x00000001001335a8
- (void)endService;	// IMP=0x0000000100133584
- (void)beginService;	// IMP=0x00000001001334b8
- (id)init;	// IMP=0x0000000100133474

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

