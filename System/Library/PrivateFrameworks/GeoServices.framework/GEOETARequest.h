/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:47 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPDABClientDatasetMetadata, GEOAdditionalEnabledMarkets, GEOAutomobileOptions, GEOClientCapabilities, GEOCommonOptions, NSMutableArray, GEOLocation, GEOWaypointTyped, NSData, GEOWaypoint, NSString, GEOTrafficTrafficApiResponse, GEOTFTrafficSnapshot, GEOTransitOptions, GEOWalkingOptions;

@interface GEOETARequest : PBRequest <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOTimepoint _timepoint;
	GEOSessionID _sessionID;
	GEOPDABClientDatasetMetadata* _abClientMetadata;
	GEOAdditionalEnabledMarkets* _additionalEnabledMarkets;
	GEOAutomobileOptions* _automobileOptions;
	GEOClientCapabilities* _clientCapabilities;
	GEOCommonOptions* _commonOptions;
	NSMutableArray* _destinationWaypointTypeds;
	NSMutableArray* _destinations;
	NSMutableArray* _deviceHistoricalLocations;
	GEOLocation* _lastKnownRoadLocation;
	GEOWaypointTyped* _originWaypointTyped;
	NSData* _originalRouteID;
	NSData* _originalRouteZilchPoints;
	GEOWaypoint* _origin;
	NSString* _phoneticLocaleIdentifier;
	NSString* _requestingAppId;
	NSMutableArray* _serviceTags;
	double _sessionRelativeTimestamp;
	NSData* _sessionState;
	GEOTrafficTrafficApiResponse* _trafficApiResponse;
	NSMutableArray* _trafficSnapshotIds;
	GEOTFTrafficSnapshot* _trafficSnapshot;
	GEOTransitOptions* _transitOptions;
	GEOWalkingOptions* _walkingOptions;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _transportType;
	unsigned _walkingLimitMeters;
	BOOL _allowPartialResults;
	BOOL _includeDistance;
	BOOL _includeHistoricTravelTime;
	BOOL _includeRouteTrafficDetail;
	BOOL _includeShortTrafficSummary;
	BOOL _isFromAPI;
	BOOL _needServerLatency;
	BOOL _useLiveTrafficAsFallback;
	struct {
		unsigned has_timepoint : 1;
		unsigned has_sessionID : 1;
		unsigned has_sessionRelativeTimestamp : 1;
		unsigned has_transportType : 1;
		unsigned has_walkingLimitMeters : 1;
		unsigned has_allowPartialResults : 1;
		unsigned has_includeDistance : 1;
		unsigned has_includeHistoricTravelTime : 1;
		unsigned has_includeRouteTrafficDetail : 1;
		unsigned has_includeShortTrafficSummary : 1;
		unsigned has_isFromAPI : 1;
		unsigned has_needServerLatency : 1;
		unsigned has_useLiveTrafficAsFallback : 1;
		unsigned read_unknownFields : 1;
		unsigned read_abClientMetadata : 1;
		unsigned read_additionalEnabledMarkets : 1;
		unsigned read_automobileOptions : 1;
		unsigned read_clientCapabilities : 1;
		unsigned read_commonOptions : 1;
		unsigned read_destinationWaypointTypeds : 1;
		unsigned read_destinations : 1;
		unsigned read_deviceHistoricalLocations : 1;
		unsigned read_lastKnownRoadLocation : 1;
		unsigned read_originWaypointTyped : 1;
		unsigned read_originalRouteID : 1;
		unsigned read_originalRouteZilchPoints : 1;
		unsigned read_origin : 1;
		unsigned read_phoneticLocaleIdentifier : 1;
		unsigned read_requestingAppId : 1;
		unsigned read_serviceTags : 1;
		unsigned read_sessionState : 1;
		unsigned read_trafficApiResponse : 1;
		unsigned read_trafficSnapshotIds : 1;
		unsigned read_trafficSnapshot : 1;
		unsigned read_transitOptions : 1;
		unsigned read_walkingOptions : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_timepoint : 1;
		unsigned wrote_sessionID : 1;
		unsigned wrote_abClientMetadata : 1;
		unsigned wrote_additionalEnabledMarkets : 1;
		unsigned wrote_automobileOptions : 1;
		unsigned wrote_clientCapabilities : 1;
		unsigned wrote_commonOptions : 1;
		unsigned wrote_destinationWaypointTypeds : 1;
		unsigned wrote_destinations : 1;
		unsigned wrote_deviceHistoricalLocations : 1;
		unsigned wrote_lastKnownRoadLocation : 1;
		unsigned wrote_originWaypointTyped : 1;
		unsigned wrote_originalRouteID : 1;
		unsigned wrote_originalRouteZilchPoints : 1;
		unsigned wrote_origin : 1;
		unsigned wrote_phoneticLocaleIdentifier : 1;
		unsigned wrote_requestingAppId : 1;
		unsigned wrote_serviceTags : 1;
		unsigned wrote_sessionRelativeTimestamp : 1;
		unsigned wrote_sessionState : 1;
		unsigned wrote_trafficApiResponse : 1;
		unsigned wrote_trafficSnapshotIds : 1;
		unsigned wrote_trafficSnapshot : 1;
		unsigned wrote_transitOptions : 1;
		unsigned wrote_walkingOptions : 1;
		unsigned wrote_transportType : 1;
		unsigned wrote_walkingLimitMeters : 1;
		unsigned wrote_allowPartialResults : 1;
		unsigned wrote_includeDistance : 1;
		unsigned wrote_includeHistoricTravelTime : 1;
		unsigned wrote_includeRouteTrafficDetail : 1;
		unsigned wrote_includeShortTrafficSummary : 1;
		unsigned wrote_isFromAPI : 1;
		unsigned wrote_needServerLatency : 1;
		unsigned wrote_useLiveTrafficAsFallback : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasTrafficSnapshot; 
@property (nonatomic,retain) GEOTFTrafficSnapshot * trafficSnapshot; 
@property (assign,nonatomic) BOOL hasUseLiveTrafficAsFallback; 
@property (assign,nonatomic) BOOL useLiveTrafficAsFallback; 
@property (assign,nonatomic) BOOL hasNeedServerLatency; 
@property (assign,nonatomic) BOOL needServerLatency; 
@property (assign,nonatomic) BOOL hasTransportType; 
@property (assign,nonatomic) int transportType; 
@property (assign,nonatomic) BOOL hasTimepoint; 
@property (assign,nonatomic) GEOTimepoint timepoint; 
@property (nonatomic,readonly) BOOL hasOrigin; 
@property (nonatomic,retain) GEOWaypoint * origin; 
@property (nonatomic,retain) NSMutableArray * destinations; 
@property (assign,nonatomic) BOOL hasIncludeHistoricTravelTime; 
@property (assign,nonatomic) BOOL includeHistoricTravelTime; 
@property (assign,nonatomic) BOOL hasAllowPartialResults; 
@property (assign,nonatomic) BOOL allowPartialResults; 
@property (assign,nonatomic) BOOL hasIncludeDistance; 
@property (assign,nonatomic) BOOL includeDistance; 
@property (assign,nonatomic) BOOL hasSessionID; 
@property (assign,nonatomic) GEOSessionID sessionID; 
@property (assign,nonatomic) BOOL hasSessionRelativeTimestamp; 
@property (assign,nonatomic) double sessionRelativeTimestamp; 
@property (assign,nonatomic) BOOL hasWalkingLimitMeters; 
@property (assign,nonatomic) unsigned walkingLimitMeters; 
@property (nonatomic,readonly) BOOL hasAdditionalEnabledMarkets; 
@property (nonatomic,retain) GEOAdditionalEnabledMarkets * additionalEnabledMarkets; 
@property (nonatomic,readonly) BOOL hasOriginWaypointTyped; 
@property (nonatomic,retain) GEOWaypointTyped * originWaypointTyped; 
@property (nonatomic,retain) NSMutableArray * destinationWaypointTypeds; 
@property (nonatomic,readonly) BOOL hasAutomobileOptions; 
@property (nonatomic,retain) GEOAutomobileOptions * automobileOptions; 
@property (nonatomic,readonly) BOOL hasTransitOptions; 
@property (nonatomic,retain) GEOTransitOptions * transitOptions; 
@property (nonatomic,readonly) BOOL hasWalkingOptions; 
@property (nonatomic,retain) GEOWalkingOptions * walkingOptions; 
@property (assign,nonatomic) BOOL hasIsFromAPI; 
@property (assign,nonatomic) BOOL isFromAPI; 
@property (nonatomic,readonly) BOOL hasCommonOptions; 
@property (nonatomic,retain) GEOCommonOptions * commonOptions; 
@property (nonatomic,readonly) BOOL hasSessionState; 
@property (nonatomic,retain) NSData * sessionState; 
@property (nonatomic,readonly) BOOL hasOriginalRouteID; 
@property (nonatomic,retain) NSData * originalRouteID; 
@property (nonatomic,readonly) BOOL hasOriginalRouteZilchPoints; 
@property (nonatomic,retain) NSData * originalRouteZilchPoints; 
@property (nonatomic,retain) NSMutableArray * deviceHistoricalLocations; 
@property (nonatomic,readonly) BOOL hasClientCapabilities; 
@property (nonatomic,retain) GEOClientCapabilities * clientCapabilities; 
@property (nonatomic,readonly) BOOL hasLastKnownRoadLocation; 
@property (nonatomic,retain) GEOLocation * lastKnownRoadLocation; 
@property (nonatomic,readonly) BOOL hasAbClientMetadata; 
@property (nonatomic,retain) GEOPDABClientDatasetMetadata * abClientMetadata; 
@property (assign,nonatomic) BOOL hasIncludeRouteTrafficDetail; 
@property (assign,nonatomic) BOOL includeRouteTrafficDetail; 
@property (assign,nonatomic) BOOL hasIncludeShortTrafficSummary; 
@property (assign,nonatomic) BOOL includeShortTrafficSummary; 
@property (nonatomic,readonly) BOOL hasPhoneticLocaleIdentifier; 
@property (nonatomic,retain) NSString * phoneticLocaleIdentifier; 
@property (nonatomic,readonly) BOOL hasRequestingAppId; 
@property (nonatomic,retain) NSString * requestingAppId; 
@property (nonatomic,retain) NSMutableArray * serviceTags; 
@property (nonatomic,readonly) BOOL hasTrafficApiResponse; 
@property (nonatomic,retain) GEOTrafficTrafficApiResponse * trafficApiResponse; 
@property (nonatomic,retain) NSMutableArray * trafficSnapshotIds; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)destinationType;
+(BOOL)isValid:(id)arg1 ;
+(Class)deviceHistoricalLocationType;
+(Class)serviceTagType;
+(Class)trafficSnapshotIdsType;
+(Class)destinationWaypointTypedType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(GEOSessionID)sessionID;
-(void)setSessionID:(GEOSessionID)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(int)transportType;
-(void)setTransportType:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTransportType:(BOOL)arg1 ;
-(BOOL)hasTransportType;
-(GEOWaypoint *)origin;
-(void)setOrigin:(GEOWaypoint *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setHasSessionID:(BOOL)arg1 ;
-(BOOL)hasSessionID;
-(void)clearSensitiveFields;
-(unsigned long long)deviceHistoricalLocationsCount;
-(NSMutableArray *)deviceHistoricalLocations;
-(id)transportTypeAsString:(int)arg1 ;
-(int)StringAsTransportType:(id)arg1 ;
-(void)_readOriginalRouteID;
-(void)_readOriginalRouteZilchPoints;
-(void)_readClientCapabilities;
-(void)_readAdditionalEnabledMarkets;
-(void)_readSessionState;
-(void)_readCommonOptions;
-(void)_readLastKnownRoadLocation;
-(void)_readAbClientMetadata;
-(void)_readDeviceHistoricalLocations;
-(void)_addNoFlagsDeviceHistoricalLocation:(id)arg1 ;
-(void)_readServiceTags;
-(void)_addNoFlagsServiceTag:(id)arg1 ;
-(void)_readTrafficApiResponse;
-(void)_readTrafficSnapshotIds;
-(void)_addNoFlagsTrafficSnapshotIds:(id)arg1 ;
-(NSData *)originalRouteID;
-(NSData *)originalRouteZilchPoints;
-(GEOClientCapabilities *)clientCapabilities;
-(GEOAdditionalEnabledMarkets *)additionalEnabledMarkets;
-(NSData *)sessionState;
-(GEOCommonOptions *)commonOptions;
-(GEOLocation *)lastKnownRoadLocation;
-(GEOPDABClientDatasetMetadata *)abClientMetadata;
-(GEOTrafficTrafficApiResponse *)trafficApiResponse;
-(NSMutableArray *)trafficSnapshotIds;
-(GEOTFTrafficSnapshot *)trafficSnapshot;
-(BOOL)hasLastKnownRoadLocation;
-(void)setLastKnownRoadLocation:(GEOLocation *)arg1 ;
-(void)setOriginalRouteID:(NSData *)arg1 ;
-(void)setOriginalRouteZilchPoints:(NSData *)arg1 ;
-(void)setClientCapabilities:(GEOClientCapabilities *)arg1 ;
-(void)setAdditionalEnabledMarkets:(GEOAdditionalEnabledMarkets *)arg1 ;
-(void)setSessionState:(NSData *)arg1 ;
-(void)setCommonOptions:(GEOCommonOptions *)arg1 ;
-(void)setAbClientMetadata:(GEOPDABClientDatasetMetadata *)arg1 ;
-(void)clearDeviceHistoricalLocations;
-(id)deviceHistoricalLocationAtIndex:(unsigned long long)arg1 ;
-(void)addDeviceHistoricalLocation:(id)arg1 ;
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
-(BOOL)hasOriginalRouteID;
-(BOOL)hasOriginalRouteZilchPoints;
-(BOOL)hasClientCapabilities;
-(double)sessionRelativeTimestamp;
-(void)setSessionRelativeTimestamp:(double)arg1 ;
-(void)setHasSessionRelativeTimestamp:(BOOL)arg1 ;
-(BOOL)hasSessionRelativeTimestamp;
-(BOOL)hasAdditionalEnabledMarkets;
-(BOOL)hasSessionState;
-(BOOL)isFromAPI;
-(void)setIsFromAPI:(BOOL)arg1 ;
-(void)setHasIsFromAPI:(BOOL)arg1 ;
-(BOOL)hasIsFromAPI;
-(BOOL)hasCommonOptions;
-(BOOL)hasAbClientMetadata;
-(void)setDeviceHistoricalLocations:(NSMutableArray *)arg1 ;
-(void)setServiceTags:(NSMutableArray *)arg1 ;
-(BOOL)hasTrafficApiResponse;
-(void)setTrafficSnapshotIds:(NSMutableArray *)arg1 ;
-(BOOL)hasTrafficSnapshot;
-(BOOL)useLiveTrafficAsFallback;
-(void)setUseLiveTrafficAsFallback:(BOOL)arg1 ;
-(void)setHasUseLiveTrafficAsFallback:(BOOL)arg1 ;
-(BOOL)hasUseLiveTrafficAsFallback;
-(NSString *)phoneticLocaleIdentifier;
-(void)setPhoneticLocaleIdentifier:(NSString *)arg1 ;
-(void)_readPhoneticLocaleIdentifier;
-(BOOL)hasPhoneticLocaleIdentifier;
-(void)setRequestingAppId:(NSString *)arg1 ;
-(void)_readOrigin;
-(BOOL)hasOrigin;
-(void)_readRequestingAppId;
-(NSString *)requestingAppId;
-(BOOL)hasRequestingAppId;
-(void)_readDestinations;
-(void)_addNoFlagsDestination:(id)arg1 ;
-(void)_readOriginWaypointTyped;
-(void)_readDestinationWaypointTypeds;
-(void)_addNoFlagsDestinationWaypointTyped:(id)arg1 ;
-(void)_readAutomobileOptions;
-(void)_readTransitOptions;
-(void)_readWalkingOptions;
-(GEOWaypointTyped *)originWaypointTyped;
-(GEOAutomobileOptions *)automobileOptions;
-(GEOTransitOptions *)transitOptions;
-(GEOWalkingOptions *)walkingOptions;
-(NSMutableArray *)destinations;
-(NSMutableArray *)destinationWaypointTypeds;
-(BOOL)hasOriginWaypointTyped;
-(void)setOriginWaypointTyped:(GEOWaypointTyped *)arg1 ;
-(unsigned long long)destinationsCount;
-(void)clearDestinations;
-(id)destinationAtIndex:(unsigned long long)arg1 ;
-(void)addDestination:(id)arg1 ;
-(unsigned long long)destinationWaypointTypedsCount;
-(void)clearDestinationWaypointTypeds;
-(id)destinationWaypointTypedAtIndex:(unsigned long long)arg1 ;
-(void)addDestinationWaypointTyped:(id)arg1 ;
-(void)setAutomobileOptions:(GEOAutomobileOptions *)arg1 ;
-(void)setTransitOptions:(GEOTransitOptions *)arg1 ;
-(void)setWalkingOptions:(GEOWalkingOptions *)arg1 ;
-(GEOTimepoint)timepoint;
-(void)setTimepoint:(GEOTimepoint)arg1 ;
-(void)setHasTimepoint:(BOOL)arg1 ;
-(BOOL)hasTimepoint;
-(void)setDestinations:(NSMutableArray *)arg1 ;
-(BOOL)includeHistoricTravelTime;
-(void)setIncludeHistoricTravelTime:(BOOL)arg1 ;
-(void)setHasIncludeHistoricTravelTime:(BOOL)arg1 ;
-(BOOL)hasIncludeHistoricTravelTime;
-(BOOL)allowPartialResults;
-(void)setAllowPartialResults:(BOOL)arg1 ;
-(void)setHasAllowPartialResults:(BOOL)arg1 ;
-(BOOL)hasAllowPartialResults;
-(BOOL)includeDistance;
-(void)setIncludeDistance:(BOOL)arg1 ;
-(void)setHasIncludeDistance:(BOOL)arg1 ;
-(BOOL)hasIncludeDistance;
-(unsigned)walkingLimitMeters;
-(void)setWalkingLimitMeters:(unsigned)arg1 ;
-(void)setHasWalkingLimitMeters:(BOOL)arg1 ;
-(BOOL)hasWalkingLimitMeters;
-(void)setDestinationWaypointTypeds:(NSMutableArray *)arg1 ;
-(BOOL)hasAutomobileOptions;
-(BOOL)hasTransitOptions;
-(BOOL)hasWalkingOptions;
-(BOOL)includeRouteTrafficDetail;
-(void)setIncludeRouteTrafficDetail:(BOOL)arg1 ;
-(void)setHasIncludeRouteTrafficDetail:(BOOL)arg1 ;
-(BOOL)hasIncludeRouteTrafficDetail;
-(BOOL)includeShortTrafficSummary;
-(void)setIncludeShortTrafficSummary:(BOOL)arg1 ;
-(void)setHasIncludeShortTrafficSummary:(BOOL)arg1 ;
-(BOOL)hasIncludeShortTrafficSummary;
-(BOOL)needServerLatency;
-(void)setNeedServerLatency:(BOOL)arg1 ;
-(void)setHasNeedServerLatency:(BOOL)arg1 ;
-(BOOL)hasNeedServerLatency;
-(id)initWithQuickETARequest:(id)arg1 ;
@end

