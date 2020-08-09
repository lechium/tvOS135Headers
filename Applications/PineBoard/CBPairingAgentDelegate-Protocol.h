//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CBPairingAgent, CBPeer, NSError, NSNumber;

@protocol CBPairingAgentDelegate <NSObject>

@optional
- (void)pairingAgent:(CBPairingAgent *)arg1 peerDidRequestPairing:(CBPeer *)arg2 type:(long long)arg3 passkey:(NSNumber *)arg4;
- (void)pairingAgent:(CBPairingAgent *)arg1 peerDidUnpair:(CBPeer *)arg2;
- (void)pairingAgent:(CBPairingAgent *)arg1 peerDidFailToCompletePairing:(CBPeer *)arg2 error:(NSError *)arg3;
- (void)pairingAgent:(CBPairingAgent *)arg1 peerDidCompletePairing:(CBPeer *)arg2;
@end

