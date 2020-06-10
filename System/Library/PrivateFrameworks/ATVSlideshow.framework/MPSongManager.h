/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:38 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSString, NSRecursiveLock;

@interface MPSongManager : NSObject {

	NSMutableDictionary* mSongDescriptions;
	NSMutableDictionary* mSongBeats;
	NSMutableDictionary* mSongMetaData;
	NSString* mSongCacheFilePath;
	NSRecursiveLock* mSongLock;
	void* mDaFunc;

}
+(id)sharedManager;
+(void)releaseSharedManager;
-(id)init;
-(void)dealloc;
-(id)initWithPaths:(id)arg1 ;
-(id)cachedBeatsForSongAtPath:(id)arg1 ;
-(id)beatsForSongAtPath:(id)arg1 progressCallback:(/*function pointer*/void*)arg2 context:(void*)arg3 ;
-(BOOL)hasBeatsForSongAtPath:(id)arg1 ;
-(id)songMetadataForPath:(id)arg1 ;
-(void)storeBeats:(id)arg1 forPath:(id)arg2 ;
@end
