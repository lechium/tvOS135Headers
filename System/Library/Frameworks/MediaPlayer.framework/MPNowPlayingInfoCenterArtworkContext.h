/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:09 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, MPMediaItemArtwork, NSData;

@interface MPNowPlayingInfoCenterArtworkContext : NSObject {

	NSString* _artworkIdentifier;
	MPMediaItemArtwork* _artwork;
	NSData* _artworkData;

}

@property (nonatomic,copy) NSString * artworkIdentifier;                //@synthesize artworkIdentifier=_artworkIdentifier - In the implementation block
@property (nonatomic,retain) MPMediaItemArtwork * artwork;              //@synthesize artwork=_artwork - In the implementation block
@property (nonatomic,retain) NSData * artworkData;                      //@synthesize artworkData=_artworkData - In the implementation block
-(MPMediaItemArtwork *)artwork;
-(void)setArtwork:(MPMediaItemArtwork *)arg1 ;
-(void)setArtworkData:(NSData *)arg1 ;
-(NSData *)artworkData;
-(void)setArtworkIdentifier:(NSString *)arg1 ;
-(NSString *)artworkIdentifier;
@end

