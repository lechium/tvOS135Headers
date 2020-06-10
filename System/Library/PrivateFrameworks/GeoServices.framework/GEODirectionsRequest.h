/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:38 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPDABClientDatasetMetadata, GEOAdditionalEnabledMarkets, GEOClientCapabilities, GEOCommonOptions, GEOMapRegion, GEOLocation, NSMutableArray, GEODirectionsRequestFeedback, NSString, NSData, GEOOriginalRoute, GEORouteAttributes, GEOTrafficTrafficApiResponse, GEOTFTrafficSnapshot;

@interface GEODirectionsRequest : PBRequest <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOSessionID _sessionID;
	GEOPDABClientDatasetMetadata* _abClientMetadata;
	GEOAdditionalEnabledMarkets* _additionalEnabledMarkets;
	GEOClientCapabilities* _clientCapabilities;
	GEOCommonOptions* _commonOptions;
	GEOMapRegion* _currentMapRegion;
	GEOLocation* _currentUserLocation;
	NSMutableArray* _deviceHistoricalLocations;
	GEODirectionsRequestFeedback* _feedback;
	GEOLocation* _lastKnownRoadLocation;
	NSString* _loggedAbExperiment;
	NSData* _nonRecommendedRoutesCache;
	NSData* _originalDirectionsResponseID;
	NSData* _originalRouteID;
	NSData* _originalRouteZilchPoints;
	GEOOriginalRoute* _originalRoute;
	double _requestTime;
	GEORouteAttributes* _routeAttributes;
	NSMutableArray* _serviceTags;
	double _sessionRelativeTimestamp;
	NSData* _sessionState;
	GEOTrafficTrafficApiResponse* _trafficApiResponse;
	NSMutableArray* _trafficSnapshotIds;
	GEOTFTrafficSnapshot* _trafficSnapshot;
	NSMutableArray* _waypointTypeds;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _departureTime;
	unsigned _mainTransportTypeMaxRouteCount;
	int _nonRecommendedRoutesOption;
	int _originalRoutePurpose;
	unsigned _sequenceNumber;
	unsigned _timeSinceLastRerouteRequest;
	BOOL _getRouteForZilchPoints;
	BOOL _isFromAPI;
	BOOL _needLatency;
	BOOL _useLiveTrafficAsFallback;
	struct {
		unsigned has_sessionID : 1;
		unsigned has_requestTime : 1;
		unsigned has_sessionRelativeTimestamp : 1;
		unsigned has_departureTime : 1;
		unsigned has_mainTransportTypeMaxRouteCount : 1;
		unsigned has_nonRecommendedRoutesOption : 1;
		unsigned has_originalRoutePurpose : 1;
		unsigned has_sequenceNumber : 1;
		unsigned has_timeSinceLastRerouteRequest : 1;
		unsigned has_getRouteForZilchPoints : 1;
		unsigned has_isFromAPI : 1;
		unsigned has_needLatency : 1;
		unsigned has_useLiveTrafficAsFallback : 1;
		unsigned read_unknownFields : 1;
		unsigned read_abClientMetadata : 1;
		unsigned read_additionalEnabledMarkets : 1;
		unsigned read_clientCapabilities : 1;
		unsigned read_commonOptions : 1;
		unsigned read_currentMapRegion : 1;
		unsigned read_currentUserLocation : 1;
		unsigned read_deviceHistoricalLocations : 1;
		unsigned read_feedback : 1;
		unsigned read_lastKnownRoadLocation : 1;
		unsigned read_loggedAbExperiment : 1;
		unsigned read_nonRecommendedRoutesCache : 1;
		unsigned read_originalDirectionsResponseID : 1;
		unsigned read_originalRouteID : 1;
		unsigned read_originalRouteZilchPoints : 1;
		unsigned read_originalRoute : 1;
		unsigned read_routeAttributes : 1;
		unsigned read_serviceTags : 1;
		unsigned read_sessionState : 1;
		unsigned read_trafficApiResponse : 1;
		unsigned read_trafficSnapshotIds : 1;
		unsigned read_trafficSnapshot : 1;
		unsigned read_waypointTypeds : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_sessionID : 1;
		unsigned wrote_abClientMetadata : 1;
		unsigned wrote_additionalEnabledMarkets : 1;
		unsigned wrote_clientCapabilities : 1;
		unsigned wrote_commonOptions : 1;
		unsigned wrote_currentMapRegion : 1;
		unsigned wrote_currentUserLocation : 1;
		unsigned wrote_deviceHistoricalLocations : 1;
		unsigned wrote_feedback : 1;
		unsigned wrote_lastKnownRoadLocation : 1;
		unsigned wrote_loggedAbExperiment : 1;
		unsigned wrote_nonRecommendedRoutesCache : 1;
		unsigned wrote_originalDirectionsResponseID : 1;
		unsigned wrote_originalRouteID : 1;
		unsigned wrote_originalRouteZilchPoints : 1;
		unsigned wrote_originalRoute : 1;
		unsigned wrote_requestTime : 1;
		unsigned wrote_routeAttributes : 1;
		unsigned wrote_serviceTags : 1;
		unsigned wrote_sessionRelativeTimestamp : 1;
		unsigned wrote_sessionState : 1;
		unsigned wrote_trafficApiResponse : 1;
		unsigned wrote_trafficSnapshotIds : 1;
		unsigned wrote_trafficSnapshot : 1;
		unsigned wrote_waypointTypeds : 1;
		unsigned wrote_departureTime : 1;
		unsigned wrote_mainTransportTypeMaxRouteCount : 1;
		unsigned wrote_nonRecommendedRoutesOption : 1;
		unsigned wrote_originalRoutePurpose : 1;
		unsigned wrote_sequenceNumber : 1;
		unsigned wrote_timeSinceLastRerouteRequest : 1;
		unsigned wrote_getRouteForZilchPoints : 1;
		unsigned wrote_isFromAPI : 1;
		unsigned wrote_needLatency : 1;
		unsigned wrote_useLiveTrafficAsFallback : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasNeedLatency; 
@property (assign,nonatomic) BOOL needLatency; 
@property (nonatomic,readonly) BOOL hasTrafficSnapshot; 
@property (nonatomic,retain) GEOTFTrafficSnapshot * trafficSnapshot; 
@property (assign,nonatomic) BOOL hasUseLiveTrafficAsFallback; 
@property (assign,nonatomic) BOOL useLiveTrafficAsFallback; 
@property (assign,nonatomic) BOOL hasRequestTime; 
@property (assign,nonatomic) double requestTime; 
@property (nonatomic,readonly) BOOL hasRouteAttributes; 
@property (nonatomic,retain) GEORouteAttributes * routeAttributes; 
@property (assign,nonatomic) BOOL hasMainTransportTypeMaxRouteCount; 
@property (assign,nonatomic) unsigned mainTransportTypeMaxRouteCount; 
@property (nonatomic,readonly) BOOL hasCurrentUserLocation; 
@property (nonatomic,retain) GEOLocation * currentUserLocation; 
@property (nonatomic,readonly) BOOL hasCurrentMapRegion; 
@property (nonatomic,retain) GEOMapRegion * currentMapRegion; 
@property (nonatomic,readonly) BOOL hasOriginalRouteID; 
@property (nonatomic,retain) NSData * originalRouteID; 
@property (nonatomic,readonly) BOOL hasOriginalRouteZilchPoints; 
@property (nonatomic,retain) NSData * originalRouteZilchPoints; 
@property (assign,nonatomic) BOOL hasTimeSinceLastRerouteRequest; 
@property (assign,nonatomic) unsigned timeSinceLastRerouteRequest; 
@property (nonatomic,readonly) BOOL hasClientCapabilities; 
@property (nonatomic,retain) GEOClientCapabilities * clientCapabilities; 
@property (nonatomic,readonly) BOOL hasOriginalDirectionsResponseID; 
@property (nonatomic,retain) NSData * originalDirectionsResponseID; 
@property (assign,nonatomic) BOOL hasDepartureTime; 
@property (assign,nonatomic) int departureTime; 
@property (assign,nonatomic) BOOL hasGetRouteForZilchPoints; 
@property (assign,nonatomic) BOOL getRouteForZilchPoints; 
@property (assign,nonatomic) BOOL hasSessionID; 
@property (assign,nonatomic) GEOSessionID sessionID; 
@property (assign,nonatomic) BOOL hasSessionRelativeTimestamp; 
@property (assign,nonatomic) double sessionRelativeTimestamp; 
@property (nonatomic,readonly) BOOL hasFeedback; 
@property (nonatomic,retain) GEODirectionsRequestFeedback * feedback; 
@property (nonatomic,readonly) BOOL hasAdditionalEnabledMarkets; 
@property (nonatomic,retain) GEOAdditionalEnabledMarkets * additionalEnabledMarkets; 
@property (nonatomic,retain) NSMutableArray * waypointTypeds; 
@property (nonatomic,readonly) BOOL hasOriginalRoute; 
@property (nonatomic,retain) GEOOriginalRoute * originalRoute; 
@property (assign,nonatomic) BOOL hasSequenceNumber; 
@property (assign,nonatomic) unsigned sequenceNumber; 
@property (nonatomic,readonly) BOOL hasSessionState; 
@property (nonatomic,retain) NSData * sessionState; 
@property (assign,nonatomic) BOOL hasIsFromAPI; 
@property (assign,nonatomic) BOOL isFromAPI; 
@property (nonatomic,readonly) BOOL hasCommonOptions; 
@property (nonatomic,retain) GEOCommonOptions * commonOptions; 
@property (nonatomic,readonly) BOOL hasLoggedAbExperiment; 
@property (nonatomic,retain) NSString * loggedAbExperiment; 
@property (nonatomic,readonly) BOOL hasLastKnownRoadLocation; 
@property (nonatomic,retain) GEOLocation * lastKnownRoadLocation; 
@property (assign,nonatomic) BOOL hasOriginalRoutePurpose; 
@property (assign,nonatomic) int originalRoutePurpose; 
@property (nonatomic,readonly) BOOL hasAbClientMetadata; 
@property (nonatomic,retain) GEOPDABClientDatasetMetadata * abClientMetadata; 
@property (nonatomic,retain) NSMutableArray * deviceHistoricalLocations; 
@property (assign,nonatomic) BOOL hasNonRecommendedRoutesOption; 
@property (assign,nonatomic) int nonRecommendedRoutesOption; 
@property (nonatomic,readonly) BOOL hasNonRecommendedRoutesCache; 
@property (nonatomic,retain) NSData * nonRecommendedRoutesCache; 
@property (nonatomic,retain) NSMutableArray * serviceTags; 
@property (nonatomic,readonly) BOOL hasTrafficApiResponse; 
@property (nonatomic,retain) GEOTrafficTrafficApiResponse * trafficApiResponse; 
@property (nonatomic,retain) NSMutableArray * trafficSnapshotIds; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)waypointTypedType;
+(Class)deviceHistoricalLocationType;
+(Class)serviceTagType;
+(Class)trafficSnapshotIdsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(GEOSessionID)sessionID;
-(void)setSessionID:(GEOSessionID)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)sequenceNumber;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(void)setSequenceNumber:(unsigned)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasSequenceNumber:(BOOL)arg1 ;
-(BOOL)hasSequenceNumber;
-(void)setFeedback:(GEODirectionsRequestFeedback *)arg1 ;
-(GEODirectionsRequestFeedback *)feedback;
-(void)clearLocations;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setHasSessionID:(BOOL)arg1 ;
-(BOOL)hasSessionID;
-(void)clearSensitiveFields;
-(unsigned long long)deviceHistoricalLocationsCount;
-(NSMutableArray *)deviceHistoricalLocations;
-(void)_readOriginalDirectionsResponseID;
-(NSData *)originalDirectionsResponseID;
-(void)setOriginalDirectionsResponseID:(NSData *)arg1 ;
-(int)originalRoutePurpose;
-(void)setOriginalRoutePurpose:(int)arg1 ;
-(void)setHasOriginalRoutePurpose:(BOOL)arg1 ;
-(BOOL)hasOriginalRoutePurpose;
-(id)originalRoutePurposeAsString:(int)arg1 ;
-(int)StringAsOriginalRoutePurpose:(id)arg1 ;
-(BOOL)hasOriginalDirectionsResponseID;
-(void)initDefaultFeedbackInfo;
-(void)_readRouteAttributes;
-(void)_readCurrentUserLocation;
-(void)_readCurrentMapRegion;
-(void)_readOriginalRouteID;
-(void)_readOriginalRouteZilchPoints;
-(void)_readClientCapabilities;
-(void)_readFeedback;
-(void)_readAdditionalEnabledMarkets;
-(void)_readWaypointTypeds;
-(void)_addNoFlagsWaypointTyped:(id)arg1 ;
-(void)_readOriginalRoute;
-(void)_readSessionState;
-(void)_readCommonOptions;
-(void)_readLoggedAbExperiment;
-(void)_readLastKnownRoadLocation;
-(void)_readAbClientMetadata;
-(void)_readDeviceHistoricalLocations;
-(void)_addNoFlagsDeviceHistoricalLocation:(id)arg1 ;
-(void)_readNonRecommendedRoutesCache;
-(void)_readServiceTags;
-(void)_addNoFlagsServiceTag:(id)arg1 ;
-(void)_readTrafficApiResponse;
-(void)_readTrafficSnapshotIds;
-(void)_addNoFlagsTrafficSnapshotIds:(id)arg1 ;
-(GEORouteAttributes *)routeAttributes;
-(GEOLocation *)currentUserLocation;
-(GEOMapRegion *)currentMapRegion;
-(NSData *)originalRouteID;
-(NSData *)originalRouteZilchPoints;
-(GEOClientCapabilities *)clientCapabilities;
-(GEOAdditionalEnabledMarkets *)additionalEnabledMarkets;
-(GEOOriginalRoute *)originalRoute;
-(NSData *)sessionState;
-(GEOCommonOptions *)commonOptions;
-(NSString *)loggedAbExperiment;
-(GEOLocation *)lastKnownRoadLocation;
-(GEOPDABClientDatasetMetadata *)abClientMetadata;
-(NSData *)nonRecommendedRoutesCache;
-(GEOTrafficTrafficApiResponse *)trafficApiResponse;
-(NSMutableArray *)trafficSnapshotIds;
-(GEOTFTrafficSnapshot *)trafficSnapshot;
-(NSMutableArray *)waypointTypeds;
-(BOOL)hasCurrentUserLocation;
-(void)setCurrentUserLocation:(GEOLocation *)arg1 ;
-(BOOL)hasLastKnownRoadLocation;
-(void)setLastKnownRoadLocation:(GEOLocation *)arg1 ;
-(void)setRouteAttributes:(GEORouteAttributes *)arg1 ;
-(void)setCurrentMapRegion:(GEOMapRegion *)arg1 ;
-(void)setOriginalRouteID:(NSData *)arg1 ;
-(void)setOriginalRouteZilchPoints:(NSData *)arg1 ;
-(void)setClientCapabilities:(GEOClientCapabilities *)arg1 ;
-(void)setAdditionalEnabledMarkets:(GEOAdditionalEnabledMarkets *)arg1 ;
-(unsigned long long)waypointTypedsCount;
-(void)clearWaypointTypeds;
-(id)waypointTypedAtIndex:(unsigned long long)arg1 ;
-(void)addWaypointTyped:(id)arg1 ;
-(void)setOriginalRoute:(GEOOriginalRoute *)arg1 ;
-(void)setSessionState:(NSData *)arg1 ;
-(void)setCommonOptions:(GEOCommonOptions *)arg1 ;
-(void)setLoggedAbExperiment:(NSString *)arg1 ;
-(void)setAbClientMetadata:(GEOPDABClientDatasetMetadata *)arg1 ;
-(void)clearDeviceHistoricalLocations;
-(id)deviceHistoricalLocationAtIndex:(unsigned long long)arg1 ;
-(void)addDeviceHistoricalLocation:(id)arg1 ;
-(void)setNonRecommendedRoutesCache:(NSData *)arg1 ;
-(unsigned long long)serviceTagsCount;
-(void)clearServiceTags;
-(id)serviceTagAtIndex:(unsigned long long)arg1 ;
-(void)addServiceTag:(id)arg1 ;
-(void)setTrafficApiResponse:(GEOTrafficTrafficApiResponse *)arg1 ;
-(unsigned long long)trafficSnapshotIdsCount;
-(void)clearTrafficSnapshotIds;
-(id)trafficSnapshotIdsAtIndex:(unsigned long long)arg1 ;
-(void)addTrafficSnapshotIds:(id)arg1 ;
-(void)setTrafficSnapshot:(GEOTFTrafficSnapshot *)arg1 ;
-(NSMutableArray *)serviceTags;
-(void)_readTrafficSnapshot;
-(BOOL)hasRouteAttributes;
-(unsigned)mainTransportTypeMaxRouteCount;
-(void)setMainTransportTypeMaxRouteCount:(unsigned)arg1 ;
-(void)setHasMainTransportTypeMaxRouteCount:(BOOL)arg1 ;
-(BOOL)hasMainTransportTypeMaxRouteCount;
-(BOOL)hasCurrentMapRegion;
-(BOOL)hasOriginalRouteID;
-(BOOL)hasOriginalRouteZilchPoints;
-(unsigned)timeSinceLastRerouteRequest;
-(void)setTimeSinceLastRerouteRequest:(unsigned)arg1 ;
-(void)setHasTimeSinceLastRerouteRequest:(BOOL)arg1 ;
-(BOOL)hasTimeSinceLastRerouteRequest;
-(BOOL)hasClientCapabilities;
-(int)departureTime;
-(void)setDepartureTime:(int)arg1 ;
-(void)setHasDepartureTime:(BOOL)arg1 ;
-(BOOL)hasDepartureTime;
-(BOOL)getRouteForZilchPoints;
-(void)setGetRouteForZilchPoints:(BOOL)arg1 ;
-(void)setHasGetRouteForZilchPoints:(BOOL)arg1 ;
-(BOOL)hasGetRouteForZilchPoints;
-(double)sessionRelativeTimestamp;
-(void)setSessionRelativeTimestamp:(double)arg1 ;
-(void)setHasSessionRelativeTimestamp:(BOOL)arg1 ;
-(BOOL)hasSessionRelativeTimestamp;
-(BOOL)hasFeedback;
-(BOOL)hasAdditionalEnabledMarkets;
-(void)setWaypointTypeds:(NSMutableArray *)arg1 ;
-(BOOL)hasOriginalRoute;
-(BOOL)hasSessionState;
-(BOOL)isFromAPI;
-(void)setIsFromAPI:(BOOL)arg1 ;
-(void)setHasIsFromAPI:(BOOL)arg1 ;
-(BOOL)hasIsFromAPI;
-(BOOL)hasCommonOptions;
-(BOOL)hasLoggedAbExperiment;
-(BOOL)hasAbClientMetadata;
-(void)setDeviceHistoricalLocations:(NSMutableArray *)arg1 ;
-(int)nonRecommendedRoutesOption;
-(void)setNonRecommendedRoutesOption:(int)arg1 ;
-(void)setHasNonRecommendedRoutesOption:(BOOL)arg1 ;
-(BOOL)hasNonRecommendedRoutesOption;
-(id)nonRecommendedRoutesOptionAsString:(int)arg1 ;
-(int)StringAsNonRecommendedRoutesOption:(id)arg1 ;
-(BOOL)hasNonRecommendedRoutesCache;
-(void)setServiceTags:(NSMutableArray *)arg1 ;
-(BOOL)hasTrafficApiResponse;
-(void)setTrafficSnapshotIds:(NSMutableArray *)arg1 ;
-(BOOL)needLatency;
-(void)setNeedLatency:(BOOL)arg1 ;
-(void)setHasNeedLatency:(BOOL)arg1 ;
-(BOOL)hasNeedLatency;
-(BOOL)hasTrafficSnapshot;
-(BOOL)useLiveTrafficAsFallback;
-(void)setUseLiveTrafficAsFallback:(BOOL)arg1 ;
-(void)setHasUseLiveTrafficAsFallback:(BOOL)arg1 ;
-(BOOL)hasUseLiveTrafficAsFallback;
-(double)requestTime;
-(void)setRequestTime:(double)arg1 ;
-(void)setHasRequestTime:(BOOL)arg1 ;
-(BOOL)hasRequestTime;
-(id)initWithFeedback:(id)arg1 sessionID:(GEOSessionID)arg2 ;
-(id)initWithFeedback:(id)arg1 ;
-(id)initWithQuickETARequest:(id)arg1 withFeedback:(id)arg2 ;
-(void)clearSessionId;
@end

