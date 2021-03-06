/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:25 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PLFrequentLocationProcessor : NSObject
+(id)processFrequentLocationsWithItems:(id)arg1 locationsOfInterest:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
+(id)_createFrequentLocationsForItems:(id)arg1 withDistanceBlock:(/*^block*/id)arg2 ;
+(id)_dateIntervalForItems:(id)arg1 ;
+(id)_centroidItemForClusterItems:(id)arg1 withDistanceBlock:(/*^block*/id)arg2 ;
+(id)_clustersFromLocationsOfInterest:(id)arg1 forItems:(id)arg2 remainingItemsToCluster:(out id*)arg3 progressBlock:(/*^block*/id)arg4 ;
@end

