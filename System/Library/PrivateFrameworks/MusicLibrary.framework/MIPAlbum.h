/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:37 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MIPArtist, NSString;

@interface MIPAlbum : PBCodable <NSCopying> {

	long long _persistentId;
	long long _storeId;
	MIPArtist* _artist;
	NSString* _artworkId;
	NSString* _cloudId;
	NSString* _name;
	int _numDiscs;
	int _numTracks;
	NSString* _sortName;
	int _userRating;
	BOOL _compilation;
	SCD_Struct_MI15 _has;

}

@property (assign,nonatomic) BOOL hasStoreId; 
@property (assign,nonatomic) long long storeId;                   //@synthesize storeId=_storeId - In the implementation block
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                     //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL hasSortName; 
@property (nonatomic,retain) NSString * sortName;                 //@synthesize sortName=_sortName - In the implementation block
@property (nonatomic,readonly) BOOL hasArtist; 
@property (nonatomic,retain) MIPArtist * artist;                  //@synthesize artist=_artist - In the implementation block
@property (assign,nonatomic) BOOL hasNumTracks; 
@property (assign,nonatomic) int numTracks;                       //@synthesize numTracks=_numTracks - In the implementation block
@property (assign,nonatomic) BOOL hasNumDiscs; 
@property (assign,nonatomic) int numDiscs;                        //@synthesize numDiscs=_numDiscs - In the implementation block
@property (nonatomic,readonly) BOOL hasArtworkId; 
@property (nonatomic,retain) NSString * artworkId;                //@synthesize artworkId=_artworkId - In the implementation block
@property (assign,nonatomic) BOOL hasUserRating; 
@property (assign,nonatomic) int userRating;                      //@synthesize userRating=_userRating - In the implementation block
@property (assign,nonatomic) BOOL hasCompilation; 
@property (assign,nonatomic) BOOL compilation;                    //@synthesize compilation=_compilation - In the implementation block
@property (assign,nonatomic) BOOL hasPersistentId; 
@property (assign,nonatomic) long long persistentId;              //@synthesize persistentId=_persistentId - In the implementation block
@property (nonatomic,readonly) BOOL hasCloudId; 
@property (nonatomic,retain) NSString * cloudId;                  //@synthesize cloudId=_cloudId - In the implementation block
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasName;
-(void)setArtist:(MIPArtist *)arg1 ;
-(MIPArtist *)artist;
-(BOOL)hasArtist;
-(void)setCompilation:(BOOL)arg1 ;
-(int)userRating;
-(long long)storeId;
-(void)setStoreId:(long long)arg1 ;
-(void)setUserRating:(int)arg1 ;
-(void)setHasUserRating:(BOOL)arg1 ;
-(BOOL)hasUserRating;
-(BOOL)compilation;
-(int)numDiscs;
-(int)numTracks;
-(long long)persistentId;
-(BOOL)hasCompilation;
-(BOOL)hasNumDiscs;
-(BOOL)hasNumTracks;
-(BOOL)hasStoreId;
-(NSString *)cloudId;
-(BOOL)hasSortName;
-(NSString *)sortName;
-(BOOL)hasPersistentId;
-(BOOL)hasArtworkId;
-(NSString *)artworkId;
-(void)setHasStoreId:(BOOL)arg1 ;
-(void)setPersistentId:(long long)arg1 ;
-(void)setHasPersistentId:(BOOL)arg1 ;
-(void)setSortName:(NSString *)arg1 ;
-(void)setArtworkId:(NSString *)arg1 ;
-(void)setCloudId:(NSString *)arg1 ;
-(void)setNumTracks:(int)arg1 ;
-(void)setHasNumTracks:(BOOL)arg1 ;
-(void)setNumDiscs:(int)arg1 ;
-(void)setHasNumDiscs:(BOOL)arg1 ;
-(void)setHasCompilation:(BOOL)arg1 ;
-(BOOL)hasCloudId;
@end
