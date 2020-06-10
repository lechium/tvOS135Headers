/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:42 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOMapServiceTicket;
#import <GeoServices/GeoServices-Structs.h>
@class GEOTileKeyList, NSMutableSet, NSMutableArray;

@interface _GEOTransitPreloadBatch : NSObject {

	GEOTileKeyList* _tilesToLoad;
	NSMutableSet* _placeDatasToLoad;
	unsigned long long status;
	unsigned long long generation;
	unsigned long long errCount;
	unsigned long long bytesLoaded;
	unsigned long long bytesLoadedFromNetwork;
	double startTime;
	double endTime;
	vector<GEOLocationCoordinate2D, std::__1::allocator<GEOLocationCoordinate2D> >* coords;
	NSMutableArray* _latLngToLoad;
	unsigned priority;
	id<GEOMapServiceTicket> placeDataRequestTicketForBatch;
	double endTimeForScheduleFreshness;

}

@property (nonatomic,retain) GEOTileKeyList * tilesToLoad;                 //@synthesize tilesToLoad=_tilesToLoad - In the implementation block
@property (nonatomic,retain) NSMutableSet * placeDatasToLoad;              //@synthesize placeDatasToLoad=_placeDatasToLoad - In the implementation block
-(id)init;
-(double)networkDataRateKB;
-(GEOTileKeyList *)tilesToLoad;
-(void)setTilesToLoad:(GEOTileKeyList *)arg1 ;
-(NSMutableSet *)placeDatasToLoad;
-(void)setPlaceDatasToLoad:(NSMutableSet *)arg1 ;
@end

