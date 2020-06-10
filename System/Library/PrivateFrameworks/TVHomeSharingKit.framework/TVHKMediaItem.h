/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:34 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVHomeSharingKit/TVHKMediaEntity.h>

@class NSString, TVHKMediaEntityIdentifier, NSNumber, _TVContentRating, NSValue, TVHKGaplessConfiguration, NSDate, TVHKVideoCredits;

@interface TVHKMediaItem : TVHKMediaEntity

@property (nonatomic,copy,readonly) NSString * artistTitle; 
@property (nonatomic,copy,readonly) NSString * sortArtistTitle; 
@property (nonatomic,copy,readonly) NSString * albumArtistTitle; 
@property (nonatomic,copy,readonly) NSString * sortAlbumArtistTitle; 
@property (nonatomic,copy,readonly) TVHKMediaEntityIdentifier * albumArtistIdentifier; 
@property (nonatomic,copy,readonly) NSString * composerTitle; 
@property (nonatomic,copy,readonly) NSString * sortComposerTitle; 
@property (nonatomic,copy,readonly) NSString * showTitle; 
@property (nonatomic,copy,readonly) NSString * sortShowTitle; 
@property (nonatomic,copy,readonly) TVHKMediaEntityIdentifier * showIdentifier; 
@property (nonatomic,copy,readonly) NSNumber * episodeNumber; 
@property (nonatomic,copy,readonly) NSNumber * discNumber; 
@property (nonatomic,copy,readonly) NSNumber * trackNumber; 
@property (nonatomic,copy,readonly) NSNumber * videoQuality; 
@property (nonatomic,readonly) _TVContentRating * contentRating; 
@property (nonatomic,copy,readonly) NSString * format; 
@property (nonatomic,copy,readonly) NSValue * dimensions; 
@property (nonatomic,copy,readonly) NSNumber * storeID; 
@property (nonatomic,copy,readonly) NSNumber * storefrontID; 
@property (nonatomic,copy,readonly) NSNumber * startTime; 
@property (nonatomic,copy,readonly) NSNumber * stopTime; 
@property (nonatomic,copy,readonly) NSNumber * volumeNormalization; 
@property (nonatomic,readonly) TVHKGaplessConfiguration * gaplessConfiguration; 
@property (nonatomic,copy,readonly) NSDate * creationDate; 
@property (nonatomic,copy,readonly) NSDate * modifiedDate; 
@property (nonatomic,copy,readonly) NSDate * lastPlayedDate; 
@property (nonatomic,copy) NSDate * expirationDate; 
@property (nonatomic,copy) NSDate * rentalPlaybackStartDate; 
@property (nonatomic,copy) NSNumber * hasBeenPlayed; 
@property (nonatomic,copy) NSNumber * playCount; 
@property (nonatomic,copy) NSNumber * skipCount; 
@property (nonatomic,readonly) BOOL supportsBookmark; 
@property (nonatomic,copy) NSNumber * bookmark; 
@property (nonatomic,copy,readonly) NSNumber * DRMKeyID; 
@property (nonatomic,copy,readonly) NSNumber * DRMUserID; 
@property (nonatomic,copy,readonly) NSString * studio; 
@property (nonatomic,readonly) TVHKVideoCredits * videoCredits; 
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)keyPathsForValuesAffectingPlayedState;
-(id)description;
-(NSNumber *)startTime;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSDate *)creationDate;
-(NSString *)format;
-(NSNumber *)storeID;
-(NSValue *)dimensions;
-(NSNumber *)stopTime;
-(void)setPlayCount:(NSNumber *)arg1 ;
-(NSNumber *)playCount;
-(_TVContentRating *)contentRating;
-(NSString *)showTitle;
-(id)releaseDate;
-(NSNumber *)episodeNumber;
-(NSNumber *)discNumber;
-(NSNumber *)trackNumber;
-(NSString *)studio;
-(NSDate *)lastPlayedDate;
-(NSNumber *)bookmark;
-(void)setBookmark:(NSNumber *)arg1 ;
-(NSNumber *)videoQuality;
-(NSNumber *)skipCount;
-(void)setSkipCount:(NSNumber *)arg1 ;
-(NSNumber *)storefrontID;
-(NSDate *)rentalPlaybackStartDate;
-(void)setRentalPlaybackStartDate:(NSDate *)arg1 ;
-(NSNumber *)volumeNormalization;
-(NSNumber *)hasBeenPlayed;
-(void)setHasBeenPlayed:(NSNumber *)arg1 ;
-(NSDate *)modifiedDate;
-(TVHKMediaEntityIdentifier *)albumArtistIdentifier;
-(TVHKMediaEntityIdentifier *)showIdentifier;
-(TVHKGaplessConfiguration *)gaplessConfiguration;
-(BOOL)supportsBookmark;
-(NSNumber *)DRMKeyID;
-(TVHKVideoCredits *)videoCredits;
-(NSString *)albumArtistTitle;
-(void)setPlayedState:(long long)arg1 ;
-(id)metadataKeyPaths;
-(long long)playedState;
-(NSString *)artistTitle;
-(NSNumber *)DRMUserID;
-(NSString *)composerTitle;
-(NSString *)sortArtistTitle;
-(NSString *)sortAlbumArtistTitle;
-(NSString *)sortComposerTitle;
-(NSString *)sortShowTitle;
@end
