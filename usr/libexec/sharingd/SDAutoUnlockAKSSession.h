//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface SDAutoUnlockAKSSession : NSObject
{
    struct __ACMHandle *_acmContext;	// 8 = 0x8
    _Bool _ltkNeedsFixing;	// 16 = 0x10
    _Bool _originator;	// 17 = 0x11
    _Bool _usingEscrow;	// 18 = 0x12
    long long _aksSessionID;	// 24 = 0x18
    NSData *_localLTK;	// 32 = 0x20
    NSData *_remoteLTK;	// 40 = 0x28
    long long _sessionType;	// 48 = 0x30
    NSData *_escrowSecret;	// 56 = 0x38
    NSString *_deviceID;	// 64 = 0x40
    NSData *_externalACMContext;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000100046578
@property(copy, nonatomic) NSData *externalACMContext; // @synthesize externalACMContext=_externalACMContext;
@property(retain, nonatomic) NSString *deviceID; // @synthesize deviceID=_deviceID;
@property(nonatomic) _Bool usingEscrow; // @synthesize usingEscrow=_usingEscrow;
@property(copy, nonatomic) NSData *escrowSecret; // @synthesize escrowSecret=_escrowSecret;
@property(nonatomic) _Bool originator; // @synthesize originator=_originator;
@property(nonatomic) long long sessionType; // @synthesize sessionType=_sessionType;
@property(copy, nonatomic) NSData *remoteLTK; // @synthesize remoteLTK=_remoteLTK;
@property(copy, nonatomic) NSData *localLTK; // @synthesize localLTK=_localLTK;
@property(nonatomic) _Bool ltkNeedsFixing; // @synthesize ltkNeedsFixing=_ltkNeedsFixing;
@property(nonatomic) long long aksSessionID; // @synthesize aksSessionID=_aksSessionID;
- (id)generateACMContextData;	// IMP=0x0000000100046460
- (id)generateSessionToken;	// IMP=0x0000000100046410
- (_Bool)resetSession;	// IMP=0x00000001000463b4
- (_Bool)confirmSession;	// IMP=0x000000010004636c
- (long long)finalizeEscrowPairing:(id)arg1;	// IMP=0x0000000100046300
- (id)generateEscrowSecret;	// IMP=0x00000001000462b0
- (_Bool)stepSessionWithData:(id)arg1 outputData:(id *)arg2;	// IMP=0x0000000100046234
- (_Bool)sessionIsValid;	// IMP=0x0000000100046210
- (void)fixRemoteLTKWithStatus:(long long)arg1 retryBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010004620c
- (void)fixRemoteLTK;	// IMP=0x00000001000460a8
- (void)setupAuthorizationSession;	// IMP=0x0000000100045eb8
- (void)setupSession;	// IMP=0x00000001000457d4
- (id)initWithLocalLTK:(id)arg1 remoteLTK:(id)arg2 sessionType:(long long)arg3 originator:(_Bool)arg4 deviceID:(id)arg5 escrowSecret:(id)arg6 usingEscrow:(_Bool)arg7 externalACMContext:(id)arg8;	// IMP=0x000000010004564c
- (id)initWithLocalLTK:(id)arg1 remoteLTK:(id)arg2 sessionType:(long long)arg3 originator:(_Bool)arg4 deviceID:(id)arg5 escrowSecret:(id)arg6;	// IMP=0x0000000100045588
- (id)initWithLocalLTK:(id)arg1 remoteLTK:(id)arg2 sessionType:(long long)arg3 originator:(_Bool)arg4 deviceID:(id)arg5 usingEscrow:(_Bool)arg6;	// IMP=0x00000001000454d8
- (id)initWithLocalLTK:(id)arg1 remoteLTK:(id)arg2 sessionType:(long long)arg3 originator:(_Bool)arg4 deviceID:(id)arg5 externalACMContext:(id)arg6;	// IMP=0x0000000100045414
- (id)initWithLocalLTK:(id)arg1 remoteLTK:(id)arg2 sessionType:(long long)arg3 originator:(_Bool)arg4 deviceID:(id)arg5;	// IMP=0x0000000100045370

@end

