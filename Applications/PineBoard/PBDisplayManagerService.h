//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBSDisplayManagerServiceInterface-Protocol.h"

@class NSString, PBSystemServiceConnection;

@interface PBDisplayManagerService : NSObject <PBSDisplayManagerServiceInterface>
{
    PBSystemServiceConnection *_remoteConnection;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001000796c8
@property(readonly, nonatomic) PBSystemServiceConnection *remoteConnection; // @synthesize remoteConnection=_remoteConnection;
- (void)enableAtmos:(_Bool)arg1;	// IMP=0x00000001000794a0
- (void)enableModeSwitchingForFrameRate:(_Bool)arg1;	// IMP=0x0000000100079294
- (void)enableModeSwitchingForDynamicRange:(_Bool)arg1;	// IMP=0x0000000100079088
- (void)fetchCurrentDisplayStateWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000100078e5c
- (void)displayAssistantDidCompleteForKind:(id)arg1;	// IMP=0x0000000100078bf4
- (void)setAudioLatency:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000100078934
- (void)displayAssistantDidStartForKind:(id)arg1;	// IMP=0x00000001000786d4
- (void)removeCableCheckHistory;	// IMP=0x0000000100078514
- (void)forgetDisplaysForDisplayAssistant;	// IMP=0x0000000100078354
- (void)presentDisplayAssistantWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010007809c
- (void)handleRegionChangeWithNewCountryCode:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100077de4
- (void)wakeDisplayWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000100077b8c
- (void)sleepDisplayWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000100077934
- (void)updateDisplayManagerWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010007767c
- (_Bool)ensuredValidEntitlementWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000001000773a4
- (void)invalidate;	// IMP=0x00000001000772b0
- (id)initWithRemoteConnection:(id)arg1;	// IMP=0x000000010007717c
- (id)init;	// IMP=0x0000000100077148

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

