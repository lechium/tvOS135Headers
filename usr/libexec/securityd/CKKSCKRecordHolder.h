//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CKKSSQLDatabaseObject.h"

@class CKRecord, CKRecordZoneID, NSData, NSString;

__attribute__((visibility("hidden")))
@interface CKKSCKRecordHolder : CKKSSQLDatabaseObject
{
    CKRecordZoneID *_zoneID;	// 8 = 0x8
    NSString *_ckRecordType;	// 16 = 0x10
    NSData *_encodedCKRecord;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001000936a0
@property(copy) NSData *encodedCKRecord; // @synthesize encodedCKRecord=_encodedCKRecord;
@property(retain) NSString *ckRecordType; // @synthesize ckRecordType=_ckRecordType;
@property(retain) CKRecordZoneID *zoneID; // @synthesize zoneID=_zoneID;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000935c8
- (_Bool)matchesCKRecord:(id)arg1;	// IMP=0x00000001000934e4
- (void)setFromCKRecord:(id)arg1;	// IMP=0x0000000100093400
- (id)updateCKRecord:(id)arg1 zoneID:(id)arg2;	// IMP=0x0000000100093310
- (id)CKRecordName;	// IMP=0x000000010009323c
- (id)CKRecordWithZoneID:(id)arg1;	// IMP=0x00000001000930d8
@property(retain, getter=storedCKRecord, setter=setStoredCKRecord:) CKRecord *storedCKRecord;
- (id)initWithCKRecordType:(id)arg1 encodedCKRecord:(id)arg2 zoneID:(id)arg3;	// IMP=0x0000000100092c08
- (id)initWithCKRecord:(id)arg1;	// IMP=0x0000000100092b3c

@end

