/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:46 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOTransitSectionOption : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	SCD_Struct_GE19* _sections;
	unsigned _defaultSectionIndex;
	SCD_Struct_GE93 _flags;

}

@property (nonatomic,readonly) unsigned long long sectionsCount; 
@property (nonatomic,readonly) unsigned* sections; 
@property (assign,nonatomic) BOOL hasDefaultSectionIndex; 
@property (assign,nonatomic) unsigned defaultSectionIndex; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned*)sections;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(unsigned long long)sectionsCount;
-(void)clearSections;
-(unsigned)sectionAtIndex:(unsigned long long)arg1 ;
-(unsigned)defaultSectionIndex;
-(void)addSection:(unsigned)arg1 ;
-(void)setSections:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)setDefaultSectionIndex:(unsigned)arg1 ;
-(void)setHasDefaultSectionIndex:(BOOL)arg1 ;
-(BOOL)hasDefaultSectionIndex;
@end
