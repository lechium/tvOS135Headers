//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MTSingleton.h"

@class AVAssetCache;

@interface MTAVAssetCache : MTSingleton
{
    AVAssetCache *_assetCache;	// 8 = 0x8
}

+ (void)_asyncPrewarm;	// IMP=0x000000010013fe88
- (void).cxx_destruct;	// IMP=0x000000010013ff00
@property(readonly, nonatomic) AVAssetCache *assetCache; // @synthesize assetCache=_assetCache;
- (id)init;	// IMP=0x000000010013fcbc

@end

