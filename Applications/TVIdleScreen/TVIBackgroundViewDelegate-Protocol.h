//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TVIBackgroundView, TVPURLMediaItem;

@protocol TVIBackgroundViewDelegate <NSObject>
- (void)backgroundView:(TVIBackgroundView *)arg1 lastPlayedMediaItem:(TVPURLMediaItem *)arg2 elapsedTime:(double)arg3 resetList:(_Bool)arg4;
- (void)backgroundView:(TVIBackgroundView *)arg1 didEncounterPlaybackErrorForMediaItem:(TVPURLMediaItem *)arg2;
- (void)backgroundView:(TVIBackgroundView *)arg1 didTransitionFromMediaItem:(TVPURLMediaItem *)arg2 toMediaItem:(TVPURLMediaItem *)arg3;
- (void)backgroundView:(TVIBackgroundView *)arg1 willTransitionFromMediaItem:(TVPURLMediaItem *)arg2 toMediaItem:(TVPURLMediaItem *)arg3;
@end

