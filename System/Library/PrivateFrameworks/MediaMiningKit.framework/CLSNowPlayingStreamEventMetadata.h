/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:41 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaMiningKit/MediaMiningKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber, NSSet;

@interface CLSNowPlayingStreamEventMetadata : NSObject <NSCopying> {

	NSString* _album;
	NSString* _artist;
	NSString* _title;
	NSNumber* _durationInSeconds;
	NSSet* _genres;
	NSString* _source;

}

@property (nonatomic,copy) NSString * album;                            //@synthesize album=_album - In the implementation block
@property (nonatomic,copy) NSString * artist;                           //@synthesize artist=_artist - In the implementation block
@property (nonatomic,copy) NSString * title;                            //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSNumber * durationInSeconds;              //@synthesize durationInSeconds=_durationInSeconds - In the implementation block
@property (nonatomic,copy) NSSet * genres;                              //@synthesize genres=_genres - In the implementation block
@property (nonatomic,copy) NSString * source;                           //@synthesize source=_source - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)setSource:(NSString *)arg1 ;
-(NSString *)source;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setAlbum:(NSString *)arg1 ;
-(NSString *)album;
-(void)setArtist:(NSString *)arg1 ;
-(NSString *)artist;
-(NSSet *)genres;
-(void)setGenres:(NSSet *)arg1 ;
-(NSNumber *)durationInSeconds;
-(void)setDurationInSeconds:(NSNumber *)arg1 ;
-(BOOL)isEqualToEventMetadata:(id)arg1 ;
-(id)initWithDuetKnowledgeEvent:(id)arg1 ;
@end

