/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:51 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOPDSearchZeroKeywordEntry : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	SCD_Struct_GE19* _categoryIndexs;
	unsigned _dayOfWeek;
	unsigned _hourOfDay;
	SCD_Struct_GE33 _flags;

}

@property (assign,nonatomic) BOOL hasDayOfWeek; 
@property (assign,nonatomic) unsigned dayOfWeek; 
@property (assign,nonatomic) BOOL hasHourOfDay; 
@property (assign,nonatomic) unsigned hourOfDay; 
@property (nonatomic,readonly) unsigned long long categoryIndexsCount; 
@property (nonatomic,readonly) unsigned* categoryIndexs; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(unsigned)dayOfWeek;
-(unsigned)hourOfDay;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setDayOfWeek:(unsigned)arg1 ;
-(void)setHasDayOfWeek:(BOOL)arg1 ;
-(BOOL)hasDayOfWeek;
-(void)setHourOfDay:(unsigned)arg1 ;
-(void)setHasHourOfDay:(BOOL)arg1 ;
-(BOOL)hasHourOfDay;
-(unsigned long long)categoryIndexsCount;
-(void)clearCategoryIndexs;
-(unsigned)categoryIndexAtIndex:(unsigned long long)arg1 ;
-(void)addCategoryIndex:(unsigned)arg1 ;
-(unsigned*)categoryIndexs;
-(void)setCategoryIndexs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
@end

