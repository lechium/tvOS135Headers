/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:11 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, NSMutableDictionary;

@interface MPStoreAssetInfoPlaybackCache : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMutableArray* _accessOrderedRequests;
	NSMutableDictionary* _requestToCachedResponse;

}
+(id)sharedCache;
-(id)_init;
-(id)cachedResponseForRequest:(id)arg1 ;
-(void)addCachedResponse:(id)arg1 forRequest:(id)arg2 ;
-(void)updateForPlaybackOfFileAsset:(id)arg1 fromResponse:(id)arg2 ;
@end

