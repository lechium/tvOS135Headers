//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue, OS_nw_path_evaluator;

@interface NRBabelInstance : NSObject
{
    unsigned short _nodeSeqno;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    unsigned long long _routerID;	// 24 = 0x18
    NSMutableArray *_interfaces;	// 32 = 0x20
    NSMutableArray *_neighbors;	// 40 = 0x28
    NSMutableArray *_sources;	// 48 = 0x30
    NSMutableArray *_routes;	// 56 = 0x38
    NSMutableArray *_posrs;	// 64 = 0x40
    NSObject<OS_nw_path_evaluator> *_ifBringupPathEvaluator;	// 72 = 0x48
    struct NEVirtualInterface_s *_nevi;	// 80 = 0x50
    NSString *_addrStr;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000010007929c
@property(retain, nonatomic) NSString *addrStr; // @synthesize addrStr=_addrStr;
@property(nonatomic) struct NEVirtualInterface_s *nevi; // @synthesize nevi=_nevi;
@property(retain, nonatomic) NSObject<OS_nw_path_evaluator> *ifBringupPathEvaluator; // @synthesize ifBringupPathEvaluator=_ifBringupPathEvaluator;
@property(retain, nonatomic) NSMutableArray *posrs; // @synthesize posrs=_posrs;
@property(retain, nonatomic) NSMutableArray *routes; // @synthesize routes=_routes;
@property(retain, nonatomic) NSMutableArray *sources; // @synthesize sources=_sources;
@property(retain, nonatomic) NSMutableArray *neighbors; // @synthesize neighbors=_neighbors;
@property(retain, nonatomic) NSMutableArray *interfaces; // @synthesize interfaces=_interfaces;
@property(nonatomic) unsigned long long routerID; // @synthesize routerID=_routerID;
@property(nonatomic) unsigned short nodeSeqno; // @synthesize nodeSeqno=_nodeSeqno;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (id)copyRouteString;	// IMP=0x0000000100078e74
- (id)description;	// IMP=0x0000000100078d90
- (void)handlePacket:(const char *)arg1 length:(unsigned int)arg2 remoteAddr:(const struct in6_addr *)arg3 localAddr:(const struct in6_addr *)arg4 babelInterface:(id)arg5 dtls:(_Bool)arg6;	// IMP=0x0000000100077880
- (void)sendImmediateRouteUpdateToAllNeighbors;	// IMP=0x0000000100077870
- (void)sendImmediateRouteUpdateToNeighbor:(id)arg1;	// IMP=0x00000001000775e8
- (id)createUpdateTLVs;	// IMP=0x00000001000775d8
- (id)createUpdateTLVsWithInterval:(unsigned short)arg1;	// IMP=0x00000001000775c4
- (id)createUpdateTLVsForPrefix:(id)arg1;	// IMP=0x00000001000775b4
- (id)createUpdateTLVsForPrefix:(id)arg1 interval:(unsigned short)arg2;	// IMP=0x0000000100077544
- (id)createUpdateTLVsForRoutes:(id)arg1;	// IMP=0x0000000100077534
- (id)createUpdateTLVsForRoutes:(id)arg1 interval:(unsigned short)arg2;	// IMP=0x000000010007714c
- (void)updateFeasabilityDistanceForRoute:(id)arg1;	// IMP=0x0000000100076f88
- (id)createSelectedRoutesArrayForPrefix:(id)arg1;	// IMP=0x0000000100076cc4
- (void)addUpdateForRoute:(id)arg1 interval:(unsigned short)arg2 toTLVs:(id)arg3;	// IMP=0x0000000100076b2c
- (void)addRouterID:(unsigned long long)arg1 toTLVs:(id)arg2;	// IMP=0x0000000100076aa8
- (void)updateRoutes;	// IMP=0x00000001000762f0
- (void)handleSeqnoReqFromAddr:(const struct in6_addr *)arg1 babelInterface:(id)arg2 ForPrefix:(const struct in6_addr *)arg3 plen:(unsigned char)arg4 routerID:(unsigned long long)arg5 seqno:(unsigned short)arg6 hopCount:(unsigned char)arg7;	// IMP=0x00000001000759d0
- (void)sendSeqnoReqIfNecessaryTo:(id)arg1 forPrefix:(id)arg2 routerID:(unsigned long long)arg3 seqno:(unsigned short)arg4 hopCount:(unsigned char)arg5 originator:(id)arg6;	// IMP=0x00000001000757c0
- (void)handleRouteReqFromAddr:(const struct in6_addr *)arg1 babelInterface:(id)arg2 ForPrefix:(const struct in6_addr *)arg3 plen:(unsigned char)arg4;	// IMP=0x00000001000756d8
- (_Bool)handleUpdateFromAddr:(const struct in6_addr *)arg1 ForPrefix:(const struct in6_addr *)arg2 plen:(unsigned char)arg3 nextHop:(const struct in6_addr *)arg4 babelInterface:(id)arg5 routerID:(unsigned long long)arg6 seqno:(unsigned short)arg7 interval:(unsigned short)arg8 metric:(unsigned short)arg9 ae:(unsigned char)arg10;	// IMP=0x0000000100074e38
- (_Bool)purgeInterface:(id)arg1;	// IMP=0x0000000100074c9c
- (_Bool)purgeAllRoutesFromNeighbor:(id)arg1;	// IMP=0x0000000100074ad0
- (void)handleIHUFromAddr:(const struct in6_addr *)arg1 babelInterface:(id)arg2 rxcost:(unsigned short)arg3 interval:(unsigned short)arg4;	// IMP=0x00000001000749e4
- (void)handleHelloFromAddr:(const struct in6_addr *)arg1 babelInterface:(id)arg2 seqno:(unsigned short)arg3 interval:(unsigned short)arg4 personal:(_Bool)arg5;	// IMP=0x00000001000748a8
- (void)handleAckReqFromAddr:(const struct in6_addr *)arg1 babelInterface:(id)arg2 nonce:(unsigned short)arg3 interval:(unsigned short)arg4;	// IMP=0x0000000100074808
- (id)copyPendingOutgoingSeqnoReqWithPrefix:(id)arg1 routerID:(unsigned long long)arg2 isNewPOSR:(_Bool *)arg3;	// IMP=0x0000000100074618
- (id)copyRouteWithPrefix:(id)arg1 neighbor:(id)arg2;	// IMP=0x00000001000744a8
- (_Bool)isNewDistanceUnfeasibleForPrefix:(id)arg1 routerID:(unsigned long long)arg2 seqno:(unsigned short)arg3 metric:(unsigned short)arg4;	// IMP=0x000000010007444c
- (id)copySourceWithPrefix:(id)arg1 routerID:(unsigned long long)arg2;	// IMP=0x00000001000742f0
- (id)copyNeighborWithAddr:(const struct in6_addr *)arg1 babelInterface:(id)arg2 isNewNeighbor:(_Bool *)arg3;	// IMP=0x00000001000740fc
- (id)init;	// IMP=0x0000000100073cfc
- (void)dealloc;	// IMP=0x0000000100073cb0
- (void)setupAddress:(struct in6_addr *)arg1;	// IMP=0x0000000100073b70
- (void)setupInterfaces;	// IMP=0x000000010007350c
- (void)handleIfBringupPathUpdate:(id)arg1;	// IMP=0x00000001000733d0

@end

