//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CKKSCKRecordHolder.h"

@class NSString;
@protocol SecCKKSProcessedState;

__attribute__((visibility("hidden")))
@interface CKKSCurrentItemPointer : CKKSCKRecordHolder
{
    NSString<SecCKKSProcessedState> *_state;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    NSString *_currentItemUUID;	// 24 = 0x18
}

+ (id)fromDatabaseRow:(id)arg1;	// IMP=0x000000010007d534
+ (id)sqlColumns;	// IMP=0x000000010007d494
+ (id)sqlTable;	// IMP=0x000000010007d488
+ (_Bool)deleteAll:(id)arg1 error:(id *)arg2;	// IMP=0x000000010007d350
+ (id)allInZone:(id)arg1 error:(id *)arg2;	// IMP=0x000000010007d264
+ (id)remoteItemPointers:(id)arg1 error:(id *)arg2;	// IMP=0x000000010007d15c
+ (id)tryFromDatabase:(id)arg1 state:(id)arg2 zoneID:(id)arg3 error:(id *)arg4;	// IMP=0x000000010007d018
+ (id)fromDatabase:(id)arg1 state:(id)arg2 zoneID:(id)arg3 error:(id *)arg4;	// IMP=0x000000010007ced4
- (void).cxx_destruct;	// IMP=0x000000010007ce80
@property(retain) NSString *currentItemUUID; // @synthesize currentItemUUID=_currentItemUUID;
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain) NSString<SecCKKSProcessedState> *state; // @synthesize state=_state;
- (id)sqlValues;	// IMP=0x000000010007cb88
- (id)whereClauseToFindSelf;	// IMP=0x000000010007ca40
- (void)setFromCKRecord:(id)arg1;	// IMP=0x000000010007c834
- (_Bool)matchesCKRecord:(id)arg1;	// IMP=0x000000010007c674
- (id)updateCKRecord:(id)arg1 zoneID:(id)arg2;	// IMP=0x000000010007c31c
- (id)CKRecordName;	// IMP=0x000000010007c310
- (id)description;	// IMP=0x000000010007c21c
- (id)initForIdentifier:(id)arg1 currentItemUUID:(id)arg2 state:(id)arg3 zoneID:(id)arg4 encodedCKRecord:(id)arg5;	// IMP=0x000000010007c100

@end

