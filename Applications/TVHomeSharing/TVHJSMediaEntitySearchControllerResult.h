//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TVHJSObject.h"

#import "TVHJSMediaEntitySearchControllerResult-Protocol.h"

@class NSString, TVHJSMediaQueryResult;

@interface TVHJSMediaEntitySearchControllerResult : TVHJSObject <TVHJSMediaEntitySearchControllerResult>
{
    NSString *_queryReason;	// 8 = 0x8
    TVHJSMediaQueryResult *_moviesResult;	// 16 = 0x10
    TVHJSMediaQueryResult *_movieRentalsResult;	// 24 = 0x18
    TVHJSMediaQueryResult *_showsResult;	// 32 = 0x20
    TVHJSMediaQueryResult *_showEpisodesResult;	// 40 = 0x28
    TVHJSMediaQueryResult *_musicAlbumsResult;	// 48 = 0x30
    TVHJSMediaQueryResult *_musicAlbumArtistsResult;	// 56 = 0x38
    TVHJSMediaQueryResult *_musicSongsResult;	// 64 = 0x40
    TVHJSMediaQueryResult *_musicVideosResult;	// 72 = 0x48
    TVHJSMediaQueryResult *_podcastsResult;	// 80 = 0x50
    TVHJSMediaQueryResult *_podcastEpisodesResult;	// 88 = 0x58
    TVHJSMediaQueryResult *_iTunesUCoursesResult;	// 96 = 0x60
    TVHJSMediaQueryResult *_iTunesUEpisodesResult;	// 104 = 0x68
    TVHJSMediaQueryResult *_audiobooksResult;	// 112 = 0x70
    TVHJSMediaQueryResult *_audiobookChaptersResult;	// 120 = 0x78
    TVHJSMediaQueryResult *_homeVideosResult;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x0000000100002724
@property(retain, nonatomic) TVHJSMediaQueryResult *homeVideosResult; // @synthesize homeVideosResult=_homeVideosResult;
@property(retain, nonatomic) TVHJSMediaQueryResult *audiobookChaptersResult; // @synthesize audiobookChaptersResult=_audiobookChaptersResult;
@property(retain, nonatomic) TVHJSMediaQueryResult *audiobooksResult; // @synthesize audiobooksResult=_audiobooksResult;
@property(retain, nonatomic) TVHJSMediaQueryResult *iTunesUEpisodesResult; // @synthesize iTunesUEpisodesResult=_iTunesUEpisodesResult;
@property(retain, nonatomic) TVHJSMediaQueryResult *iTunesUCoursesResult; // @synthesize iTunesUCoursesResult=_iTunesUCoursesResult;
@property(retain, nonatomic) TVHJSMediaQueryResult *podcastEpisodesResult; // @synthesize podcastEpisodesResult=_podcastEpisodesResult;
@property(retain, nonatomic) TVHJSMediaQueryResult *podcastsResult; // @synthesize podcastsResult=_podcastsResult;
@property(retain, nonatomic) TVHJSMediaQueryResult *musicVideosResult; // @synthesize musicVideosResult=_musicVideosResult;
@property(retain, nonatomic) TVHJSMediaQueryResult *musicSongsResult; // @synthesize musicSongsResult=_musicSongsResult;
@property(retain, nonatomic) TVHJSMediaQueryResult *musicAlbumArtistsResult; // @synthesize musicAlbumArtistsResult=_musicAlbumArtistsResult;
@property(retain, nonatomic) TVHJSMediaQueryResult *musicAlbumsResult; // @synthesize musicAlbumsResult=_musicAlbumsResult;
@property(retain, nonatomic) TVHJSMediaQueryResult *showEpisodesResult; // @synthesize showEpisodesResult=_showEpisodesResult;
@property(retain, nonatomic) TVHJSMediaQueryResult *showsResult; // @synthesize showsResult=_showsResult;
@property(retain, nonatomic) TVHJSMediaQueryResult *movieRentalsResult; // @synthesize movieRentalsResult=_movieRentalsResult;
@property(retain, nonatomic) TVHJSMediaQueryResult *moviesResult; // @synthesize moviesResult=_moviesResult;
@property(copy, nonatomic) NSString *queryReason; // @synthesize queryReason=_queryReason;
@property(readonly, nonatomic) _Bool hasMediaEntities;
- (id)initWithAppContext:(id)arg1;	// IMP=0x0000000100001bfc

@end

