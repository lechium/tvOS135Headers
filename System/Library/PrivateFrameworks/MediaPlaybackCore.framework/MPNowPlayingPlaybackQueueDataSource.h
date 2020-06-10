/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:00 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPNowPlayingPlaybackQueueDataSource <NSObject>
@optional
-(id)nowPlayingInfoCenter:(id)arg1 currentLanguageOptionsForContentItem:(id)arg2 completion:(/*^block*/id)arg3;
-(id)nowPlayingInfoCenter:(id)arg1 availableLanguageOptionsForContentItem:(id)arg2 completion:(/*^block*/id)arg3;
-(id)nowPlayingInfoCenter:(id)arg1 infoForContentItem:(id)arg2 completion:(/*^block*/id)arg3;
-(id)nowPlayingInfoCenter:(id)arg1 lyricsForContentItem:(id)arg2 completion:(/*^block*/id)arg3;
-(id)nowPlayingInfoCenter:(id)arg1 artworkForContentItem:(id)arg2 size:(CGSize)arg3 completion:(/*^block*/id)arg4;
-(id)nowPlayingInfoCenter:(id)arg1 childContentItemIDAtIndex:(long long)arg2 ofItem:(id)arg3;
-(void)nowPlayingInfoCenter:(id)arg1 didEndMigrationWithIdentifier:(id)arg2 error:(id)arg3;
-(void)nowPlayingInfoCenter:(id)arg1 willBeginSessionMigrationWithIdentifier:(id)arg2;
-(void)nowPlayingInfoCenter:(id)arg1 getTransportablePlaybackSessionRepresentationWithCompletion:(/*^block*/id)arg2;
-(void)nowPlayingInfoCenter:(id)arg1 getTransportablePlaybackSessionRepresentationForRequest:(id)arg2 completion:(/*^block*/id)arg3;
-(id)contentItemForOffset:(long long)arg1;
-(id)nowPlayingInfoCenter:(id)arg1 contentItemIDsFromOffset:(long long)arg2 toOffset:(long long)arg3 nowPlayingIndex:(long long*)arg4;
-(id)playbackQueueIdentifierForNowPlayingInfoCenter:(id)arg1;

@required
-(id)nowPlayingInfoCenter:(id)arg1 contentItemIDForOffset:(long long)arg2;
-(id)nowPlayingInfoCenter:(id)arg1 contentItemForID:(id)arg2;

@end

