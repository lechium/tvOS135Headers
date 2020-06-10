/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:14 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOLogMsgStateTileSet : PBCodable <NSCopying> {

	NSMutableArray* _tileSetInfos;

}

@property (nonatomic,retain) NSMutableArray * tileSetInfos; 
+(BOOL)isValid:(id)arg1 ;
+(Class)tileSetInfoType;
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
-(NSMutableArray *)tileSetInfos;
-(void)setTileSetInfos:(NSMutableArray *)arg1 ;
-(void)addTileSetInfo:(id)arg1 ;
-(unsigned long long)tileSetInfosCount;
-(void)clearTileSetInfos;
-(id)tileSetInfoAtIndex:(unsigned long long)arg1 ;
@end

