//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TVPPlayback-Protocol.h"

@class AVPlayer, NSDate, TVPVideoView;

@protocol TVPAVFPlayback <TVPPlayback>
@property(readonly, nonatomic) AVPlayer *avPlayer;
- (void)removeWeakReferenceToVideoView:(TVPVideoView *)arg1;
- (void)addWeakReferenceToVideoView:(TVPVideoView *)arg1;

@optional
- (void)setElapsedTime:(double)arg1 orPlaybackDate:(NSDate *)arg2 withAVKitCompletion:(void (^)(_Bool, NSNumber *, NSDate *))arg3;
@end

