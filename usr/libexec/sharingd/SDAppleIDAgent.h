//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "APSConnectionDelegate-Protocol.h"

@class APSConnection, NSDate, NSMutableArray, NSMutableDictionary, NSString, SDAppleIDDatabaseManager, SDAppleIDIdentityRequest, SDAppleIDServerTask;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface SDAppleIDAgent : NSObject <APSConnectionDelegate>
{
    _Bool _agentEnabled;	// 8 = 0x8
    NSMutableDictionary *_agentMetaInfo;	// 16 = 0x10
    NSString *_appleID;	// 24 = 0x18
    NSDate *_creationDate;	// 32 = 0x20
    SDAppleIDDatabaseManager *_dbManager;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 48 = 0x30
    NSMutableArray *_findPersonRequests;	// 56 = 0x38
    SDAppleIDIdentityRequest *_identityRequest;	// 64 = 0x40
    SDAppleIDServerTask *_infoRequest;	// 72 = 0x48
    _Bool _linkIdentityEnabled;	// 80 = 0x50
    NSObject<OS_dispatch_source> *_periodicVerifyTimer;	// 88 = 0x58
    APSConnection *_pushConnection;	// 96 = 0x60
    NSString *_pushEnvironment;	// 104 = 0x68
    SDAppleIDServerTask *_task;	// 112 = 0x70
    SDAppleIDIdentityRequest *_testIdentityRequest;	// 120 = 0x78
    NSObject<OS_dispatch_source> *_throttledRetryTimer;	// 128 = 0x80
    _Bool _updatePush;	// 136 = 0x88
    _Bool _updatePeriodicVerifyTimer;	// 137 = 0x89
}

+ (id)sharedAgent;	// IMP=0x000000010014fa44
- (void).cxx_destruct;	// IMP=0x0000000100150210
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;	// IMP=0x000000010015009c
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;	// IMP=0x000000010014ffa0
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;	// IMP=0x000000010014fe68
- (void)handleUILockStatusChangedNotification;	// IMP=0x000000010014fe10
- (void)handleKeyBagFirstUnlockNotification;	// IMP=0x000000010014fdb8
- (void)handleAppleIDSignedOutNotification;	// IMP=0x000000010014fd60
- (void)handleAppleIDSignedInNotification;	// IMP=0x000000010014fd08
- (void)handleAppleIDChangedNotification;	// IMP=0x000000010014fcb0
- (id)validationRecordInfoForAppleID:(id)arg1;	// IMP=0x000000010014fb70
- (id)statusInfo;	// IMP=0x000000010014fb04
- (void)requestWithInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010014f8f4
- (void)prefsChanged;	// IMP=0x000000010014f89c
- (void)personInfoWithEmailOrPhone:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010014f7e4
- (void)personInfoWithEmailOrPhone:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010014f790
- (id)myAccount;	// IMP=0x000000010014f70c
- (void)invalidate;	// IMP=0x000000010014f6b4
- (id)detailedDescription;	// IMP=0x000000010014f648
- (void)queryVerifiedIdentityForEmailOrPhone:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010014f2f4
- (struct __SecIdentity *)copyIdentityForAppleID:(id)arg1;	// IMP=0x000000010014f20c
- (id)verifiedIdentityForCertificateChain:(id)arg1 emailOrPhone:(id)arg2 error:(id *)arg3;	// IMP=0x000000010014ecec
- (id)verifiedIdentityForEmailOrPhone:(id)arg1;	// IMP=0x000000010014ea28
- (void)verifiedIdentityForEmailOrPhone:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010014e9d4
- (void)verifiedIdentityForEmailOrPhone:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010014e740
- (void)activate;	// IMP=0x000000010014e6e8
- (id)accountStatusForAppleID:(id)arg1;	// IMP=0x000000010014e634
- (id)accountForAppleID:(id)arg1;	// IMP=0x000000010014e544
- (_Bool)_wasOldAgentIdentityQueried;	// IMP=0x000000010014e510
- (_Bool)_wasIdentityLinkedOnce;	// IMP=0x000000010014e4dc
- (void)_verifyStateWithDelay:(double)arg1;	// IMP=0x000000010014e400
- (void)_verifyState;	// IMP=0x000000010014d2bc
- (void)_updateMyInfo;	// IMP=0x000000010014d218
- (void)_updateAppleID;	// IMP=0x000000010014d100
- (void)_update;	// IMP=0x000000010014d08c
- (id)_statusInfo;	// IMP=0x000000010014cf54
- (void)_setMetaInfoValue:(id)arg1 forKey:(id)arg2;	// IMP=0x000000010014cef0
- (void)_setCurrentAppleIDContactInfo:(id)arg1 validationRecord:(id)arg2;	// IMP=0x000000010014ce9c
- (void)_setCurrentAppleIDIdentity:(id)arg1;	// IMP=0x000000010014ce84
- (void)_requestIdentityForAppleID:(id)arg1 certificateToken:(id)arg2 privateKeyPersistentReference:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x000000010014c844
- (void)_requestInfoForAppleID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010014c23c
- (void)_removeObservers;	// IMP=0x000000010014c1ec
- (void)_prefsChanged;	// IMP=0x000000010014beb8
- (void)_personInfoWithEmailOrPhone:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010014b768
- (void)_performServerTaskWithInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010014a98c
- (void)_performOtherTaskWithInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010014a038
- (int)_performKeychainCount;	// IMP=0x0000000100149d20
- (int)_performKeyVerificationForIdentity:(id)arg1;	// IMP=0x000000010014984c
- (id)_metaInfoValueForKey:(id)arg1;	// IMP=0x000000010014983c
- (unsigned long long)_keychainCleanupTag;	// IMP=0x0000000100149814
- (void)_handleThrottledRetryTimerFired;	// IMP=0x000000010014978c
- (void)_handlePeriodicVerifyTimerFired;	// IMP=0x00000001001496b0
- (void)_handleReceivedIdentity:(id)arg1 forAppleID:(id)arg2 identityRequest:(id)arg3 withError:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000100149334
- (void)_handleReceivedCertificateToken:(id)arg1 privateKeyPersistentReference:(id)arg2 forAppleID:(id)arg3;	// IMP=0x000000010014929c
- (void)_handleUntrustedAppleIDCertificateChainForIdentity:(id)arg1;	// IMP=0x0000000100149100
- (void)_handleUILockStatusChange;	// IMP=0x0000000100148f9c
- (void)_handleUILockStatusChangedNotification;	// IMP=0x0000000100148f24
- (void)_handleServerTaskCompletionWithError:(id)arg1;	// IMP=0x0000000100148d4c
- (void)_handleKeyVerificationFailure;	// IMP=0x0000000100148ca4
- (void)_handleKeyBagFirstUnlockNotification;	// IMP=0x0000000100148c2c
- (void)_handleInfoResponse:(id)arg1 forAppleID:(id)arg2 infoRequest:(id)arg3 certificateSerialNumber:(id)arg4 withError:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0000000100147e6c
- (void)_handleFindPersonResponse:(id)arg1 forRequest:(id)arg2 emailOrPhone:(id)arg3 withError:(id)arg4 queue:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0000000100147948
- (void)_handleCertificateStatusUpdate:(long long)arg1 forAppleID:(id)arg2;	// IMP=0x000000010014746c
- (void)_handleAppleIDSignedOutNotification;	// IMP=0x0000000100147354
- (void)_handleAppleIDSignedInNotification;	// IMP=0x0000000100147268
- (void)_handleAppleIDChangedNotification;	// IMP=0x00000001001471ec
- (void)_handleAccountIdentifierValidationRecordMismatch;	// IMP=0x0000000100147130
- (void)_ensureThrottledRetryTimerStopped;	// IMP=0x00000001001470a8
- (void)_ensureThrottledRetryTimerStartedWithSuggestedDelay:(unsigned long long)arg1;	// IMP=0x0000000100146d98
- (void)_ensurePeriodicVerifyTimerStopped;	// IMP=0x0000000100146d10
- (void)_ensurePeriodicVerifyTimerStarted;	// IMP=0x0000000100146b4c
- (void)_ensurePushStopped;	// IMP=0x0000000100146aa8
- (int)_ensureEduModeDevicesAreCleanedUp;	// IMP=0x00000001001467f0
- (void)_checkIfAppleIDCertificateChainIsValidForIdentity:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100146594
- (id)_detailedDescription;	// IMP=0x0000000100145270
- (void)_ensurePushStarted;	// IMP=0x0000000100145024
- (struct __SecIdentity *)_copyIdentityForAppleID:(id)arg1;	// IMP=0x0000000100144fd4
- (void)_clearAccount;	// IMP=0x0000000100144f48
- (void)_cleanUpAccount:(id)arg1;	// IMP=0x0000000100144d5c
- (void)_invalidate;	// IMP=0x0000000100144ae8
- (void)_addObservers;	// IMP=0x00000001001449d4
- (void)_activate;	// IMP=0x000000010014491c
- (long long)_accountState;	// IMP=0x00000001001442e0
- (id)_accountForAppleID:(id)arg1;	// IMP=0x00000001001442d0
- (_Bool)eduModeEnabled;	// IMP=0x00000001001442c8
- (void)dealloc;	// IMP=0x0000000100144280
- (id)init;	// IMP=0x00000001001441b0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

