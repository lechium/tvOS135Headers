/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:12 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOMapRegion, NSString;

@interface GEOPDPopularNearbySearchResult : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOMapRegion* _displayMapRegion;
	NSString* _sectionHeader;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	BOOL _isChainResultSet;
	struct {
		unsigned has_isChainResultSet : 1;
		unsigned read_unknownFields : 1;
		unsigned read_displayMapRegion : 1;
		unsigned read_sectionHeader : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_displayMapRegion : 1;
		unsigned wrote_sectionHeader : 1;
		unsigned wrote_isChainResultSet : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasDisplayMapRegion; 
@property (nonatomic,retain) GEOMapRegion * displayMapRegion; 
@property (nonatomic,readonly) BOOL hasSectionHeader; 
@property (nonatomic,retain) NSString * sectionHeader; 
@property (assign,nonatomic) BOOL hasIsChainResultSet; 
@property (assign,nonatomic) BOOL isChainResultSet; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
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
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readDisplayMapRegion;
-(GEOMapRegion *)displayMapRegion;
-(void)setDisplayMapRegion:(GEOMapRegion *)arg1 ;
-(BOOL)hasDisplayMapRegion;
-(BOOL)isChainResultSet;
-(void)setIsChainResultSet:(BOOL)arg1 ;
-(void)setHasIsChainResultSet:(BOOL)arg1 ;
-(BOOL)hasIsChainResultSet;
-(NSString *)sectionHeader;
-(void)_readSectionHeader;
-(void)setSectionHeader:(NSString *)arg1 ;
-(BOOL)hasSectionHeader;
@end

