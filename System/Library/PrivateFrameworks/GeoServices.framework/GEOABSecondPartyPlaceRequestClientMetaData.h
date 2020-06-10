/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:15 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray, GEOPDABClientDatasetMetadata;

@interface GEOABSecondPartyPlaceRequestClientMetaData : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _clientConfigs;
	GEOPDABClientDatasetMetadata* _clientDatasetMetadata;
	NSMutableArray* _serverAbAssignments;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_clientConfigs : 1;
		unsigned read_clientDatasetMetadata : 1;
		unsigned read_serverAbAssignments : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_clientConfigs : 1;
		unsigned wrote_clientDatasetMetadata : 1;
		unsigned wrote_serverAbAssignments : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * serverAbAssignments; 
@property (nonatomic,retain) NSMutableArray * clientConfigs; 
@property (nonatomic,readonly) BOOL hasClientDatasetMetadata; 
@property (nonatomic,retain) GEOPDABClientDatasetMetadata * clientDatasetMetadata; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)serverAbAssignmentType;
+(Class)clientConfigType;
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
-(GEOPDABClientDatasetMetadata *)clientDatasetMetadata;
-(void)_readServerAbAssignments;
-(void)_addNoFlagsServerAbAssignment:(id)arg1 ;
-(void)_readClientConfigs;
-(void)_addNoFlagsClientConfig:(id)arg1 ;
-(void)_readClientDatasetMetadata;
-(unsigned long long)serverAbAssignmentsCount;
-(void)clearServerAbAssignments;
-(id)serverAbAssignmentAtIndex:(unsigned long long)arg1 ;
-(void)addServerAbAssignment:(id)arg1 ;
-(unsigned long long)clientConfigsCount;
-(void)clearClientConfigs;
-(id)clientConfigAtIndex:(unsigned long long)arg1 ;
-(void)addClientConfig:(id)arg1 ;
-(void)setClientDatasetMetadata:(GEOPDABClientDatasetMetadata *)arg1 ;
-(NSMutableArray *)serverAbAssignments;
-(NSMutableArray *)clientConfigs;
-(void)setServerAbAssignments:(NSMutableArray *)arg1 ;
-(void)setClientConfigs:(NSMutableArray *)arg1 ;
-(BOOL)hasClientDatasetMetadata;
@end

