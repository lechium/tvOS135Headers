/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:35 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray, NSString;

@interface GEOTransitTicketingSegment : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _paths;
	NSString* _segmentName;
	NSString* _ticketingUrl;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_paths : 1;
		unsigned read_segmentName : 1;
		unsigned read_ticketingUrl : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_paths : 1;
		unsigned wrote_segmentName : 1;
		unsigned wrote_ticketingUrl : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasTicketingUrl; 
@property (nonatomic,retain) NSString * ticketingUrl; 
@property (nonatomic,readonly) BOOL hasSegmentName; 
@property (nonatomic,retain) NSString * segmentName; 
@property (nonatomic,retain) NSMutableArray * paths; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)pathType;
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
-(void)_readTicketingUrl;
-(void)_readSegmentName;
-(void)_readPaths;
-(void)_addNoFlagsPath:(id)arg1 ;
-(NSString *)ticketingUrl;
-(NSString *)segmentName;
-(void)setTicketingUrl:(NSString *)arg1 ;
-(void)setSegmentName:(NSString *)arg1 ;
-(unsigned long long)pathsCount;
-(void)clearPaths;
-(id)pathAtIndex:(unsigned long long)arg1 ;
-(void)addPath:(id)arg1 ;
-(NSMutableArray *)paths;
-(BOOL)hasTicketingUrl;
-(BOOL)hasSegmentName;
-(void)setPaths:(NSMutableArray *)arg1 ;
@end

