/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:49 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol PGEventEnrichment <NSObject>
@property (nonatomic,readonly) NSString * uuid; 
@property (readonly) BOOL isLongTrip; 
@property (readonly) BOOL isShortTrip; 
@property (readonly) BOOL isTrip; 
@property (readonly) BOOL isAggregation; 
@required
-(NSString *)uuid;
-(id)meaningLabels;
-(BOOL)isAggregation;
-(BOOL)isTrip;
-(BOOL)isLongTrip;
-(BOOL)isShortTrip;
-(id)momentNodes;
-(id)sortedMomentNodes;
-(id)fetchAssetCollection;
-(id)reliableMeaningLabels;
-(id)birthdayPersonNode;
-(id)anniversaryPersonNode;

@end

