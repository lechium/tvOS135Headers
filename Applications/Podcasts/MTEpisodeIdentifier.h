//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MTEpisodeIdentifier-Protocol.h"
#import "MTPodcastIdentifier-Protocol.h"

@class NSNumber, NSString;

@interface MTEpisodeIdentifier : NSObject <MTEpisodeIdentifier, MTPodcastIdentifier>
{
    NSString *_episodeUUID;	// 8 = 0x8
    NSString *_episodeGUID;	// 16 = 0x10
    NSNumber *_episodeAdamID;	// 24 = 0x18
    NSNumber *_episodeSerpentID;	// 32 = 0x20
    NSString *_podcastUUID;	// 40 = 0x28
    NSNumber *_podcastAdamID;	// 48 = 0x30
    NSString *_currentPodcastFeedURL;	// 56 = 0x38
    NSString *_originalPodcastFeedURL;	// 64 = 0x40
}

+ (id)identifierWithPlayerItem:(id)arg1;	// IMP=0x0000000100022bf4
+ (id)identifierWithEpisode:(id)arg1;	// IMP=0x0000000100022b98
- (void).cxx_destruct;	// IMP=0x00000001000233b0
@property(copy, nonatomic) NSString *originalPodcastFeedURL; // @synthesize originalPodcastFeedURL=_originalPodcastFeedURL;
@property(copy, nonatomic) NSString *currentPodcastFeedURL; // @synthesize currentPodcastFeedURL=_currentPodcastFeedURL;
@property(retain, nonatomic) NSNumber *podcastAdamID; // @synthesize podcastAdamID=_podcastAdamID;
@property(copy, nonatomic) NSString *podcastUUID; // @synthesize podcastUUID=_podcastUUID;
@property(retain, nonatomic) NSNumber *episodeSerpentID; // @synthesize episodeSerpentID=_episodeSerpentID;
@property(retain, nonatomic) NSNumber *episodeAdamID; // @synthesize episodeAdamID=_episodeAdamID;
@property(copy, nonatomic) NSString *episodeGUID; // @synthesize episodeGUID=_episodeGUID;
@property(copy, nonatomic) NSString *episodeUUID; // @synthesize episodeUUID=_episodeUUID;
- (_Bool)_hasFeedURL:(id)arg1;	// IMP=0x0000000100023250
- (void)_updateWithPodcast:(id)arg1;	// IMP=0x0000000100023100
- (id)initWithPlayerItem:(id)arg1;	// IMP=0x0000000100022e4c
- (id)initWithEpisode:(id)arg1;	// IMP=0x0000000100022c50

@end
