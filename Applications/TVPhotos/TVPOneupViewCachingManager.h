//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TVPCachingManager.h"

@class NSSet, TVPOneupView;
@protocol TVPOneupViewCachingManagerDataSource;

@interface TVPOneupViewCachingManager : TVPCachingManager
{
    TVPOneupView *_oneupView;	// 8 = 0x8
    id <TVPOneupViewCachingManagerDataSource> _dataSource;	// 16 = 0x10
    NSSet *_previousPreheatAssets;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100029b34
@property(retain, nonatomic) NSSet *previousPreheatAssets; // @synthesize previousPreheatAssets=_previousPreheatAssets;
@property(nonatomic) __weak id <TVPOneupViewCachingManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) TVPOneupView *oneupView; // @synthesize oneupView=_oneupView;
- (void)_updateCachedAssets;	// IMP=0x0000000100029608
- (void)updatePrefetchedAssets;	// IMP=0x00000001000295fc
- (id)autoloopVideoRequestOptions;	// IMP=0x0000000100029570
- (id)animatedImageRequestOptions;	// IMP=0x00000001000294d0
- (id)livePhotoRequestOptions;	// IMP=0x0000000100029458
- (id)requestOptions;	// IMP=0x00000001000293b8
- (CDUnknownBlockType)currentProgressHandler;	// IMP=0x00000001000291a8
- (long long)contentMode;	// IMP=0x00000001000291a0
- (struct CGSize)targetSize;	// IMP=0x0000000100029124
- (void)startPrefetchingAssets;	// IMP=0x0000000100029118

@end

