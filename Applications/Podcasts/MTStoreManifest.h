//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MTItemListManifest.h"

@class NSArray, NSNumber;

@interface MTStoreManifest : MTItemListManifest
{
    _Bool _playerItemsNeedLoading;	// 8 = 0x8
    _Bool _initiatedByAnotherUser;	// 9 = 0x9
    unsigned long long _loadStatus;	// 16 = 0x10
    long long _playbackOrder;	// 24 = 0x18
    NSArray *_episodeAdamIds;	// 32 = 0x20
    NSNumber *_podcastAdamId;	// 40 = 0x28
    double _initialPlayheadPosition;	// 48 = 0x30
    unsigned long long _initialIndex;	// 56 = 0x38
}

+ (void)fetchPlayerItemsForStoreTrackIDs:(id)arg1 initiatedByAnotherUser:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100038d94
+ (void)fetchPlayerItemsForStoreTrackIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100038d40
+ (id)storeMediaDictionariesToPlayerItems:(id)arg1 initiatedByAnotherUser:(_Bool)arg2;	// IMP=0x0000000100037f2c
+ (id)storeMediaDictionariesToPlayerItems:(id)arg1;	// IMP=0x0000000100037f1c
+ (id)_episodeStorePlatformDictionaryFromSiriAssetInfo:(id)arg1 episodeAdamId:(id)arg2;	// IMP=0x0000000100037dbc
+ (id)podcastStorePlatformDictionaryFromSiriAssetInfo:(id)arg1 podcastAdamId:(id)arg2;	// IMP=0x0000000100037ae0
+ (id)playerItemsFromPodcastStorePlatformDictionary:(id)arg1 oldestEpisode:(_Bool)arg2 restricted:(out _Bool *)arg3 initiatedByAnotherUser:(_Bool)arg4;	// IMP=0x0000000100037820
+ (id)activityTypeSuffix;	// IMP=0x000000010003780c
+ (void)createManifestForActivity:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100037638
- (void).cxx_destruct;	// IMP=0x00000001000393b4
@property(nonatomic) _Bool initiatedByAnotherUser; // @synthesize initiatedByAnotherUser=_initiatedByAnotherUser;
@property(nonatomic) _Bool playerItemsNeedLoading; // @synthesize playerItemsNeedLoading=_playerItemsNeedLoading;
@property(nonatomic) unsigned long long initialIndex; // @synthesize initialIndex=_initialIndex;
@property(nonatomic) double initialPlayheadPosition; // @synthesize initialPlayheadPosition=_initialPlayheadPosition;
@property(retain, nonatomic) NSNumber *podcastAdamId; // @synthesize podcastAdamId=_podcastAdamId;
@property(retain, nonatomic) NSArray *episodeAdamIds; // @synthesize episodeAdamIds=_episodeAdamIds;
@property(nonatomic) long long playbackOrder; // @synthesize playbackOrder=_playbackOrder;
@property(nonatomic) unsigned long long loadStatus; // @synthesize loadStatus=_loadStatus;
- (_Bool)userActivityContainsPlayhead;	// IMP=0x0000000100037818
- (id)activity;	// IMP=0x0000000100037544
- (void)_loadItemsFromEpisodeAdamIdsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100037010
- (void)_updateLoadStatus:(_Bool)arg1;	// IMP=0x0000000100036f5c
- (id)initWithItems:(id)arg1 initialIndex:(unsigned long long)arg2;	// IMP=0x0000000100036c5c
- (id)initWithItems:(id)arg1;	// IMP=0x0000000100036c4c
- (id)initWithStoreMediaDictionaries:(id)arg1 initialIndex:(unsigned long long)arg2;	// IMP=0x0000000100036bc4
- (void)load:(CDUnknownBlockType)arg1;	// IMP=0x000000010003622c
- (id)_initWithPodcastStorePlatformDictionary:(id)arg1 oldestEpisode:(_Bool)arg2;	// IMP=0x0000000100036160
- (id)_initWithEpisodeAdamIds:(id)arg1 playheadPosition:(double)arg2 initialIndex:(unsigned long long)arg3;	// IMP=0x0000000100036098
- (id)initWithPodcastAdamId:(id)arg1 siriAssetInfo:(id)arg2 oldestEpisode:(_Bool)arg3 initiatedByAnotherUser:(_Bool)arg4;	// IMP=0x0000000100035f5c
- (id)initWithEpisodeAdamId:(id)arg1 siriAssetInfo:(id)arg2 initialIndex:(unsigned long long)arg3 initiatedByAnotherUser:(_Bool)arg4;	// IMP=0x0000000100035cfc
- (id)initWithEpisodeAdamIds:(id)arg1 initialIndex:(unsigned long long)arg2;	// IMP=0x0000000100035cec

@end

