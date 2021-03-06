//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CKDaemonInterface-Protocol.h"

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface CKDaemon : NSObject <CKDaemonInterface>
{
    NSObject<OS_dispatch_queue> *_serialQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_concurrentQueue;	// 16 = 0x10
    NSMutableDictionary *_cachedHandlers;	// 24 = 0x18
}

+ (id)sharedDaemon;	// IMP=0x000000010000c8d8
- (void).cxx_destruct;	// IMP=0x00000001000115f4
@property(retain) NSMutableDictionary *cachedHandlers; // @synthesize cachedHandlers=_cachedHandlers;
- (void)setSiriRemembersDBURL:(id)arg1;	// IMP=0x00000001000115cc
- (void)relativeAppUsageProbabilitiesForBundleIDs:(id)arg1 overDays:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010001148c
- (void)appMatchesForJSONIntent:(id)arg1 candidateBundleIDs:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100011320
- (void)appMatchesForIntent:(id)arg1 candidateBundleIDs:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000111b8
- (void)saveInteraction:(id)arg1 dkEventUUID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100011084
- (void)disableSyncAndDeleteCloudDataWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100011014
- (void)dropLinksBetweenSubject:(id)arg1 andObject:(id)arg2 inStoreWithIdentifier:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100010e30
- (void)dropLinksWithLabel:(id)arg1 fromSubject:(id)arg2 inStoreWithIdentifier:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100010c00
- (void)dropLinkWithLabel:(id)arg1 betweenSubject:(id)arg2 andObject:(id)arg3 inStoreWithIdentifier:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000001000109e0
- (void)decreaseWeightForLinkWithLabel:(id)arg1 betweenSubject:(id)arg2 andObject:(id)arg3 inStoreWithIdentifier:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000001000106a8
- (void)increaseWeightForLinkWithLabel:(id)arg1 betweenSubject:(id)arg2 andObject:(id)arg3 inStoreWithIdentifier:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000100010370
- (void)setWeightForLinkWithLabel:(id)arg1 betweenSubject:(id)arg2 andObject:(id)arg3 toValue:(long long)arg4 inStoreWithIdentifier:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000001000100e8
- (void)removeAllValuesFromSynchedStoreWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010000fe54
- (void)removeAllValuesFromStoreWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010000fc68
- (void)removeValuesMatchingCondition:(id)arg1 fromSynchedStoreWithIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010000f758
- (void)removeValuesMatchingCondition:(id)arg1 fromStoreWithIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010000f538
- (void)removeValuesForKeys:(id)arg1 fromSynchedStoreWithIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010000f348
- (void)removeValuesForKeys:(id)arg1 fromStoreWithIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010000f130
- (void)removeValueForKey:(id)arg1 fromSynchedStoreWithIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010000eed0
- (void)removeValueForKey:(id)arg1 fromStoreWithIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010000ec58
- (void)recordEventWithIdentifier:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 metadata:(id)arg4 toStoreWithIdentifier:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x000000010000e73c
- (void)saveKeysAndValues:(id)arg1 toSynchedStoreWithIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010000e550
- (void)saveKeysAndValues:(id)arg1 toStoreWithIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010000e330
- (void)triplesComponentsMatching:(id)arg1 inStoreWithIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010000e0e8
- (void)keysAndValuesForKeysMatchingCondition:(id)arg1 inStoreWithIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010000dea0
- (void)keysAndValuesInStoreWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010000dc8c
- (void)valuesForKeysMatchingCondition:(id)arg1 inStoreWithIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010000da44
- (void)valuesForKeys:(id)arg1 inStoreWithIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010000d6a0
- (void)valuesInStoreWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010000d48c
- (void)valueForKey:(id)arg1 inStoreWithIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010000d184
- (void)keysMatchingCondition:(id)arg1 inStoreWithIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010000cf40
- (void)keysInStoreWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010000cd2c
- (id)handlerForPersistentStoreWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x000000010000ca68
- (id)init;	// IMP=0x000000010000c944

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

