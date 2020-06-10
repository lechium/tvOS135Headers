//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep  6 2019 11:16:02).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSExport-Protocol.h"

@class NSArray, NSString, TVHJSMediaCollection;

@protocol TVHJSMediaEntityFetchRequest <JSExport>
+ (id)paradeMediaEntitiesWithMediaCategoryType:(NSString *)arg1:(unsigned long long)arg2;
+ (id)playlistItemsFetchRequestWithPlaylistIdentifier:(NSString *)arg1;
+ (id)playlistItemsFetchRequestWithPlaylist:(TVHJSMediaCollection *)arg1;
+ (id)playlistsFetchRequest:(NSArray *)arg1:(TVHJSMediaCollection *)arg2:(NSArray *)arg3;
+ (id)photoItemsFetchRequest;
+ (id)musicVideosFetchRequest;
+ (id)musicSongsFetchRequest;
+ (id)musicPlaylistsFetchRequest;
+ (id)musicItemFetchRequestWithIdentifier:(NSString *)arg1;
+ (id)musicItemsFetchRequestWithComposer:(TVHJSMediaCollection *)arg1;
+ (id)musicItemsFetchRequestWithGenre:(TVHJSMediaCollection *)arg1;
+ (id)musicItemsFetchRequestWithGeniusMix:(TVHJSMediaCollection *)arg1;
+ (id)musicItemsFetchRequestWithAlbumArtistIdentifier:(NSString *)arg1;
+ (id)musicItemsFetchRequestWithAlbumArtist:(TVHJSMediaCollection *)arg1;
+ (id)musicItemsFetchRequestWithAlbumIdentifier:(NSString *)arg1;
+ (id)musicItemsFetchRequestWithAlbum:(TVHJSMediaCollection *)arg1;
+ (id)musicItemsFetchRequest;
+ (id)musicGeniusMixPlaylistsFetchRequest;
+ (id)musicGenresFetchRequest;
+ (id)musicComposersFetchRequest;
+ (id)musicCompilationAlbumsFetchRequest;
+ (id)musicAlbumArtistFetchRequestWithIdentifier:(NSString *)arg1;
+ (id)musicAlbumArtistsFetchRequest;
+ (id)musicAlbumFetchRequestWithIdentifier:(NSString *)arg1;
+ (id)musicAlbumsFetchRequestWithGenre:(TVHJSMediaCollection *)arg1;
+ (id)musicAlbumsFetchRequestWithComposer:(TVHJSMediaCollection *)arg1;
+ (id)musicAlbumsFetchRequestWithAlbumArtist:(TVHJSMediaCollection *)arg1;
+ (id)musicAlbumsFetchRequest;
+ (id)unplayedITunesUEpisodesFetchRequest;
+ (id)iTunesUEpisodeFetchRequestWithIdentifier:(NSString *)arg1;
+ (id)iTunesUEpisodesFetchRequestWithCourseIdentifier:(NSString *)arg1;
+ (id)iTunesUEpisodesFetchRequestWithCourse:(TVHJSMediaCollection *)arg1;
+ (id)iTunesUCourseFetchRequestWithIdentifier:(NSString *)arg1;
+ (id)iTunesUCoursesFetchRequest;
+ (id)unplayedPodcastEpisodesFetchRequest;
+ (id)podcastEpisodeFetchRequestWithIdentifier:(NSString *)arg1;
+ (id)podcastEpisodesFetchRequestWithPodcastIdentifier:(NSString *)arg1;
+ (id)podcastEpisodesFetchRequestWithPodcast:(TVHJSMediaCollection *)arg1;
+ (id)podcastFetchRequestWithIdentifier:(NSString *)arg1;
+ (id)podcastsFetchRequest;
+ (id)unplayedAudiobookChaptersFetchRequest;
+ (id)audiobookChapterFetchRequestWithIdentifier:(NSString *)arg1;
+ (id)audiobookChaptersFetchRequestWithAudiobookIdentifier:(NSString *)arg1;
+ (id)audiobookChaptersFetchRequestWithAudiobook:(TVHJSMediaCollection *)arg1;
+ (id)audiobookFetchRequestWithIdentifier:(NSString *)arg1;
+ (id)audiobooksFetchRequest;
+ (id)unplayedShowEpisodesFetchRequest;
+ (id)showEpisodeFetchRequestWithIdentifier:(NSString *)arg1;
+ (id)showEpisodesFetchRequestWithSeason:(TVHJSMediaCollection *)arg1;
+ (id)showSeasonsFetchRequestWithShow:(TVHJSMediaCollection *)arg1;
+ (id)showFetchRequestWithIdentifier:(NSString *)arg1;
+ (id)showsFetchRequest;
+ (id)movieRentalFetchRequestWithIdentifier:(NSString *)arg1;
+ (id)movieRentalsFetchRequest;
+ (id)movieFetchRequestWithIdentifier:(NSString *)arg1;
+ (id)moviesFetchRequest;
+ (id)homeVideoFetchRequestWithIdentifier:(NSString *)arg1;
+ (id)homeVideosFetchRequest;
@end
