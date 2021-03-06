//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MCXPCProtocol-Protocol.h"

@class NSString, NSXPCConnection;

@interface MCProfileServicer : NSObject <MCXPCProtocol>
{
    NSXPCConnection *_xpcConnection;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001000501a0
@property(nonatomic) __weak NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (void)managingOrganizationInformationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000500a4
- (void)createMDMUnlockTokenIfNeededWithPasscode:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010004ffb4
- (void)mayShareToAirDropForOriginatingAppBundleID:(id)arg1 originatingAccountIsManaged:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010004fde4
- (void)mayShareToMessagesForOriginatingAppBundleID:(id)arg1 originatingAccountIsManaged:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010004fc14
- (id)prefixedFeaturePromptIdentifierForIdentifier:(id)arg1;	// IMP=0x000000010004fbd8
- (void)cancelFeaturePromptWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010004f908
- (void)showFeaturePromptForSetting:(id)arg1 configurationUUID:(id)arg2 promptOptions:(id)arg3 promptIdentifier:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000010004f3a0
- (void)shutDownWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010004f20c
- (void)recomputeProfileRestrictionsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010004f140
- (void)validateAppBundleIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010004efc0
- (void)setupAssistantDidFinishCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010004ebdc
- (void)hasMailAccountsWithFilteringEnabled:(_Bool)arg1 sourceAccountManagement:(int)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010004ea2c
- (void)allowedKeyboardBundleIDsAfterApplyingFilterToBundleIDs:(id)arg1 hostAppBundleID:(id)arg2 accountIsManaged:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010004e834
- (void)unstashWhitelistURLStringsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010004e728
- (void)stashWhitelistURLStringsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010004e61c
- (void)unstashBlacklistURLStringsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010004e510
- (void)stashBlacklistURLStringsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010004e404
- (void)unstashUserBookmarksFromLabel:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010004e2d4
- (void)stashUserBookmarks:(id)arg1 withLabel:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010004e188
- (void)setUserBookmarks:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010004e058
- (void)storeActivationRecord:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010004df68
- (void)createActivationLockBypassCodeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010004de90
- (void)cloudConfigurationStoreDetails:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010004dda0
- (void)cloudConfigurationMachineInfoDataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010004dcc8
- (void)rereadManagedAppAttributesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010004dbf4
- (void)markStoredProfileForPurposeAsInstalled:(int)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010004db18
- (void)profileDataStoredForPurpose:(int)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010004da38
- (void)storeProfileData:(id)arg1 configurationSource:(int)arg2 purpose:(int)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010004d930
- (void)removeExpiredProfilesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010004d85c
- (void)managedAppIDsWithFlags:(int)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010004d77c
- (void)setUserInfo:(id)arg1 forClientUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010004d668
- (void)resetAllSettingsToDefaultsIsUserInitiated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010004d58c
- (void)recomputePerClientUserComplianceWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010004d4c0
- (void)recomputeUserComplianceWarningWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010004d3f4
- (void)notifyHaveSeenComplianceMessageWithLastLockDate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010004d30c
- (void)notifyStartComplianceTimer:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010004d224
- (void)removeProvisioningProfileWithUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010004d130
- (void)installProvisioningProfileData:(id)arg1 managingProfileIdentifer:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010004d01c
- (void)storeCertificateData:(id)arg1 forIPCUIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010004cf08
- (void)openSensitiveURL:(id)arg1 unlock:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010004cdb4
- (void)removeValueSetting:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010004ccc4
- (void)removeBoolSetting:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010004cbd4
- (void)setParametersForSettingsByType:(id)arg1 configurationUUID:(id)arg2 toSystem:(_Bool)arg3 user:(_Bool)arg4 passcode:(id)arg5 credentialSet:(id)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x000000010004c564
- (void)migrateCleanupMigratorWithContext:(int)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010004c490
- (void)migrateWithContext:(int)arg1 passcodeWasSetInBackup:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010004c3ac
- (void)managedWiFiNetworkNamesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010004c2d4
- (void)managedSystemConfigurationServiceIDsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010004c1fc
- (void)removeOrphanedClientRestrictionsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010004c128
- (void)resetPasscodeMetadataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010004c054
- (void)isPasscodeCompliantWithNamedPolicy:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010004bf60
- (void)clearPasscodeWithEscrowKeybagData:(id)arg1 secret:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010004be4c
- (void)changePasscode:(id)arg1 oldPasscode:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010004bd08
- (void)applyRestrictionDictionary:(id)arg1 appsAndOptions:(id)arg2 clientType:(id)arg3 clientUUID:(id)arg4 localizedClientDescription:(id)arg5 localizedWarningMessage:(id)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x000000010004bb6c
- (_Bool)remoteProcessCanRemoveProfilesOutError:(id *)arg1;	// IMP=0x000000010004bb04
- (_Bool)isCloudLockedProfileWithIdentifier:(id)arg1;	// IMP=0x000000010004ba40
- (void)removeProtectedProfileWithIdentifier:(id)arg1 installationType:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010004b850
- (void)removeUninstalledProfileWithIdentifier:(id)arg1 installationType:(long long)arg2 targetDeviceType:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010004b670
- (void)removeProfileWithIdentifier:(id)arg1 installationType:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010004b48c
- (void)updateProfileIdentifier:(id)arg1 interactive:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010004b2ec
- (void)removeWebContentFilterUserBlacklistedURLString:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010004b1bc
- (void)popProvisioningProfileFromHeadOfInstallationQueueWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010004b0e4
- (void)peekProfileDataFromPurgatoryForDeviceType:(unsigned long long)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000010004af74
- (void)popProfileDataFromHeadOfInstallationQueueWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010004ae9c
- (void)queueProfileDataForInstallation:(id)arg1 originalFileName:(id)arg2 originatingBundleID:(id)arg3 transitionToUI:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000010004ad30
- (void)installProfileData:(id)arg1 interactive:(_Bool)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010004a960
- (void)isProfileInstalledWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010004a7f8
- (_Bool)remoteProcessHasEntitlementArray:(id)arg1 containingString:(id)arg2 error:(id *)arg3;	// IMP=0x000000010004a710
- (_Bool)remoteProcessHasBooleanEntitlement:(id)arg1 error:(id *)arg2;	// IMP=0x000000010004a650
- (id)lacksArrayEntitlementError:(id)arg1 withMemberString:(id)arg2;	// IMP=0x000000010004a59c
- (id)lacksBooleanEntitlementError:(id)arg1;	// IMP=0x000000010004a504
- (id)remoteProcessBundleID;	// IMP=0x000000010004a498
- (_Bool)remoteProcessHasEntitlementArray:(id)arg1 containingString:(id)arg2;	// IMP=0x000000010004a2a0
- (id)remoteProcessEntitlementStringArrayForKey:(id)arg1;	// IMP=0x000000010004a0c4
- (_Bool)remoteProcessHasBooleanEntitlement:(id)arg1;	// IMP=0x0000000100049f50
- (void)addBookmark:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100049e28
- (void)addAllowedURLString:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100049d64
- (void)setAllowedURLStrings:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100049ca0
- (void)setSpellCheckAllowed:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100049bf0
- (void)setKeyboardShortcutsAllowed:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100049b40
- (void)setContinuousPathKeyboardAllowed:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100049a90
- (void)setPredictiveKeyboardAllowed:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000499e0
- (void)setSmartPunctuationAllowed:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100049930
- (void)setAutoCorrectionAllowed:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100049880
- (void)defaultAppBundleIDForCommunicationServiceType:(id)arg1 forAccountWithIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000497d0
- (void)allowedImportFromAppBundleIDs:(id)arg1 importingAppBundleID:(id)arg2 importingIsManaged:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100049718
- (void)allowedOpenInAppBundleIDs:(id)arg1 originatingAppBundleID:(id)arg2 originatingIsManaged:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100049660
- (void)notifyDeviceUnlockedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000495f0
- (void)notifyDeviceUnlockedAndPasscodeRequiredWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100049580
- (void)waitForMigrationIncludingPostRestoreMigration:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100049508
- (void)checkCarrierProfileAndForceReinstallation:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100049490
- (void)checkInWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100049420

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

