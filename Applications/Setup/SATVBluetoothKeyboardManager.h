//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TVSBluetoothManagerDelegate-Protocol.h"
#import "TVSBluetoothManagerObserver-Protocol.h"

@class NSString, TVSBluetoothDevice;
@protocol SATVBluetoothKeyboardManagerDelegate;

@interface SATVBluetoothKeyboardManager : NSObject <TVSBluetoothManagerObserver, TVSBluetoothManagerDelegate>
{
    id <SATVBluetoothKeyboardManagerDelegate> _delegate;	// 8 = 0x8
    TVSBluetoothDevice *_pairingDevice;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100053b7c
@property(retain, nonatomic) TVSBluetoothDevice *pairingDevice; // @synthesize pairingDevice=_pairingDevice;
@property(nonatomic) __weak id <SATVBluetoothKeyboardManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_pairedKeyboard;	// IMP=0x00000001000539c0
- (void)_removeSelfFromBluetoothManager;	// IMP=0x00000001000538d4
- (void)bluetoothManager:(id)arg1 didAcceptPairingPINForDevice:(id)arg2;	// IMP=0x00000001000538c4
- (void)bluetoothManager:(id)arg1 didRejectPairingPINForDevice:(id)arg2;	// IMP=0x00000001000537cc
- (void)bluetoothManager:(id)arg1 presentPairingPIN:(long long)arg2 forDevice:(id)arg3;	// IMP=0x0000000100053714
- (void)bluetoothManager:(id)arg1 didCompleteDeviceConnection:(id)arg2 error:(id)arg3;	// IMP=0x000000010005361c
- (void)bluetoothManagerDidUpdateDiscoveredDevices:(id)arg1;	// IMP=0x00000001000532a8
- (void)stopPairing;	// IMP=0x0000000100053270
- (void)cancelPINPairing;	// IMP=0x0000000100053218
- (void)startPairing;	// IMP=0x000000010005318c
- (void)dealloc;	// IMP=0x0000000100053140

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

