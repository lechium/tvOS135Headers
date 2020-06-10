//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;
@protocol OS_dispatch_queue;

@interface RPAppAudioCaptureManager : NSObject
{
    _Bool _resumed;	// 8 = 0x8
    CDUnknownBlockType _appAudioOutputHandler;	// 16 = 0x10
    NSDate *_lastAudioDate;	// 24 = 0x18
    CDUnknownBlockType _appTapDidStartHandler;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_audioDispatchQueue;	// 40 = 0x28
    CDStruct_f128470a *_audioRecorderQueue;	// 48 = 0x30
    struct AudioStreamBasicDescription _audioBasicDescription;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000010001b8d4
@property(nonatomic) CDStruct_f128470a *audioRecorderQueue; // @synthesize audioRecorderQueue=_audioRecorderQueue;
@property(nonatomic) struct AudioStreamBasicDescription audioBasicDescription; // @synthesize audioBasicDescription=_audioBasicDescription;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *audioDispatchQueue; // @synthesize audioDispatchQueue=_audioDispatchQueue;
@property(copy, nonatomic) CDUnknownBlockType appTapDidStartHandler; // @synthesize appTapDidStartHandler=_appTapDidStartHandler;
@property(retain, nonatomic) NSDate *lastAudioDate; // @synthesize lastAudioDate=_lastAudioDate;
@property(nonatomic) _Bool resumed; // @synthesize resumed=_resumed;
@property(copy, nonatomic) CDUnknownBlockType appAudioOutputHandler; // @synthesize appAudioOutputHandler=_appAudioOutputHandler;
- (void)stop;	// IMP=0x000000010001b554
- (void)resumeWithProcessID:(int)arg1;	// IMP=0x000000010001b478
- (_Bool)handleStartAudioQueueFailed:(int)arg1 didFailHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010001b3d4
- (void)startWithProcessID:(int)arg1 outputHandler:(CDUnknownBlockType)arg2 didStartHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010001ac90
- (id)initWithAudioStreamBasicDescription:(struct AudioStreamBasicDescription)arg1;	// IMP=0x000000010001abe8

@end

