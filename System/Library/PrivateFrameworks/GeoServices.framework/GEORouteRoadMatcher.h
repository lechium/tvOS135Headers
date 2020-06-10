/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:44 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOMapFeatureAccess;

@interface GEORouteRoadMatcher : NSObject {

	GEOMapFeatureAccess* _mapFeatureAccess;

}
-(id)init;
-(BOOL)allowsNetworkTileLoad;
-(SCD_Struct_GE73*)findRoadOnCoordinate:(SCD_Struct_GE32)arg1 withCourse:(double)arg2 ;
@end
