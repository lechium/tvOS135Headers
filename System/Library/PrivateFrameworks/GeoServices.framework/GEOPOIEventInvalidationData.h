/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:53 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface GEOPOIEventInvalidationData : PBCodable <NSCopying> {

	NSData* _cacheInvalidationData;

}

@property (nonatomic,readonly) BOOL hasCacheInvalidationData; 
@property (nonatomic,retain) NSData * cacheInvalidationData; 
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
-(NSData *)cacheInvalidationData;
-(void)setCacheInvalidationData:(NSData *)arg1 ;
-(BOOL)hasCacheInvalidationData;
@end
