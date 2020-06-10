/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:08 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPDAutocompleteEntry, GEOPDBrowseCategory;

@interface GEOSearchCategoryStorage : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOPDAutocompleteEntry* _autocompleteEntry;
	GEOPDBrowseCategory* _browseCategory;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_autocompleteEntry : 1;
		unsigned read_browseCategory : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_autocompleteEntry : 1;
		unsigned wrote_browseCategory : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasBrowseCategory; 
@property (nonatomic,retain) GEOPDBrowseCategory * browseCategory; 
@property (nonatomic,readonly) BOOL hasAutocompleteEntry; 
@property (nonatomic,retain) GEOPDAutocompleteEntry * autocompleteEntry; 
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
-(void)clearSensitiveFields;
-(GEOPDAutocompleteEntry *)autocompleteEntry;
-(void)setAutocompleteEntry:(GEOPDAutocompleteEntry *)arg1 ;
-(BOOL)hasAutocompleteEntry;
-(id)initWithSearchCategory:(id)arg1 ;
-(void)setBrowseCategory:(GEOPDBrowseCategory *)arg1 ;
-(BOOL)hasBrowseCategory;
-(GEOPDBrowseCategory *)browseCategory;
-(void)_readAutocompleteEntry;
-(void)_readBrowseCategory;
@end

