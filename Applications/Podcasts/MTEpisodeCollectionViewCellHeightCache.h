//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MTSingleton.h"

@class NSCache;

@interface MTEpisodeCollectionViewCellHeightCache : MTSingleton
{
    NSCache *_cachedHeights;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001000964a0
- (id)_keyForWidth:(double)arg1 style:(unsigned long long)arg2;	// IMP=0x0000000100096464
- (void)addCachedHeight:(double)arg1 forWidth:(double)arg2 style:(unsigned long long)arg3;	// IMP=0x00000001000963c4
- (double)cachedHeightForWidth:(double)arg1 style:(unsigned long long)arg2;	// IMP=0x000000010009633c
- (void)sizeCategoryChanged:(id)arg1;	// IMP=0x0000000100096324
- (void)dealloc;	// IMP=0x000000010009629c
- (id)init;	// IMP=0x00000001000961e0

@end

