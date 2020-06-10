/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:09 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOFormattedString, NSData;

@interface GEOTransitRouteUpdateAlert : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOFormattedString* _content;
	NSData* _identifier;
	GEOFormattedString* _title;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_content : 1;
		unsigned read_identifier : 1;
		unsigned read_title : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_content : 1;
		unsigned wrote_identifier : 1;
		unsigned wrote_title : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) GEOFormattedString * title; 
@property (nonatomic,readonly) BOOL hasContent; 
@property (nonatomic,retain) GEOFormattedString * content; 
@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSData * identifier; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(NSData *)identifier;
-(void)setIdentifier:(NSData *)arg1 ;
-(GEOFormattedString *)content;
-(id)dictionaryRepresentation;
-(GEOFormattedString *)title;
-(void)setTitle:(GEOFormattedString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setContent:(GEOFormattedString *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readTitle;
-(BOOL)hasTitle;
-(BOOL)hasIdentifier;
-(void)_readIdentifier;
-(void)_readContent;
-(BOOL)hasContent;
@end

