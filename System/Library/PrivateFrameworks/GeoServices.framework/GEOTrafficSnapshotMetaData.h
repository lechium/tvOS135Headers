/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:37 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString, NSMutableArray;

@interface GEOTrafficSnapshotMetaData : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSString* _basemapId;
	NSString* _branchId;
	NSString* _environment;
	NSString* _feedId;
	NSString* _isoCountryCode;
	unsigned long long _publishTime;
	NSMutableArray* _regions;
	NSString* _snapshotId;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _vendor;
	struct {
		unsigned has_publishTime : 1;
		unsigned has_vendor : 1;
		unsigned read_basemapId : 1;
		unsigned read_branchId : 1;
		unsigned read_environment : 1;
		unsigned read_feedId : 1;
		unsigned read_isoCountryCode : 1;
		unsigned read_regions : 1;
		unsigned read_snapshotId : 1;
		unsigned wrote_basemapId : 1;
		unsigned wrote_branchId : 1;
		unsigned wrote_environment : 1;
		unsigned wrote_feedId : 1;
		unsigned wrote_isoCountryCode : 1;
		unsigned wrote_publishTime : 1;
		unsigned wrote_regions : 1;
		unsigned wrote_snapshotId : 1;
		unsigned wrote_vendor : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasPublishTime; 
@property (assign,nonatomic) unsigned long long publishTime; 
@property (nonatomic,readonly) BOOL hasFeedId; 
@property (nonatomic,retain) NSString * feedId; 
@property (nonatomic,readonly) BOOL hasIsoCountryCode; 
@property (nonatomic,retain) NSString * isoCountryCode; 
@property (nonatomic,readonly) BOOL hasBranchId; 
@property (nonatomic,retain) NSString * branchId; 
@property (nonatomic,readonly) BOOL hasEnvironment; 
@property (nonatomic,retain) NSString * environment; 
@property (nonatomic,readonly) BOOL hasSnapshotId; 
@property (nonatomic,retain) NSString * snapshotId; 
@property (assign,nonatomic) BOOL hasVendor; 
@property (assign,nonatomic) int vendor; 
@property (nonatomic,retain) NSMutableArray * regions; 
@property (nonatomic,readonly) BOOL hasBasemapId; 
@property (nonatomic,retain) NSString * basemapId; 
+(BOOL)isValid:(id)arg1 ;
+(Class)regionsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)environment;
-(void)setEnvironment:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)isoCountryCode;
-(void)setIsoCountryCode:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)regions;
-(int)vendor;
-(void)clearRegions;
-(void)readAll:(BOOL)arg1 ;
-(unsigned long long)regionsCount;
-(BOOL)hasBasemapId;
-(NSString *)basemapId;
-(void)_readFeedId;
-(void)_readIsoCountryCode;
-(void)_readBranchId;
-(void)_readEnvironment;
-(void)_readSnapshotId;
-(void)_readRegions;
-(void)_addNoFlagsRegions:(id)arg1 ;
-(void)_readBasemapId;
-(NSString *)feedId;
-(NSString *)branchId;
-(NSString *)snapshotId;
-(void)setFeedId:(NSString *)arg1 ;
-(void)setBranchId:(NSString *)arg1 ;
-(void)setSnapshotId:(NSString *)arg1 ;
-(id)regionsAtIndex:(unsigned long long)arg1 ;
-(void)addRegions:(id)arg1 ;
-(void)setBasemapId:(NSString *)arg1 ;
-(unsigned long long)publishTime;
-(void)setPublishTime:(unsigned long long)arg1 ;
-(void)setHasPublishTime:(BOOL)arg1 ;
-(BOOL)hasPublishTime;
-(BOOL)hasFeedId;
-(BOOL)hasIsoCountryCode;
-(BOOL)hasBranchId;
-(BOOL)hasEnvironment;
-(BOOL)hasSnapshotId;
-(void)setVendor:(int)arg1 ;
-(void)setHasVendor:(BOOL)arg1 ;
-(BOOL)hasVendor;
-(id)vendorAsString:(int)arg1 ;
-(int)StringAsVendor:(id)arg1 ;
-(void)setRegions:(NSMutableArray *)arg1 ;
@end
