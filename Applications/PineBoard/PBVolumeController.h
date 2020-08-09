//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MPAVRoutingControllerDelegate-Protocol.h"
#import "MPVolumeControllerDelegate-Protocol.h"
#import "PBSBulletinServiceDelegate-Protocol.h"

@class MPAVRoutingController, MPVolumeController, NSNumber, NSString, PBBulletinService, PBSBulletin;
@protocol PBVolumeControllerDelegate;

@interface PBVolumeController : NSObject <PBSBulletinServiceDelegate, MPVolumeControllerDelegate, MPAVRoutingControllerDelegate>
{
    _Bool _systemMusicVolumeSupported;	// 8 = 0x8
    _Bool _systemAudioVolumeSupported;	// 9 = 0x9
    _Bool _systemMusicVolumeNotificationsEnabled;	// 10 = 0xa
    _Bool _systemAudioVolumeNotificationsEnabled;	// 11 = 0xb
    _Bool _updatingVolumeValues;	// 12 = 0xc
    id <PBVolumeControllerDelegate> _delegate;	// 16 = 0x10
    PBBulletinService *_bulletinService;	// 24 = 0x18
    PBSBulletin *_volumeBulletin;	// 32 = 0x20
    MPAVRoutingController *_systemMusicRoutingController;	// 40 = 0x28
    MPAVRoutingController *_systemAudioRoutingController;	// 48 = 0x30
    MPVolumeController *_systemMusicVolumeController;	// 56 = 0x38
    MPVolumeController *_systemAudioVolumeController;	// 64 = 0x40
    NSNumber *_systemMusicVolume;	// 72 = 0x48
    NSNumber *_systemAudioVolume;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000010005c168
@property(readonly, nonatomic) _Bool updatingVolumeValues; // @synthesize updatingVolumeValues=_updatingVolumeValues;
@property(readonly, nonatomic) _Bool systemAudioVolumeNotificationsEnabled; // @synthesize systemAudioVolumeNotificationsEnabled=_systemAudioVolumeNotificationsEnabled;
@property(readonly, nonatomic) _Bool systemMusicVolumeNotificationsEnabled; // @synthesize systemMusicVolumeNotificationsEnabled=_systemMusicVolumeNotificationsEnabled;
@property(readonly, nonatomic) _Bool systemAudioVolumeSupported; // @synthesize systemAudioVolumeSupported=_systemAudioVolumeSupported;
@property(readonly, nonatomic) _Bool systemMusicVolumeSupported; // @synthesize systemMusicVolumeSupported=_systemMusicVolumeSupported;
@property(readonly, nonatomic) NSNumber *systemAudioVolume; // @synthesize systemAudioVolume=_systemAudioVolume;
@property(readonly, nonatomic) NSNumber *systemMusicVolume; // @synthesize systemMusicVolume=_systemMusicVolume;
@property(readonly, nonatomic) MPVolumeController *systemAudioVolumeController; // @synthesize systemAudioVolumeController=_systemAudioVolumeController;
@property(readonly, nonatomic) MPVolumeController *systemMusicVolumeController; // @synthesize systemMusicVolumeController=_systemMusicVolumeController;
@property(readonly, nonatomic) MPAVRoutingController *systemAudioRoutingController; // @synthesize systemAudioRoutingController=_systemAudioRoutingController;
@property(readonly, nonatomic) MPAVRoutingController *systemMusicRoutingController; // @synthesize systemMusicRoutingController=_systemMusicRoutingController;
@property(retain, nonatomic) PBSBulletin *volumeBulletin; // @synthesize volumeBulletin=_volumeBulletin;
@property(retain, nonatomic) PBBulletinService *bulletinService; // @synthesize bulletinService=_bulletinService;
@property(readonly, nonatomic) __weak id <PBVolumeControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_presentVolumeBulletinForRouteWithName:(id)arg1 volumeLevel:(float)arg2;	// IMP=0x000000010005ba7c
- (void)_updateVolume;	// IMP=0x000000010005accc
- (void)_setNeedsVolumeUpdate;	// IMP=0x000000010005abb8
- (void)bulletinService:(id)arg1 didDismissBulletin:(id)arg2 withReason:(unsigned long long)arg3;	// IMP=0x000000010005ab08
- (void)routingController:(id)arg1 pickedRoutesDidChange:(id)arg2;	// IMP=0x000000010005a92c
- (void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2;	// IMP=0x000000010005a6ac
- (void)volumeController:(id)arg1 volumeControlAvailableDidChange:(_Bool)arg2;	// IMP=0x000000010005a42c
- (void)setVolumeNotificationsEnabled:(_Bool)arg1 forOutputContext:(unsigned long long)arg2;	// IMP=0x000000010005a2a0
- (_Bool)volumeSupportedForOutputContext:(unsigned long long)arg1;	// IMP=0x000000010005a24c
- (void)decreaseVolumeForOutputContext:(unsigned long long)arg1;	// IMP=0x000000010005a07c
- (void)increaseVolumeForOutputContext:(unsigned long long)arg1;	// IMP=0x0000000100059e14
- (id)initWithDelegate:(id)arg1;	// IMP=0x0000000100059994
- (id)init;	// IMP=0x0000000100059950

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
