//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MSDDemoManifestCheck, NSArray, NSDictionary, NSString;

@interface MSDSignedManifest : NSObject
{
    NSString *_signingKey;	// 8 = 0x8
    NSDictionary *_payload;	// 16 = 0x10
    MSDDemoManifestCheck *_manifestVerifier;	// 24 = 0x18
}

+ (id)appIdentifierFromOrderItem:(id)arg1;	// IMP=0x000000010000a8dc
+ (_Bool)isItemSystemAppData:(id)arg1;	// IMP=0x000000010000a8c4
+ (_Bool)isItemBackup:(id)arg1;	// IMP=0x000000010000a8ac
+ (void)setSignedManifest:(id)arg1;	// IMP=0x000000010000908c
+ (id)signedManifest;	// IMP=0x0000000100009080
+ (id)signedManifestWithNSStream:(id)arg1;	// IMP=0x000000010000902c
- (void).cxx_destruct;	// IMP=0x000000010000d234
@property(retain) MSDDemoManifestCheck *manifestVerifier; // @synthesize manifestVerifier=_manifestVerifier;
@property(retain) NSDictionary *payload; // @synthesize payload=_payload;
@property(retain, nonatomic) NSString *signingKey; // @synthesize signingKey=_signingKey;
- (_Bool)isManualSigning:(id)arg1;	// IMP=0x000000010000cfcc
- (_Bool)verifySignature:(id)arg1 forData:(id)arg2 withKey:(struct __SecKey *)arg3;	// IMP=0x000000010000ce5c
- (struct __SecKey *)createPublicKey:(id)arg1 usingPolicy:(struct __SecPolicy *)arg2 anchors:(id)arg3;	// IMP=0x000000010000c924
- (struct __SecKey *)createPublicKeyForDevelopmentSigningStandard:(id)arg1;	// IMP=0x000000010000c834
- (struct __SecKey *)createPublicKeyAppleISTSigning:(id)arg1;	// IMP=0x000000010000c21c
- (struct __SecKey *)createPublicKeyForDevelopmentSigning:(id)arg1;	// IMP=0x000000010000c17c
- (struct __SecKey *)createPublicKeyForStrongSigning:(id)arg1;	// IMP=0x000000010000c040
- (id)verifyMonolithicManifestSignature:(id)arg1;	// IMP=0x000000010000b8b0
- (id)verifyManifestSignature:(id)arg1;	// IMP=0x000000010000a9f8
@property(readonly, getter=getInstallationOrder) NSArray *installationOrder;
- (id)originServerForApp:(id)arg1;	// IMP=0x000000010000a780
- (id)originServerForBackupManifest:(struct _NSRange)arg1;	// IMP=0x000000010000a684
- (_Bool)hasSystemContainerBackupInRange:(struct _NSRange)arg1;	// IMP=0x000000010000a554
- (id)mergedBackupManifest:(struct _NSRange)arg1;	// IMP=0x000000010000a1b0
- (struct _NSRange)rangeOfGroupedBackups:(long long)arg1;	// IMP=0x0000000100009fd0
@property(readonly, getter=getBackupList) NSDictionary *backupList;
@property(readonly, getter=getBackup) NSDictionary *backup;
@property(readonly, getter=getPlugInDataList) NSDictionary *plugInDataList;
@property(readonly, getter=getGroupDataList) NSDictionary *groupDataList;
@property(readonly, getter=getAppDataList) NSDictionary *appDataList;
@property(readonly, getter=getAppList) NSDictionary *appList;
@property(readonly, getter=getInfo) NSDictionary *info;
@property(readonly, getter=getVersion) int version;
- (void)dealloc;	// IMP=0x0000000100009bb8
- (id)initWithNSStream:(id)arg1;	// IMP=0x000000010000909c

@end

