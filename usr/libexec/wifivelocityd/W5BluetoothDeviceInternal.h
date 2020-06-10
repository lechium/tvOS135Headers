//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BluetoothDevice, CBCentralManager, CBPeripheral;

@interface W5BluetoothDeviceInternal : NSObject
{
    CBPeripheral *_peripheral;	// 8 = 0x8
    CBCentralManager *_centralManager;	// 16 = 0x10
    BluetoothDevice *_device;	// 24 = 0x18
}

- (unsigned long long)__minorClass;	// IMP=0x0000000100086870
- (unsigned long long)__majorClass;	// IMP=0x000000010008684c
- (_Bool)__isLowEnergy;	// IMP=0x000000010008680c
- (_Bool)__isConnected;	// IMP=0x00000001000867e4
- (_Bool)__isCloudPaired;	// IMP=0x0000000100086790
- (_Bool)__isPaired;	// IMP=0x000000010008673c
- (id)__address;	// IMP=0x00000001000866f8
- (id)__name;	// IMP=0x00000001000866dc
- (id)device;	// IMP=0x0000000100086588
- (void)dealloc;	// IMP=0x0000000100086530
- (void)setBluetoothDevice:(id)arg1;	// IMP=0x00000001000864fc
- (void)setPeripheral:(id)arg1 centralManager:(id)arg2;	// IMP=0x00000001000864a8

@end
