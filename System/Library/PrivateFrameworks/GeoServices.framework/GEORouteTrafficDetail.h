/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:51 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString;

@interface GEORouteTrafficDetail : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _spokenRouteName;
	NSString* _unabbreviatedRouteName;
	NSString* _writtenRouteName;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _routeTrafficCondition;
	struct {
		unsigned has_routeTrafficCondition : 1;
		unsigned read_unknownFields : 1;
		unsigned read_spokenRouteName : 1;
		unsigned read_unabbreviatedRouteName : 1;
		unsigned read_writtenRouteName : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_spokenRouteName : 1;
		unsigned wrote_unabbreviatedRouteName : 1;
		unsigned wrote_writtenRouteName : 1;
		unsigned wrote_routeTrafficCondition : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasRouteTrafficCondition; 
@property (assign,nonatomic) int routeTrafficCondition; 
@property (nonatomic,readonly) BOOL hasWrittenRouteName; 
@property (nonatomic,retain) NSString * writtenRouteName; 
@property (nonatomic,readonly) BOOL hasSpokenRouteName; 
@property (nonatomic,retain) NSString * spokenRouteName; 
@property (nonatomic,readonly) BOOL hasUnabbreviatedRouteName; 
@property (nonatomic,retain) NSString * unabbreviatedRouteName; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readWrittenRouteName;
-(void)_readSpokenRouteName;
-(void)_readUnabbreviatedRouteName;
-(NSString *)writtenRouteName;
-(NSString *)spokenRouteName;
-(NSString *)unabbreviatedRouteName;
-(void)setWrittenRouteName:(NSString *)arg1 ;
-(void)setSpokenRouteName:(NSString *)arg1 ;
-(void)setUnabbreviatedRouteName:(NSString *)arg1 ;
-(int)routeTrafficCondition;
-(void)setRouteTrafficCondition:(int)arg1 ;
-(void)setHasRouteTrafficCondition:(BOOL)arg1 ;
-(BOOL)hasRouteTrafficCondition;
-(id)routeTrafficConditionAsString:(int)arg1 ;
-(int)StringAsRouteTrafficCondition:(id)arg1 ;
-(BOOL)hasWrittenRouteName;
-(BOOL)hasSpokenRouteName;
-(BOOL)hasUnabbreviatedRouteName;
@end

