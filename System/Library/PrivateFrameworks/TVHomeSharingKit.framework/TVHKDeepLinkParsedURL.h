/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:34 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSString, TVHSMediaServerIdentifier, TVHKMediaEntityIdentifier;

@interface TVHKDeepLinkParsedURL : NSObject {

	NSURL* _URL;
	NSString* _scheme;
	NSString* _action;
	NSString* _displayType;
	TVHSMediaServerIdentifier* _mediaServerIdentifier;
	TVHKMediaEntityIdentifier* _mediaItemIdentifier;
	unsigned long long _mediaItemType;
	unsigned long long _mediaCategoryType;
	NSString* _mediaItemTitle;
	TVHKMediaEntityIdentifier* _albumIdentifier;
	NSString* _albumTitle;
	TVHKMediaEntityIdentifier* _albumArtistIdentifier;
	NSString* _albumArtistTitle;
	TVHKMediaEntityIdentifier* _seasonIdentifier;
	NSString* _showTitle;

}

@property (nonatomic,copy) NSURL * URL;                                                      //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy) NSString * scheme;                                                //@synthesize scheme=_scheme - In the implementation block
@property (nonatomic,copy) NSString * action;                                                //@synthesize action=_action - In the implementation block
@property (nonatomic,copy) NSString * displayType;                                           //@synthesize displayType=_displayType - In the implementation block
@property (nonatomic,retain) TVHSMediaServerIdentifier * mediaServerIdentifier;              //@synthesize mediaServerIdentifier=_mediaServerIdentifier - In the implementation block
@property (nonatomic,retain) TVHKMediaEntityIdentifier * mediaItemIdentifier;                //@synthesize mediaItemIdentifier=_mediaItemIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long mediaItemType;                               //@synthesize mediaItemType=_mediaItemType - In the implementation block
@property (assign,nonatomic) unsigned long long mediaCategoryType;                           //@synthesize mediaCategoryType=_mediaCategoryType - In the implementation block
@property (nonatomic,copy) NSString * mediaItemTitle;                                        //@synthesize mediaItemTitle=_mediaItemTitle - In the implementation block
@property (nonatomic,retain) TVHKMediaEntityIdentifier * albumIdentifier;                    //@synthesize albumIdentifier=_albumIdentifier - In the implementation block
@property (nonatomic,copy) NSString * albumTitle;                                            //@synthesize albumTitle=_albumTitle - In the implementation block
@property (nonatomic,retain) TVHKMediaEntityIdentifier * albumArtistIdentifier;              //@synthesize albumArtistIdentifier=_albumArtistIdentifier - In the implementation block
@property (nonatomic,copy) NSString * albumArtistTitle;                                      //@synthesize albumArtistTitle=_albumArtistTitle - In the implementation block
@property (nonatomic,retain) TVHKMediaEntityIdentifier * seasonIdentifier;                   //@synthesize seasonIdentifier=_seasonIdentifier - In the implementation block
@property (nonatomic,copy) NSString * showTitle;                                             //@synthesize showTitle=_showTitle - In the implementation block
+(id)_mediaServerIdentifierFromString:(id)arg1 ;
+(unsigned long long)_mediaCategoryTypeFromString:(id)arg1 ;
+(id)_mediaEntityIdentifierFromString:(id)arg1 ;
+(unsigned long long)_mediaItemTypeFromString:(id)arg1 ;
+(id)deepLinkParsedURLFromURL:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)scheme;
-(NSURL *)URL;
-(void)setScheme:(NSString *)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(NSString *)displayType;
-(NSString *)action;
-(void)setAction:(NSString *)arg1 ;
-(void)setDisplayType:(NSString *)arg1 ;
-(NSString *)showTitle;
-(void)setShowTitle:(NSString *)arg1 ;
-(void)setAlbumIdentifier:(TVHKMediaEntityIdentifier *)arg1 ;
-(TVHKMediaEntityIdentifier *)albumIdentifier;
-(unsigned long long)mediaItemType;
-(void)setMediaItemType:(unsigned long long)arg1 ;
-(NSString *)albumTitle;
-(void)setAlbumTitle:(NSString *)arg1 ;
-(unsigned long long)mediaCategoryType;
-(TVHKMediaEntityIdentifier *)albumArtistIdentifier;
-(TVHSMediaServerIdentifier *)mediaServerIdentifier;
-(void)setMediaCategoryType:(unsigned long long)arg1 ;
-(void)setMediaServerIdentifier:(TVHSMediaServerIdentifier *)arg1 ;
-(void)setMediaItemIdentifier:(TVHKMediaEntityIdentifier *)arg1 ;
-(void)setMediaItemTitle:(NSString *)arg1 ;
-(void)setAlbumArtistTitle:(NSString *)arg1 ;
-(void)setAlbumArtistIdentifier:(TVHKMediaEntityIdentifier *)arg1 ;
-(void)setSeasonIdentifier:(TVHKMediaEntityIdentifier *)arg1 ;
-(NSString *)albumArtistTitle;
-(TVHKMediaEntityIdentifier *)mediaItemIdentifier;
-(NSString *)mediaItemTitle;
-(TVHKMediaEntityIdentifier *)seasonIdentifier;
@end

