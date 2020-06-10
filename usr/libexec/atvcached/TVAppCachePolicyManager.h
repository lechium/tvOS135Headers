//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TVAppCachePurgeTaskDelegate-Protocol.h"
#import "TVCacheDeleteManagerDelegate-Protocol.h"

@class NSMutableDictionary, NSMutableSet, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface TVAppCachePolicyManager : NSObject <TVAppCachePurgeTaskDelegate, TVCacheDeleteManagerDelegate>
{
    NSURL *_URL;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_policiesQueue;	// 16 = 0x10
    NSMutableSet *_mutableDoNotPurgeApplications;	// 24 = 0x18
    NSMutableDictionary *_mutablePurgeRequests;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000001000044a0
@property(retain, nonatomic) NSMutableDictionary *mutablePurgeRequests; // @synthesize mutablePurgeRequests=_mutablePurgeRequests;
@property(retain, nonatomic) NSMutableSet *mutableDoNotPurgeApplications; // @synthesize mutableDoNotPurgeApplications=_mutableDoNotPurgeApplications;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *policiesQueue; // @synthesize policiesQueue=_policiesQueue;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (id)_allowedPurgeRequestsForUrgency:(long long)arg1;	// IMP=0x00000001000041bc
- (void)appCachePurgeTask:(id)arg1 didPurgeAmount:(long long)arg2 atUrgency:(long long)arg3;	// IMP=0x000000010000405c
- (id)manager:(id)arg1 purgeTasksForUrgency:(long long)arg2;	// IMP=0x0000000100003ed4
- (void)removeAllPurgeRequestsForApplication:(id)arg1;	// IMP=0x0000000100003b88
- (void)removePurgeRequestWithURL:(id)arg1 forApplication:(id)arg2;	// IMP=0x0000000100003938
- (void)addPurgeRequest:(id)arg1 forApplication:(id)arg2;	// IMP=0x00000001000036b8
- (void)setDoNotPurge:(_Bool)arg1 forApplication:(id)arg2;	// IMP=0x000000010000352c
- (void)savePolicies;	// IMP=0x00000001000031c0
- (void)loadPolicies;	// IMP=0x0000000100002d48
- (id)initWithURL:(id)arg1;	// IMP=0x0000000100002c68
- (id)init;	// IMP=0x0000000100002c58

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
