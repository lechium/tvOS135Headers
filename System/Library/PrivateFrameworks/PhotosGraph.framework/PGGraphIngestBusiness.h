/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:50 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSArray, NSDateInterval;


@protocol PGGraphIngestBusiness <NSObject>
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSArray * businessCategories; 
@property (nonatomic,readonly) unsigned long long muid; 
@property (nonatomic,readonly) long long venueCapacity; 
@property (nonatomic,readonly) NSDateInterval * dateInterval; 
@property (nonatomic,readonly) double routineVisitConfidence; 
@property (nonatomic,readonly) BOOL hasRoutineVisit; 
@required
-(NSString *)name;
-(unsigned long long)muid;
-(NSDateInterval *)dateInterval;
-(long long)venueCapacity;
-(NSArray *)businessCategories;
-(double)routineVisitConfidence;
-(BOOL)hasRoutineVisit;

@end

