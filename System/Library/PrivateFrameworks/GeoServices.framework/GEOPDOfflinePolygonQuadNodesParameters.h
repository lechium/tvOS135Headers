/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:15 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray;

@interface GEOPDOfflinePolygonQuadNodesParameters : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _existingDatas;
	NSMutableArray* _layers;
	NSMutableArray* _regions;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_existingDatas : 1;
		unsigned read_layers : 1;
		unsigned read_regions : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_existingDatas : 1;
		unsigned wrote_layers : 1;
		unsigned wrote_regions : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * layers; 
@property (nonatomic,retain) NSMutableArray * regions; 
@property (nonatomic,retain) NSMutableArray * existingDatas; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)layerType;
+(BOOL)isValid:(id)arg1 ;
+(Class)regionType;
+(Class)existingDataType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSMutableArray *)layers;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)regions;
-(void)setLayers:(NSMutableArray *)arg1 ;
-(void)clearRegions;
-(void)readAll:(BOOL)arg1 ;
-(unsigned long long)regionsCount;
-(id)regionAtIndex:(unsigned long long)arg1 ;
-(void)addRegion:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readLayers;
-(void)_addNoFlagsLayer:(id)arg1 ;
-(unsigned long long)layersCount;
-(void)clearLayers;
-(id)layerAtIndex:(unsigned long long)arg1 ;
-(void)addLayer:(id)arg1 ;
-(void)_readRegions;
-(void)setRegions:(NSMutableArray *)arg1 ;
-(void)_addNoFlagsRegion:(id)arg1 ;
-(void)_readExistingDatas;
-(void)_addNoFlagsExistingData:(id)arg1 ;
-(unsigned long long)existingDatasCount;
-(void)clearExistingDatas;
-(id)existingDataAtIndex:(unsigned long long)arg1 ;
-(void)addExistingData:(id)arg1 ;
-(NSMutableArray *)existingDatas;
-(void)setExistingDatas:(NSMutableArray *)arg1 ;
@end
