/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:38 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapEdgeConnectionFinder.h>

@interface GEOMapEdgeRoadConnectionFinder : GEOMapEdgeConnectionFinder
-(BOOL)_isRoadEdgeEqual:(const SCD_Struct_GE82*)arg1 other:(const SCD_Struct_GE82*)arg2 ;
-(void)_findConnectedEdges:(/*^block*/id)arg1 incoming:(BOOL)arg2 ;
-(void)_findConnections:(/*^block*/id)arg1 incoming:(BOOL)arg2 ;
@end

