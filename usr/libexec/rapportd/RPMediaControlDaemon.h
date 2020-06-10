//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source, RPMessageable;

@interface RPMediaControlDaemon : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    unsigned int _movementCommand;	// 16 = 0x10
    unsigned int _movementEndCommand;	// 20 = 0x14
    NSObject<OS_dispatch_source> *_movementEndTimer;	// 24 = 0x18
    unsigned long long _mediaControlFlags;	// 32 = 0x20
    _Bool _mediaControlInterest;	// 40 = 0x28
    _Bool _mediaRemoteCommandGetting;	// 41 = 0x29
    _Bool _mediaRemoteCommandObserving;	// 42 = 0x2a
    unsigned int _mediaRemoteVolumeCaps;	// 44 = 0x2c
    _Bool _mediaRemoteVolumeObserving;	// 48 = 0x30
    _Bool _volumeControlEnabledPB;	// 49 = 0x31
    int _volumeControlNotifyToken;	// 52 = 0x34
    id <RPMessageable> _messenger;	// 56 = 0x38
    CDUnknownBlockType _sendInterestEventHandler;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000010003bd00
@property(copy, nonatomic) CDUnknownBlockType sendInterestEventHandler; // @synthesize sendInterestEventHandler=_sendInterestEventHandler;
@property(retain, nonatomic) id <RPMessageable> messenger; // @synthesize messenger=_messenger;
- (void)_handleSetVolume:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010003b988
- (void)_handleGetVolume:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010003b78c
- (void)_handleSkipByRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010003b640
- (void)_handleMovementCommand:(unsigned int)arg1 endCommand:(unsigned int)arg2;	// IMP=0x000000010003b49c
- (void)_handleMediaCaptionSet:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010003b274
- (void)_handleMediaCaptionGet:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010003b120
- (void)_handleCommand:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010003ae78
- (void)_mediaRemoteVolumeControlUpdate;	// IMP=0x000000010003ae50
- (void)_mediaRemoteVolumeControlChanged:(id)arg1;	// IMP=0x000000010003aca8
- (void)_mediaRemoteSupportedCommandsGet;	// IMP=0x000000010003a9b8
- (void)_mediaRemoteSupportedCommandsChanged;	// IMP=0x000000010003a8d0
- (void)_mediaControlFlagsUpdate:(unsigned long long)arg1 mask:(unsigned long long)arg2;	// IMP=0x000000010003a75c
- (void)_mediaControlEnsureStopped;	// IMP=0x000000010003a620
- (void)_mediaControlEnsureStarted;	// IMP=0x000000010003a1ec
- (void)_update;	// IMP=0x000000010003a1c8
- (void)deregisteredEventID:(id)arg1;	// IMP=0x000000010003a170
- (void)registeredEventID:(id)arg1;	// IMP=0x000000010003a114
- (void)invalidate;	// IMP=0x0000000100039fec
- (_Bool)activateAndReturnError:(id *)arg1;	// IMP=0x0000000100039d34
- (id)init;	// IMP=0x0000000100039cc4

@end
