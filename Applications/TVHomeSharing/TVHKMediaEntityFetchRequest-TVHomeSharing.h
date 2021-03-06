//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVHomeSharingKit/TVHKMediaEntityFetchRequest.h>

@interface TVHKMediaEntityFetchRequest (TVHomeSharing)
+ (id)_tvh_mediaItemArtistSortDescriptor;	// IMP=0x000000010001d4d8
+ (id)_tvh_showTitleSortDescriptor;	// IMP=0x000000010001d4b8
+ (id)_tvh_episodeNumberSortDescriptor;	// IMP=0x000000010001d498
+ (id)_tvh_musicAlbumMediaItemSortDescriptor;	// IMP=0x000000010001d46c
+ (id)_tvh_seasonNumberSortDescriptor;	// IMP=0x000000010001d44c
+ (id)_tvh_releaseDateSortDescriptor;	// IMP=0x000000010001d42c
+ (id)_tvh_addedDateSortDescriptor;	// IMP=0x000000010001d40c
+ (id)_tvh_releaseYearSortDescriptor;	// IMP=0x000000010001d3ec
+ (id)_tvh_albumTitleSortDescriptor;	// IMP=0x000000010001d3cc
+ (id)_tvh_titleSortDescriptor;	// IMP=0x000000010001d3ac
+ (id)_tvh_IncludeSortHeadersOptions;	// IMP=0x000000010001d2f0
+ (void)_tvh_addPredicate:(id)arg1 toRequest:(id)arg2;	// IMP=0x000000010001d1b4
+ (id)_tvh_predicateWithSubpredicates:(id)arg1 compoundPredicateType:(unsigned long long)arg2;	// IMP=0x000000010001d1a0
+ (id)_tvh_containsPredicateWithKeyPath:(id)arg1 value:(id)arg2;	// IMP=0x000000010001d0b8
+ (id)_tvh_notEqualPredicateWithKeyPath:(id)arg1 value:(id)arg2;	// IMP=0x000000010001d050
+ (id)_tvh_equalPredicateWithKeyPath:(id)arg1 value:(id)arg2;	// IMP=0x000000010001cfe8
+ (id)_tvh_unplayedPredicate;	// IMP=0x000000010001cf2c
+ (id)_tvh_notPlaylistTypePredicateWithPlaylistType:(unsigned long long)arg1;	// IMP=0x000000010001cebc
+ (id)_tvh_playlistTypePredicateWithPlaylistType:(unsigned long long)arg1;	// IMP=0x000000010001ce4c
+ (id)_tvh_mediaCollectionCompilationsPredicateWithWantCompilations:(_Bool)arg1;	// IMP=0x000000010001cddc
+ (id)_tvh_mediaCollectionArtistIdentifierPredicateWithIdentifier:(id)arg1;	// IMP=0x000000010001cdc4
+ (id)_tvh_mediaItemComposerTitlePredicateWithComposerTitle:(id)arg1;	// IMP=0x000000010001cdac
+ (id)_tvh_mediaItemAlbumArtistIdentifierPredicateWithIdentifier:(id)arg1;	// IMP=0x000000010001cd94
+ (id)_tvh_mediaEntityTypePredicateWithMediaEntityType:(id)arg1;	// IMP=0x000000010001cd7c
+ (id)_tvh_mediaEntityAlbumIdentifierPredicateWithIdentifier:(id)arg1;	// IMP=0x000000010001cd64
+ (id)_tvh_genreTitlePredicateWithGenreTitle:(id)arg1;	// IMP=0x000000010001cd4c
+ (id)_tvh_identifierPredicateWithIdentifier:(id)arg1;	// IMP=0x000000010001cd34
+ (id)_tvh_playlistItemsFetchRequestWithPlaylistIdentifier:(id)arg1;	// IMP=0x000000010001cc84
+ (id)_tvh_excludeAllPlaylistTypePredicate:(id)arg1;	// IMP=0x000000010001cab8
+ (id)_tvh_includeAnyPlaylistTypePredicate:(id)arg1;	// IMP=0x000000010001c8ec
+ (id)_tvh_playlistsFetchRequestWithPlaylistItemMediaCategoryTypes:(id)arg1 sourcePlaylist:(id)arg2 includePlaylistTypes:(id)arg3 excludePlaylistTypes:(id)arg4;	// IMP=0x000000010001c658
+ (id)_tvh_albumMediaItemsFetchRequestWithMediaCategoryType:(unsigned long long)arg1 albumIdentifier:(id)arg2 itemIdentifier:(id)arg3 sortDescriptors:(id)arg4 unplayedOnly:(_Bool)arg5;	// IMP=0x000000010001c454
+ (id)_tvh_mediaCollectionFetchRequestWithMediaCategoryType:(unsigned long long)arg1 mediaCollectionType:(unsigned long long)arg2 identifier:(id)arg3 includeSortHeaders:(_Bool)arg4;	// IMP=0x000000010001c240
+ (id)_tvh_showEpisodesFetchRequestWithIdentifier:(id)arg1 season:(id)arg2 unplayedOnly:(_Bool)arg3;	// IMP=0x000000010001bf34
+ (id)_tvh_showsFetchRequestWithIdentifier:(id)arg1;	// IMP=0x000000010001bf18
+ (id)_tvh_albumsFetchRequestWithMediaCategoryType:(unsigned long long)arg1 identifier:(id)arg2;	// IMP=0x000000010001bf00
+ (id)_tvh_iTunesUEpisodesFetchRequestWithCourseIdentifier:(id)arg1 episodeIdentifier:(id)arg2 unplayedOnly:(_Bool)arg3;	// IMP=0x000000010001bde0
+ (id)_tvh_iTunesUCoursesFetchRequestWithIdentifier:(id)arg1;	// IMP=0x000000010001bdcc
+ (id)_tvh_podcastEpisodesFetchRequestWithPodcastIdentifier:(id)arg1 episodeIdentifier:(id)arg2 unplayedOnly:(_Bool)arg3;	// IMP=0x000000010001bcac
+ (id)_tvh_podcastsFetchRequestWithIdentifier:(id)arg1;	// IMP=0x000000010001bc98
+ (id)_tvh_audiobookChaptersFetchRequestWithAudiobookIdentifier:(id)arg1 chapterIdentifier:(id)arg2 unplayedOnly:(_Bool)arg3;	// IMP=0x000000010001bb78
+ (id)_tvh_audiobooksFetchRequestWithIdentifier:(id)arg1;	// IMP=0x000000010001bb64
+ (id)_tvh_homeVideosFetchRequestWithIdentifier:(id)arg1;	// IMP=0x000000010001b964
+ (id)_tvh_movieItemsFetchRequestWithIdentifier:(id)arg1 rentals:(_Bool)arg2;	// IMP=0x000000010001b754
+ (id)_tvh_movieRentalsFetchRequestWithIdentifier:(id)arg1;	// IMP=0x000000010001b744
+ (id)_tvh_moviesFetchRequestWithIdentifier:(id)arg1;	// IMP=0x000000010001b734
+ (id)_tvh_musicPlaylistsFetchRequestForGeniusMixes:(_Bool)arg1 sourcePlaylist:(id)arg2;	// IMP=0x000000010001b57c
+ (id)_tvh_musicItemsFetchRequestWithAlbumIdentifier:(id)arg1 albumArtistIdentifier:(id)arg2 composer:(id)arg3 genre:(id)arg4 itemIdentifier:(id)arg5 mediaItemType:(unsigned long long)arg6 includeSortHeaders:(_Bool)arg7;	// IMP=0x000000010001b0a4
+ (id)_tvh_musicAlbumsFetchRequestWithIdentifier:(id)arg1 albumArtist:(id)arg2 composer:(id)arg3 compilations:(id)arg4 genre:(id)arg5;	// IMP=0x000000010001ac9c
+ (id)_tvh_musicAlbumArtistsFetchRequestWithIdentifier:(id)arg1 genre:(id)arg2;	// IMP=0x000000010001aa4c
+ (id)tvh_paradeMediaEntitiesFetchRequestWithMediaCategoryType:(unsigned long long)arg1 maxMediaEntities:(unsigned long long)arg2;	// IMP=0x000000010001a6f8
+ (id)tvh_playlistItemsFetchRequestWithPlaylistIdentifier:(id)arg1;	// IMP=0x000000010001a6ec
+ (id)tvh_playlistItemsFetchRequestWithPlaylist:(id)arg1;	// IMP=0x000000010001a688
+ (id)tvh_playlistsFetchRequestWithPlaylist:(id)arg1 playlistItemMediaCategoryTypes:(id)arg2 playlistTypes:(id)arg3;	// IMP=0x000000010001a604
+ (id)tvh_playlistsFetchRequestWithPlaylistItemMediaCategoryTypes:(id)arg1 playlistTypes:(id)arg2;	// IMP=0x000000010001a598
+ (id)tvh_playlistsFetchRequestWithPlaylistItemMediaCategoryTypes:(id)arg1;	// IMP=0x000000010001a580
+ (id)tvh_photoItemsFetchRequest;	// IMP=0x000000010001a45c
+ (id)tvh_showEpisodesFetchRequestWithIdentifier:(id)arg1;	// IMP=0x000000010001a448
+ (id)tvh_showEpisodesFetchRequestWithSeason:(id)arg1;	// IMP=0x000000010001a430
+ (id)tvh_unplayedShowEpisodesFetchRequest;	// IMP=0x000000010001a418
+ (id)tvh_showEpisodesFetchRequest;	// IMP=0x000000010001a400
+ (id)tvh_showSeasonsFetchRequestWithShow:(id)arg1;	// IMP=0x000000010001a2d0
+ (id)tvh_showSeasonsFetchRequest;	// IMP=0x000000010001a2b4
+ (id)tvh_showsFetchRequestWithIdentifier:(id)arg1;	// IMP=0x000000010001a2a8
+ (id)tvh_showsFetchRequest;	// IMP=0x000000010001a298
+ (id)tvh_podcastEpisodesFetchRequestWithIdentifier:(id)arg1;	// IMP=0x000000010001a280
+ (id)tvh_unplayedPodcastEpisodesFetchRequest;	// IMP=0x000000010001a268
+ (id)tvh_podcastEpisodesFetchRequest;	// IMP=0x000000010001a250
+ (id)tvh_podcastEpisodesFetchRequestWithPodcastIdentifier:(id)arg1;	// IMP=0x000000010001a23c
+ (id)tvh_podcastEpisodesFetchRequestWithPodcast:(id)arg1;	// IMP=0x000000010001a1d0
+ (id)tvh_podcastsFetchRequestWithIdentifier:(id)arg1;	// IMP=0x000000010001a1c4
+ (id)tvh_podcastsFetchRequest;	// IMP=0x000000010001a1b4
+ (id)tvh_iTunesUEpisodesFetchRequestWithCourseIdentifier:(id)arg1;	// IMP=0x000000010001a1a0
+ (id)tvh_iTunesUEpisodesFetchRequestWithCourse:(id)arg1;	// IMP=0x000000010001a134
+ (id)tvh_iTunesUEpisodesFetchRequestWithIdentifier:(id)arg1;	// IMP=0x000000010001a11c
+ (id)tvh_unplayedITunesUEpisodesFetchRequest;	// IMP=0x000000010001a104
+ (id)tvh_iTunesUEpisodesFetchRequest;	// IMP=0x000000010001a0ec
+ (id)tvh_iTunesUCoursesFetchRequestWithIdentifier:(id)arg1;	// IMP=0x000000010001a0e0
+ (id)tvh_iTunesUCoursesFetchRequest;	// IMP=0x000000010001a0d0
+ (id)tvh_audiobookChaptersFetchRequestWithAudiobookIdentifier:(id)arg1;	// IMP=0x000000010001a0bc
+ (id)tvh_audiobookChaptersFetchRequestWithAudiobook:(id)arg1;	// IMP=0x000000010001a050
+ (id)tvh_audiobookChaptersFetchRequestWithIdentifier:(id)arg1;	// IMP=0x000000010001a038
+ (id)tvh_unplayedAudiobookChaptersFetchRequest;	// IMP=0x000000010001a020
+ (id)tvh_audiobookChaptersFetchRequest;	// IMP=0x000000010001a008
+ (id)tvh_audiobooksFetchRequestWithIdentifier:(id)arg1;	// IMP=0x0000000100019ffc
+ (id)tvh_audiobooksFetchRequest;	// IMP=0x0000000100019fec
+ (id)tvh_movieRentalsFetchRequestWithIdentifier:(id)arg1;	// IMP=0x0000000100019fe0
+ (id)tvh_movieRentalsFetchRequest;	// IMP=0x0000000100019fd0
+ (id)tvh_moviesFetchRequestWithIdentifier:(id)arg1;	// IMP=0x0000000100019fc4
+ (id)tvh_moviesFetchRequest;	// IMP=0x0000000100019fb4
+ (id)tvh_homeVideosFetchRequestWithIdentifier:(id)arg1;	// IMP=0x0000000100019fa8
+ (id)tvh_homeVideosFetchRequest;	// IMP=0x0000000100019f98
+ (id)tvh_musicGeniusMixPlaylistsFetchRequest;	// IMP=0x0000000100019f84
+ (id)tvh_musicPlaylistsFetchControllerWithPlaylist:(id)arg1;	// IMP=0x0000000100019f70
+ (id)tvh_musicPlaylistsFetchRequest;	// IMP=0x0000000100019f5c
+ (id)tvh_musicComposersFetchRequest;	// IMP=0x0000000100019f40
+ (id)tvh_musicGenresFetchRequest;	// IMP=0x0000000100019f24
+ (id)tvh_musicVideosFetchRequestWithIdentifier:(id)arg1;	// IMP=0x0000000100019ee4
+ (id)tvh_musicVideosFetchRequestWithAlbumArtist:(id)arg1;	// IMP=0x0000000100019e60
+ (id)tvh_musicVideosFetchRequest;	// IMP=0x0000000100019d40
+ (id)tvh_musicSongsFetchRequestWithAlbumIdentifier:(id)arg1;	// IMP=0x0000000100019d04
+ (id)tvh_musicSongsFetchRequestWithAlbum:(id)arg1;	// IMP=0x0000000100019c80
+ (id)tvh_musicSongsFetchRequestWithIdentifier:(id)arg1;	// IMP=0x0000000100019c40
+ (id)tvh_musicSongsFetchRequest;	// IMP=0x0000000100019bfc
+ (id)tvh_musicItemsFetchRequestWithGeniusMix:(id)arg1;	// IMP=0x0000000100019b04
+ (id)tvh_musicItemsFetchRequestWithGenre:(id)arg1;	// IMP=0x0000000100019ac0
+ (id)tvh_musicItemsFetchRequestWithComposer:(id)arg1;	// IMP=0x0000000100019a7c
+ (id)tvh_musicItemsFetchRequestWithAlbumArtist:(id)arg1 genre:(id)arg2;	// IMP=0x00000001000199bc
+ (id)tvh_musicItemsFetchRequestWithAlbumArtistIdentifier:(id)arg1;	// IMP=0x000000010001997c
+ (id)tvh_musicItemsFetchRequestWithAlbumIdentifier:(id)arg1;	// IMP=0x0000000100019940
+ (id)tvh_musicItemsFetchRequestWithAlbum:(id)arg1 genre:(id)arg2;	// IMP=0x0000000100019884
+ (id)tvh_musicItemsFetchRequestWithAlbum:(id)arg1;	// IMP=0x0000000100019874
+ (id)tvh_musicItemsFetchRequestWithIdentifier:(id)arg1;	// IMP=0x0000000100019834
+ (id)tvh_musicItemsFetchRequest;	// IMP=0x00000001000197f0
+ (id)tvh_musicRecentlyAddedAlbumsFetchRequest;	// IMP=0x00000001000196b4
+ (id)tvh_musicCompilationAlbumsFetchRequest;	// IMP=0x0000000100019638
+ (id)tvh_musicAlbumsFetchRequestWithComposer:(id)arg1;	// IMP=0x0000000100019618
+ (id)tvh_musicAlbumsFetchRequestWithGenre:(id)arg1;	// IMP=0x00000001000195f8
+ (id)tvh_musicAlbumsFetchRequestWithAlbumArtist:(id)arg1 genre:(id)arg2;	// IMP=0x0000000100019588
+ (id)tvh_musicAlbumsFetchRequestWithAlbumArtist:(id)arg1;	// IMP=0x0000000100019568
+ (id)tvh_musicAlbumsFetchRequestWithIdentifier:(id)arg1;	// IMP=0x000000010001954c
+ (id)tvh_musicAlbumsFetchRequest;	// IMP=0x00000001000194d0
+ (id)tvh_musicAlbumArtistsFetchRequestWithGenre:(id)arg1;	// IMP=0x00000001000194bc
+ (id)tvh_musicAlbumArtistsFetchRequestWithIdentifier:(id)arg1;	// IMP=0x00000001000194ac
+ (id)tvh_musicAlbumArtistsFetchRequest;	// IMP=0x0000000100019498
- (void)tvh_configureForPreviewWithShuffle:(_Bool)arg1;	// IMP=0x000000010001a934
@end

