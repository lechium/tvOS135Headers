/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:55 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOLogMsgEventTelemetric : PBCodable <NSCopying> {

	NSMutableArray* _telemetricEntitys;

}

@property (nonatomic,retain) NSMutableArray * telemetricEntitys; 
+(BOOL)isValid:(id)arg1 ;
+(Class)telemetricEntityType;
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
-(void)addTelemetricEntity:(id)arg1 ;
-(unsigned long long)telemetricEntitysCount;
-(void)clearTelemetricEntitys;
-(id)telemetricEntityAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)telemetricEntitys;
-(void)setTelemetricEntitys:(NSMutableArray *)arg1 ;
@end

