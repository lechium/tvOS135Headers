//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "_PBSMediaRemoteServiceInternalInterface-Protocol.h"

@class NSMutableDictionary, NSString, PBSystemServiceConnection;

@interface PBMediaRemoteService : NSObject <_PBSMediaRemoteServiceInternalInterface>
{
    PBSystemServiceConnection *_remoteConnection;	// 8 = 0x8
    NSMutableDictionary *_pinViewControllerContextsByToken;	// 16 = 0x10
}

+ (void)_updateTVAVRPowerControlAvailableState;	// IMP=0x000000010017d978
+ (void)_updateVolumeControlAvailableState;	// IMP=0x000000010017d7c4
+ (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000010017d684
+ (id)_audioRoutingController;	// IMP=0x000000010017d52c
+ (void)initialize;	// IMP=0x000000010017d0ac
- (void).cxx_destruct;	// IMP=0x000000010017f8e8
@property(readonly, nonatomic) NSMutableDictionary *pinViewControllerContextsByToken; // @synthesize pinViewControllerContextsByToken=_pinViewControllerContextsByToken;
@property(readonly, nonatomic) PBSystemServiceConnection *remoteConnection; // @synthesize remoteConnection=_remoteConnection;
- (void)__noteUserPresenceDetected;	// IMP=0x000000010017f5f8
- (void)__dismissPinDialogWithToken:(id)arg1;	// IMP=0x000000010017f324
- (void)__showPinDialogWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010017e668
- (void)__stopSiriWithContext:(id)arg1;	// IMP=0x000000010017e3b0
- (void)__startSiriWithContext:(id)arg1;	// IMP=0x000000010017dfd8
- (void)__activateSiriWithContext:(id)arg1;	// IMP=0x000000010017db1c
- (id)initWithRemoteConnection:(id)arg1;	// IMP=0x000000010017cfa0
- (id)init;	// IMP=0x000000010017cf6c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

