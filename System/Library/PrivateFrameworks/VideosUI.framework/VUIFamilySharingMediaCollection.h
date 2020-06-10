/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:22 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VUIMediaCollection.h>

@class NSString, NSArray, VUIFamilySharingEntity;

@interface VUIFamilySharingMediaCollection : VUIMediaCollection {

	NSString* _artworkURL;
	NSString* _amsShowIdentifier;
	NSString* _amsSeasonIdentifier;
	NSArray* _seasonNumbers;
	VUIFamilySharingEntity* _entity;

}

@property (nonatomic,retain) VUIFamilySharingEntity * entity;              //@synthesize entity=_entity - In the implementation block
@property (nonatomic,retain) NSString * artworkURL;                        //@synthesize artworkURL=_artworkURL - In the implementation block
@property (nonatomic,retain) NSString * amsShowIdentifier;                 //@synthesize amsShowIdentifier=_amsShowIdentifier - In the implementation block
@property (nonatomic,retain) NSString * amsSeasonIdentifier;               //@synthesize amsSeasonIdentifier=_amsSeasonIdentifier - In the implementation block
@property (nonatomic,retain) NSArray * seasonNumbers;                      //@synthesize seasonNumbers=_seasonNumbers - In the implementation block
-(id)title;
-(id)duration;
-(VUIFamilySharingEntity *)entity;
-(void)setEntity:(VUIFamilySharingEntity *)arg1 ;
-(id)contentDescription;
-(id)contentRating;
-(id)showTitle;
-(id)releaseDate;
-(id)seasonNumber;
-(id)releaseYear;
-(NSString *)artworkURL;
-(void)setArtworkURL:(NSString *)arg1 ;
-(id)genreTitle;
-(NSArray *)seasonNumbers;
-(id)seasonCount;
-(void)setSeasonNumbers:(NSArray *)arg1 ;
-(id)initWithAMSEntity:(id)arg1 requestedProperties:(id)arg2 mediaEntityType:(id)arg3 ;
-(NSString *)amsSeasonIdentifier;
-(NSString *)amsShowIdentifier;
-(void)setAmsShowIdentifier:(NSString *)arg1 ;
-(void)setAmsSeasonIdentifier:(NSString *)arg1 ;
@end
