/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:07 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOTransitTransferInfo : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned long long _transferMuid;
	unsigned _transferTime;
	SCD_Struct_GE33 _flags;

}

@property (assign,nonatomic) BOOL hasTransferMuid; 
@property (assign,nonatomic) unsigned long long transferMuid; 
@property (assign,nonatomic) BOOL hasTransferTime; 
@property (assign,nonatomic) unsigned transferTime; 
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
-(unsigned)transferTime;
-(unsigned long long)transferMuid;
-(void)setTransferMuid:(unsigned long long)arg1 ;
-(void)setHasTransferMuid:(BOOL)arg1 ;
-(BOOL)hasTransferMuid;
-(void)setTransferTime:(unsigned)arg1 ;
-(void)setHasTransferTime:(BOOL)arg1 ;
-(BOOL)hasTransferTime;
@end

