/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:04 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOMapItem;
@class GEOPDContainedPlace, NSArray;

@interface GEOMapItemContainedPlace : NSObject {

	GEOPDContainedPlace* _containedPlace;
	id<GEOMapItem> _parent;
	NSArray* _children;
	NSArray* _siblings;

}

@property (nonatomic,readonly) unsigned long long featureId; 
@property (nonatomic,readonly) unsigned long long parentFeatureId; 
@property (nonatomic,readonly) id<GEOMapItem> parent; 
@property (nonatomic,readonly) NSArray * children; 
@property (nonatomic,readonly) NSArray * siblings; 
-(id)description;
-(id)init;
-(id<GEOMapItem>)parent;
-(NSArray *)children;
-(unsigned long long)featureId;
-(id)initWithContainedPlace:(id)arg1 ;
-(unsigned long long)parentFeatureId;
-(NSArray *)siblings;
@end
