/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:57 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <MediaPlayer/MPAVItem.h>
#import <libobjc.A.dylib/AVAssetResourceLoaderDelegate.h>
#import <libobjc.A.dylib/AVPlayerItemMetadataOutputPushDelegate.h>
#import <libobjc.A.dylib/ICEnvironmentMonitorObserver.h>
#import <libobjc.A.dylib/MPRTCReportingItemSessionCreating.h>

@protocol OS_dispatch_queue, MPCReportingIdentityPropertiesLoading, MPCModelPlaybackAssetCacheProviding;
@class NSString, NSObject, NSNumber, ICMusicSubscriptionLeaseSession, MPSubscriptionStatusPlaybackInformation, MPCSuzeLeaseSession, NSArray, MPModelGenericObject, MPPropertySet, MPCModelGenericAVItemTimedMetadataRequest, MPCModelGenericAVItemTimedMetadataResponse, NSOperationQueue, ICStoreRequestContext, NSURL, MPCModelGenericAVItemUserIdentityPropertySet, ICMusicSubscriptionLeaseStatus, NSData, MPMediaLibrary, MPCPlaybackRequestEnvironment, NSDictionary;

@interface MPCModelGenericAVItem : MPAVItem <AVAssetResourceLoaderDelegate, AVPlayerItemMetadataOutputPushDelegate, ICEnvironmentMonitorObserver, MPRTCReportingItemSessionCreating> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	BOOL _allowsAirPlayFromCloud;
	NSNumber* _bookmarkTime;
	BOOL _hasLoadedSubscriptionLeaseSession;
	NSObject*<OS_dispatch_queue> _subscriptionLeaseSessionLoadQueue;
	ICMusicSubscriptionLeaseSession* _subscriptionLeaseSession;
	BOOL _hasLoadedSubscriptionPlaybackInformation;
	MPSubscriptionStatusPlaybackInformation* _subscriptionPlaybackInformation;
	NSObject*<OS_dispatch_queue> _subscriptionPlaybackInformationLoadQueue;
	BOOL _shouldAutomaticallyRefreshSubscriptionLease;
	BOOL _isAssetSubscriptionProtectionType;
	BOOL _isSubscriptionPolicyContent;
	BOOL _lastPreparedForNonZeroRate;
	long long _subscriptionLeaseRequestCount;
	BOOL _didDeferPreventionStatusUpdate;
	MPCSuzeLeaseSession* _suzeLeaseSession;
	BOOL _isAutomaticallyRefreshingSuzeLeaseSession;
	/*^block*/id _firstBecomeActivePlayerItemBlock;
	NSArray* _currentGlobalTimedMetadataGroups;
	MPModelGenericObject* _flattenedGenericObject;
	MPModelGenericObject* _flattenedMetadataGenericObject;
	MPModelGenericObject* _metadataGenericObject;
	MPPropertySet* _itemProperties;
	id<MPCReportingIdentityPropertiesLoading> _identityPropertiesLoader;
	MPCModelGenericAVItemTimedMetadataRequest* _timedMetadataRequest;
	MPCModelGenericAVItemTimedMetadataResponse* _timedMetadataResponse;
	NSOperationQueue* _timedMetadataOperationQueue;
	BOOL _isMusicCellularStreamingAllowed;
	BOOL _isHLSAsset;
	BOOL _isiTunesStoreStream;
	ICStoreRequestContext* _storeRequestContext;
	NSURL* _streamingKeyCertificateURL;
	NSURL* _streamingKeyServerURL;
	id _rtcReportingParentHierarchyToken;
	NSString* _rtcReportingServiceIdentifier;
	MPCModelGenericAVItemUserIdentityPropertySet* _identityPropertySet;
	BOOL supportsRadioTrackActions;
	BOOL _radioPlayback;
	BOOL _radioStreamPlayback;
	BOOL _subscriptionRequired;
	long long _leasePlaybackPreventionState;
	ICMusicSubscriptionLeaseStatus* _leaseStatus;
	id<MPCModelPlaybackAssetCacheProviding> _assetCacheProvider;
	NSString* _assetSourceStoreFrontID;
	long long _equivalencySourceAdamID;
	MPModelGenericObject* _genericObject;
	NSData* _jingleTimedMetadata;
	MPMediaLibrary* _mediaLibrary;
	NSNumber* _siriInitiated;
	MPCPlaybackRequestEnvironment* _playbackRequestEnvironment;
	long long _stationItemLikedState;
	NSDictionary* _trackInfo;

}

@property (nonatomic,retain) id<MPCModelPlaybackAssetCacheProviding> assetCacheProvider;                     //@synthesize assetCacheProvider=_assetCacheProvider - In the implementation block
@property (nonatomic,copy) NSString * assetSourceStoreFrontID;                                               //@synthesize assetSourceStoreFrontID=_assetSourceStoreFrontID - In the implementation block
@property (assign,nonatomic) long long equivalencySourceAdamID;                                              //@synthesize equivalencySourceAdamID=_equivalencySourceAdamID - In the implementation block
@property (nonatomic,retain) MPModelGenericObject * genericObject;                                           //@synthesize genericObject=_genericObject - In the implementation block
@property (nonatomic,copy,readonly) NSData * jingleTimedMetadata;                                            //@synthesize jingleTimedMetadata=_jingleTimedMetadata - In the implementation block
@property (nonatomic,retain) MPMediaLibrary * mediaLibrary;                                                  //@synthesize mediaLibrary=_mediaLibrary - In the implementation block
@property (getter=isSiriInitiated,nonatomic,copy) NSNumber * siriInitiated;                                  //@synthesize siriInitiated=_siriInitiated - In the implementation block
@property (assign,getter=isRadioPlayback,nonatomic) BOOL radioPlayback;                                      //@synthesize radioPlayback=_radioPlayback - In the implementation block
@property (assign,getter=isRadioStreamPlayback,nonatomic) BOOL radioStreamPlayback;                          //@synthesize radioStreamPlayback=_radioStreamPlayback - In the implementation block
@property (assign,getter=isSubscriptionRequired,nonatomic) BOOL subscriptionRequired;                        //@synthesize subscriptionRequired=_subscriptionRequired - In the implementation block
@property (nonatomic,readonly) BOOL shouldReportPlayEventsToStore; 
@property (nonatomic,copy,readonly) MPCPlaybackRequestEnvironment * playbackRequestEnvironment;              //@synthesize playbackRequestEnvironment=_playbackRequestEnvironment - In the implementation block
@property (assign,nonatomic) long long stationItemLikedState;                                                //@synthesize stationItemLikedState=_stationItemLikedState - In the implementation block
@property (nonatomic,retain) NSDictionary * trackInfo;                                                       //@synthesize trackInfo=_trackInfo - In the implementation block
@property (assign,nonatomic) BOOL supportsRadioTrackActions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id rtcReportingParentHierarchyToken; 
@property (nonatomic,copy,readonly) NSString * rtcReportingServiceIdentifier; 
@property (nonatomic,readonly) long long rtcReportingAssetType; 
+(id)_utilitySerialQueue;
+(BOOL)_prefersHighQualityVideoContentForNetworkType:(long long)arg1 ;
+(BOOL)_prefersHighQualityAudioContentForNetworkType:(long long)arg1 ;
-(NSString *)description;
-(void)dealloc;
-(long long)type;
-(double)_startTime;
-(unsigned long long)persistentID;
-(unsigned long long)mediaType;
-(BOOL)allowsExternalPlayback;
-(void)metadataOutput:(id)arg1 didOutputTimedMetadataGroups:(id)arg2 fromPlayerItemTrack:(id)arg3 ;
-(BOOL)resourceLoader:(id)arg1 shouldWaitForRenewalOfRequestedResource:(id)arg2 ;
-(BOOL)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2 ;
-(id)_stopTime;
-(long long)stationID;
-(void)setRating:(float)arg1 ;
-(id)personID;
-(BOOL)isStreamable;
-(id)album;
-(id)artist;
-(id)composer;
-(id)genre;
-(unsigned long long)albumPersistentID;
-(id)stationName;
-(id)albumArtist;
-(unsigned long long)cloudID;
-(id)storeAccountID;
-(id)storeFrontIdentifier;
-(NSDictionary *)trackInfo;
-(id)isSiriInitiated;
-(long long)equivalencySourceAdamID;
-(id)stationHash;
-(id)stationStringID;
-(id)cloudAlbumID;
-(void)setEquivalencySourceAdamID:(long long)arg1 ;
-(void)setTrackInfo:(NSDictionary *)arg1 ;
-(void)setSiriInitiated:(NSNumber *)arg1 ;
-(id)databaseID;
-(float)userRating;
-(BOOL)isExplicitTrack;
-(BOOL)isAlwaysLive;
-(long long)albumYear;
-(id)mediaItem;
-(id)playbackInfo;
-(unsigned long long)albumArtistPersistentID;
-(id)_storeRequestContext;
-(void)environmentMonitorDidChangeNetworkType:(id)arg1 ;
-(long long)storeSubscriptionAdamID;
-(long long)storePurchasedAdamID;
-(id)cloudUniversalLibraryID;
-(id)copyrightText;
-(BOOL)hasTimeSyncedLyrics;
-(BOOL)shouldShowComposer;
-(id)leaseStatus;
-(BOOL)isSubscriptionRequired;
-(BOOL)canUseLoadedAsset;
-(void)loadAssetAndPlayerItem;
-(id)playbackError;
-(id)bookmarkTime;
-(void)setPlaybackStoppedTime:(double)arg1 ;
-(void)notePlaybackFinishedByHittingEnd;
-(void)setPlaybackCheckpointCurrentTime:(double)arg1 ;
-(void)setPlaybackFinishedTime:(double)arg1 ;
-(long long)artistStoreID;
-(unsigned long long)albumTrackNumber;
-(unsigned long long)albumTrackCount;
-(void)applyVolumeNormalizationWithSoundCheckEnabled:(BOOL)arg1 ;
-(BOOL)isValidPlayerSubstituteForItem:(id)arg1 ;
-(BOOL)isAssetURLValid;
-(BOOL)usesSubscriptionLease;
-(id)libraryLyrics;
-(BOOL)hasStoreLyrics;
-(id)containerUniqueID;
-(BOOL)allowsEQ;
-(id)mainTitle;
-(void)prepareForRate:(float)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isRadioItem;
-(long long)stationProviderID;
-(BOOL)supportsRadioTrackActions;
-(BOOL)useEmbeddedChapterData;
-(id)chapterTimeMarkers;
-(id)artworkTimeMarkers;
-(id)urlTimeMarkers;
-(unsigned long long)artistPersistentID;
-(unsigned long long)genrePersistentID;
-(unsigned long long)composerPersistentID;
-(double)durationFromExternalMetadata;
-(void)_currentPlaybackRateDidChange:(float)arg1 ;
-(void)_applyLoudnessInfo;
-(void)_handleUpdatedLikedState:(long long)arg1 forUserIdentity:(id)arg2 completion:(/*^block*/id)arg3 ;
-(long long)_persistedLikedState;
-(void)reevaluateType;
-(void)resolvePlaybackError:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_willBecomeActivePlayerItem;
-(void)_willResignActivePlayerItem;
-(long long)albumStoreID;
-(id)externalContentIdentifier;
-(BOOL)isLikedStateEnabled;
-(BOOL)supportsLikedState;
-(long long)storeItemInt64ID;
-(void)setLoudnessInfoVolumeNormalization:(float)arg1 ;
-(BOOL)prefersSeekOverSkip;
-(id)explicitBadge;
-(BOOL)shouldPreventPlayback;
-(id)modelGenericObject;
-(BOOL)allowsAirPlayFromCloud;
-(BOOL)requiresLoadedAssetForAirPlayProperties;
-(id)useListeningHistory;
-(long long)leasePlaybackPreventionState;
-(/*^block*/id)artworkCatalogBlock;
-(MPMediaLibrary *)mediaLibrary;
-(void)setMediaLibrary:(MPMediaLibrary *)arg1 ;
-(BOOL)shouldReportPlayEventsToStore;
-(id)_radioStation;
-(NSString *)assetSourceStoreFrontID;
-(void)setAssetSourceStoreFrontID:(NSString *)arg1 ;
-(BOOL)_shouldRememberBookmarkTime;
-(id)_bookmarkTime;
-(id)_storeUbiquitousIdentifier;
-(void)_contentTasteControllerDidChangeNotification:(id)arg1 ;
-(void)setSubscriptionRequired:(BOOL)arg1 ;
-(NSString *)rtcReportingServiceIdentifier;
-(id)rtcReportingParentHierarchyToken;
-(long long)rtcReportingAssetType;
-(void)nowPlayingInfoCenter:(id)arg1 lyricsForContentItem:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_ageVerificationStateDidChangeNotification:(id)arg1 ;
-(BOOL)isRadioStreamPlayback;
-(BOOL)isRadioPlayback;
-(SCD_Struct_MP1)_timeoutValues;
-(void)_getSubscriptionLeasePropertiesWithCompletion:(/*^block*/id)arg1 ;
-(void)setAssetCacheProvider:(id<MPCModelPlaybackAssetCacheProviding>)arg1 ;
-(void)setGenericObject:(MPModelGenericObject *)arg1 ;
-(void)setRadioPlayback:(BOOL)arg1 ;
-(BOOL)_allowsStreamingPlayback;
-(BOOL)_allowsAssetCaching;
-(id)_rtcReportingServiceIdentifierWithAssetURL:(id)arg1 ;
-(void)_allowsHighQualityMusicStreamingOnCellularDidChangeNotification:(id)arg1 ;
-(void)_applyPreferredPeakBitRateToPlayerItem:(id)arg1 withItemType:(long long)arg2 ;
-(void)_suzeLeaseSessionRenewDidFailNotification:(id)arg1 ;
-(void)_handlePlaybackFinishedTime:(double)arg1 didFinishByHittingEnd:(BOOL)arg2 ;
-(void)_updatePreventionStatusWithLeaseSession:(id)arg1 ;
-(void)_getUnverifiedSubscriptionLeaseSessionWithCompletion:(/*^block*/id)arg1 ;
-(void)_updateBookmarkTime:(double)arg1 isCheckpoint:(BOOL)arg2 ;
-(void)_updateHasBeenPlayedWithElapsedTime:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)_updateAutomaticSubscriptionLeaseRefresh;
-(unsigned long long)mpcReporting_itemType;
-(NSData *)jingleTimedMetadata;
-(id)_isPrivateListeningEnabled;
-(void)_reloadTimedMetadataRequest;
-(void)_updateJingleTimedMetadata;
-(void)_invalidateContentItem;
-(void)_postInvalidationNotifications;
-(void)_timedMetadataResponseDidInvalidateNotification:(id)arg1 ;
-(id)_modelPlaybackPosition;
-(void)_subscriptionLeaseStatusDidChangeNotification:(id)arg1 ;
-(id)initWithGenericObject:(id)arg1 itemProperties:(id)arg2 playbackRequestEnvironment:(id)arg3 identityPropertySet:(id)arg4 ;
-(long long)mpcReporting_equivalencySourceAdamID;
-(id)mpcReporting_identityPropertiesLoader;
-(id)mpcReporting_jingleTimedMetadata;
-(id)mpcReporting_requestingBundleIdentifier;
-(id)mpcReporting_requestingBundleVersion;
-(BOOL)mpcReporting_shouldUseRelativeTimePositions;
-(BOOL)mpcReporting_shouldReportPlayEventsToStore;
-(id)mpcReporting_privateListeningEnabled;
-(id)mpcReporting_siriInitiated;
-(id)mpcReporting_trackInfo;
-(void)setSupportsRadioTrackActions:(BOOL)arg1 ;
-(id<MPCModelPlaybackAssetCacheProviding>)assetCacheProvider;
-(MPModelGenericObject *)genericObject;
-(void)setRadioStreamPlayback:(BOOL)arg1 ;
-(MPCPlaybackRequestEnvironment *)playbackRequestEnvironment;
-(long long)stationItemLikedState;
-(void)setStationItemLikedState:(long long)arg1 ;
@end

