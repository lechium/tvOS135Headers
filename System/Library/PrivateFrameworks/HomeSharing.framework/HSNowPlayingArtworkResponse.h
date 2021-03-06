/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:54 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeSharing/HSResponse.h>

@class NSData, NSString;

@interface HSNowPlayingArtworkResponse : HSResponse {

	NSData* _artworkData;
	NSString* _artworkMIMEType;

}

@property (nonatomic,retain) NSData * artworkData;                    //@synthesize artworkData=_artworkData - In the implementation block
@property (nonatomic,retain) NSString * artworkMIMEType;              //@synthesize artworkMIMEType=_artworkMIMEType - In the implementation block
-(void)setArtworkData:(NSData *)arg1 ;
-(NSData *)artworkData;
-(void)setArtworkMIMEType:(NSString *)arg1 ;
-(NSString *)artworkMIMEType;
@end

