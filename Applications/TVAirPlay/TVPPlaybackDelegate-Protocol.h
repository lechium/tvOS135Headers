//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep  6 2019 11:16:02).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSObject;
@protocol TVPPlayback;

@protocol TVPPlaybackDelegate <NSObject>
- (_Bool)player:(NSObject<TVPPlayback> *)arg1 shouldChangeToMediaAtIndex:(unsigned long long)arg2;
- (_Bool)player:(NSObject<TVPPlayback> *)arg1 shouldChangeMediaInDirection:(long long)arg2;
- (_Bool)player:(NSObject<TVPPlayback> *)arg1 shouldScanAtRate:(double)arg2;
- (_Bool)playerShouldPause:(NSObject<TVPPlayback> *)arg1;
- (_Bool)playerShouldPlay:(NSObject<TVPPlayback> *)arg1 timeFromWhichToPlay:(double *)arg2;
- (_Bool)player:(NSObject<TVPPlayback> *)arg1 shouldSeekToTime:(double *)arg2 playbackDate:(id *)arg3;

@optional
- (NSArray *)player:(NSObject<TVPPlayback> *)arg1 filteredSubtitleOptionsFromOptions:(NSArray *)arg2;
@end
