/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:08 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray;

@interface GEOPDReverseGeocodingParameters : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _extendedLocations;
	NSMutableArray* _locations;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _placeTypeLimit;
	BOOL _preserveOriginalLocation;
	struct {
		unsigned has_placeTypeLimit : 1;
		unsigned has_preserveOriginalLocation : 1;
		unsigned read_unknownFields : 1;
		unsigned read_extendedLocations : 1;
		unsigned read_locations : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_extendedLocations : 1;
		unsigned wrote_locations : 1;
		unsigned wrote_placeTypeLimit : 1;
		unsigned wrote_preserveOriginalLocation : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * locations; 
@property (assign,nonatomic) BOOL hasPlaceTypeLimit; 
@property (assign,nonatomic) int placeTypeLimit; 
@property (assign,nonatomic) BOOL hasPreserveOriginalLocation; 
@property (assign,nonatomic) BOOL preserveOriginalLocation; 
@property (nonatomic,retain) NSMutableArray * extendedLocations; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)locationType;
+(BOOL)isValid:(id)arg1 ;
+(Class)extendedLocationType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)locations;
-(void)setLocations:(NSMutableArray *)arg1 ;
-(unsigned long long)locationsCount;
-(void)clearLocations;
-(void)addLocation:(id)arg1 ;
-(id)locationAtIndex:(unsigned long long)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)clearSensitiveFields;
-(int)placeTypeLimit;
-(void)setPlaceTypeLimit:(int)arg1 ;
-(void)setHasPlaceTypeLimit:(BOOL)arg1 ;
-(BOOL)hasPlaceTypeLimit;
-(id)placeTypeLimitAsString:(int)arg1 ;
-(int)StringAsPlaceTypeLimit:(id)arg1 ;
-(NSMutableArray *)extendedLocations;
-(void)_readLocations;
-(void)_addNoFlagsLocation:(id)arg1 ;
-(void)_readExtendedLocations;
-(void)_addNoFlagsExtendedLocation:(id)arg1 ;
-(unsigned long long)extendedLocationsCount;
-(void)clearExtendedLocations;
-(id)extendedLocationAtIndex:(unsigned long long)arg1 ;
-(void)addExtendedLocation:(id)arg1 ;
-(BOOL)preserveOriginalLocation;
-(void)setPreserveOriginalLocation:(BOOL)arg1 ;
-(void)setHasPreserveOriginalLocation:(BOOL)arg1 ;
-(BOOL)hasPreserveOriginalLocation;
-(void)setExtendedLocations:(NSMutableArray *)arg1 ;
@end

