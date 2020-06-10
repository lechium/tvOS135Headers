//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface W5DebugManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
}

+ (void)__airplayLoggingEnabledWithQueue:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000325ec
+ (void)__setAirPlayLoggingEnabled:(_Bool)arg1 queue:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000001000325bc
+ (void)__disableAirPlayLoggingWithQueue:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010003251c
+ (void)__enableAirPlayLoggingWithQueue:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000322d4
+ (void)__ios_setBluetoothLoggingEnabled:(_Bool)arg1 queue:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100032108
+ (void)__ios_bluetoothLoggingEnabledWithQueue:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100031f6c
+ (void)__setValue:(id)arg1 key:(id)arg2 domain:(id)arg3;	// IMP=0x0000000100031f3c
+ (id)__valueForKey:(id)arg1 domain:(id)arg2;	// IMP=0x0000000100031f14
+ (void)__setOpenDirectoryLoggingEnabled:(_Bool)arg1 queue:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100031e48
+ (void)__openDirectoryLoggingEnabledWithQueue:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100031b4c
+ (void)__mostRecentLogWithSuffix:(id)arg1 logPath:(id)arg2 queue:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00000001000316e8
+ (void)__setDHCPLoggingEnabled:(_Bool)arg1 queue:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000010003160c
+ (void)__setDNSLoggingEnabled:(_Bool)arg1 queue:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100031520
+ (void)__dnsLoggingEnabledWithQueue:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010003137c
+ (void)__toggleDNSLoggingWithQueue:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000312f8
+ (void)__setEAPOLLoggingEnabled:(_Bool)arg1 queue:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100031170
+ (void)__eapolLoggingEnabledWithQueue:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010003104c
+ (_Bool)__getEAPOLDebugFlagsEnabled;	// IMP=0x0000000100030fbc
+ (_Bool)__setEAPOLDebugFlagsEnabled:(_Bool)arg1 error:(id *)arg2;	// IMP=0x0000000100030e88
+ (void)__ios__setWiFiLoggingEnabled:(_Bool)arg1 queue:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100030d80
+ (void)__ios_wifiLoggingEnabledWithQueue:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100030c6c
+ (void)setOSLogPreferenceLevel:(id)arg1 enableOvserizeMessages:(_Bool)arg2 subsystem:(id)arg3;	// IMP=0x0000000100030a78
- (void)__setNoLoggingWiFiProfileInstalled:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100032c94
- (void)__queryNoLoggingWiFiProfileInstalledAndReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000100032b18
- (void)__setMegaWiFiProfileInstalled:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100032920
- (void)__queryMegaWiFiProfileInstalledAndReply:(CDUnknownBlockType)arg1;	// IMP=0x00000001000327a4
- (void)setOpenDirectoryDebugLoggingEnabled:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100030a5c
- (void)queryOpenDirectoryDebugLoggingAndReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000100030a40
- (void)setAirPlayDebugLoggingEnabled:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100030a24
- (void)queryAirPlayDebugLoggingAndReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000100030a08
- (void)setDNSDebugLoggingEnabled:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000309ec
- (void)queryDNSDebugLoggingAndReply:(CDUnknownBlockType)arg1;	// IMP=0x00000001000309d0
- (void)setDHCPDebugLoggingEnabled:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000309b4
- (void)setEAPOLDebugLoggingEnabled:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100030998
- (void)queryEAPOLDebugLoggingAndReply:(CDUnknownBlockType)arg1;	// IMP=0x000000010003097c
- (void)setBluetoothDebugLoggingEnabled:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100030960
- (void)queryBluetoothDebugLoggingAndReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000100030944
- (void)setWiFiDebugLoggingEnabled:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100030928
- (void)queryWiFiDebugLoggingAndReply:(CDUnknownBlockType)arg1;	// IMP=0x000000010003090c
- (void)setDebugConfiguration:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000301d8
- (void)queryDebugConfigurationAndReply:(CDUnknownBlockType)arg1;	// IMP=0x000000010002f9c0
- (void)dealloc;	// IMP=0x000000010002f974
- (id)init;	// IMP=0x000000010002f908

@end

