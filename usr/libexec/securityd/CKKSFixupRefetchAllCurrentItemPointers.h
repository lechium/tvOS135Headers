//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CKKSGroupOperation.h"

@class CKKSKeychainView, CKOperationGroup;

__attribute__((visibility("hidden")))
@interface CKKSFixupRefetchAllCurrentItemPointers : CKKSGroupOperation
{
    CKKSKeychainView *_ckks;	// 16 = 0x10
    CKOperationGroup *_group;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100116ee8
@property(retain) CKOperationGroup *group; // @synthesize group=_group;
@property __weak CKKSKeychainView *ckks; // @synthesize ckks=_ckks;
- (void)groupStart;	// IMP=0x0000000100116c98
- (id)description;	// IMP=0x0000000100116c24
- (id)initWithCKKSKeychainView:(id)arg1 ckoperationGroup:(id)arg2;	// IMP=0x0000000100116b7c

@end

