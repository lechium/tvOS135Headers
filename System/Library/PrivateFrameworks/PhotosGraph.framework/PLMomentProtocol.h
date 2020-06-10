/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:56 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDate, CLLocation;


@protocol PLMomentProtocol <NSObject>
@property (nonatomic,readonly) NSDate * pl_startDate; 
@property (nonatomic,readonly) NSDate * pl_endDate; 
@property (nonatomic,readonly) unsigned long long pl_numberOfAssets; 
@property (nonatomic,readonly) CLLocation * pl_location; 
@property (nonatomic,readonly) CLLocationCoordinate2D pl_coordinate; 
@required
-(CLLocationCoordinate2D)pl_coordinate;
-(NSDate *)pl_endDate;
-(NSDate *)pl_startDate;
-(unsigned long long)pl_numberOfAssets;
-(CLLocation *)pl_location;

@end
