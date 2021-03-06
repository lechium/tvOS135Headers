//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TVSBluetoothManagerDelegate-Protocol.h"

@class NSMutableSet, NSString, NSTimer;
@protocol TVPABluetoothRemotePairingDelegate;

@interface TVPABluetoothRemotePairingAgent : NSObject <TVSBluetoothManagerDelegate>
{
    id <TVPABluetoothRemotePairingDelegate> _delegate;	// 8 = 0x8
    NSTimer *_derpDismissTimer;	// 16 = 0x10
    NSMutableSet *_previouslyPairedRemoteIDs;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100005b28
@property(copy, nonatomic) NSMutableSet *previouslyPairedRemoteIDs; // @synthesize previouslyPairedRemoteIDs=_previouslyPairedRemoteIDs;
@property(retain, nonatomic) NSTimer *derpDismissTimer; // @synthesize derpDismissTimer=_derpDismissTimer;
@property(nonatomic) __weak id <TVPABluetoothRemotePairingDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_peripheralStateDidChangeNotification:(id)arg1;	// IMP=0x0000000100005940
- (void)_handleRemoteDidPair;	// IMP=0x000000010000561c
- (void)_handlePairingTimeout;	// IMP=0x00000001000054f4
- (void)unpairAllRemotes;	// IMP=0x0000000100005194
- (void)stopProximityPairing;	// IMP=0x0000000100005070
- (void)startProximityPairing;	// IMP=0x0000000100004cbc
- (void)dealloc;	// IMP=0x0000000100004bc4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

