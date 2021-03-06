/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:09 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOAddressCorrectionUpdateResponse : PBCodable <NSCopying> {

	unsigned _retryScheduleInDays;
	SCD_Struct_GE93 _flags;

}

@property (assign,nonatomic) BOOL hasRetryScheduleInDays; 
@property (assign,nonatomic) unsigned retryScheduleInDays; 
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
-(unsigned)retryScheduleInDays;
-(void)setRetryScheduleInDays:(unsigned)arg1 ;
-(void)setHasRetryScheduleInDays:(BOOL)arg1 ;
-(BOOL)hasRetryScheduleInDays;
@end

