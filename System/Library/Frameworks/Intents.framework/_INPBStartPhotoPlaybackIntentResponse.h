/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:22:49 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_INPBStartPhotoPlaybackIntentResponse.h>
@class NSString, _INPBLocation;


@protocol _INPBStartPhotoPlaybackIntentResponse <NSObject>
@property (nonatomic,copy) NSString * albumName; 
@property (nonatomic,readonly) BOOL hasAlbumName; 
@property (nonatomic,retain) _INPBLocation * locationCreated; 
@property (nonatomic,readonly) BOOL hasLocationCreated; 
@property (assign,nonatomic) int searchResultsCount; 
@property (assign,nonatomic) BOOL hasSearchResultsCount; 
@required
-(int)searchResultsCount;
-(void)setSearchResultsCount:(int)arg1;
-(NSString *)albumName;
-(void)setAlbumName:(id)arg1;
-(BOOL)hasAlbumName;
-(_INPBLocation *)locationCreated;
-(void)setLocationCreated:(id)arg1;
-(BOOL)hasLocationCreated;
-(BOOL)hasSearchResultsCount;
-(void)setHasSearchResultsCount:(BOOL)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, _INPBLocation;

@interface _INPBStartPhotoPlaybackIntentResponse : PBCodable <_INPBStartPhotoPlaybackIntentResponse, NSSecureCoding, NSCopying> {

	SCD_Struct_IN3 _has;
	BOOL __encodeLegacyGloryData;
	int _searchResultsCount;
	NSString* _albumName;
	_INPBLocation* _locationCreated;

}

@property (assign,setter=_setEncodeLegacyGloryData:,nonatomic) BOOL _encodeLegacyGloryData;              //@synthesize _encodeLegacyGloryData=__encodeLegacyGloryData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * albumName;                                                         //@synthesize albumName=_albumName - In the implementation block
@property (nonatomic,readonly) BOOL hasAlbumName; 
@property (nonatomic,retain) _INPBLocation * locationCreated;                                            //@synthesize locationCreated=_locationCreated - In the implementation block
@property (nonatomic,readonly) BOOL hasLocationCreated; 
@property (assign,nonatomic) int searchResultsCount;                                                     //@synthesize searchResultsCount=_searchResultsCount - In the implementation block
@property (assign,nonatomic) BOOL hasSearchResultsCount; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)searchResultsCount;
-(void)setSearchResultsCount:(int)arg1 ;
-(BOOL)_encodeLegacyGloryData;
-(void)_setEncodeLegacyGloryData:(BOOL)arg1 ;
-(NSString *)albumName;
-(void)setAlbumName:(NSString *)arg1 ;
-(BOOL)hasAlbumName;
-(_INPBLocation *)locationCreated;
-(void)setLocationCreated:(_INPBLocation *)arg1 ;
-(BOOL)hasLocationCreated;
-(BOOL)hasSearchResultsCount;
-(void)setHasSearchResultsCount:(BOOL)arg1 ;
@end

