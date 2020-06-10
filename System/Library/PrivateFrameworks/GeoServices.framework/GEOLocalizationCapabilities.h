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

@interface GEOLocalizationCapabilities : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	SCD_Struct_GE1* _supportedPhoneticTypes;

}

@property (nonatomic,readonly) unsigned long long supportedPhoneticTypesCount; 
@property (nonatomic,readonly) int* supportedPhoneticTypes; 
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
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(unsigned long long)supportedPhoneticTypesCount;
-(void)clearSupportedPhoneticTypes;
-(int)supportedPhoneticTypeAtIndex:(unsigned long long)arg1 ;
-(void)addSupportedPhoneticType:(int)arg1 ;
-(int*)supportedPhoneticTypes;
-(void)setSupportedPhoneticTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)supportedPhoneticTypesAsString:(int)arg1 ;
-(int)StringAsSupportedPhoneticTypes:(id)arg1 ;
@end
