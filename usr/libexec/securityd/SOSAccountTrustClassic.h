//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SOSAccountTrust.h"

__attribute__((visibility("hidden")))
@interface SOSAccountTrustClassic : SOSAccountTrust
{
}

+ (id)trustClassic;	// IMP=0x00000001001a4350
- (void)resetRingDictionary;	// IMP=0x00000001001a33a4
- (void)addRingDictionary;	// IMP=0x00000001001a32a8
- (_Bool)clientPing:(id)arg1;	// IMP=0x00000001001a31b0
- (_Bool)removeIncompleteiCloudIdentities:(struct __OpaqueSOSCircle *)arg1 privKey:(struct __SecKey *)arg2 err:(struct __CFError **)arg3;	// IMP=0x00000001001a30a0
- (struct __SecKey *)copyDeviceKey:(struct __CFError **)arg1;	// IMP=0x00000001001a3028
- (_Bool)postDebugScope:(id)arg1 scope:(void *)arg2 err:(struct __CFError **)arg3;	// IMP=0x00000001001a3000
- (struct __OpaqueSOSEngine *)getDataSourceEngine:(struct SOSDataSourceFactory *)arg1;	// IMP=0x00000001001a2f9c
- (_Bool)isSyncingV0;	// IMP=0x00000001001a2ef0
- (_Bool)requestSyncWithAllPeers:(id)arg1 key:(struct __SecKey *)arg2 err:(struct __CFError **)arg3;	// IMP=0x00000001001a2db4
- (struct __CFSet *)syncWithPeers:(id)arg1 peerIDs:(struct __CFSet *)arg2 err:(struct __CFError **)arg3;	// IMP=0x00000001001a2bb8
- (char *)encodeToDER:(id)arg1 err:(id *)arg2 start:(const char *)arg3 end:(char *)arg4;	// IMP=0x00000001001a28b8
- (unsigned long long)getDEREncodedSize:(id)arg1 err:(id *)arg2;	// IMP=0x00000001001a25b8
- (struct __CFArray *)copySortedPeerArray:(struct __CFError **)arg1 action:(CDUnknownBlockType)arg2;	// IMP=0x00000001001a252c
- (_Bool)addEscrowToPeerInfo:(struct __OpaqueSOSFullPeerInfo *)arg1 err:(struct __CFError **)arg2;	// IMP=0x00000001001a24ec
- (_Bool)addiCloudIdentity:(struct __OpaqueSOSCircle *)arg1 key:(struct __SecKey *)arg2 err:(struct __CFError **)arg3;	// IMP=0x00000001001a2260
- (struct __CFSet *)copyPreApprovedHSA2Info;	// IMP=0x00000001001a2214
- (_Bool)upgradeiCloudIdentity:(struct __OpaqueSOSCircle *)arg1 privKey:(struct __SecKey *)arg2;	// IMP=0x00000001001a2194
- (void)removeInvalidApplications:(struct __OpaqueSOSCircle *)arg1 userPublic:(struct __SecKey *)arg2;	// IMP=0x00000001001a20d8
- (_Bool)updatePeerInfo:(id)arg1 description:(struct __CFString *)arg2 err:(struct __CFError **)arg3 update:(CDUnknownBlockType)arg4;	// IMP=0x00000001001a1fb8
- (_Bool)peerSignatureUpdate:(struct __SecKey *)arg1 err:(struct __CFError **)arg2;	// IMP=0x00000001001a1f54
- (struct __CFArray *)copyPeersToListenTo:(struct __SecKey *)arg1 err:(struct __CFError **)arg2;	// IMP=0x00000001001a1ec4
- (struct __CFSet *)copyPeerSetMatching:(CDUnknownBlockType)arg1;	// IMP=0x00000001001a1df8
- (_Bool)isAccountIdentity:(struct __OpaqueSOSPeerInfo *)arg1 err:(struct __CFError **)arg2;	// IMP=0x00000001001a1da8
- (struct __OpaqueSOSPeerInfo *)copyPeerWithID:(struct __CFString *)arg1 err:(struct __CFError **)arg2;	// IMP=0x00000001001a1d44
- (struct __SecKey *)copyPublicKeyForPeer:(struct __CFString *)arg1 err:(struct __CFError **)arg2;	// IMP=0x00000001001a1cac
- (struct __CFSet *)copyPeerSetForView:(struct __CFString *)arg1;	// IMP=0x00000001001a1c08
- (void)addSyncablePeerBlock:(id)arg1 dsName:(struct __CFString *)arg2 change:(CDUnknownBlockType)arg3;	// IMP=0x00000001001a1a64
- (_Bool)updateViewSetsWithAnalytics:(id)arg1 enabled:(struct __CFSet *)arg2 disabled:(struct __CFSet *)arg3 parentEvent:(id)arg4;	// IMP=0x00000001001a13b0
- (int)viewStatus:(id)arg1 name:(struct __CFString *)arg2 err:(struct __CFError **)arg3;	// IMP=0x00000001001a119c
- (_Bool)activeValidInCircle:(id)arg1 err:(struct __CFError **)arg2;	// IMP=0x00000001001a1108
- (int)updateView:(id)arg1 name:(struct __CFString *)arg2 code:(int)arg3 err:(struct __CFError **)arg4;	// IMP=0x00000001001a0d94
- (_Bool)updateGestalt:(id)arg1 newGestalt:(struct __CFDictionary *)arg2;	// IMP=0x00000001001a0bf8
- (id)initWithRetirees:(id)arg1 fpi:(struct __OpaqueSOSFullPeerInfo *)arg2 circle:(struct __OpaqueSOSCircle *)arg3 departureCode:(int)arg4 peerExpansion:(id)arg5;	// IMP=0x00000001001a0a80
- (id)init;	// IMP=0x00000001001a0974
- (_Bool)cleanupAfterPeer:(id)arg1 circleTransport:(id)arg2 seconds:(unsigned long long)arg3 circle:(struct __OpaqueSOSCircle *)arg4 cleanupPeer:(struct __OpaqueSOSPeerInfo *)arg5 err:(struct __CFError **)arg6;	// IMP=0x0000000100194f40
- (_Bool)cleanupRetirementTickets:(id)arg1 circle:(struct __OpaqueSOSCircle *)arg2 time:(unsigned long long)arg3 err:(struct __CFError **)arg4;	// IMP=0x0000000100194d88
- (_Bool)resetRing:(id)arg1 ringName:(struct __CFString *)arg2 err:(struct __CFError **)arg3;	// IMP=0x000000010019ffa8
- (struct __CFDictionary *)getRings:(struct __CFError **)arg1;	// IMP=0x000000010019ff10
- (struct __OpaqueSOSRing *)copyRing:(struct __CFString *)arg1 err:(struct __CFError **)arg2;	// IMP=0x000000010019fe74
- (_Bool)handleUpdateRing:(id)arg1 prospectiveRing:(struct __OpaqueSOSRing *)arg2 transport:(id)arg3 userPublicKey:(struct __SecKey *)arg4 writeUpdate:(_Bool)arg5 err:(struct __CFError **)arg6;	// IMP=0x000000010019ea2c
- (_Bool)setRing:(struct __OpaqueSOSRing *)arg1 ringName:(struct __CFString *)arg2 err:(struct __CFError **)arg3;	// IMP=0x000000010019e994
- (_Bool)checkForRings:(struct __CFError **)arg1;	// IMP=0x000000010019e874
- (void)setRings:(struct __CFDictionary *)arg1;	// IMP=0x000000010019e824
- (_Bool)resetAccountToEmptyWithAnalytics:(id)arg1 transport:(id)arg2 parentEvent:(id)arg3 err:(struct __CFError **)arg4;	// IMP=0x000000010019e3ec
- (_Bool)resetAccountToEmpty:(id)arg1 transport:(id)arg2 err:(struct __CFError **)arg3;	// IMP=0x000000010019e384
- (_Bool)resetAllRings:(id)arg1 err:(struct __CFError **)arg2;	// IMP=0x000000010019e204
- (_Bool)forEachRing:(CDUnknownBlockType)arg1;	// IMP=0x000000010019df98
- (_Bool)updateV2Dictionary:(id)arg1 v2:(struct __CFDictionary *)arg2;	// IMP=0x000000010019de64
- (void)pendEnableViewSet:(struct __CFSet *)arg1;	// IMP=0x000000010019dd90
- (void)valueSubtractFrom:(struct __CFString *)arg1 valuesToSubtract:(struct __CFSet *)arg2;	// IMP=0x000000010019dca0
- (void)valueUnionWith:(struct __CFString *)arg1 valuesToUnion:(struct __CFSet *)arg2;	// IMP=0x000000010019dbac
- (_Bool)valueSetContainsValue:(struct __CFString *)arg1 value:(void *)arg2;	// IMP=0x000000010019db40
- (_Bool)setValueInExpansion:(struct __CFString *)arg1 value:(void *)arg2 err:(struct __CFError **)arg3;	// IMP=0x000000010019da98
- (_Bool)clearValueFromExpansion:(struct __CFString *)arg1 err:(struct __CFError **)arg2;	// IMP=0x000000010019da20
- (_Bool)ensureExpansion:(struct __CFError **)arg1;	// IMP=0x000000010019d960
- (void *)getValueFromExpansion:(struct __CFString *)arg1 err:(struct __CFError **)arg2;	// IMP=0x000000010019d8d4
- (_Bool)joinCircle:(id)arg1 userKey:(struct __SecKey *)arg2 useCloudPeer:(_Bool)arg3 err:(struct __CFError **)arg4;	// IMP=0x00000001001b60d0
- (_Bool)resetCircleToOffering:(id)arg1 userKey:(struct __SecKey *)arg2 err:(struct __CFError **)arg3;	// IMP=0x00000001001b5ec8
- (_Bool)resetToOffering:(id)arg1 key:(struct __SecKey *)arg2 err:(struct __CFError **)arg3;	// IMP=0x00000001001b5dc8
- (_Bool)leaveCircle:(id)arg1 err:(struct __CFError **)arg2;	// IMP=0x00000001001b5c70
- (_Bool)leaveCircleWithAccount:(id)arg1 withAnalytics:(id)arg2 err:(struct __CFError **)arg3;	// IMP=0x00000001001b5afc
- (void)forEachCirclePeerExceptMe:(CDUnknownBlockType)arg1;	// IMP=0x00000001001b59f8
- (void)generationSignatureUpdateWith:(id)arg1 key:(struct __SecKey *)arg2;	// IMP=0x00000001001b5838
- (_Bool)fixICloudIdentities:(id)arg1 circle:(struct __OpaqueSOSCircle *)arg2;	// IMP=0x00000001001b549c
- (_Bool)modifyCircle:(id)arg1 err:(struct __CFError **)arg2 action:(CDUnknownBlockType)arg3;	// IMP=0x00000001001b5390
- (_Bool)updateCircle:(id)arg1 newCircle:(struct __OpaqueSOSCircle *)arg2 err:(struct __CFError **)arg3;	// IMP=0x00000001001b5370
- (_Bool)updateCircleFromRemote:(id)arg1 newCircle:(struct __OpaqueSOSCircle *)arg2 err:(struct __CFError **)arg3;	// IMP=0x00000001001b5350
- (_Bool)handleUpdateCircle:(struct __OpaqueSOSCircle *)arg1 transport:(id)arg2 update:(_Bool)arg3 err:(struct __CFError **)arg4;	// IMP=0x00000001001b37fc
- (id)iCloudCleanerHandle:(id)arg1;	// IMP=0x00000001001b375c
- (id)iCloudCheckEventHandle:(id)arg1;	// IMP=0x00000001001b36bc
- (_Bool)checkForSponsorshipTrust:(struct __OpaqueSOSCircle *)arg1;	// IMP=0x00000001001b35e8
- (_Bool)ghostBustingOK:(struct __OpaqueSOSCircle *)arg1 updatingTo:(struct __OpaqueSOSCircle *)arg2;	// IMP=0x00000001001b34f0
- (_Bool)hasLeft;	// IMP=0x00000001001b34b0
- (struct __OpaqueSOSCircle *)ensureCircle:(id)arg1 name:(struct __CFString *)arg2 err:(struct __CFError **)arg3;	// IMP=0x00000001001b339c
- (struct __OpaqueSOSCircle *)getCircle:(struct __CFError **)arg1;	// IMP=0x00000001001b3328
- (int)getCircleStatusOnly:(struct __CFError **)arg1;	// IMP=0x00000001001b32d8
- (int)thisDeviceStatusInCircle:(struct __OpaqueSOSCircle *)arg1 peer:(struct __OpaqueSOSPeerInfo *)arg2;	// IMP=0x00000001001b3254
- (_Bool)hasCircle:(struct __CFError **)arg1;	// IMP=0x00000001001b31e8
- (_Bool)isInCircleOnly:(struct __CFError **)arg1;	// IMP=0x00000001001b3198
- (void)purgeIdentity;	// IMP=0x00000001001d459c
- (_Bool)isMyPeerActive:(struct __CFError **)arg1;	// IMP=0x00000001001d4524
- (_Bool)ensureFullPeerAvailable:(struct __CFDictionary *)arg1 deviceID:(struct __CFString *)arg2 backupKey:(struct __CFData *)arg3 err:(struct __CFError **)arg4;	// IMP=0x00000001001d4060
- (void)ensureOctagonPeerKeys:(id)arg1;	// IMP=0x00000001001d3624
- (_Bool)haveConfirmedOctagonKeys;	// IMP=0x00000001001d3450
- (struct __SecKey *)randomPermanentFullECKey:(int)arg1 name:(id)arg2 error:(struct __CFError **)arg3;	// IMP=0x00000001001d342c
- (struct __OpaqueSOSFullPeerInfo *)CopyAccountIdentityPeerInfo;	// IMP=0x00000001001d3410
- (_Bool)hasFullPeerInfo:(struct __CFError **)arg1;	// IMP=0x00000001001d33a4
- (_Bool)fullPeerInfoVerify:(struct __SecKey *)arg1 err:(struct __CFError **)arg2;	// IMP=0x00000001001d3324
- (struct __OpaqueSOSFullPeerInfo *)getMyFullPeerInfo;	// IMP=0x00000001001d32e0
- (_Bool)updateFullPeerInfo:(id)arg1 minimum:(struct __CFSet *)arg2 excluded:(struct __CFSet *)arg3;	// IMP=0x00000001001d31d4
- (_Bool)isLockedError:(id)arg1;	// IMP=0x00000001001d312c

@end
