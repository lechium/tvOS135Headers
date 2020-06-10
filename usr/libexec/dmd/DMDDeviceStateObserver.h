//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "DMDDeviceStateProvider-Protocol.h"

@class NSString;

@interface DMDDeviceStateObserver : NSObject <DMDDeviceStateProvider>
{
    int mKeychainFirstUnlockNotificationToken;	// 8 = 0x8
    int mKeychainLockStateNotificationToken;	// 12 = 0xc
    int mNetworkChangeNotificationToken;	// 16 = 0x10
    _Bool _hasKeychainUnlockedSinceBoot;	// 20 = 0x14
    _Bool _isKeychainUnlocked;	// 21 = 0x15
    _Bool _isNetworkTethered;	// 22 = 0x16
}

@property(nonatomic) _Bool isNetworkTethered; // @synthesize isNetworkTethered=_isNetworkTethered;
@property(nonatomic) _Bool isKeychainUnlocked; // @synthesize isKeychainUnlocked=_isKeychainUnlocked;
@property(nonatomic) _Bool hasKeychainUnlockedSinceBoot; // @synthesize hasKeychainUnlockedSinceBoot=_hasKeychainUnlockedSinceBoot;
- (void)networkDidChange;	// IMP=0x000000010003c7f0
- (void)keybagLockStateDidChange;	// IMP=0x000000010003c780
- (void)stopObservingChanges;	// IMP=0x000000010003c734
- (void)startObservingChanges;	// IMP=0x000000010003c348
@property(readonly, copy) NSString *description;
- (id)init;	// IMP=0x000000010003c244

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

