//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlaybackCore/MPCAssistantPlaybackQueue.h>

@interface MTMPCAssistantGenericPlaybackQueue : MPCAssistantPlaybackQueue
{
    struct _MRSystemAppPlaybackQueue *_playbackQueueRef;	// 8 = 0x8
}

@property(nonatomic) struct _MRSystemAppPlaybackQueue *playbackQueueRef; // @synthesize playbackQueueRef=_playbackQueueRef;
- (struct _MRSystemAppPlaybackQueue *)createRemotePlaybackQueue;	// IMP=0x0000000100003924
- (id)initWithContextID:(id)arg1 playbackQueueRef:(struct _MRSystemAppPlaybackQueue *)arg2;	// IMP=0x00000001000038d4
- (id)initWithPlaybackQueueRef:(struct _MRSystemAppPlaybackQueue *)arg1;	// IMP=0x00000001000038c0

@end

