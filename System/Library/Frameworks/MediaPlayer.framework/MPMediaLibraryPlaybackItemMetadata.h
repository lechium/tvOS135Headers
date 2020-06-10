/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:04 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPMediaPlaybackItemMetadata.h>

@protocol OS_dispatch_queue;
@class NSObject, MPMediaItem, NSDictionary;

@interface MPMediaLibraryPlaybackItemMetadata : MPMediaPlaybackItemMetadata {

	NSObject*<OS_dispatch_queue> _accessQueue;
	BOOL _hasValidMediaItemValuesForProperties;
	BOOL _hasEvaluatedOfflineHLS;
	BOOL _isOfflineHLS;
	MPMediaItem* _mediaItem;
	NSDictionary* _mediaItemValuesForProperties;
	NSDictionary* _playbackKeys;
	NSObject*<OS_dispatch_queue> _writeQueue;

}

@property (getter=_writeQueue,nonatomic,retain) NSObject*<OS_dispatch_queue> writeQueue;              //@synthesize writeQueue=_writeQueue - In the implementation block
@property (nonatomic,retain) MPMediaItem * mediaItem; 
+(id)streamingPlaybackAssetDestinationFilePathForMediaLibraryPersistentID:(long long)arg1 storeAdamID:(long long)arg2 storeSagaID:(unsigned long long)arg3 assetQuality:(unsigned long long)arg4 assetFlavor:(id)arg5 protectionType:(unsigned long long)arg6 pathExtension:(id)arg7 ;
+(id)_highQualityCachedAssetDestinationDirectory;
+(id)_lowQualityCachedAssetDestinationDirectory;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(void)dealloc;
-(id)_writeQueue;
-(unsigned long long)contentType;
-(long long)downloadIdentifier;
-(long long)endpointType;
-(id)artistName;
-(id)composerName;
-(BOOL)showComposer;
-(long long)storeAdamID;
-(unsigned long long)storeAccountID;
-(id)buyParameters;
-(BOOL)isExplicitTrack;
-(id)albumArtistName;
-(MPMediaItem *)mediaItem;
-(void)setMediaItem:(MPMediaItem *)arg1 ;
-(id)albumTitle;
-(long long)artistStoreAdamID;
-(long long)storeSubscriptionAdamID;
-(id)copyrightText;
-(BOOL)isSubscriptionRequired;
-(double)bookmarkTime;
-(id)modelGenericObject;
-(long long)albumStoreAdamID;
-(BOOL)allowsInitiatingPlayWhileDownload;
-(id)artworkCatalogForPlaybackTime:(double)arg1 ;
-(id)contentTitle;
-(double)expectedDuration;
-(unsigned long long)storeSagaID;
-(void)_mediaLibraryDidChangeNotification:(id)arg1 ;
-(id)_mediaItemValuesForProperties;
-(id)initWithMediaItem:(id)arg1 ;
-(id)cachedLocalPlaybackAssetFilePathReturningAssetQuality:(unsigned long long*)arg1 protectionType:(unsigned long long*)arg2 usesPurchaseBundle:(BOOL*)arg3 ;
-(BOOL)prefersStoreContentInfo;
-(id)hlsPlaylistURLString;
-(id)hlsOfflinePlaybackKeys;
-(BOOL)isOfflineHLS;
-(id)iTunesStoreContentID;
-(id)iTunesStoreContentDSID;
-(id)localNetworkContentURL;
-(long long)mediaLibraryPersistentID;
-(id)protectedContentSupportStorageURL;
-(void)setCachedLocalPlaybackAssetFilePath:(id)arg1 protectionType:(unsigned long long)arg2 assetQuality:(unsigned long long)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(void)clearLocalPlaybackAssetFilePathWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)shouldRememberBookmarkTime;
-(BOOL)shouldReportPlayEventsToStore;
-(id)storeUbiquitousIdentifier;
-(id)streamingPlaybackAssetDestinationFilePathForAssetQuality:(unsigned long long)arg1 assetFlavor:(id)arg2 protectionType:(unsigned long long)arg3 pathExtension:(id)arg4 ;
-(float)volumeNormalization;
-(void)_persistURI:(id)arg1 persistentContentKey:(id)arg2 ;
-(id)_cachedLocalPlaybackAssetFilePathWithIntegrityCheck:(BOOL)arg1 returningAssetQuality:(unsigned long long*)arg2 protectionType:(unsigned long long*)arg3 usesPurchaseBundle:(BOOL*)arg4 ;
-(void)_invalidateMediaItemProperties;
-(id)_onqueue_mediaItemValuesForProperties;
-(void)setWriteQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

