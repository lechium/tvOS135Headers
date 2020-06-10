//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKContainer, CKDatabase, CKKSAccountStateTracker, CKKSLockStateTracker, CKKSReachabilityTracker, CKRecordID, CKRecordZone, CKRecordZoneID, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface OTRamp : NSObject
{
    _Bool _cachedFeatureAllowed;	// 8 = 0x8
    NSString *_featureName;	// 16 = 0x10
    CKKSAccountStateTracker *_accountTracker;	// 24 = 0x18
    CKKSLockStateTracker *_lockStateTracker;	// 32 = 0x20
    CKKSReachabilityTracker *_reachabilityTracker;	// 40 = 0x28
    CKContainer *_container;	// 48 = 0x30
    CKDatabase *_database;	// 56 = 0x38
    CKRecordZone *_zone;	// 64 = 0x40
    CKRecordZoneID *_zoneID;	// 72 = 0x48
    NSString *_recordName;	// 80 = 0x50
    NSString *_localSettingName;	// 88 = 0x58
    CKRecordID *_recordID;	// 96 = 0x60
    long long _accountStatus;	// 104 = 0x68
    Class _fetchRecordRecordsOperationClass;	// 112 = 0x70
    NSDate *_lastFetch;	// 120 = 0x78
    double _retryAfter;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x00000001000f1c00
@property _Bool cachedFeatureAllowed; // @synthesize cachedFeatureAllowed=_cachedFeatureAllowed;
@property double retryAfter; // @synthesize retryAfter=_retryAfter;
@property(retain) NSDate *lastFetch; // @synthesize lastFetch=_lastFetch;
@property(readonly) Class fetchRecordRecordsOperationClass; // @synthesize fetchRecordRecordsOperationClass=_fetchRecordRecordsOperationClass;
@property long long accountStatus; // @synthesize accountStatus=_accountStatus;
@property(retain, nonatomic) CKRecordID *recordID; // @synthesize recordID=_recordID;
@property(retain, nonatomic) NSString *localSettingName; // @synthesize localSettingName=_localSettingName;
@property(retain, nonatomic) NSString *recordName; // @synthesize recordName=_recordName;
@property(retain, nonatomic) CKRecordZoneID *zoneID; // @synthesize zoneID=_zoneID;
@property(retain, nonatomic) CKRecordZone *zone; // @synthesize zone=_zone;
@property(retain, nonatomic) CKDatabase *database; // @synthesize database=_database;
@property(retain, nonatomic) CKContainer *container; // @synthesize container=_container;
@property(retain, nonatomic) CKKSReachabilityTracker *reachabilityTracker; // @synthesize reachabilityTracker=_reachabilityTracker;
@property(retain, nonatomic) CKKSLockStateTracker *lockStateTracker; // @synthesize lockStateTracker=_lockStateTracker;
@property(retain, nonatomic) CKKSAccountStateTracker *accountTracker; // @synthesize accountTracker=_accountTracker;
@property(readonly, nonatomic) NSString *featureName; // @synthesize featureName=_featureName;
- (_Bool)checkRampStateWithError:(id *)arg1;	// IMP=0x00000001000f0ea0
- (void)fetchRampRecord:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000f0b5c
- (id)initWithRecordName:(id)arg1 localSettingName:(id)arg2 container:(id)arg3 database:(id)arg4 zoneID:(id)arg5 accountTracker:(id)arg6 lockStateTracker:(id)arg7 reachabilityTracker:(id)arg8 fetchRecordRecordsOperationClass:(Class)arg9;	// IMP=0x00000001000f094c

@end

