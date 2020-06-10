//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface SDUnlockSecurityManager : NSObject
{
    NSData *_localLongTermKey;	// 8 = 0x8
    NSData *_remoteLongTermKey;	// 16 = 0x10
    NSString *_keybagUUID;	// 24 = 0x18
    NSString *_keyDeviceID;	// 32 = 0x20
    NSString *_pairingID;	// 40 = 0x28
    NSString *_pairingStorePath;	// 48 = 0x30
    NSString *_deviceName;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000100135970
@property(copy) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(copy) NSString *pairingStorePath; // @synthesize pairingStorePath=_pairingStorePath;
@property(copy) NSString *pairingID; // @synthesize pairingID=_pairingID;
@property(retain) NSString *keyDeviceID; // @synthesize keyDeviceID=_keyDeviceID;
@property(retain, nonatomic) NSString *keybagUUID; // @synthesize keybagUUID=_keybagUUID;
@property(retain, nonatomic) NSData *remoteLongTermKey; // @synthesize remoteLongTermKey=_remoteLongTermKey;
@property(retain, nonatomic) NSData *localLongTermKey; // @synthesize localLongTermKey=_localLongTermKey;
- (void)deleteLegacyEscrowData;	// IMP=0x00000001001357f0
- (void)migrateEscrowDataIfNeeded;	// IMP=0x00000001001356f8
- (_Bool)checkForLegacyEscrowData;	// IMP=0x00000001001354dc
- (id)legacyEscrowData;	// IMP=0x00000001001353a8
- (id)baseDictionary;	// IMP=0x00000001001352ac
- (id)allKeychainItems;	// IMP=0x0000000100135138
- (void)deleteEscrowData;	// IMP=0x00000001001350a0
- (_Bool)checkForEscrowData;	// IMP=0x0000000100134de8
- (id)escrowData;	// IMP=0x0000000100134cdc
- (_Bool)storeEscrowData:(id)arg1;	// IMP=0x00000001001349f4
- (void)resetEscrowRecord;	// IMP=0x00000001001347c0
- (void)clearStateForSession:(long long)arg1;	// IMP=0x000000010013467c
- (_Bool)confirmUnlockWithAuthSession:(long long)arg1;	// IMP=0x0000000100134654
- (id)escrowSecretWithAuthSession:(long long)arg1;	// IMP=0x0000000100134598
- (id)stepWithAuthSession:(long long)arg1 data:(id)arg2 authStep:(_Bool)arg3 errorCode:(long long *)arg4;	// IMP=0x0000000100134440
- (id)stepWithAuthSession:(long long)arg1 data:(id)arg2 authStep:(_Bool)arg3;	// IMP=0x0000000100134430
- (id)stepWithAuthSession:(long long)arg1 data:(id)arg2;	// IMP=0x0000000100134420
- (_Bool)setupWithAuthSession:(long long)arg1 passcode:(id)arg2;	// IMP=0x00000001001342d0
- (long long)authSessionWithFlags:(unsigned int)arg1 secret:(id)arg2 errorCode:(int *)arg3;	// IMP=0x0000000100133c84
- (long long)authSessionWithFlags:(unsigned int)arg1 secret:(id)arg2;	// IMP=0x0000000100133c74
- (long long)stashBagSessionAsOriginator:(_Bool)arg1 escrowSecret:(id)arg2 manifest:(id)arg3;	// IMP=0x0000000100133aa0
- (long long)unlockSessionAsOriginator:(_Bool)arg1 usingEscrow:(_Bool)arg2 escrowSecret:(id)arg3 errorCode:(int *)arg4;	// IMP=0x0000000100133a6c
- (long long)unlockSessionAsOriginator:(_Bool)arg1 usingEscrow:(_Bool)arg2 escrowSecret:(id)arg3;	// IMP=0x0000000100133a5c
- (long long)escrowCreationSessionAsOriginator:(_Bool)arg1 errorCode:(int *)arg2;	// IMP=0x0000000100133a38
- (void)migrateOldKeysIfNeeded;	// IMP=0x0000000100133854
- (id)legacyLocalLongTermKey;	// IMP=0x00000001001337f0
- (id)legacyRemoteLongTermKey;	// IMP=0x000000010013378c
@property(readonly) _Bool ltkFileExists;
- (id)longTermKeyStorageFilePath;	// IMP=0x0000000100133510
- (void)deletePersistedLongTermKeys;	// IMP=0x000000010013333c
- (void)loadLongTermKeys;	// IMP=0x000000010013308c
- (void)saveLongTermKeys;	// IMP=0x0000000100132c70
- (void)checkForBackupExclusion:(id)arg1;	// IMP=0x0000000100132b94
- (void)validateKeybagUUID;	// IMP=0x0000000100132a88
- (void)deleteLongTermKeys;	// IMP=0x000000010013286c
- (void)updateLocalLongTermKey:(id)arg1 remoteLongTermKey:(id)arg2;	// IMP=0x00000001001326f8
- (id)signRemoteKey:(id)arg1 withLocalKey:(id)arg2 localKeyClass:(long long)arg3 remoteKeyClass:(long long)arg4;	// IMP=0x00000001001324e0
- (id)generateLocalLongTermKey:(long long)arg1;	// IMP=0x00000001001323c8
@property(readonly) _Bool ltksExist;
- (unsigned int)lockState;	// IMP=0x00000001001322d4
- (id)initWithPairingID:(id)arg1 pairingStorePath:(id)arg2 deviceName:(id)arg3;	// IMP=0x00000001001321c8

@end

