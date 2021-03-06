//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol MZUniversalPlaybackPositionTransactionContext;

@protocol MZUniversalPlaybackPositionDataSource <NSObject>
- (void)performBlockAndWait:(void (^)(void))arg1;
- (void)commitUniversalPlaybackPositionTransaction:(id <MZUniversalPlaybackPositionTransactionContext>)arg1 domainVersion:(NSString *)arg2 metadataEnumerationBlock:(MZUniversalPlaybackPositionMetadata * (^)(void))arg3;
- (void)cancelUniversalPlaybackPositionTransaction:(id <MZUniversalPlaybackPositionTransactionContext>)arg1;
- (id <MZUniversalPlaybackPositionTransactionContext>)beginTransactionWithItemsToSyncEnumerationBlock:(void (^)(id <MZUniversalPlaybackPositionMediaItem>, _Bool *))arg1;
@end

