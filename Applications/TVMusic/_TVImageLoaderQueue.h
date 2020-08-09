//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface _TVImageLoaderQueue : NSObject
{
    _Bool _randomized;	// 8 = 0x8
    _Bool _pauseImageLoad;	// 9 = 0x9
    NSArray *_artworkCatalogs;	// 16 = 0x10
    long long _preloadCount;	// 24 = 0x18
    CDUnknownBlockType _preloadCompletionHandler;	// 32 = 0x20
    long long _queueSize;	// 40 = 0x28
    long long _concurrentDownloadCount;	// 48 = 0x30
    long long _nextIndex;	// 56 = 0x38
    NSMutableArray *_finishedImages;	// 64 = 0x40
    NSMutableArray *_pendingArtworkCatalogs;	// 72 = 0x48
    NSMutableArray *_loadingArtworkCatalogs;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000010007a024
@property(retain, nonatomic) NSMutableArray *loadingArtworkCatalogs; // @synthesize loadingArtworkCatalogs=_loadingArtworkCatalogs;
@property(retain, nonatomic) NSMutableArray *pendingArtworkCatalogs; // @synthesize pendingArtworkCatalogs=_pendingArtworkCatalogs;
@property(retain, nonatomic) NSMutableArray *finishedImages; // @synthesize finishedImages=_finishedImages;
@property(nonatomic) long long nextIndex; // @synthesize nextIndex=_nextIndex;
@property(nonatomic) long long concurrentDownloadCount; // @synthesize concurrentDownloadCount=_concurrentDownloadCount;
@property(nonatomic) long long queueSize; // @synthesize queueSize=_queueSize;
@property(copy, nonatomic) CDUnknownBlockType preloadCompletionHandler; // @synthesize preloadCompletionHandler=_preloadCompletionHandler;
@property(nonatomic) long long preloadCount; // @synthesize preloadCount=_preloadCount;
@property(nonatomic) _Bool pauseImageLoad; // @synthesize pauseImageLoad=_pauseImageLoad;
@property(nonatomic, getter=isRandomized) _Bool randomized; // @synthesize randomized=_randomized;
@property(copy, nonatomic) NSArray *artworkCatalogs; // @synthesize artworkCatalogs=_artworkCatalogs;
- (void)_checkForPreloadCompletion;	// IMP=0x0000000100079f14
- (void)_artworkDidFail:(id)arg1;	// IMP=0x0000000100079e18
- (void)_artworkDidLoad:(id)arg1 withImage:(id)arg2;	// IMP=0x0000000100079d4c
- (void)_loadPendingImages;	// IMP=0x0000000100079b00
- (id)_artworkCatalogToLoadNext;	// IMP=0x0000000100079a4c
- (void)_fillQueue;	// IMP=0x0000000100079948
- (long long)_currentQueueSize;	// IMP=0x00000001000798ec
- (id)popNextImage;	// IMP=0x0000000100079848
- (void)preloadImageCount:(long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000797ec
- (id)init;	// IMP=0x0000000100079680

@end

