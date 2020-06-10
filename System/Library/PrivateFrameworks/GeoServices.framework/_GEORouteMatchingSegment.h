/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:06 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOComposedRouteStep;

@interface _GEORouteMatchingSegment : NSObject {

	unsigned _startPointIndex;
	SCD_Struct_GE32 _startCoordinate;
	SCD_Struct_GE32 _endCoordinate;
	GEOComposedRouteStep* _step;

}

@property (assign,nonatomic) unsigned startPointIndex;                     //@synthesize startPointIndex=_startPointIndex - In the implementation block
@property (assign,nonatomic) SCD_Struct_GE32 startCoordinate;              //@synthesize startCoordinate=_startCoordinate - In the implementation block
@property (assign,nonatomic) SCD_Struct_GE32 endCoordinate;                //@synthesize endCoordinate=_endCoordinate - In the implementation block
@property (nonatomic,retain) GEOComposedRouteStep * step;                  //@synthesize step=_step - In the implementation block
-(id)description;
-(GEOComposedRouteStep *)step;
-(unsigned)startPointIndex;
-(double)distanceFromCoordinate:(SCD_Struct_GE32)arg1 outCoordinateOnSegment:(SCD_Struct_GE32*)arg2 outRouteCoordinate:(PolylineCoordinate*)arg3 ;
-(void)setStartPointIndex:(unsigned)arg1 ;
-(void)setStartCoordinate:(SCD_Struct_GE32)arg1 ;
-(void)setEndCoordinate:(SCD_Struct_GE32)arg1 ;
-(void)setStep:(GEOComposedRouteStep *)arg1 ;
-(SCD_Struct_GE32)endCoordinate;
-(SCD_Struct_GE32)startCoordinate;
@end

