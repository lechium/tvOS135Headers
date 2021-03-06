/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:02 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString, NSMutableArray;

@interface GEOAttribution : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOTileSetRegion* _regions;
	unsigned long long _regionsCount;
	unsigned long long _regionsSpace;
	NSString* _badgeChecksum;
	NSString* _badge;
	NSString* _logoChecksum;
	NSString* _logo;
	NSString* _name;
	NSMutableArray* _resources;
	NSString* _url;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _dataSet;
	unsigned _linkDisplayStringIndex;
	struct {
		unsigned has_dataSet : 1;
		unsigned has_linkDisplayStringIndex : 1;
		unsigned read_unknownFields : 1;
		unsigned read_regions : 1;
		unsigned read_badgeChecksum : 1;
		unsigned read_badge : 1;
		unsigned read_logoChecksum : 1;
		unsigned read_logo : 1;
		unsigned read_name : 1;
		unsigned read_resources : 1;
		unsigned read_url : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_regions : 1;
		unsigned wrote_badgeChecksum : 1;
		unsigned wrote_badge : 1;
		unsigned wrote_logoChecksum : 1;
		unsigned wrote_logo : 1;
		unsigned wrote_name : 1;
		unsigned wrote_resources : 1;
		unsigned wrote_url : 1;
		unsigned wrote_dataSet : 1;
		unsigned wrote_linkDisplayStringIndex : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasBadge; 
@property (nonatomic,retain) NSString * badge; 
@property (nonatomic,readonly) BOOL hasLogo; 
@property (nonatomic,retain) NSString * logo; 
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name; 
@property (nonatomic,readonly) BOOL hasUrl; 
@property (nonatomic,retain) NSString * url; 
@property (nonatomic,readonly) BOOL hasBadgeChecksum; 
@property (nonatomic,retain) NSString * badgeChecksum; 
@property (nonatomic,readonly) BOOL hasLogoChecksum; 
@property (nonatomic,retain) NSString * logoChecksum; 
@property (nonatomic,retain) NSMutableArray * resources; 
@property (nonatomic,readonly) unsigned long long regionsCount; 
@property (nonatomic,readonly) GEOTileSetRegion* regions; 
@property (assign,nonatomic) BOOL hasDataSet; 
@property (assign,nonatomic) unsigned dataSet; 
@property (assign,nonatomic) BOOL hasLinkDisplayStringIndex; 
@property (assign,nonatomic) unsigned linkDisplayStringIndex; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)resourceType;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)url;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setUrl:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasUrl;
-(BOOL)hasName;
-(GEOTileSetRegion*)regions;
-(void)clearRegions;
-(void)readAll:(BOOL)arg1 ;
-(unsigned long long)regionsCount;
-(GEOTileSetRegion)regionAtIndex:(unsigned long long)arg1 ;
-(void)addRegion:(GEOTileSetRegion)arg1 ;
-(void)setRegions:(GEOTileSetRegion*)arg1 count:(unsigned long long)arg2 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readName;
-(void)_readRegions;
-(NSString *)badge;
-(void)setBadge:(NSString *)arg1 ;
-(BOOL)hasBadge;
-(void)_addNoFlagsRegion:(GEOTileSetRegion)arg1 ;
-(void)_readUrl;
-(void)_readResources;
-(void)_addNoFlagsResource:(id)arg1 ;
-(unsigned long long)resourcesCount;
-(void)clearResources;
-(id)resourceAtIndex:(unsigned long long)arg1 ;
-(void)addResource:(id)arg1 ;
-(NSMutableArray *)resources;
-(void)setResources:(NSMutableArray *)arg1 ;
-(unsigned)dataSet;
-(void)setDataSet:(unsigned)arg1 ;
-(void)setHasDataSet:(BOOL)arg1 ;
-(BOOL)hasDataSet;
-(void)_readBadge;
-(BOOL)hasLogo;
-(void)_readLogo;
-(void)_readBadgeChecksum;
-(void)_readLogoChecksum;
-(NSString *)logo;
-(NSString *)badgeChecksum;
-(NSString *)logoChecksum;
-(void)setLogo:(NSString *)arg1 ;
-(void)setBadgeChecksum:(NSString *)arg1 ;
-(void)setLogoChecksum:(NSString *)arg1 ;
-(BOOL)hasBadgeChecksum;
-(BOOL)hasLogoChecksum;
-(unsigned)linkDisplayStringIndex;
-(void)setLinkDisplayStringIndex:(unsigned)arg1 ;
-(void)setHasLinkDisplayStringIndex:(BOOL)arg1 ;
-(BOOL)hasLinkDisplayStringIndex;
@end

