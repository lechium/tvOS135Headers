/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:49 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOSpatialLookupResponse : PBCodable <NSCopying> {

	NSMutableArray* _places;
	int _statusCode;
	SCD_Struct_GE93 _flags;

}

@property (assign,nonatomic) BOOL hasStatusCode; 
@property (assign,nonatomic) int statusCode; 
@property (nonatomic,retain) NSMutableArray * places; 
+(Class)placeType;
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(int)statusCode;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setPlaces:(NSMutableArray *)arg1 ;
-(unsigned long long)placesCount;
-(void)clearPlaces;
-(NSMutableArray *)places;
-(void)readAll:(BOOL)arg1 ;
-(void)clearSensitiveFields;
-(void)setStatusCode:(int)arg1 ;
-(void)setHasStatusCode:(BOOL)arg1 ;
-(BOOL)hasStatusCode;
-(id)statusCodeAsString:(int)arg1 ;
-(int)StringAsStatusCode:(id)arg1 ;
-(void)addPlace:(id)arg1 ;
-(id)placeAtIndex:(unsigned long long)arg1 ;
@end

