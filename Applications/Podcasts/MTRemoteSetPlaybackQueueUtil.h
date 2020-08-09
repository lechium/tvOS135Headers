//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MTRemoteSetPlaybackQueueUtil : NSObject
{
}

+ (id)_entityForFetchRequest:(id)arg1;	// IMP=0x00000001000757d8
+ (void)_destinationForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100075638
+ (long long)requestStatusForMediaRemoteStatus:(unsigned int)arg1;	// IMP=0x00000001000755dc
+ (void)insertPlayerItems:(id)arg1 intoPlaybackQueueAtPosition:(int)arg2;	// IMP=0x000000010007531c
+ (void)insertEpisodeUuids:(id)arg1 intoPlaybackQueueAtPosition:(int)arg2;	// IMP=0x000000010007515c
+ (void)decodeAndSetPlaybackQueueFromIdentifiers:(id)arg1 enqueuerDSID:(id)arg2 startPlayback:(_Bool)arg3 upNextQueueIntent:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000100074bb8
+ (void)pickRouteAndSwitchToLocalCard:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100074a10
+ (void)convertActiveEndpointToBufferedAirPlayWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010007494c
+ (void)performRequestAsBufferedAirPlay:(id)arg1;	// IMP=0x00000001000746b4
+ (void)promptBeforePerformingRequestAsBufferedAirPlay:(id)arg1 queueStatus:(unsigned long long)arg2;	// IMP=0x0000000100073658
+ (void)sendPlaybackQueueToLocalDestination:(struct _MRSystemAppPlaybackQueue *)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100073390
+ (void)setRemotePlaybackQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000728b4

@end

