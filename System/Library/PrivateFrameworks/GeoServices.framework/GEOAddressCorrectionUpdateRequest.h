/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:53 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString, NSMutableArray;

@interface GEOAddressCorrectionUpdateRequest : PBRequest <NSCopying> {

	PBDataReader* _reader;
	NSString* _addressID;
	NSMutableArray* _addressResults;
	NSMutableArray* _significantLocations;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _correctionStatus;
	struct {
		unsigned has_correctionStatus : 1;
		unsigned read_addressID : 1;
		unsigned read_addressResults : 1;
		unsigned read_significantLocations : 1;
		unsigned wrote_addressID : 1;
		unsigned wrote_addressResults : 1;
		unsigned wrote_significantLocations : 1;
		unsigned wrote_correctionStatus : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasCorrectionStatus; 
@property (assign,nonatomic) int correctionStatus; 
@property (nonatomic,retain) NSMutableArray * significantLocations; 
@property (nonatomic,readonly) BOOL hasAddressID; 
@property (nonatomic,retain) NSString * addressID; 
@property (nonatomic,retain) NSMutableArray * addressResults; 
+(BOOL)isValid:(id)arg1 ;
+(Class)significantLocationType;
+(Class)addressResultType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)clearSensitiveFields;
-(void)_readSignificantLocations;
-(void)_addNoFlagsSignificantLocation:(id)arg1 ;
-(void)_readAddressID;
-(void)_readAddressResults;
-(void)_addNoFlagsAddressResult:(id)arg1 ;
-(NSString *)addressID;
-(NSMutableArray *)significantLocations;
-(NSMutableArray *)addressResults;
-(unsigned long long)significantLocationsCount;
-(void)clearSignificantLocations;
-(id)significantLocationAtIndex:(unsigned long long)arg1 ;
-(void)addSignificantLocation:(id)arg1 ;
-(void)setAddressID:(NSString *)arg1 ;
-(unsigned long long)addressResultsCount;
-(void)clearAddressResults;
-(id)addressResultAtIndex:(unsigned long long)arg1 ;
-(void)addAddressResult:(id)arg1 ;
-(int)correctionStatus;
-(void)setCorrectionStatus:(int)arg1 ;
-(void)setHasCorrectionStatus:(BOOL)arg1 ;
-(BOOL)hasCorrectionStatus;
-(id)correctionStatusAsString:(int)arg1 ;
-(int)StringAsCorrectionStatus:(id)arg1 ;
-(void)setSignificantLocations:(NSMutableArray *)arg1 ;
-(BOOL)hasAddressID;
-(void)setAddressResults:(NSMutableArray *)arg1 ;
@end

