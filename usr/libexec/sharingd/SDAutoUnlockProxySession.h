//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SDAutoUnlockPairingSession.h"

@class NSDate, NSString, SFBLEDevice;

__attribute__((visibility("hidden")))
@interface SDAutoUnlockProxySession : SDAutoUnlockPairingSession
{
    _Bool _activeConnection;	// 8 = 0x8
    _Bool _notified;	// 9 = 0x9
    _Bool _invalidated;	// 10 = 0xa
    int _proxyRSSI;	// 12 = 0xc
    NSString *_model;	// 16 = 0x10
    double _proxyDiscoveryTime;	// 24 = 0x18
    NSDate *_startDate;	// 32 = 0x20
    SFBLEDevice *_bleDevice;	// 40 = 0x28
    double _connectionTime;	// 48 = 0x30
    long long _state;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000001000c0030
@property _Bool invalidated; // @synthesize invalidated=_invalidated;
@property _Bool notified; // @synthesize notified=_notified;
@property _Bool activeConnection; // @synthesize activeConnection=_activeConnection;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) double connectionTime; // @synthesize connectionTime=_connectionTime;
@property(retain, nonatomic) SFBLEDevice *bleDevice; // @synthesize bleDevice=_bleDevice;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(nonatomic) double proxyDiscoveryTime; // @synthesize proxyDiscoveryTime=_proxyDiscoveryTime;
@property(nonatomic) int proxyRSSI; // @synthesize proxyRSSI=_proxyRSSI;
@property(copy, nonatomic) NSString *model; // @synthesize model=_model;
- (void)sendProxyTrigger;	// IMP=0x00000001000bfb44
- (void)notifyDelegateWithError:(id)arg1;	// IMP=0x00000001000bfa70
- (void)handleFoundBLEDevice:(id)arg1;	// IMP=0x00000001000bf800
- (void)deviceConnected:(id)arg1;	// IMP=0x00000001000bf688
- (id)results;	// IMP=0x00000001000bf4e0
- (void)removeObservers;	// IMP=0x00000001000bf490
- (void)addObservers;	// IMP=0x00000001000bf428
- (void)invalidate;	// IMP=0x00000001000bf340
- (void)_start;	// IMP=0x00000001000bf288
- (void)start;	// IMP=0x00000001000bf1fc
- (id)initWithDevice:(id)arg1 sessionID:(id)arg2 bleDevice:(id)arg3;	// IMP=0x00000001000bf130

@end
