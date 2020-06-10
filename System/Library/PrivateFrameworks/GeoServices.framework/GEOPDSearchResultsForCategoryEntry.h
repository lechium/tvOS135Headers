/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:35 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPDBrowseCategory;

@interface GEOPDSearchResultsForCategoryEntry : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE19* _placeIndexs;
	GEOPDBrowseCategory* _category;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_placeIndexs : 1;
		unsigned read_category : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_placeIndexs : 1;
		unsigned wrote_category : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasCategory; 
@property (nonatomic,retain) GEOPDBrowseCategory * category; 
@property (nonatomic,readonly) unsigned long long placeIndexsCount; 
@property (nonatomic,readonly) unsigned* placeIndexs; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(GEOPDBrowseCategory *)category;
-(void)setCategory:(GEOPDBrowseCategory *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasCategory;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readCategory;
-(void)_readPlaceIndexs;
-(void)_addNoFlagsPlaceIndex:(unsigned)arg1 ;
-(unsigned long long)placeIndexsCount;
-(void)clearPlaceIndexs;
-(unsigned)placeIndexAtIndex:(unsigned long long)arg1 ;
-(void)addPlaceIndex:(unsigned)arg1 ;
-(unsigned*)placeIndexs;
-(void)setPlaceIndexs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
@end
