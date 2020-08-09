//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MZKeyValueStoreTransactionGroup.h"

#import "MZKeyValueStoreTransactionProcessing-Protocol.h"

@class MZKeyValueStoreTransaction, NSArray, NSMutableDictionary, NSString;

@interface MZKeyValueStoreRemoveKeysTransactionGroup : MZKeyValueStoreTransactionGroup <MZKeyValueStoreTransactionProcessing>
{
    NSArray *_keys;	// 8 = 0x8
    NSMutableDictionary *_itemsToRemove;	// 16 = 0x10
    MZKeyValueStoreTransaction *_currenTransaction;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001000775fc
- (void)transaction:(id)arg1 mergeData:(id)arg2 forKey:(id)arg3 domainVersion:(id)arg4 version:(id)arg5 mismatch:(_Bool)arg6 finishedBlock:(CDUnknownBlockType)arg7;	// IMP=0x000000010007753c
- (void)transaction:(id)arg1 didProcessResponseWithDomainVersion:(id)arg2;	// IMP=0x0000000100077538
- (void)transaction:(id)arg1 willProcessResponseWithDomainVersion:(id)arg2;	// IMP=0x0000000100077534
- (id)dataForSetTransaction:(id)arg1 key:(id)arg2 version:(id *)arg3;	// IMP=0x00000001000774d4
- (id)versionForGetTransaction:(id)arg1 key:(id)arg2;	// IMP=0x00000001000774cc
- (_Bool)scheduleNextTransactionInController:(id)arg1;	// IMP=0x00000001000772c8
- (id)_transactionItemForKey:(id)arg1;	// IMP=0x0000000100077200
- (id)initWithKeys:(id)arg1;	// IMP=0x0000000100077154

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
