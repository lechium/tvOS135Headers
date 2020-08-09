//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class NSData, NSDictionary;
@protocol OS_dispatch_queue;

@interface MZKeyValueStoreClampsController : NSObject <NSSecureCoding>
{
    NSDictionary *_transactionClamps;	// 8 = 0x8
    double _dsidCheckTimestamp;	// 16 = 0x10
    double _authenticationNeededTimestamp;	// 24 = 0x18
    double _userAcceptedSyncTimestamp;	// 32 = 0x20
    double _networkingBlockedUntil;	// 40 = 0x28
    double _backOffUntil;	// 48 = 0x30
    double _userCancelledSignInBackOffUntil;	// 56 = 0x38
    double _nextUserCancelBackOffInterval;	// 64 = 0x40
    NSData *_pendingUserDefaultArchivedData;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_queue;	// 80 = 0x50
}

+ (id)_classesForTransactionClampsValues;	// IMP=0x0000000100021b98
+ (_Bool)supportsSecureCoding;	// IMP=0x00000001000213a8
+ (id)sharedClampsController;	// IMP=0x0000000100020e84
- (void).cxx_destruct;	// IMP=0x0000000100022b5c
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain) NSData *pendingUserDefaultArchivedData; // @synthesize pendingUserDefaultArchivedData=_pendingUserDefaultArchivedData;
@property double nextUserCancelBackOffInterval; // @synthesize nextUserCancelBackOffInterval=_nextUserCancelBackOffInterval;
@property double userCancelledSignInBackOffUntil; // @synthesize userCancelledSignInBackOffUntil=_userCancelledSignInBackOffUntil;
@property double backOffUntil; // @synthesize backOffUntil=_backOffUntil;
@property double networkingBlockedUntil; // @synthesize networkingBlockedUntil=_networkingBlockedUntil;
@property double userAcceptedSyncTimestamp; // @synthesize userAcceptedSyncTimestamp=_userAcceptedSyncTimestamp;
@property double authenticationNeededTimestamp; // @synthesize authenticationNeededTimestamp=_authenticationNeededTimestamp;
@property double dsidCheckTimestamp; // @synthesize dsidCheckTimestamp=_dsidCheckTimestamp;
@property(retain, nonatomic) NSDictionary *transactionClamps; // @synthesize transactionClamps=_transactionClamps;
- (_Bool)_canScheduleTransactionBasedOnUserCancelledSignIn:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100022978
- (_Bool)_canScheduleTransactionBasedOnBackOff:(id)arg1 error:(id *)arg2;	// IMP=0x000000010002287c
- (_Bool)_canScheduleTransactionBasedOnDSIDCheck:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000227dc
- (_Bool)_canScheduleTransactionBasedOfNetworkingBlocked:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100022750
- (_Bool)_canScheduleTransactionBasedOnType:(id)arg1 error:(id *)arg2;	// IMP=0x000000010002253c
- (id)_keyForTransaction:(id)arg1;	// IMP=0x0000000100022438
- (double)_rightNow;	// IMP=0x00000001000223dc
- (_Bool)isNetworkingBlocked;	// IMP=0x0000000100022350
- (void)clearNetworkingBlocked;	// IMP=0x0000000100022340
- (void)setNetworkingBlocked;	// IMP=0x00000001000222f0
- (void)clearBackOff;	// IMP=0x00000001000222b8
- (void)backOffForTimeInterval:(double)arg1;	// IMP=0x0000000100022264
- (void)clearUserCancelledSignIn;	// IMP=0x0000000100022220
- (void)setUserCancelledSignIn;	// IMP=0x0000000100022184
- (_Bool)hasUserRecentlyAcceptedSync;	// IMP=0x00000001000220d4
- (void)clearUserAcceptedSyncTimestamp;	// IMP=0x000000010002209c
- (void)setUserAcceptedSyncTimestamp;	// IMP=0x0000000100022058
- (_Bool)hasAuthenticatedTooRecentlyForTransaction:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100021f9c
- (void)clearAuthenticationRequest;	// IMP=0x0000000100021f64
- (void)setAuthenticationRequest;	// IMP=0x0000000100021f20
- (void)clearDSIDCheckTimestamp;	// IMP=0x0000000100021ee8
- (void)setDSIDCheckTimestamp;	// IMP=0x0000000100021ea4
- (void)clearTimestampForTransaction:(id)arg1;	// IMP=0x0000000100021dd8
- (void)setTimestampForTransaction:(id)arg1;	// IMP=0x0000000100021cbc
- (void)reset;	// IMP=0x0000000100021aec
- (void)accessTransactionClampsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100021988
- (_Bool)canScheduleTransaction:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000218b4
- (id)description;	// IMP=0x0000000100021704
- (void)saveToUserDefaults;	// IMP=0x00000001000213b0
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001000211a4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100021070
- (id)init;	// IMP=0x0000000100020fe0

@end
