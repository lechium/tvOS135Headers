//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CLNotifierServiceAdapter.h"

#import "CLClientManagerProtocol-Protocol.h"

@class NSString;

@interface CLClientManagerAdapter : CLNotifierServiceAdapter <CLClientManagerProtocol>
{
}

+ (id)getSilo;	// IMP=0x000000010025d1d8
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x000000010025d1b4
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x000000010087d534
- (void)triggerPruneAndRotateLocationConsumptionScoreArchiveAndUpdateTheStateAccordingly;	// IMP=0x0000000100262efc
- (void)handleProvisionalIntermediationForService:(unsigned long long)arg1 forClientKey:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100262e58
- (void)checkWeakPersistentClientWithIdentifier:(CDUnknownBlockType)arg1;	// IMP=0x0000000100262dc0
- (id)syncgetArchivedAuthorizationDecisions;	// IMP=0x0000000100262da4
- (id)syncgetApplyArchivedAuthorizationDecisionsAndDie:(id)arg1 unlessTokenMatches:(id)arg2;	// IMP=0x0000000100262d70
- (_Bool)syncgetIsMapsANonSystemLocationClient;	// IMP=0x0000000100262ce4
- (_Bool)syncgetHasAuthorizedClients;	// IMP=0x0000000100262ae0
- (int)syncgetRegistrationResultToAuthorizationStatus:(int)arg1;	// IMP=0x0000000100262910
- (int)syncgetClientEffectiveRegistrationResultWithTransientAwareness:(CDUnknownBlockType)arg1;	// IMP=0x0000000100262840
- (int)syncgetClientStaticRegistrationResult:(CDUnknownBlockType)arg1;	// IMP=0x0000000100262770
- (id)syncgetNonSystemLocationClientKey;	// IMP=0x00000001002625b8
- (id)syncgetNonSystemLocationClientKeys;	// IMP=0x00000001002624b8
- (id)syncgetLocationClientKeys;	// IMP=0x00000001002623b8
- (id)syncgetCopyClients;	// IMP=0x00000001002622d8
- (void)setAllowableAuthorizationMask:(unsigned long long)arg1 forClientKey:(id)arg2;	// IMP=0x0000000100261da0
- (void)appsWithClientKeysAreInstalledOnAPairedDevice:(id)arg1;	// IMP=0x0000000100261c1c
- (void)checkAppInstallationStatus;	// IMP=0x0000000100261c00
- (_Bool)syncgetSetLocationServicesEnabledStatically:(_Bool)arg1 withEventSource:(id)arg2;	// IMP=0x0000000100261b60
- (void)setPurpose:(id)arg1 forClient:(CDUnknownBlockType)arg2;	// IMP=0x0000000100261980
- (void)setClient:(CDUnknownBlockType)arg1;	// IMP=0x00000001002616d4
- (void)resetClients;	// IMP=0x00000001002616b8
- (void)setLastLocationSettingsEventSource:(id)arg1;	// IMP=0x000000010026162c
- (void)setClientAuthorization:(CDUnknownBlockType)arg1 status:(int)arg2 correctiveCompensation:(int)arg3 entity:(id)arg4;	// IMP=0x0000000100261528
- (void)setClientBackgroundIndicator:(CDUnknownBlockType)arg1 enabled:(_Bool)arg2 entity:(id)arg3;	// IMP=0x0000000100261270
- (void)performMigration;	// IMP=0x000000010025e554
- (void)appLaunchedByAppLifecycleManager:(id)arg1;	// IMP=0x000000010025e270
- (void)wakeUpLaunchdManagedClient:(id)arg1;	// IMP=0x000000010025e1cc
- (void)deliverAndReleaseNotification:(struct __CFUserNotification *)arg1 withFlags:(unsigned long long)arg2 callbackState:(struct CLCMNotificationStateRecord *)arg3;	// IMP=0x000000010025e164
- (void)onCapabilityChange;	// IMP=0x000000010025e148
- (void)markReceivingLocationInformation:(CDUnknownBlockType)arg1;	// IMP=0x000000010025dc38
- (void)reduceAccuracy:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x000000010025dbb4
- (void)takeInUseAssertionForClientKey:(id)arg1 reason:(id)arg2 assertionLevel:(int)arg3 withReply:(CDUnknownBlockType)arg4;	// IMP=0x000000010025d9ec
- (void)markClientEmergencyEnablementTransition:(_Bool)arg1 forBeneficiary:(id)arg2;	// IMP=0x000000010025d950
- (void)markClientEmergencyEnablementTransition:(_Bool)arg1;	// IMP=0x000000010025d8cc
- (void)markClientTemporaryAuthorizationGranted:(_Bool)arg1 forClientKey:(id)arg2;	// IMP=0x000000010025d830
- (void)setClients:(id)arg1 significantLocationVisitTo:(_Bool)arg2;	// IMP=0x000000010025d7c0
- (void)setClients:(id)arg1 significantLocationChangeTo:(_Bool)arg2;	// IMP=0x000000010025d75c
- (void)setClients:(id)arg1 regionOfType:(int)arg2 to:(_Bool)arg3;	// IMP=0x000000010025d6e4
- (void)setProvisionalAuthorization:(struct Name)arg1;	// IMP=0x000000010025d400
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x000000010025d3c4
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x000000010025d380
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x000000010025d34c
- (struct CLClientManager *)adaptee;	// IMP=0x000000010025d310
- (void)endService;	// IMP=0x000000010025d2ec
- (void)beginService;	// IMP=0x000000010025d294
- (id)init;	// IMP=0x000000010025d250

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

