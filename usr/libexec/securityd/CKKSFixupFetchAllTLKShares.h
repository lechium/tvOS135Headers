//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CKKSGroupOperation.h"

@class CKKSKeychainView, CKOperationGroup;

__attribute__((visibility("hidden")))
@interface CKKSFixupFetchAllTLKShares : CKKSGroupOperation
{
    CKKSKeychainView *_ckks;	// 16 = 0x10
    CKOperationGroup *_group;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100118390
@property(retain) CKOperationGroup *group; // @synthesize group=_group;
@property __weak CKKSKeychainView *ckks; // @synthesize ckks=_ckks;
- (void)groupStart;	// IMP=0x000000010011813c
- (id)description;	// IMP=0x00000001001180c8
- (id)initWithCKKSKeychainView:(id)arg1 ckoperationGroup:(id)arg2;	// IMP=0x0000000100118020

@end

