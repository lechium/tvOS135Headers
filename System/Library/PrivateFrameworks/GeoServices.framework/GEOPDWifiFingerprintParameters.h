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

@class PBUnknownFields, NSMutableArray;

@interface GEOPDWifiFingerprintParameters : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _measurements;
	unsigned _maxLabels;
	SCD_Struct_GE93 _flags;

}

@property (nonatomic,retain) NSMutableArray * measurements; 
@property (assign,nonatomic) BOOL hasMaxLabels; 
@property (assign,nonatomic) unsigned maxLabels; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)measurementType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)clearSensitiveFields;
-(void)addMeasurement:(id)arg1 ;
-(NSMutableArray *)measurements;
-(unsigned long long)measurementsCount;
-(void)clearMeasurements;
-(id)measurementAtIndex:(unsigned long long)arg1 ;
-(void)setMeasurements:(NSMutableArray *)arg1 ;
-(unsigned)maxLabels;
-(void)setMaxLabels:(unsigned)arg1 ;
-(void)setHasMaxLabels:(BOOL)arg1 ;
-(BOOL)hasMaxLabels;
@end

