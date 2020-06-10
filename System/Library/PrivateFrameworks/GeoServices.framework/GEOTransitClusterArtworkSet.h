/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:59 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray;

@interface GEOTransitClusterArtworkSet : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE19* _artworkIndexs;
	NSMutableArray* _artworkItems;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_artworkIndexs : 1;
		unsigned read_artworkItems : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_artworkIndexs : 1;
		unsigned wrote_artworkItems : 1;
	}  _flags;

}

@property (nonatomic,readonly) unsigned long long artworkIndexsCount; 
@property (nonatomic,readonly) unsigned* artworkIndexs; 
@property (nonatomic,retain) NSMutableArray * artworkItems; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)artworkItemType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(unsigned long long)artworkItemsCount;
-(NSMutableArray *)artworkItems;
-(unsigned*)artworkIndexs;
-(unsigned long long)artworkIndexsCount;
-(id)_maps_artworkIndicesAsString;
-(void)_readArtworkIndexs;
-(void)_addNoFlagsArtworkIndex:(unsigned)arg1 ;
-(void)_readArtworkItems;
-(void)_addNoFlagsArtworkItem:(id)arg1 ;
-(void)clearArtworkIndexs;
-(unsigned)artworkIndexAtIndex:(unsigned long long)arg1 ;
-(void)addArtworkIndex:(unsigned)arg1 ;
-(void)clearArtworkItems;
-(id)artworkItemAtIndex:(unsigned long long)arg1 ;
-(void)addArtworkItem:(id)arg1 ;
-(void)setArtworkIndexs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)setArtworkItems:(NSMutableArray *)arg1 ;
@end
