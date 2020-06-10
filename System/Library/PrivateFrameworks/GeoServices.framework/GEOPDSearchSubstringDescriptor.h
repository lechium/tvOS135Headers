/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:05 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray;

@interface GEOPDSearchSubstringDescriptor : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _spanDatas;
	int _beginIndex;
	int _endIndex;
	int _stringType;

}

@property (assign,nonatomic) int stringType; 
@property (assign,nonatomic) int beginIndex; 
@property (assign,nonatomic) int endIndex; 
@property (nonatomic,retain) NSMutableArray * spanDatas; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)spanDataType;
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
-(NSMutableArray *)spanDatas;
-(void)addSpanData:(id)arg1 ;
-(unsigned long long)spanDatasCount;
-(void)clearSpanDatas;
-(id)spanDataAtIndex:(unsigned long long)arg1 ;
-(int)stringType;
-(void)setStringType:(int)arg1 ;
-(id)stringTypeAsString:(int)arg1 ;
-(int)StringAsStringType:(id)arg1 ;
-(int)beginIndex;
-(void)setBeginIndex:(int)arg1 ;
-(int)endIndex;
-(void)setEndIndex:(int)arg1 ;
-(void)setSpanDatas:(NSMutableArray *)arg1 ;
@end

