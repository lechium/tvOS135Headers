/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:43 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOCommonOptions : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	BOOL _excludeGuidance;
	BOOL _includeSnapScoreMetadataDebug;
	BOOL _includeSummaryForPredictedDestination;
	BOOL _includeTravelTimeAggressive;
	BOOL _includeTravelTimeConservative;
	BOOL _includeTravelTimeEstimate;
	struct {
		unsigned has_excludeGuidance : 1;
		unsigned has_includeSnapScoreMetadataDebug : 1;
		unsigned has_includeSummaryForPredictedDestination : 1;
		unsigned has_includeTravelTimeAggressive : 1;
		unsigned has_includeTravelTimeConservative : 1;
		unsigned has_includeTravelTimeEstimate : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasIncludeTravelTimeAggressive; 
@property (assign,nonatomic) BOOL includeTravelTimeAggressive; 
@property (assign,nonatomic) BOOL hasIncludeTravelTimeEstimate; 
@property (assign,nonatomic) BOOL includeTravelTimeEstimate; 
@property (assign,nonatomic) BOOL hasIncludeTravelTimeConservative; 
@property (assign,nonatomic) BOOL includeTravelTimeConservative; 
@property (assign,nonatomic) BOOL hasExcludeGuidance; 
@property (assign,nonatomic) BOOL excludeGuidance; 
@property (assign,nonatomic) BOOL hasIncludeSummaryForPredictedDestination; 
@property (assign,nonatomic) BOOL includeSummaryForPredictedDestination; 
@property (assign,nonatomic) BOOL hasIncludeSnapScoreMetadataDebug; 
@property (assign,nonatomic) BOOL includeSnapScoreMetadataDebug; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(BOOL)includeTravelTimeAggressive;
-(void)setIncludeTravelTimeAggressive:(BOOL)arg1 ;
-(void)setHasIncludeTravelTimeAggressive:(BOOL)arg1 ;
-(BOOL)hasIncludeTravelTimeAggressive;
-(BOOL)includeTravelTimeEstimate;
-(void)setIncludeTravelTimeEstimate:(BOOL)arg1 ;
-(void)setHasIncludeTravelTimeEstimate:(BOOL)arg1 ;
-(BOOL)hasIncludeTravelTimeEstimate;
-(BOOL)includeTravelTimeConservative;
-(void)setIncludeTravelTimeConservative:(BOOL)arg1 ;
-(void)setHasIncludeTravelTimeConservative:(BOOL)arg1 ;
-(BOOL)hasIncludeTravelTimeConservative;
-(BOOL)excludeGuidance;
-(void)setExcludeGuidance:(BOOL)arg1 ;
-(void)setHasExcludeGuidance:(BOOL)arg1 ;
-(BOOL)hasExcludeGuidance;
-(BOOL)includeSummaryForPredictedDestination;
-(void)setIncludeSummaryForPredictedDestination:(BOOL)arg1 ;
-(void)setHasIncludeSummaryForPredictedDestination:(BOOL)arg1 ;
-(BOOL)hasIncludeSummaryForPredictedDestination;
-(BOOL)includeSnapScoreMetadataDebug;
-(void)setIncludeSnapScoreMetadataDebug:(BOOL)arg1 ;
-(void)setHasIncludeSnapScoreMetadataDebug:(BOOL)arg1 ;
-(BOOL)hasIncludeSnapScoreMetadataDebug;
@end

