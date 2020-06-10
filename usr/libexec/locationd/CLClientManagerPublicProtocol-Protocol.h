//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CLNotifierServiceProtocol-Protocol.h"

@class CLCppContainer, CLLocation, NSArray, NSData, NSDictionary, NSError, NSSet, NSString, NSUUID;

@protocol CLClientManagerPublicProtocol <CLNotifierServiceProtocol>
- (_Bool)syncgetDoSync:(void (^)(struct CLClientManager *))arg1;
- (void)doAsync:(void (^)(struct CLClientManager *))arg1 withReply:(void (^)(void))arg2;
- (void)doAsync:(void (^)(struct CLClientManager *))arg1;
- (void)checkWeakPersistentClientWithIdentifier:(struct PersistentSubscriptionIdentifier (^)(void))arg1;
- (NSData *)syncgetArchivedAuthorizationDecisions;
- (NSError *)syncgetApplyArchivedAuthorizationDecisionsAndDie:(NSData *)arg1 unlessTokenMatches:(NSUUID *)arg2;
- (int)syncgetRegistrationResultToAuthorizationStatus:(int)arg1;
- (NSDictionary *)syncgetCopyClients;
- (void)setPurpose:(NSString *)arg1 forClient:(struct Name (^)(void))arg2;
- (void)setClient:(struct Name (^)(void))arg1;
- (void)markReceivingLocationInformation:(struct Name (^)(void))arg1;
- (void)resetClients;
- (void)setLastLocationSettingsEventSource:(NSString *)arg1;
- (void)performMigration;
- (void)setClients:(CLCppContainer *)arg1 significantLocationChangeTo:(_Bool)arg2;
- (void)setClients:(CLCppContainer *)arg1 regionOfType:(int)arg2 to:(_Bool)arg3;
- (int)syncgetClientEffectiveRegistrationResultWithTransientAwareness:(struct Name (^)(void))arg1;
- (int)syncgetClientStaticRegistrationResult:(struct Name (^)(void))arg1;
- (void)reduceAccuracy:(CLLocation *)arg1 withReply:(void (^)(CLLocation *))arg2;
- (void)markClientEmergencyEnablementTransition:(_Bool)arg1 forBeneficiary:(NSString *)arg2;
- (void)markClientEmergencyEnablementTransition:(_Bool)arg1;
- (void)markClientTemporaryAuthorizationGranted:(_Bool)arg1 forClientKey:(NSString *)arg2;
- (_Bool)syncgetHasAuthorizedClients;
- (_Bool)syncgetSetLocationServicesEnabledStatically:(_Bool)arg1 withEventSource:(NSString *)arg2;
- (void)handleProvisionalIntermediationForService:(unsigned long long)arg1 forClientKey:(NSString *)arg2 withReply:(void (^)(_Bool))arg3;
- (void)setAllowableAuthorizationMask:(unsigned long long)arg1 forClientKey:(NSString *)arg2;
- (void)appsWithClientKeysAreInstalledOnAPairedDevice:(NSArray *)arg1;
- (void)checkAppInstallationStatus;
- (void)appLaunchedByAppLifecycleManager:(NSString *)arg1;
- (void)setClientAuthorization:(struct Name (^)(void))arg1 status:(int)arg2 correctiveCompensation:(int)arg3 entity:(NSString *)arg4;
- (_Bool)syncgetIsMapsANonSystemLocationClient;
- (NSString *)syncgetNonSystemLocationClientKey;
- (NSSet *)syncgetNonSystemLocationClientKeys;
- (NSSet *)syncgetLocationClientKeys;
- (void)setClientBackgroundIndicator:(struct Name (^)(void))arg1 enabled:(_Bool)arg2 entity:(NSString *)arg3;
- (void)wakeUpLaunchdManagedClient:(NSString *)arg1;
- (void)takeInUseAssertionForClientKey:(NSString *)arg1 reason:(NSString *)arg2 assertionLevel:(int)arg3 withReply:(void (^)(CLCppContainer *))arg4;
- (void)setClients:(CLCppContainer *)arg1 significantLocationVisitTo:(_Bool)arg2;
- (void)setProvisionalAuthorization:(struct Name)arg1;
@end
