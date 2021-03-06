/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:01 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray, NSString, GEOPDUser;

@interface GEOPDTip : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _snippets;
	NSString* _tipId;
	double _tipTime;
	GEOPDUser* _tipster;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned has_tipTime : 1;
		unsigned read_unknownFields : 1;
		unsigned read_snippets : 1;
		unsigned read_tipId : 1;
		unsigned read_tipster : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_snippets : 1;
		unsigned wrote_tipId : 1;
		unsigned wrote_tipTime : 1;
		unsigned wrote_tipster : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * snippets; 
@property (assign,nonatomic) BOOL hasTipTime; 
@property (assign,nonatomic) double tipTime; 
@property (nonatomic,readonly) BOOL hasTipster; 
@property (nonatomic,retain) GEOPDUser * tipster; 
@property (nonatomic,readonly) BOOL hasTipId; 
@property (nonatomic,retain) NSString * tipId; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(id)tipsForPlaceData:(id)arg1 ;
+(Class)snippetType;
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
-(NSMutableArray *)snippets;
-(BOOL)hasTipTime;
-(double)tipTime;
-(GEOPDUser *)tipster;
-(BOOL)hasTipId;
-(NSString *)tipId;
-(void)_readSnippets;
-(void)_addNoFlagsSnippet:(id)arg1 ;
-(unsigned long long)snippetsCount;
-(void)clearSnippets;
-(id)snippetAtIndex:(unsigned long long)arg1 ;
-(void)addSnippet:(id)arg1 ;
-(void)setSnippets:(NSMutableArray *)arg1 ;
-(void)_readTipster;
-(void)_readTipId;
-(void)setTipster:(GEOPDUser *)arg1 ;
-(void)setTipId:(NSString *)arg1 ;
-(void)setTipTime:(double)arg1 ;
-(void)setHasTipTime:(BOOL)arg1 ;
-(BOOL)hasTipster;
@end

