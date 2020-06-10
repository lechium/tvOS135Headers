/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:46 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEODirectionsCollectionRequest : PBRequest <NSCopying> {

	NSMutableArray* _requestElements;

}

@property (nonatomic,retain) NSMutableArray * requestElements; 
+(BOOL)isValid:(id)arg1 ;
+(Class)requestElementsType;
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
-(void)readAll:(BOOL)arg1 ;
-(void)addRequestElements:(id)arg1 ;
-(unsigned long long)requestElementsCount;
-(void)clearRequestElements;
-(id)requestElementsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)requestElements;
-(void)setRequestElements:(NSMutableArray *)arg1 ;
@end

