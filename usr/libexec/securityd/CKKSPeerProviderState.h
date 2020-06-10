//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKKSSelves, NSError, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface CKKSPeerProviderState : NSObject
{
    _Bool _essential;	// 8 = 0x8
    NSString *_peerProviderID;	// 16 = 0x10
    CKKSSelves *_currentSelfPeers;	// 24 = 0x18
    NSError *_currentSelfPeersError;	// 32 = 0x20
    NSSet *_currentTrustedPeers;	// 40 = 0x28
    NSSet *_currentTrustedPeerIDs;	// 48 = 0x30
    NSError *_currentTrustedPeersError;	// 56 = 0x38
}

+ (id)createFromProvider:(id)arg1;	// IMP=0x00000001000efd88
+ (id)noPeersState:(id)arg1;	// IMP=0x00000001000efc54
- (void).cxx_destruct;	// IMP=0x00000001000efbf4
@property(readonly, nonatomic) NSError *currentTrustedPeersError; // @synthesize currentTrustedPeersError=_currentTrustedPeersError;
@property(readonly, nonatomic) NSSet *currentTrustedPeerIDs; // @synthesize currentTrustedPeerIDs=_currentTrustedPeerIDs;
@property(readonly, nonatomic) NSSet *currentTrustedPeers; // @synthesize currentTrustedPeers=_currentTrustedPeers;
@property(readonly, nonatomic) NSError *currentSelfPeersError; // @synthesize currentSelfPeersError=_currentSelfPeersError;
@property(readonly, nonatomic) CKKSSelves *currentSelfPeers; // @synthesize currentSelfPeers=_currentSelfPeers;
@property _Bool essential; // @synthesize essential=_essential;
@property(retain) NSString *peerProviderID; // @synthesize peerProviderID=_peerProviderID;
- (id)description;	// IMP=0x00000001000efa64
- (id)initWithPeerProviderID:(id)arg1 essential:(_Bool)arg2 selfPeers:(id)arg3 selfPeersError:(id)arg4 trustedPeers:(id)arg5 trustedPeersError:(id)arg6;	// IMP=0x00000001000ef7ec

@end

