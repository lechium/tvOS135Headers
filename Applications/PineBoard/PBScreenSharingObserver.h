//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBSBulletinServiceDelegate-Protocol.h"

@class NSString, PBBulletinService, PBSBulletin;

@interface PBScreenSharingObserver : NSObject <PBSBulletinServiceDelegate>
{
    int _pairedDevicesNotifier;	// 8 = 0x8
    _Bool _observing;	// 12 = 0xc
    PBBulletinService *_bulletinService;	// 16 = 0x10
    PBSBulletin *_currentBulletin;	// 24 = 0x18
    unsigned long long _currentSessionID;	// 32 = 0x20
}

+ (unsigned long long)nextSessionID;	// IMP=0x000000010016fe34
+ (id)sharedInstance;	// IMP=0x000000010016e678
- (void).cxx_destruct;	// IMP=0x00000001001714f4
@property(nonatomic) unsigned long long currentSessionID; // @synthesize currentSessionID=_currentSessionID;
@property(nonatomic, getter=isObserving) _Bool observing; // @synthesize observing=_observing;
@property(retain, nonatomic) PBSBulletin *currentBulletin; // @synthesize currentBulletin=_currentBulletin;
@property(retain, nonatomic) PBBulletinService *bulletinService; // @synthesize bulletinService=_bulletinService;
- (void)_pairedDevicesChanged;	// IMP=0x0000000100170930
- (void)bulletinService:(id)arg1 didDismissBulletin:(id)arg2 withReason:(unsigned long long)arg3;	// IMP=0x0000000100170878
- (void)_delayedScreenSharingBulletinRefresh;	// IMP=0x0000000100170740
- (void)_updateHUDStateForSessionID:(unsigned long long)arg1;	// IMP=0x000000010016fe60
- (void)_resetBulletinState:(_Bool)arg1;	// IMP=0x000000010016f3d4
- (void)_terminateScreenSharing;	// IMP=0x000000010016f2a0
- (id)_screenSharingDeviceName;	// IMP=0x000000010016f200
- (_Bool)_isScreenSharingActive;	// IMP=0x000000010016f184
- (void)_handleScreenSharingActiveDidChange:(_Bool)arg1;	// IMP=0x000000010016efcc
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000010016ee64
- (void)stopObserving;	// IMP=0x000000010016ecfc
- (void)startObserving;	// IMP=0x000000010016ea08
- (id)init;	// IMP=0x000000010016e774

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

