/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:38 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOCompanionCompatibility.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray, GEOClientMetrics, NSString, GEOPDDatasetABStatus, GEOTransitDecoderData, NSData, GEORouteDisplayHints, GEOETAServiceResponseSummary, GEOAlert, GEOSnapScoreMetadata, GEOStyleAttributes, GEOPBTransitRoutingIncidentMessage, GEOTransitRouteUpdateConfiguration;

@interface GEODirectionsResponse : PBCodable <GEOCompanionCompatibility, NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOProblemDetail* _problemDetails;
	unsigned long long _problemDetailsCount;
	unsigned long long _problemDetailsSpace;
	SCD_Struct_GE1* _supportedTransportTypes;
	GEOTimepoint _timepointUsed;
	NSMutableArray* _arrivalParameters;
	GEOClientMetrics* _clientMetrics;
	NSString* _dataVersion;
	GEOPDDatasetABStatus* _datasetAbStatus;
	NSString* _debugData;
	unsigned long long _debugLatencyMs;
	GEOTransitDecoderData* _decoderData;
	NSData* _directionsResponseID;
	GEORouteDisplayHints* _displayHints;
	GEOETAServiceResponseSummary* _etaServiceSummary;
	GEOAlert* _failureAlert;
	NSMutableArray* _incidentsOffRoutes;
	NSMutableArray* _incidentsOnRoutes;
	NSData* _nonRecommendedRoutesCache;
	NSMutableArray* _placeSearchResponses;
	NSMutableArray* _routes;
	NSMutableArray* _serviceGaps;
	NSString* _serviceVersion;
	NSData* _sessionState;
	GEOSnapScoreMetadata* _snapScoreMetadataDebug;
	GEOStyleAttributes* _styleAttributes;
	NSMutableArray* _suggestedRoutes;
	NSMutableArray* _trafficCameras;
	NSMutableArray* _trafficSignals;
	NSString* _transitDataVersion;
	GEOPBTransitRoutingIncidentMessage* _transitIncidentMessage;
	GEOTransitRouteUpdateConfiguration* _transitRouteUpdateConfiguration;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _instructionSignFillColor;
	int _liveRouteSavingsSeconds;
	int _localDistanceUnits;
	unsigned _selectedRouteIndex;
	int _status;
	BOOL _hasKhSegments;
	BOOL _isNavigable;
	BOOL _isOfflineResponse;
	BOOL _routeDeviatesFromOriginal;
	struct {
		unsigned has_timepointUsed : 1;
		unsigned has_debugLatencyMs : 1;
		unsigned has_instructionSignFillColor : 1;
		unsigned has_liveRouteSavingsSeconds : 1;
		unsigned has_localDistanceUnits : 1;
		unsigned has_selectedRouteIndex : 1;
		unsigned has_hasKhSegments : 1;
		unsigned has_isNavigable : 1;
		unsigned has_isOfflineResponse : 1;
		unsigned has_routeDeviatesFromOriginal : 1;
		unsigned read_unknownFields : 1;
		unsigned read_problemDetails : 1;
		unsigned read_supportedTransportTypes : 1;
		unsigned read_arrivalParameters : 1;
		unsigned read_clientMetrics : 1;
		unsigned read_dataVersion : 1;
		unsigned read_datasetAbStatus : 1;
		unsigned read_debugData : 1;
		unsigned read_decoderData : 1;
		unsigned read_directionsResponseID : 1;
		unsigned read_displayHints : 1;
		unsigned read_etaServiceSummary : 1;
		unsigned read_failureAlert : 1;
		unsigned read_incidentsOffRoutes : 1;
		unsigned read_incidentsOnRoutes : 1;
		unsigned read_nonRecommendedRoutesCache : 1;
		unsigned read_placeSearchResponses : 1;
		unsigned read_routes : 1;
		unsigned read_serviceGaps : 1;
		unsigned read_serviceVersion : 1;
		unsigned read_sessionState : 1;
		unsigned read_snapScoreMetadataDebug : 1;
		unsigned read_styleAttributes : 1;
		unsigned read_suggestedRoutes : 1;
		unsigned read_trafficCameras : 1;
		unsigned read_trafficSignals : 1;
		unsigned read_transitDataVersion : 1;
		unsigned read_transitIncidentMessage : 1;
		unsigned read_transitRouteUpdateConfiguration : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_problemDetails : 1;
		unsigned wrote_supportedTransportTypes : 1;
		unsigned wrote_timepointUsed : 1;
		unsigned wrote_arrivalParameters : 1;
		unsigned wrote_clientMetrics : 1;
		unsigned wrote_dataVersion : 1;
		unsigned wrote_datasetAbStatus : 1;
		unsigned wrote_debugData : 1;
		unsigned wrote_debugLatencyMs : 1;
		unsigned wrote_decoderData : 1;
		unsigned wrote_directionsResponseID : 1;
		unsigned wrote_displayHints : 1;
		unsigned wrote_etaServiceSummary : 1;
		unsigned wrote_failureAlert : 1;
		unsigned wrote_incidentsOffRoutes : 1;
		unsigned wrote_incidentsOnRoutes : 1;
		unsigned wrote_nonRecommendedRoutesCache : 1;
		unsigned wrote_placeSearchResponses : 1;
		unsigned wrote_routes : 1;
		unsigned wrote_serviceGaps : 1;
		unsigned wrote_serviceVersion : 1;
		unsigned wrote_sessionState : 1;
		unsigned wrote_snapScoreMetadataDebug : 1;
		unsigned wrote_styleAttributes : 1;
		unsigned wrote_suggestedRoutes : 1;
		unsigned wrote_trafficCameras : 1;
		unsigned wrote_trafficSignals : 1;
		unsigned wrote_transitDataVersion : 1;
		unsigned wrote_transitIncidentMessage : 1;
		unsigned wrote_transitRouteUpdateConfiguration : 1;
		unsigned wrote_instructionSignFillColor : 1;
		unsigned wrote_liveRouteSavingsSeconds : 1;
		unsigned wrote_localDistanceUnits : 1;
		unsigned wrote_selectedRouteIndex : 1;
		unsigned wrote_status : 1;
		unsigned wrote_hasKhSegments : 1;
		unsigned wrote_isNavigable : 1;
		unsigned wrote_isOfflineResponse : 1;
		unsigned wrote_routeDeviatesFromOriginal : 1;
	}  _flags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL hasDebugLatencyMs; 
@property (assign,nonatomic) unsigned long long debugLatencyMs; 
@property (nonatomic,readonly) BOOL hasEtaServiceSummary; 
@property (nonatomic,retain) GEOETAServiceResponseSummary * etaServiceSummary; 
@property (nonatomic,readonly) BOOL hasClientMetrics; 
@property (nonatomic,retain) GEOClientMetrics * clientMetrics; 
@property (assign,nonatomic) int status; 
@property (nonatomic,retain) NSMutableArray * routes; 
@property (nonatomic,retain) NSMutableArray * placeSearchResponses; 
@property (assign,nonatomic) BOOL hasLocalDistanceUnits; 
@property (assign,nonatomic) int localDistanceUnits; 
@property (assign,nonatomic) BOOL hasRouteDeviatesFromOriginal; 
@property (assign,nonatomic) BOOL routeDeviatesFromOriginal; 
@property (nonatomic,readonly) BOOL hasDirectionsResponseID; 
@property (nonatomic,retain) NSData * directionsResponseID; 
@property (assign,nonatomic) BOOL hasIsNavigable; 
@property (assign,nonatomic) BOOL isNavigable; 
@property (assign,nonatomic) BOOL hasInstructionSignFillColor; 
@property (assign,nonatomic) int instructionSignFillColor; 
@property (nonatomic,retain) NSMutableArray * incidentsOnRoutes; 
@property (nonatomic,retain) NSMutableArray * incidentsOffRoutes; 
@property (nonatomic,readonly) unsigned long long problemDetailsCount; 
@property (nonatomic,readonly) GEOProblemDetail* problemDetails; 
@property (nonatomic,readonly) unsigned long long supportedTransportTypesCount; 
@property (nonatomic,readonly) int* supportedTransportTypes; 
@property (nonatomic,retain) NSMutableArray * serviceGaps; 
@property (assign,nonatomic) BOOL hasSelectedRouteIndex; 
@property (assign,nonatomic) unsigned selectedRouteIndex; 
@property (nonatomic,readonly) BOOL hasTransitIncidentMessage; 
@property (nonatomic,retain) GEOPBTransitRoutingIncidentMessage * transitIncidentMessage; 
@property (nonatomic,readonly) BOOL hasDisplayHints; 
@property (nonatomic,retain) GEORouteDisplayHints * displayHints; 
@property (nonatomic,readonly) BOOL hasStyleAttributes; 
@property (nonatomic,retain) GEOStyleAttributes * styleAttributes; 
@property (nonatomic,readonly) BOOL hasSessionState; 
@property (nonatomic,retain) NSData * sessionState; 
@property (nonatomic,readonly) BOOL hasFailureAlert; 
@property (nonatomic,retain) GEOAlert * failureAlert; 
@property (assign,nonatomic) BOOL hasLiveRouteSavingsSeconds; 
@property (assign,nonatomic) int liveRouteSavingsSeconds; 
@property (nonatomic,readonly) BOOL hasDatasetAbStatus; 
@property (nonatomic,retain) GEOPDDatasetABStatus * datasetAbStatus; 
@property (nonatomic,retain) NSMutableArray * trafficCameras; 
@property (nonatomic,readonly) BOOL hasNonRecommendedRoutesCache; 
@property (nonatomic,retain) NSData * nonRecommendedRoutesCache; 
@property (assign,nonatomic) BOOL hasIsOfflineResponse; 
@property (assign,nonatomic) BOOL isOfflineResponse; 
@property (nonatomic,readonly) BOOL hasSnapScoreMetadataDebug; 
@property (nonatomic,retain) GEOSnapScoreMetadata * snapScoreMetadataDebug; 
@property (assign,nonatomic) BOOL hasHasKhSegments; 
@property (assign,nonatomic) BOOL hasKhSegments; 
@property (nonatomic,readonly) BOOL hasDebugData; 
@property (nonatomic,retain) NSString * debugData; 
@property (nonatomic,retain) NSMutableArray * arrivalParameters; 
@property (nonatomic,retain) NSMutableArray * trafficSignals; 
@property (nonatomic,readonly) BOOL hasTransitRouteUpdateConfiguration; 
@property (nonatomic,retain) GEOTransitRouteUpdateConfiguration * transitRouteUpdateConfiguration; 
@property (nonatomic,readonly) BOOL hasServiceVersion; 
@property (nonatomic,retain) NSString * serviceVersion; 
@property (nonatomic,readonly) BOOL hasDataVersion; 
@property (nonatomic,retain) NSString * dataVersion; 
@property (nonatomic,retain) NSMutableArray * suggestedRoutes; 
@property (assign,nonatomic) BOOL hasTimepointUsed; 
@property (assign,nonatomic) GEOTimepoint timepointUsed; 
@property (nonatomic,readonly) BOOL hasDecoderData; 
@property (nonatomic,retain) GEOTransitDecoderData * decoderData; 
@property (nonatomic,readonly) BOOL hasTransitDataVersion; 
@property (nonatomic,retain) NSString * transitDataVersion; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)routeType;
+(Class)placeSearchResponseType;
+(Class)incidentsOnRoutesType;
+(Class)incidentsOffRoutesType;
+(Class)serviceGapType;
+(Class)trafficCameraType;
+(Class)arrivalParametersType;
+(Class)trafficSignalType;
+(Class)suggestedRouteType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(int)status;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setStatus:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)statusAsString:(int)arg1 ;
-(int)StringAsStatus:(id)arg1 ;
-(void)clearLocations;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readDirectionsResponseID;
-(NSData *)directionsResponseID;
-(void)setDirectionsResponseID:(NSData *)arg1 ;
-(BOOL)hasDirectionsResponseID;
-(void)clearSensitiveFields;
-(GEOProblemDetail*)problemDetails;
-(unsigned long long)problemDetailsCount;
-(GEOAlert *)failureAlert;
-(GEOPBTransitRoutingIncidentMessage *)transitIncidentMessage;
-(GEOTransitDecoderData *)decoderData;
-(void)_readStyleAttributes;
-(GEOStyleAttributes *)styleAttributes;
-(void)setStyleAttributes:(GEOStyleAttributes *)arg1 ;
-(BOOL)hasStyleAttributes;
-(void)_readSessionState;
-(void)_readNonRecommendedRoutesCache;
-(NSData *)sessionState;
-(NSData *)nonRecommendedRoutesCache;
-(void)setSessionState:(NSData *)arg1 ;
-(void)setNonRecommendedRoutesCache:(NSData *)arg1 ;
-(BOOL)hasSessionState;
-(BOOL)hasNonRecommendedRoutesCache;
-(void)clearProblemDetails;
-(void)_readRoutes;
-(void)_addNoFlagsRoute:(id)arg1 ;
-(void)_readPlaceSearchResponses;
-(void)_addNoFlagsPlaceSearchResponse:(id)arg1 ;
-(void)_readIncidentsOnRoutes;
-(void)_addNoFlagsIncidentsOnRoutes:(id)arg1 ;
-(void)_readIncidentsOffRoutes;
-(void)_addNoFlagsIncidentsOffRoutes:(id)arg1 ;
-(void)_readProblemDetails;
-(void)_addNoFlagsProblemDetail:(GEOProblemDetail)arg1 ;
-(void)_readSupportedTransportTypes;
-(void)_addNoFlagsSupportedTransportType:(int)arg1 ;
-(void)_readServiceGaps;
-(void)_addNoFlagsServiceGap:(id)arg1 ;
-(void)_readTransitIncidentMessage;
-(void)_readDisplayHints;
-(void)_readFailureAlert;
-(void)_readDatasetAbStatus;
-(void)_readTrafficCameras;
-(void)_addNoFlagsTrafficCamera:(id)arg1 ;
-(void)_readSnapScoreMetadataDebug;
-(void)_readDebugData;
-(void)_readArrivalParameters;
-(void)_addNoFlagsArrivalParameters:(id)arg1 ;
-(void)_readTrafficSignals;
-(void)_addNoFlagsTrafficSignal:(id)arg1 ;
-(void)_readTransitRouteUpdateConfiguration;
-(void)_readServiceVersion;
-(void)_readDataVersion;
-(void)_readSuggestedRoutes;
-(void)_addNoFlagsSuggestedRoute:(id)arg1 ;
-(void)_readDecoderData;
-(void)_readTransitDataVersion;
-(GEORouteDisplayHints *)displayHints;
-(GEOPDDatasetABStatus *)datasetAbStatus;
-(GEOSnapScoreMetadata *)snapScoreMetadataDebug;
-(NSString *)debugData;
-(GEOTransitRouteUpdateConfiguration *)transitRouteUpdateConfiguration;
-(NSString *)serviceVersion;
-(NSString *)dataVersion;
-(NSString *)transitDataVersion;
-(GEOETAServiceResponseSummary *)etaServiceSummary;
-(GEOClientMetrics *)clientMetrics;
-(NSMutableArray *)placeSearchResponses;
-(unsigned long long)routesCount;
-(void)clearRoutes;
-(id)routeAtIndex:(unsigned long long)arg1 ;
-(void)addRoute:(id)arg1 ;
-(unsigned long long)placeSearchResponsesCount;
-(void)clearPlaceSearchResponses;
-(id)placeSearchResponseAtIndex:(unsigned long long)arg1 ;
-(void)addPlaceSearchResponse:(id)arg1 ;
-(unsigned long long)incidentsOnRoutesCount;
-(void)clearIncidentsOnRoutes;
-(id)incidentsOnRoutesAtIndex:(unsigned long long)arg1 ;
-(void)addIncidentsOnRoutes:(id)arg1 ;
-(unsigned long long)incidentsOffRoutesCount;
-(void)clearIncidentsOffRoutes;
-(id)incidentsOffRoutesAtIndex:(unsigned long long)arg1 ;
-(void)addIncidentsOffRoutes:(id)arg1 ;
-(GEOProblemDetail)problemDetailAtIndex:(unsigned long long)arg1 ;
-(void)addProblemDetail:(GEOProblemDetail)arg1 ;
-(unsigned long long)supportedTransportTypesCount;
-(void)clearSupportedTransportTypes;
-(int)supportedTransportTypeAtIndex:(unsigned long long)arg1 ;
-(void)addSupportedTransportType:(int)arg1 ;
-(unsigned long long)serviceGapsCount;
-(void)clearServiceGaps;
-(id)serviceGapAtIndex:(unsigned long long)arg1 ;
-(void)addServiceGap:(id)arg1 ;
-(void)setTransitIncidentMessage:(GEOPBTransitRoutingIncidentMessage *)arg1 ;
-(void)setDisplayHints:(GEORouteDisplayHints *)arg1 ;
-(void)setFailureAlert:(GEOAlert *)arg1 ;
-(void)setDatasetAbStatus:(GEOPDDatasetABStatus *)arg1 ;
-(unsigned long long)trafficCamerasCount;
-(void)clearTrafficCameras;
-(id)trafficCameraAtIndex:(unsigned long long)arg1 ;
-(void)addTrafficCamera:(id)arg1 ;
-(void)setSnapScoreMetadataDebug:(GEOSnapScoreMetadata *)arg1 ;
-(void)setDebugData:(NSString *)arg1 ;
-(unsigned long long)arrivalParametersCount;
-(void)clearArrivalParameters;
-(id)arrivalParametersAtIndex:(unsigned long long)arg1 ;
-(void)addArrivalParameters:(id)arg1 ;
-(unsigned long long)trafficSignalsCount;
-(void)clearTrafficSignals;
-(id)trafficSignalAtIndex:(unsigned long long)arg1 ;
-(void)addTrafficSignal:(id)arg1 ;
-(void)setTransitRouteUpdateConfiguration:(GEOTransitRouteUpdateConfiguration *)arg1 ;
-(void)setServiceVersion:(NSString *)arg1 ;
-(void)setDataVersion:(NSString *)arg1 ;
-(unsigned long long)suggestedRoutesCount;
-(void)clearSuggestedRoutes;
-(id)suggestedRouteAtIndex:(unsigned long long)arg1 ;
-(void)addSuggestedRoute:(id)arg1 ;
-(void)setDecoderData:(GEOTransitDecoderData *)arg1 ;
-(void)setTransitDataVersion:(NSString *)arg1 ;
-(void)setEtaServiceSummary:(GEOETAServiceResponseSummary *)arg1 ;
-(void)setClientMetrics:(GEOClientMetrics *)arg1 ;
-(NSMutableArray *)routes;
-(NSMutableArray *)incidentsOnRoutes;
-(NSMutableArray *)incidentsOffRoutes;
-(NSMutableArray *)serviceGaps;
-(NSMutableArray *)trafficCameras;
-(NSMutableArray *)arrivalParameters;
-(NSMutableArray *)trafficSignals;
-(NSMutableArray *)suggestedRoutes;
-(void)_readEtaServiceSummary;
-(void)_readClientMetrics;
-(void)setRoutes:(NSMutableArray *)arg1 ;
-(void)setPlaceSearchResponses:(NSMutableArray *)arg1 ;
-(int)localDistanceUnits;
-(void)setLocalDistanceUnits:(int)arg1 ;
-(void)setHasLocalDistanceUnits:(BOOL)arg1 ;
-(BOOL)hasLocalDistanceUnits;
-(id)localDistanceUnitsAsString:(int)arg1 ;
-(int)StringAsLocalDistanceUnits:(id)arg1 ;
-(BOOL)routeDeviatesFromOriginal;
-(void)setRouteDeviatesFromOriginal:(BOOL)arg1 ;
-(void)setHasRouteDeviatesFromOriginal:(BOOL)arg1 ;
-(BOOL)hasRouteDeviatesFromOriginal;
-(BOOL)isNavigable;
-(void)setIsNavigable:(BOOL)arg1 ;
-(void)setHasIsNavigable:(BOOL)arg1 ;
-(BOOL)hasIsNavigable;
-(int)instructionSignFillColor;
-(void)setInstructionSignFillColor:(int)arg1 ;
-(void)setHasInstructionSignFillColor:(BOOL)arg1 ;
-(BOOL)hasInstructionSignFillColor;
-(id)instructionSignFillColorAsString:(int)arg1 ;
-(int)StringAsInstructionSignFillColor:(id)arg1 ;
-(void)setIncidentsOnRoutes:(NSMutableArray *)arg1 ;
-(void)setIncidentsOffRoutes:(NSMutableArray *)arg1 ;
-(void)setProblemDetails:(GEOProblemDetail*)arg1 count:(unsigned long long)arg2 ;
-(int*)supportedTransportTypes;
-(void)setSupportedTransportTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)supportedTransportTypesAsString:(int)arg1 ;
-(int)StringAsSupportedTransportTypes:(id)arg1 ;
-(void)setServiceGaps:(NSMutableArray *)arg1 ;
-(unsigned)selectedRouteIndex;
-(void)setSelectedRouteIndex:(unsigned)arg1 ;
-(void)setHasSelectedRouteIndex:(BOOL)arg1 ;
-(BOOL)hasSelectedRouteIndex;
-(BOOL)hasTransitIncidentMessage;
-(BOOL)hasDisplayHints;
-(BOOL)hasFailureAlert;
-(int)liveRouteSavingsSeconds;
-(void)setLiveRouteSavingsSeconds:(int)arg1 ;
-(void)setHasLiveRouteSavingsSeconds:(BOOL)arg1 ;
-(BOOL)hasLiveRouteSavingsSeconds;
-(BOOL)hasDatasetAbStatus;
-(void)setTrafficCameras:(NSMutableArray *)arg1 ;
-(BOOL)isOfflineResponse;
-(void)setIsOfflineResponse:(BOOL)arg1 ;
-(void)setHasIsOfflineResponse:(BOOL)arg1 ;
-(BOOL)hasIsOfflineResponse;
-(BOOL)hasSnapScoreMetadataDebug;
-(BOOL)hasKhSegments;
-(void)setHasKhSegments:(BOOL)arg1 ;
-(void)setHasHasKhSegments:(BOOL)arg1 ;
-(BOOL)hasHasKhSegments;
-(BOOL)hasDebugData;
-(void)setArrivalParameters:(NSMutableArray *)arg1 ;
-(void)setTrafficSignals:(NSMutableArray *)arg1 ;
-(BOOL)hasTransitRouteUpdateConfiguration;
-(BOOL)hasServiceVersion;
-(BOOL)hasDataVersion;
-(void)setSuggestedRoutes:(NSMutableArray *)arg1 ;
-(GEOTimepoint)timepointUsed;
-(void)setTimepointUsed:(GEOTimepoint)arg1 ;
-(void)setHasTimepointUsed:(BOOL)arg1 ;
-(BOOL)hasTimepointUsed;
-(BOOL)hasDecoderData;
-(BOOL)hasTransitDataVersion;
-(unsigned long long)debugLatencyMs;
-(void)setDebugLatencyMs:(unsigned long long)arg1 ;
-(void)setHasDebugLatencyMs:(BOOL)arg1 ;
-(BOOL)hasDebugLatencyMs;
-(BOOL)hasEtaServiceSummary;
-(BOOL)hasClientMetrics;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(id)_destinationMapItem;
-(id)instanceCompatibleWithProtocolVersion:(unsigned long long)arg1 ;
@end

