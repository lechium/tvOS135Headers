//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "JSExport-Protocol.h"

@class NSString, TVHJSMediaQueryResult;

@protocol TVHJSMediaEntitySearchControllerResult <JSExport>
@property(readonly, nonatomic) TVHJSMediaQueryResult *homeVideosResult;
@property(readonly, nonatomic) TVHJSMediaQueryResult *audiobookChaptersResult;
@property(readonly, nonatomic) TVHJSMediaQueryResult *audiobooksResult;
@property(readonly, nonatomic) TVHJSMediaQueryResult *iTunesUEpisodesResult;
@property(readonly, nonatomic) TVHJSMediaQueryResult *iTunesUCoursesResult;
@property(readonly, nonatomic) TVHJSMediaQueryResult *podcastEpisodesResult;
@property(readonly, nonatomic) TVHJSMediaQueryResult *podcastsResult;
@property(readonly, nonatomic) TVHJSMediaQueryResult *musicVideosResult;
@property(readonly, nonatomic) TVHJSMediaQueryResult *musicSongsResult;
@property(readonly, nonatomic) TVHJSMediaQueryResult *musicAlbumArtistsResult;
@property(readonly, nonatomic) TVHJSMediaQueryResult *musicAlbumsResult;
@property(readonly, nonatomic) TVHJSMediaQueryResult *showEpisodesResult;
@property(readonly, nonatomic) TVHJSMediaQueryResult *showsResult;
@property(readonly, nonatomic) TVHJSMediaQueryResult *movieRentalsResult;
@property(readonly, nonatomic) TVHJSMediaQueryResult *moviesResult;
@property(readonly, nonatomic) _Bool hasMediaEntities;
@property(readonly, copy, nonatomic) NSString *queryReason;
@end

