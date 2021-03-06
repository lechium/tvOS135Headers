//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TVHJSMediaEntity.h"

#import "TVHJSMediaItem-Protocol.h"

@class NSDate, NSNumber, NSString, TVHJSContentRating, TVHJSMediaEntityType, TVHJSVideoCredits, TVHKMediaItem;

@interface TVHJSMediaItem : TVHJSMediaEntity <TVHJSMediaItem>
{
    NSString *_imageLoadParams;	// 8 = 0x8
    TVHJSContentRating *_contentRating;	// 16 = 0x10
    TVHJSVideoCredits *_videoCredits;	// 24 = 0x18
    NSString *_albumArtistIdentifier;	// 32 = 0x20
    NSString *_title;	// 40 = 0x28
    NSString *_artistTitle;	// 48 = 0x30
    NSString *_showTitle;	// 56 = 0x38
    NSString *_showIdentifier;	// 64 = 0x40
    NSString *_albumArtistTitle;	// 72 = 0x48
    NSString *_composerTitle;	// 80 = 0x50
    TVHKMediaItem *_mediaItem;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000100003c3c
@property(retain, nonatomic) TVHKMediaItem *mediaItem; // @synthesize mediaItem=_mediaItem;
- (id)_unknownMediaItemTitle;	// IMP=0x0000000100003758
- (id)_nativeContentRating;	// IMP=0x0000000100003704
- (id)contributorImageLoadParamsWithContributorName:(id)arg1;	// IMP=0x0000000100003650
@property(readonly, copy, nonatomic) NSNumber *episodeNumber;
@property(readonly, copy, nonatomic) NSDate *expirationDate;
@property(readonly, copy, nonatomic) TVHJSVideoCredits *videoCredits; // @synthesize videoCredits=_videoCredits;
@property(readonly, copy, nonatomic) NSString *studio;
@property(readonly, copy, nonatomic) NSNumber *chapter;
@property(readonly, copy, nonatomic) NSNumber *discNumber;
@property(readonly, copy, nonatomic) NSNumber *trackNumber;
@property(readonly, copy, nonatomic) NSString *composerTitle; // @synthesize composerTitle=_composerTitle;
@property(readonly, copy, nonatomic) NSString *artistTitle; // @synthesize artistTitle=_artistTitle;
@property(readonly, copy, nonatomic) NSString *albumArtistIdentifier; // @synthesize albumArtistIdentifier=_albumArtistIdentifier;
@property(readonly, copy, nonatomic) NSString *albumArtistTitle; // @synthesize albumArtistTitle=_albumArtistTitle;
@property(readonly, copy, nonatomic) NSString *showIdentifier; // @synthesize showIdentifier=_showIdentifier;
@property(readonly, copy, nonatomic) NSString *showTitle; // @synthesize showTitle=_showTitle;
@property(readonly, copy, nonatomic) NSNumber *progress;
@property(readonly, copy, nonatomic) NSNumber *bookmark;
@property(readonly, nonatomic) _Bool isHighDefinition;
@property(readonly, nonatomic) TVHJSContentRating *contentRating; // @synthesize contentRating=_contentRating;
@property(readonly, copy, nonatomic) NSDate *lastPlayedDate;
@property(readonly, copy, nonatomic) NSString *imageLoadParams; // @synthesize imageLoadParams=_imageLoadParams;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)initWithMediaItem:(id)arg1 appContext:(id)arg2;	// IMP=0x0000000100002904
- (id)initWithMediaEntity:(id)arg1 appContext:(id)arg2;	// IMP=0x000000010000287c

// Remaining properties
@property(readonly, copy, nonatomic) NSDate *addedDate;
@property(readonly, copy, nonatomic) NSString *albumIdentifier;
@property(readonly, copy, nonatomic) NSString *albumTitle;
@property(readonly, copy, nonatomic) NSString *contentDescription;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSNumber *duration;
@property(readonly, copy, nonatomic) NSString *genreTitle;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *identifier;
@property(readonly, copy, nonatomic) NSString *mediaServerIdentifier;
@property(readonly, copy, nonatomic) NSString *metadataHash;
@property(copy, nonatomic) NSString *playedState;
@property(readonly, copy, nonatomic) NSString *playedStateResourceName;
@property(readonly, copy, nonatomic) NSDate *releaseDate;
@property(readonly, copy, nonatomic) NSNumber *releaseYear;
@property(readonly, copy, nonatomic) NSNumber *seasonNumber;
@property(readonly) Class superclass;
@property(readonly, nonatomic) TVHJSMediaEntityType *type;

@end

