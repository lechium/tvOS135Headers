/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:34 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreLocationProtobuf/CoreLocationProtobuf-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CLPMeta, CLPPressure, CLPLocation;

@interface CLPPressureCollectionRequest : PBRequest <NSCopying> {

	CLPMeta* _meta;
	CLPPressure* _pressure;
	CLPLocation* _pressureLocation;

}

@property (nonatomic,retain) CLPMeta * meta;                              //@synthesize meta=_meta - In the implementation block
@property (nonatomic,retain) CLPPressure * pressure;                      //@synthesize pressure=_pressure - In the implementation block
@property (nonatomic,retain) CLPLocation * pressureLocation;              //@synthesize pressureLocation=_pressureLocation - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(CLPPressure *)pressure;
-(void)setMeta:(CLPMeta *)arg1 ;
-(CLPMeta *)meta;
-(void)setPressure:(CLPPressure *)arg1 ;
-(void)setPressureLocation:(CLPLocation *)arg1 ;
-(CLPLocation *)pressureLocation;
@end

