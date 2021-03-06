//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVURLAsset, IMPlayerManifest, MPNowPlayingContentItem, NSArray, NSString, NSURL, NSUUID;
@protocol OS_dispatch_queue;

@interface IMPlayerItem : NSObject
{
    _Bool _video;	// 8 = 0x8
    _Bool _areChaptersLoaded;	// 9 = 0x9
    _Bool _areChaptersLoading;	// 10 = 0xa
    AVURLAsset *_asset;	// 16 = 0x10
    NSString *_title;	// 24 = 0x18
    NSString *_album;	// 32 = 0x20
    NSString *_author;	// 40 = 0x28
    NSURL *_url;	// 48 = 0x30
    double _duration;	// 56 = 0x38
    double _playhead;	// 64 = 0x40
    IMPlayerManifest *_manifest;	// 72 = 0x48
    unsigned long long _manifestIndex;	// 80 = 0x50
    NSUUID *_instanceIdentifier;	// 88 = 0x58
    NSArray *_chapters;	// 96 = 0x60
    NSObject<OS_dispatch_queue> *_chapterLoadingQueue;	// 104 = 0x68
    MPNowPlayingContentItem *_contentItem;	// 112 = 0x70
}

+ (id)createAssetForUrl:(id)arg1;	// IMP=0x00000001001cf210
- (void).cxx_destruct;	// IMP=0x00000001001d1cf4
@property(retain, nonatomic) MPNowPlayingContentItem *contentItem; // @synthesize contentItem=_contentItem;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *chapterLoadingQueue; // @synthesize chapterLoadingQueue=_chapterLoadingQueue;
@property(nonatomic) _Bool areChaptersLoading; // @synthesize areChaptersLoading=_areChaptersLoading;
@property(retain, nonatomic) NSArray *chapters; // @synthesize chapters=_chapters;
@property(retain, nonatomic) NSUUID *instanceIdentifier; // @synthesize instanceIdentifier=_instanceIdentifier;
@property(nonatomic) unsigned long long manifestIndex; // @synthesize manifestIndex=_manifestIndex;
@property(nonatomic) __weak IMPlayerManifest *manifest; // @synthesize manifest=_manifest;
@property(nonatomic) _Bool areChaptersLoaded; // @synthesize areChaptersLoaded=_areChaptersLoaded;
@property(nonatomic) double playhead; // @synthesize playhead=_playhead;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(nonatomic, getter=isVideo, setter=setIsVideo:) _Bool video; // @synthesize video=_video;
@property(copy, nonatomic) NSString *author; // @synthesize author=_author;
@property(copy, nonatomic) NSString *album; // @synthesize album=_album;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void)loadChapters;	// IMP=0x00000001001d0200
@property(readonly, nonatomic) __weak NSArray *metadataChapters;
@property(readonly, nonatomic) __weak NSArray *timeChapters;
- (void)retrieveArtwork:(CDUnknownBlockType)arg1 withSize:(struct CGSize)arg2 atTime:(double)arg3;	// IMP=0x00000001001cfdb8
- (void)retrieveArtwork:(CDUnknownBlockType)arg1 withSize:(struct CGSize)arg2;	// IMP=0x00000001001cfda8
- (id)artworkIdentifier;	// IMP=0x00000001001cfd9c
- (void)updateActivity:(id)arg1;	// IMP=0x00000001001cfc60
- (_Bool)_isContentItemLoaded;	// IMP=0x00000001001cfc50
- (void)updateContentItem;	// IMP=0x00000001001cf9c0
- (void)recreateContentItem;	// IMP=0x00000001001cf938
- (id)contentItemIdentifier;	// IMP=0x00000001001cf8f4
- (void)beginLoadingArtworkForAVPlayerItem:(id)arg1;	// IMP=0x00000001001cf8f0
- (id)subtitle;	// IMP=0x00000001001cf8e4
- (id)externalMetadata;	// IMP=0x00000001001cf750
- (_Bool)notifyUserIsNotPlayable;	// IMP=0x00000001001cf748
@property(readonly, nonatomic, getter=isPlayable) _Bool playable;
@property(readonly, nonatomic, getter=isLocal) _Bool local;
- (void)invalidateAsset;	// IMP=0x00000001001cf574
- (_Bool)isAssetLoaded;	// IMP=0x00000001001cf408
@property(readonly, nonatomic) AVURLAsset *asset; // @synthesize asset=_asset;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001001cf2f0
- (unsigned long long)hash;	// IMP=0x00000001001cf2a4
- (void)reset;	// IMP=0x00000001001cf148
- (id)init;	// IMP=0x00000001001cf09c
- (id)initWithAsset:(id)arg1;	// IMP=0x00000001001cf010
- (id)initWithUrl:(id)arg1;	// IMP=0x00000001001cefac

@end

