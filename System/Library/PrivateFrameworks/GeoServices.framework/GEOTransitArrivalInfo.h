/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:10 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOTransitArrivalInfo : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	int _destinationLocation;
	SCD_Struct_GE93 _flags;

}

@property (assign,nonatomic) BOOL hasDestinationLocation; 
@property (assign,nonatomic) int destinationLocation; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
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
-(int)destinationLocation;
-(void)setDestinationLocation:(int)arg1 ;
-(BOOL)hasDestinationLocation;
-(void)setHasDestinationLocation:(BOOL)arg1 ;
-(id)destinationLocationAsString:(int)arg1 ;
-(int)StringAsDestinationLocation:(id)arg1 ;
@end

