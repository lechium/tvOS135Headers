/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:50 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSArray;

@interface GEOSpatialPlaceLookupParameters : NSObject {

	SCD_Struct_GE32 _coordinate;
	double _radius;
	NSArray* _categories;
	int _maxResultCount;

}

@property (nonatomic,readonly) SCD_Struct_GE32 coordinate;              //@synthesize coordinate=_coordinate - In the implementation block
@property (nonatomic,readonly) double radius;                           //@synthesize radius=_radius - In the implementation block
@property (nonatomic,readonly) NSArray * categories;                    //@synthesize categories=_categories - In the implementation block
@property (nonatomic,readonly) int maxResultCount;                      //@synthesize maxResultCount=_maxResultCount - In the implementation block
-(id)init;
-(SCD_Struct_GE32)coordinate;
-(double)radius;
-(id)initWithCoordinate:(SCD_Struct_GE32)arg1 radius:(double)arg2 categories:(id)arg3 ;
-(NSArray *)categories;
-(id)initWithCoordinate:(SCD_Struct_GE32)arg1 radius:(double)arg2 categories:(id)arg3 maxResultCount:(int)arg4 ;
-(int)maxResultCount;
@end

