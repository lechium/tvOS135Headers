/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:14 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VUIMediaItem.h>

@class NSString, VUIExtrasInfo, VUIFamilySharingRelationships, VUIVideosPlayable, VUIFamilySharingEntity;

@interface VUIFamilySharingMediaItem : VUIMediaItem {

	NSString* _artworkURL;
	NSString* _previewArtworkURL;
	VUIExtrasInfo* _iTunesExtrasInfo;
	VUIFamilySharingRelationships* _relationships;
	VUIVideosPlayable* _videosPlayable;
	NSString* _buyParams;
	NSString* _personalizedBuyParams;
	VUIFamilySharingEntity* _entity;

}

@property (nonatomic,retain) VUIFamilySharingEntity * entity;                            //@synthesize entity=_entity - In the implementation block
@property (nonatomic,retain) NSString * artworkURL;                                      //@synthesize artworkURL=_artworkURL - In the implementation block
@property (nonatomic,retain) NSString * previewArtworkURL;                               //@synthesize previewArtworkURL=_previewArtworkURL - In the implementation block
@property (nonatomic,retain) VUIExtrasInfo * iTunesExtrasInfo;                           //@synthesize iTunesExtrasInfo=_iTunesExtrasInfo - In the implementation block
@property (nonatomic,retain) VUIFamilySharingRelationships * relationships;              //@synthesize relationships=_relationships - In the implementation block
@property (nonatomic,retain) VUIVideosPlayable * videosPlayable;                         //@synthesize videosPlayable=_videosPlayable - In the implementation block
@property (nonatomic,retain) NSString * buyParams;                                       //@synthesize buyParams=_buyParams - In the implementation block
@property (nonatomic,retain) NSString * personalizedBuyParams;                           //@synthesize personalizedBuyParams=_personalizedBuyParams - In the implementation block
-(id)title;
-(id)duration;
-(VUIFamilySharingEntity *)entity;
-(void)setEntity:(VUIFamilySharingEntity *)arg1 ;
-(id)storeID;
-(NSString *)buyParams;
-(void)setBuyParams:(NSString *)arg1 ;
-(id)contentDescription;
-(id)contentRating;
-(VUIFamilySharingRelationships *)relationships;
-(void)setRelationships:(VUIFamilySharingRelationships *)arg1 ;
-(id)showTitle;
-(id)releaseDate;
-(id)seasonNumber;
-(id)releaseYear;
-(NSString *)artworkURL;
-(void)setArtworkURL:(NSString *)arg1 ;
-(id)episodeNumber;
-(id)extrasURL;
-(id)genreTitle;
-(id)showIdentifier;
-(id)seasonIdentifier;
-(void)setPreviewArtworkURL:(NSString *)arg1 ;
-(id)initWithAMSEntity:(id)arg1 requestedProperties:(id)arg2 ;
-(id)_itunesExtrasDictionary;
-(NSString *)previewArtworkURL;
-(id)_bestRedownloadOffer;
-(id)_bestOffer;
-(VUIExtrasInfo *)iTunesExtrasInfo;
-(VUIVideosPlayable *)videosPlayable;
-(NSString *)personalizedBuyParams;
-(void)setITunesExtrasInfo:(VUIExtrasInfo *)arg1 ;
-(void)setVideosPlayable:(VUIVideosPlayable *)arg1 ;
-(void)setPersonalizedBuyParams:(NSString *)arg1 ;
@end
