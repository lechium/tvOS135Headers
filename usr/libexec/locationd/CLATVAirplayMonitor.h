//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LocationSupport/CLIntersiloService.h>

#import "CLATVAirplayMonitorServiceProtocol-Protocol.h"
#import "WPAirPlaySoloDelegate-Protocol.h"

@class CLTimer, NSMutableArray, NSMutableSet, NSString, WPAirPlaySolo;

@interface CLATVAirplayMonitor : CLIntersiloService <CLATVAirplayMonitorServiceProtocol, WPAirPlaySoloDelegate>
{
    _Bool _power;	// 8 = 0x8
    NSMutableSet *_clients;	// 16 = 0x10
    WPAirPlaySolo *_airplaySolo;	// 24 = 0x18
    CLTimer *_scanDeliveryDelayTimer;	// 32 = 0x20
    NSMutableArray *_bufferedDevices;	// 40 = 0x28
}

+ (id)getSilo;	// IMP=0x00000001002b2bf8
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00000001002b2bd4
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0000000100881130
@property(retain, nonatomic) NSMutableArray *bufferedDevices; // @synthesize bufferedDevices=_bufferedDevices;
@property(retain, nonatomic) CLTimer *scanDeliveryDelayTimer; // @synthesize scanDeliveryDelayTimer=_scanDeliveryDelayTimer;
@property(nonatomic) _Bool power; // @synthesize power=_power;
@property(retain, nonatomic) WPAirPlaySolo *airplaySolo; // @synthesize airplaySolo=_airplaySolo;
@property(retain, nonatomic) NSMutableSet *clients; // @synthesize clients=_clients;
- (void)airPlaySolo:(id)arg1 failedToStartScanningWithError:(id)arg2;	// IMP=0x00000001002b3d04
- (void)airPlaySoloStoppedScanning:(id)arg1;	// IMP=0x00000001002b3c40
- (void)airPlaySoloStartedScanning:(id)arg1;	// IMP=0x00000001002b3b7c
- (void)airPlaySolo:(id)arg1 foundDevice:(id)arg2 withData:(id)arg3;	// IMP=0x00000001002b36e4
- (void)airPlaySoloDidUpdateState:(id)arg1;	// IMP=0x00000001002b36a4
- (void)sendBufferedScanNotifications;	// IMP=0x00000001002b35a4
- (void)stopScan;	// IMP=0x00000001002b3548
- (void)startScan;	// IMP=0x00000001002b3324
- (void)withClients:(CDUnknownBlockType)arg1;	// IMP=0x00000001002b31fc
- (id)init;	// IMP=0x00000001002b31b8
- (void)getPowerWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001002b3184
- (void)stopMonitoringDevicesForClient:(byref id)arg1;	// IMP=0x00000001002b3108
- (void)startMonitoringDevicesForClient:(byref id)arg1;	// IMP=0x00000001002b30c0
- (void)removeClient:(byref id)arg1;	// IMP=0x00000001002b306c
- (void)addClient:(byref id)arg1;	// IMP=0x00000001002b3018
- (void)dealloc;	// IMP=0x00000001002b2fcc
- (void)releaseData;	// IMP=0x00000001002b2f30
- (void)endService;	// IMP=0x00000001002b2ef0
- (void)beginServiceWithAirPlaySolo:(id)arg1;	// IMP=0x00000001002b2d10
- (void)beginService;	// IMP=0x00000001002b2c70

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

