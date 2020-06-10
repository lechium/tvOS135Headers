//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CKKSPeerProviderState, CKKSSelves, NSSet, NSString;
@protocol CKKSPeerUpdateListener;

@protocol CKKSPeerProvider <NSObject>
@property _Bool essential;
@property(readonly) NSString *providerID;
- (CKKSPeerProviderState *)currentState;
- (void)sendTrustedPeerSetChangedUpdate;
- (void)sendSelfPeerChangedUpdate;
- (void)registerForPeerChangeUpdates:(id <CKKSPeerUpdateListener>)arg1;
- (NSSet *)fetchTrustedPeers:(id *)arg1;
- (CKKSSelves *)fetchSelfPeers:(id *)arg1;
@end
