//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep  6 2019 11:16:02).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSIndexPath, NSSet, TVPCollectionViewCachingManager;

@protocol TVPCollectionViewCachingManagerDataSource <NSObject>

@optional
- (NSDictionary *)collectionViewCachingManager:(TVPCollectionViewCachingManager *)arg1 assetWithTargetSizeAtIndexPath:(NSIndexPath *)arg2;
- (NSArray *)collectionViewCachingManager:(TVPCollectionViewCachingManager *)arg1 assetsForIndexPaths:(NSSet *)arg2;
@end

