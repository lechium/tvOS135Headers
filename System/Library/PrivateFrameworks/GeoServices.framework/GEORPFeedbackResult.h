/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:06 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEORPFeedbackIdLookupResult, GEORPFeedbackImageUploadResult, GEORPFeedbackLayoutConfigResult, GEORPFeedbackQueryResult, GEORPFeedbackSubmissionResult;

@interface GEORPFeedbackResult : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEORPFeedbackIdLookupResult* _idLookupResult;
	GEORPFeedbackImageUploadResult* _imageUploadResult;
	GEORPFeedbackLayoutConfigResult* _layoutConfigResult;
	GEORPFeedbackQueryResult* _queryResult;
	GEORPFeedbackSubmissionResult* _submissionResult;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_idLookupResult : 1;
		unsigned read_imageUploadResult : 1;
		unsigned read_layoutConfigResult : 1;
		unsigned read_queryResult : 1;
		unsigned read_submissionResult : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_idLookupResult : 1;
		unsigned wrote_imageUploadResult : 1;
		unsigned wrote_layoutConfigResult : 1;
		unsigned wrote_queryResult : 1;
		unsigned wrote_submissionResult : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasSubmissionResult; 
@property (nonatomic,retain) GEORPFeedbackSubmissionResult * submissionResult; 
@property (nonatomic,readonly) BOOL hasIdLookupResult; 
@property (nonatomic,retain) GEORPFeedbackIdLookupResult * idLookupResult; 
@property (nonatomic,readonly) BOOL hasQueryResult; 
@property (nonatomic,retain) GEORPFeedbackQueryResult * queryResult; 
@property (nonatomic,readonly) BOOL hasImageUploadResult; 
@property (nonatomic,retain) GEORPFeedbackImageUploadResult * imageUploadResult; 
@property (nonatomic,readonly) BOOL hasLayoutConfigResult; 
@property (nonatomic,retain) GEORPFeedbackLayoutConfigResult * layoutConfigResult; 
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
-(void)_readSubmissionResult;
-(void)_readIdLookupResult;
-(void)_readQueryResult;
-(void)_readImageUploadResult;
-(void)_readLayoutConfigResult;
-(GEORPFeedbackSubmissionResult *)submissionResult;
-(GEORPFeedbackIdLookupResult *)idLookupResult;
-(GEORPFeedbackQueryResult *)queryResult;
-(GEORPFeedbackImageUploadResult *)imageUploadResult;
-(GEORPFeedbackLayoutConfigResult *)layoutConfigResult;
-(void)setSubmissionResult:(GEORPFeedbackSubmissionResult *)arg1 ;
-(void)setIdLookupResult:(GEORPFeedbackIdLookupResult *)arg1 ;
-(void)setQueryResult:(GEORPFeedbackQueryResult *)arg1 ;
-(void)setImageUploadResult:(GEORPFeedbackImageUploadResult *)arg1 ;
-(void)setLayoutConfigResult:(GEORPFeedbackLayoutConfigResult *)arg1 ;
-(BOOL)hasSubmissionResult;
-(BOOL)hasIdLookupResult;
-(BOOL)hasQueryResult;
-(BOOL)hasImageUploadResult;
-(BOOL)hasLayoutConfigResult;
@end

