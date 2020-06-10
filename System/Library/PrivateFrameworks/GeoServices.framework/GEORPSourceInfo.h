/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:36 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString;

@interface GEORPSourceInfo : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _sourceApplication;
	NSString* _sourceUrl;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_sourceApplication : 1;
		unsigned read_sourceUrl : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_sourceApplication : 1;
		unsigned wrote_sourceUrl : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasSourceApplication; 
@property (nonatomic,retain) NSString * sourceApplication; 
@property (nonatomic,readonly) BOOL hasSourceUrl; 
@property (nonatomic,retain) NSString * sourceUrl; 
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
-(void)_readSourceApplication;
-(void)_readSourceUrl;
-(NSString *)sourceApplication;
-(NSString *)sourceUrl;
-(void)setSourceApplication:(NSString *)arg1 ;
-(void)setSourceUrl:(NSString *)arg1 ;
-(BOOL)hasSourceApplication;
-(BOOL)hasSourceUrl;
@end

