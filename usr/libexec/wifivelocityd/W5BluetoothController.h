//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CBCentralManager;
@protocol OS_dispatch_queue;

@interface W5BluetoothController : NSObject
{
    CBCentralManager *_centralManager;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    _Bool _isMonitoringEvents;	// 24 = 0x18
    CDUnknownBlockType _updatedBluetoothCallback;	// 32 = 0x20
}

@property(copy, nonatomic) CDUnknownBlockType updatedBluetoothCallback; // @synthesize updatedBluetoothCallback=_updatedBluetoothCallback;
- (id)devices;	// IMP=0x000000010005b388
- (id)__ios__deviceList;	// IMP=0x000000010005ad94
- (void)__ios__handleBTAdvertisingNotification:(id)arg1;	// IMP=0x000000010005acac
- (void)__ios__handleBTDiscoveryNotification:(id)arg1;	// IMP=0x000000010005abc4
- (void)__ios__handleBTConnectabiliyNotification:(id)arg1;	// IMP=0x000000010005aadc
- (void)__ios__handleBTPowerNotification:(id)arg1;	// IMP=0x000000010005a9f4
- (void)__ios__handleBTAvailabilityNotification:(id)arg1;	// IMP=0x000000010005a90c
- (_Bool)isScanning;	// IMP=0x000000010005a82c
- (_Bool)isAvailable;	// IMP=0x000000010005a74c
- (_Bool)isConnectable;	// IMP=0x000000010005a66c
- (_Bool)isDiscoverable;	// IMP=0x000000010005a58c
- (id)address;	// IMP=0x000000010005a444
- (_Bool)powerOn;	// IMP=0x000000010005a35c
- (void)stopEventMonitoring;	// IMP=0x000000010005a2a0
- (void)startEventMonitoring;	// IMP=0x000000010005a118
- (void)dealloc;	// IMP=0x000000010005a0bc
- (id)init;	// IMP=0x0000000100059edc

@end
