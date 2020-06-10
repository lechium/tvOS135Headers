//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GKClientProxy, GKDataTransport, GKPlayerCredential, GKPlayerInternal;

@interface GKService : NSObject
{
    GKClientProxy *_clientProxy;	// 8 = 0x8
    GKDataTransport *_transport;	// 16 = 0x10
    GKPlayerInternal *_localPlayer;	// 24 = 0x18
    GKPlayerCredential *_credential;	// 32 = 0x20
}

+ (Class)interfaceClass;	// IMP=0x000000010014e8d8
+ (unsigned long long)requiredEntitlements;	// IMP=0x000000010014e7a0
+ (id)serviceForBundleID:(id)arg1 localPlayer:(id)arg2;	// IMP=0x000000010014e754
+ (id)serviceFromService:(id)arg1;	// IMP=0x000000010014e6a8
+ (id)serviceWithTransport:(id)arg1 forClient:(id)arg2 localPlayer:(id)arg3;	// IMP=0x000000010014e650
+ (id)serviceWithTransport:(id)arg1 forClient:(id)arg2 credential:(id)arg3;	// IMP=0x000000010014e5e0
@property(retain) GKPlayerCredential *credential; // @synthesize credential=_credential;
@property(retain) GKPlayerInternal *localPlayer; // @synthesize localPlayer=_localPlayer;
@property(retain) GKDataTransport *transport; // @synthesize transport=_transport;
@property(retain) GKClientProxy *clientProxy; // @synthesize clientProxy=_clientProxy;
- (id)transactionGroup;	// IMP=0x000000010014e9c4
- (_Bool)requiresAuthenticationForSelector:(SEL)arg1;	// IMP=0x000000010014e9b8
- (_Bool)requiresAuthentication;	// IMP=0x000000010014e9b0
- (void)dealloc;	// IMP=0x000000010014e878
- (id)initWithTransport:(id)arg1 forClient:(id)arg2 localPlayer:(id)arg3 credential:(id)arg4;	// IMP=0x000000010014e444
- (id)initWithoutCredentialWithTransport:(id)arg1 forClient:(id)arg2;	// IMP=0x000000010014e3cc
- (void)_coreInitWithTransport:(id)arg1 forClient:(id)arg2 localPlayer:(id)arg3 credential:(id)arg4;	// IMP=0x000000010014e2cc

@end
