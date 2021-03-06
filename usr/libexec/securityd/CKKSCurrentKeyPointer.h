//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CKKSCKRecordHolder.h"

@class NSString;
@protocol SecCKKSKeyClass;

__attribute__((visibility("hidden")))
@interface CKKSCurrentKeyPointer : CKKSCKRecordHolder
{
    NSString<SecCKKSKeyClass> *_keyclass;	// 8 = 0x8
    NSString *_currentKeyUUID;	// 16 = 0x10
}

+ (id)fromDatabaseRow:(id)arg1;	// IMP=0x0000000100083504
+ (id)sqlColumns;	// IMP=0x0000000100083470
+ (id)sqlTable;	// IMP=0x0000000100083464
+ (_Bool)deleteAll:(id)arg1 error:(id *)arg2;	// IMP=0x000000010008332c
+ (id)all:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100083240
+ (id)forKeyClass:(id)arg1 withKeyUUID:(id)arg2 zoneID:(id)arg3 error:(id *)arg4;	// IMP=0x00000001000830fc
+ (id)tryFromDatabase:(id)arg1 zoneID:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100082fdc
+ (id)fromDatabase:(id)arg1 zoneID:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100082ebc
- (void).cxx_destruct;	// IMP=0x0000000100082e7c
@property(retain) NSString *currentKeyUUID; // @synthesize currentKeyUUID=_currentKeyUUID;
@property(retain) NSString<SecCKKSKeyClass> *keyclass; // @synthesize keyclass=_keyclass;
- (id)sqlValues;	// IMP=0x0000000100082c04
- (id)whereClauseToFindSelf;	// IMP=0x0000000100082afc
- (void)setFromCKRecord:(id)arg1;	// IMP=0x000000010008283c
- (_Bool)matchesCKRecord:(id)arg1;	// IMP=0x000000010008267c
- (id)updateCKRecord:(id)arg1 zoneID:(id)arg2;	// IMP=0x0000000100082324
- (id)CKRecordName;	// IMP=0x0000000100082318
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100082038
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100081f38
- (id)description;	// IMP=0x0000000100081e44
- (id)initForClass:(id)arg1 currentKeyUUID:(id)arg2 zoneID:(id)arg3 encodedCKRecord:(id)arg4;	// IMP=0x0000000100081ce4

@end

