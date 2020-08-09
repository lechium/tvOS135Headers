//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVPlayback/TVPBaseMediaItem.h>

@class MPCPlayerResponseItem, MPModelPodcastEpisode, NSDictionary, NSString;

@interface MTTVMusicMPPodcastEpisodeMediaItem : TVPBaseMediaItem
{
    _Bool _unknownItemType;	// 8 = 0x8
    MPModelPodcastEpisode *_podcastEpisode;	// 16 = 0x10
    NSString *_unknownItemDescription;	// 24 = 0x18
    MPCPlayerResponseItem *_responseItem;	// 32 = 0x20
    NSDictionary *_mediaItemMetadata;	// 40 = 0x28
    TVPBaseMediaItem *_mediaItem;	// 48 = 0x30
}

+ (double)_playedThresholdTimeForDuration:(double)arg1;	// IMP=0x000000010007f968
- (void).cxx_destruct;	// IMP=0x000000010007fabc
@property(retain, nonatomic) TVPBaseMediaItem *mediaItem; // @synthesize mediaItem=_mediaItem;
@property(retain, nonatomic) NSDictionary *mediaItemMetadata; // @synthesize mediaItemMetadata=_mediaItemMetadata;
@property(retain, nonatomic) MPCPlayerResponseItem *responseItem; // @synthesize responseItem=_responseItem;
@property(copy, nonatomic) NSString *unknownItemDescription; // @synthesize unknownItemDescription=_unknownItemDescription;
@property(nonatomic, getter=isUnknownItemType) _Bool unknownItemType; // @synthesize unknownItemType=_unknownItemType;
@property(retain, nonatomic) MPModelPodcastEpisode *podcastEpisode; // @synthesize podcastEpisode=_podcastEpisode;
- (void)performMediaItemMetadataTransactionWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010007f950
- (void)removeMediaItemMetadataForProperty:(id)arg1;	// IMP=0x000000010007f938
- (void)setMediaItemMetadata:(id)arg1 forProperty:(id)arg2;	// IMP=0x000000010007f8e0
- (id)reportingDelegate;	// IMP=0x000000010007f8d8
- (_Bool)hasTrait:(id)arg1;	// IMP=0x000000010007f860
- (_Bool)isEqualToMediaItem:(id)arg1;	// IMP=0x000000010007f76c
- (id)mediaItemURL;	// IMP=0x000000010007f764
- (id)mediaItemMetadataForProperty:(id)arg1;	// IMP=0x000000010007f05c
- (id)initWithPlayerResponseItem:(id)arg1;	// IMP=0x000000010007f04c
- (id)initWithPlayerResponseItem:(id)arg1 mediaItemMetadata:(id)arg2;	// IMP=0x000000010007ef24

@end
