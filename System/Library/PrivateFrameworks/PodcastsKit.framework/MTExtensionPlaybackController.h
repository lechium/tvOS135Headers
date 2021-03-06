/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:02 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface MTExtensionPlaybackController : NSObject {

	NSMutableArray* _magicMomentCompletionHandlers;

}

@property (nonatomic,retain) NSMutableArray * magicMomentCompletionHandlers;              //@synthesize magicMomentCompletionHandlers=_magicMomentCompletionHandlers - In the implementation block
+(void)startPlaybackWithPlaybackRequestIdentifier:(id)arg1 assetInfo:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)startPlaybackWithPlaybackRequestIdentifier:(id)arg1 mrCompletion:(/*^block*/id)arg2 ;
+(void)startPlaybackWithPlaybackRequestIdentifier:(id)arg1 assetInfo:(id)arg2 mrCompletion:(/*^block*/id)arg3 ;
+(void)_setPlaybackQueueWithIdentifier:(id)arg1 assetInfo:(id)arg2 playerID:(id)arg3 mrCompletion:(/*^block*/id)arg4 ;
+(void)getNowPlayingInfoForMagicMomentInfoCenterWithCompletion:(/*^block*/id)arg1 ;
+(void)startPlaybackWithPlaybackRequestIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)init;
-(void)_playbackQueueChangedNotification:(id)arg1 ;
-(NSMutableArray *)magicMomentCompletionHandlers;
-(void)_getNowPlayingInfoAndCallPendingCompletions;
-(void)populateMagicMomentInfoCenterWithPlaybackRequestIdentifier:(id)arg1 mrCompletion:(/*^block*/id)arg2 ;
-(void)setMagicMomentCompletionHandlers:(NSMutableArray *)arg1 ;
@end

