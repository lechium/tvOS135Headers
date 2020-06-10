/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:00 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray, NSArray, NSDictionary;

@interface GEOAdditionalEnabledMarkets : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _offlineMarkets;
	NSMutableArray* _transitMarkets;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_offlineMarkets : 1;
		unsigned read_transitMarkets : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_offlineMarkets : 1;
		unsigned wrote_transitMarkets : 1;
	}  _flags;

}

@property (nonatomic,readonly) NSArray * queryItems; 
@property (nonatomic,readonly) NSDictionary * queryParameters; 
@property (nonatomic,retain) NSMutableArray * transitMarkets; 
@property (nonatomic,retain) NSMutableArray * offlineMarkets; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(id)additionalEnabledMarkets;
+(Class)transitMarketType;
+(Class)offlineMarketType;
+(id)_additionalEnabledTransitMarkets;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSArray *)queryItems;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)reload;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(NSDictionary *)queryParameters;
-(void)_readTransitMarkets;
-(void)_addNoFlagsTransitMarket:(id)arg1 ;
-(void)_readOfflineMarkets;
-(void)_addNoFlagsOfflineMarket:(id)arg1 ;
-(NSMutableArray *)transitMarkets;
-(NSMutableArray *)offlineMarkets;
-(unsigned long long)transitMarketsCount;
-(void)clearTransitMarkets;
-(id)transitMarketAtIndex:(unsigned long long)arg1 ;
-(void)addTransitMarket:(id)arg1 ;
-(unsigned long long)offlineMarketsCount;
-(void)clearOfflineMarkets;
-(id)offlineMarketAtIndex:(unsigned long long)arg1 ;
-(void)addOfflineMarket:(id)arg1 ;
-(void)setTransitMarkets:(NSMutableArray *)arg1 ;
-(void)setOfflineMarkets:(NSMutableArray *)arg1 ;
@end

