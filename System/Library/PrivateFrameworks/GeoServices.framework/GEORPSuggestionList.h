/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:05 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEOPDPlaceRequest, GEOPDPlaceResponse, NSMutableArray, NSString;

@interface GEORPSuggestionList : PBCodable <NSCopying> {

	PBDataReader* _reader;
	GEOPDPlaceRequest* _autocompleteRequest;
	GEOPDPlaceResponse* _autocompleteResponse;
	NSMutableArray* _entrys;
	NSString* _query;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_autocompleteRequest : 1;
		unsigned read_autocompleteResponse : 1;
		unsigned read_entrys : 1;
		unsigned read_query : 1;
		unsigned wrote_autocompleteRequest : 1;
		unsigned wrote_autocompleteResponse : 1;
		unsigned wrote_entrys : 1;
		unsigned wrote_query : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasQuery; 
@property (nonatomic,retain) NSString * query; 
@property (nonatomic,retain) NSMutableArray * entrys; 
@property (nonatomic,readonly) BOOL hasAutocompleteRequest; 
@property (nonatomic,retain) GEOPDPlaceRequest * autocompleteRequest; 
@property (nonatomic,readonly) BOOL hasAutocompleteResponse; 
@property (nonatomic,retain) GEOPDPlaceResponse * autocompleteResponse; 
+(BOOL)isValid:(id)arg1 ;
+(Class)entryType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(NSString *)query;
-(id)dictionaryRepresentation;
-(void)setQuery:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)_readQuery;
-(BOOL)hasQuery;
-(void)setAutocompleteRequest:(GEOPDPlaceRequest *)arg1 ;
-(void)setAutocompleteResponse:(GEOPDPlaceResponse *)arg1 ;
-(void)_readEntrys;
-(void)_addNoFlagsEntry:(id)arg1 ;
-(void)_readAutocompleteRequest;
-(void)_readAutocompleteResponse;
-(GEOPDPlaceRequest *)autocompleteRequest;
-(GEOPDPlaceResponse *)autocompleteResponse;
-(unsigned long long)entrysCount;
-(void)clearEntrys;
-(id)entryAtIndex:(unsigned long long)arg1 ;
-(void)addEntry:(id)arg1 ;
-(NSMutableArray *)entrys;
-(void)setEntrys:(NSMutableArray *)arg1 ;
-(BOOL)hasAutocompleteRequest;
-(BOOL)hasAutocompleteResponse;
@end
