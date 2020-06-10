//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CLNotifierServiceProtocol-Protocol.h"

@protocol CLWifiServiceProtocol <CLNotifierServiceProtocol>
- (_Bool)syncgetSupportedChannelsAdd2GhzChannels:(_Bool)arg1 andAdd5GhzChannels:(_Bool)arg2 result:(vector_3203cf93 *)arg3;
- (void)setQuiesceWifi:(_Bool)arg1;
- (_Bool)syncgetSetAutoJoin:(_Bool)arg1;
- (void)setBackgroundExitScanCount:(int)arg1;
- (void)setWifiPower:(_Bool)arg1;
- (_Bool)syncgetSetAllowBeingRanged:(const vector_a730dc89 *)arg1 enable:(_Bool)arg2;
- (_Bool)syncgetStartRangingWithPeers:(const vector_a730dc89 *)arg1 andTimeout:(double)arg2;
- (_Bool)syncgetStartScanWithParameters:(struct ScanParameters (^)(void))arg1;
- (_Bool)syncgetStartScanWithType:(BOOL)arg1 lowPriority:(_Bool)arg2 passive:(_Bool)arg3 requester:(const char *)arg4;
- (void)clearExitAndEntryScanNetworks:(_Bool)arg1;
- (_Bool)syncgetHostedNetwork:(struct HostedNetwork *)arg1;
- (_Bool)syncgetAssociatedNetwork:(struct AccessPoint *)arg1;
- (void)fetchScanResultWithReply:(void (^)(struct ScanResult (^)(void)))arg1;
- (struct ScanResult (^)(void))syncgetBackgroundScanCacheResult;
- (struct ScanResult (^)(void))syncgetScanResult;
- (struct ScanStats (^)(void))syncgetScanStats;
- (void)setScannerExitScanNetworks:(struct vector<CLWifiService_Type::AccessPoint, std::__1::allocator<CLWifiService_Type::AccessPoint>> (^)(void))arg1;
- (void)setScannerEntryScanNetworks:(struct vector<CLWifiService_Type::AccessPoint, std::__1::allocator<CLWifiService_Type::AccessPoint>> (^)(void))arg1;
- (void)setEntryScanNetworks:(struct vector<CLWifiService_Type::AccessPoint, std::__1::allocator<CLWifiService_Type::AccessPoint>> (^)(void))arg1 andExitScanNetworks:(struct vector<CLWifiService_Type::AccessPoint, std::__1::allocator<CLWifiService_Type::AccessPoint>> (^)(void))arg2;
- (void)programEntryScanNetworks:(struct vector<CLWifiService_Type::AccessPoint, std::__1::allocator<CLWifiService_Type::AccessPoint>> (^)(void))arg1 andExitScanNetworks:(struct vector<CLWifiService_Type::AccessPoint, std::__1::allocator<CLWifiService_Type::AccessPoint>> (^)(void))arg2;
- (_Bool)syncgetIsSimulationEnabled;
- (_Bool)syncgetIsAvailable;
- (_Bool)syncgetIsWifiPowered;
- (_Bool)syncgetIsWifiTrackingAvailable;
- (void)fetchIsWifiAvailableWithReply:(void (^)(_Bool))arg1;
- (_Bool)syncgetIsAssociated;
- (void)fetchIsAssociatedWithReply:(void (^)(_Bool))arg1;
- (_Bool)syncgetDoSync:(void (^)(struct CLWifiService *))arg1;
- (void)doAsync:(void (^)(struct CLWifiService *))arg1 withReply:(void (^)(void))arg2;
- (void)doAsync:(void (^)(struct CLWifiService *))arg1;
@end

