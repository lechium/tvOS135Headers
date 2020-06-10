//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ManagedConfiguration/MCInstallerReader.h>

#import "MCInteractionClientDelegate-Protocol.h"

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MCInstaller : MCInstallerReader <MCInteractionClientDelegate>
{
    NSMutableArray *_queuedProfiles;	// 8 = 0x8
    NSMutableArray *_queuedProvisioningProfiles;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_purgatoryWorkerQueue;	// 24 = 0x18
    NSDictionary *_currentlyInstallingRestrictions;	// 32 = 0x20
    NSMutableDictionary *_setAsideAccountIdentifiersByPayloadClass;	// 40 = 0x28
    NSMutableDictionary *_setAsideDictionariesByPayloadClass;	// 48 = 0x30
}

+ (void)_enumerateProfilesWithCriteria:(CDUnknownBlockType)arg1 filterFlags:(int)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x0000000100025688
+ (void)considerProfilesInstalledDuringBuddyForManagement;	// IMP=0x00000001000250b4
+ (id)_installationFailureErrorWithUnderlyingError:(id)arg1;	// IMP=0x0000000100024e00
+ (void)_setPathsSystemProfileStorageDirectory:(id)arg1 userProfileStorageDirectory:(id)arg2;	// IMP=0x0000000100024d90
+ (unsigned long long)targetDeviceTypeForCurrentDevice;	// IMP=0x0000000100020fac
+ (id)notInstalledByMDMError;	// IMP=0x000000010001c054
+ (id)deviceIsSupervisedError;	// IMP=0x000000010001bfa4
+ (id)deviceNotSupervisedError;	// IMP=0x000000010001bef4
+ (id)sharedInstaller;	// IMP=0x000000010001959c
- (void).cxx_destruct;	// IMP=0x0000000100025fb4
@property(retain, nonatomic) NSMutableDictionary *setAsideDictionariesByPayloadClass; // @synthesize setAsideDictionariesByPayloadClass=_setAsideDictionariesByPayloadClass;
@property(retain, nonatomic) NSMutableDictionary *setAsideAccountIdentifiersByPayloadClass; // @synthesize setAsideAccountIdentifiersByPayloadClass=_setAsideAccountIdentifiersByPayloadClass;
- (id)peekProfileDataFromPurgatoryForDeviceType:(unsigned long long)arg1;	// IMP=0x0000000100025e98
- (void)_purgatoryWorkerQueue_resetProfilePurgatorySettingsAndPostProfileListChangedNotification:(_Bool)arg1;	// IMP=0x0000000100025e8c
- (void)purgeProfileWithIdentifier:(id)arg1 FromPurgatoryForTargetDeviceType:(unsigned long long)arg2;	// IMP=0x0000000100025c94
- (void)purgeProfilesFromPurgatoryForTargetDeviceType:(unsigned long long)arg1;	// IMP=0x0000000100025a68
- (void)sendProfileData:(id)arg1 withIdentifier:(id)arg2 toPurgatoryForTargetDeviceType:(unsigned long long)arg3;	// IMP=0x00000001000258b4
- (id)_installedProfileWithIdentifier:(id)arg1 installationType:(long long)arg2;	// IMP=0x0000000100024ea8
- (void)recomputeProfileRestrictionsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001000244b8
- (void)cleanUp;	// IMP=0x0000000100024048
- (void)removeManagedProfilesIfNecessary;	// IMP=0x0000000100023f48
- (void)removeUninstalledProfileWithIdentifier:(id)arg1 installationType:(long long)arg2 targetDeviceType:(unsigned long long)arg3;	// IMP=0x0000000100023f20
- (void)removeProfileWithIdentifier:(id)arg1 installationType:(long long)arg2 options:(id)arg3;	// IMP=0x0000000100023cc8
- (void)removeProfileWithIdentifier:(id)arg1 installationType:(long long)arg2;	// IMP=0x0000000100023cb8
- (void)_cleanUpAfterRemovingProfileWithIdentifier:(id)arg1 installedForUser:(_Bool)arg2 profileHandler:(id)arg3 oldRestrictions:(id)arg4;	// IMP=0x00000001000237b0
- (void)_reallyRemoveProfileWithIdentifier:(id)arg1 installationType:(long long)arg2 profileInstalled:(_Bool)arg3 targetDeviceType:(unsigned long long)arg4 options:(id)arg5;	// IMP=0x0000000100023074
- (void)removeAllProfilesFromInstallationQueue;	// IMP=0x000000010002302c
- (id)_managingProfileIdentifierForProfileIdentifier:(id)arg1;	// IMP=0x0000000100022f58
- (void)_removeOrphanedResources;	// IMP=0x0000000100022384
- (_Bool)interactionClient:(id)arg1 didRequestPreflightUserInputResponses:(id)arg2 forPayloadIndex:(unsigned long long)arg3 outError:(id *)arg4;	// IMP=0x000000010002218c
- (id)updateProfileWithIdentifier:(id)arg1 interactionClient:(id)arg2 installForSystem:(_Bool)arg3 outError:(id *)arg4;	// IMP=0x0000000100021880
- (id)updateProfileWithIdentifier:(id)arg1 interactionClient:(id)arg2 outError:(id *)arg3;	// IMP=0x0000000100021810
- (id)_profileNotEligibleErrorWithProfile:(id)arg1;	// IMP=0x0000000100021754
- (id)preflightProfileForInstallationOnWatch:(id)arg1;	// IMP=0x0000000100021244
- (id)preflightProfileForInstallationOnHomePod:(id)arg1;	// IMP=0x0000000100020fcc
- (id)installProfileData:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;	// IMP=0x000000010001f22c
- (id)existingProfileContainingPayloadClass:(Class)arg1 inProfilesWithFilterFlags:(int)arg2 excludingProfileIdentifier:(id)arg3;	// IMP=0x000000010001f040
- (id)existingProfileContainingPayloadClass:(Class)arg1 excludingProfileIdentifier:(id)arg2;	// IMP=0x000000010001f02c
- (_Bool)_showWarnings:(id)arg1 interactionClient:(id)arg2 outError:(id *)arg3;	// IMP=0x000000010001ef58
- (_Bool)_showWarningsForUpdatingProfile:(id)arg1 originalProfile:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;	// IMP=0x000000010001ee40
- (_Bool)_showWarningsForProfile:(id)arg1 interactionClient:(id)arg2 outError:(id *)arg3;	// IMP=0x000000010001ed98
- (id)setAsideDictionariesForPayloadHandlerClass:(Class)arg1;	// IMP=0x000000010001ed34
- (void)addSetAsideDictionary:(id)arg1 forPayloadHandlerClass:(Class)arg2;	// IMP=0x000000010001ec58
- (id)setAsideAccountIdentifiersForPayloadClass:(Class)arg1;	// IMP=0x000000010001ebb4
- (void)addSetAsideAccountIdentifier:(id)arg1 forPayloadClass:(Class)arg2;	// IMP=0x000000010001eaa0
- (_Bool)deviceSupervisionRequiredForPayload:(id)arg1;	// IMP=0x000000010001e8e8
- (id)_installProfileHandler:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;	// IMP=0x000000010001c0ec
- (id)_deviceLockedError;	// IMP=0x000000010001be5c
- (id)_guardAgainstNoMDMPayloadWithNewProfile:(id)arg1 oldProfile:(id)arg2;	// IMP=0x000000010001bce4
- (id)_validateMDMReplacementNewProfile:(id)arg1 oldProfile:(id)arg2 client:(id)arg3;	// IMP=0x000000010001b8a0
- (_Bool)_promptUserForMAIDSignIn:(id)arg1 personaID:(id)arg2 handler:(id)arg3 interactionClient:(id)arg4 outError:(id *)arg5;	// IMP=0x000000010001b774
- (_Bool)_promptUserForComplianceWithRestrictions:(id)arg1 handler:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;	// IMP=0x000000010001aef8
- (id)_userCancelledErrorWithFriendlyName:(id)arg1;	// IMP=0x000000010001ae60
- (id)_invalidInputError;	// IMP=0x000000010001adc8
- (id)_installationHaltedTopLevelError;	// IMP=0x000000010001acb0
- (id)_uiProfileInstallationDisabledTopLevelError;	// IMP=0x000000010001ac18
- (id)_targetDeviceInvalidError;	// IMP=0x000000010001ab80
- (id)_targetDeviceUnavailableError;	// IMP=0x000000010001aae8
- (id)_targetDeviceErrorWithUnderlyingError:(id)arg1;	// IMP=0x000000010001aa38
- (id)_malformedPayloadErrorWithUnderlyingError:(id)arg1;	// IMP=0x000000010001a988
- (id)_malformedPayloadErrorInternal:(_Bool)arg1;	// IMP=0x000000010001a8d4
- (id)_queueProfileData:(id)arg1 profile:(id)arg2 forDevice:(unsigned long long)arg3;	// IMP=0x000000010001a484
- (void)queueProfileDataForInstallation:(id)arg1 originalFileName:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100019fbc
- (id)popProvisioningProfileDataAtHeadOfInstallationQueue;	// IMP=0x0000000100019f3c
- (_Bool)queueProvisioningProfileDataForInstallation:(id)arg1 outError:(id *)arg2;	// IMP=0x0000000100019dd8
- (id)_badProvisioningProfileError;	// IMP=0x0000000100019d40
- (id)popProfileDataAtHeadOfInstallationQueue;	// IMP=0x0000000100019cc0
- (id)pathToInstalledProfileByUUID:(id)arg1;	// IMP=0x0000000100019938
- (id)pathToUninstalledProfileByIdentifier:(id)arg1 installationType:(long long)arg2 targetDeviceType:(unsigned long long)arg3;	// IMP=0x0000000100019840
- (id)pathToInstalledProfileByIdentifier:(id)arg1 installationType:(long long)arg2;	// IMP=0x0000000100019720
- (id)identifiersOfInstalledProfilesWithFilterFlags:(int)arg1;	// IMP=0x00000001000196bc
- (id)init;	// IMP=0x0000000100019608

@end
