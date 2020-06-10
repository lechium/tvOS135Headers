/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:32 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBKUniversalPlaybackPositionMediaItem.h>

@class NSString, TVCKDataType, NSNumber, NSDate, NSURL, TVCKPodcastGUID;

@interface TVCKUniversalPlaybackPositionRecord : NSObject <SBKUniversalPlaybackPositionMediaItem> {

	NSString* _itemIdentifier;
	TVCKDataType* _mediaType;
	NSNumber* _bookmarkTime;
	NSNumber* _hasBeenPlayed;
	NSNumber* _playCount;
	NSDate* _timestamp;
	NSURL* _podcastURL;
	TVCKPodcastGUID* _podcastGUID;

}

@property (nonatomic,copy) NSString * itemIdentifier;                    //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (nonatomic,retain) TVCKDataType * mediaType;                   //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,retain) NSNumber * bookmarkTime;                    //@synthesize bookmarkTime=_bookmarkTime - In the implementation block
@property (nonatomic,retain) NSNumber * hasBeenPlayed;                   //@synthesize hasBeenPlayed=_hasBeenPlayed - In the implementation block
@property (nonatomic,retain) NSNumber * playCount;                       //@synthesize playCount=_playCount - In the implementation block
@property (nonatomic,retain) NSDate * timestamp;                         //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSURL * podcastURL;                         //@synthesize podcastURL=_podcastURL - In the implementation block
@property (nonatomic,retain) TVCKPodcastGUID * podcastGUID;              //@synthesize podcastGUID=_podcastGUID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(NSString *)itemIdentifier;
-(NSDate *)timestamp;
-(void)setTimestamp:(NSDate *)arg1 ;
-(TVCKDataType *)mediaType;
-(void)setMediaType:(TVCKDataType *)arg1 ;
-(void)setPlayCount:(NSNumber *)arg1 ;
-(NSNumber *)playCount;
-(void)setItemIdentifier:(NSString *)arg1 ;
-(NSNumber *)bookmarkTime;
-(NSURL *)podcastURL;
-(NSNumber *)hasBeenPlayed;
-(void)setHasBeenPlayed:(NSNumber *)arg1 ;
-(void)enumerateValuesForProperties:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)setBookmarkTime:(NSNumber *)arg1 ;
-(void)setPodcastGUID:(TVCKPodcastGUID *)arg1 ;
-(void)setPodcastURL:(NSURL *)arg1 ;
-(TVCKPodcastGUID *)podcastGUID;
-(id)_uppDictionary;
-(void)markAsWatched;
-(void)markAsUnwatched;
@end

