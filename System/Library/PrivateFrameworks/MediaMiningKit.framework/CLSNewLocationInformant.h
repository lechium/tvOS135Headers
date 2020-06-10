/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:40 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaMiningKit/MediaMiningKit-Structs.h>
#import <MediaMiningKit/CLSInformant.h>

@interface CLSNewLocationInformant : CLSInformant
+(id)familyIdentifier;
+(id)classIdentifier;
+(id)informantDependenciesIdentifiers;
+(id)businessItemsForRegion:(id)arg1 ;
+(id)createPlaceForBusinessItem:(id)arg1 ;
+(id)natureCategories;
+(id)searchBusinessItemsAtCoordinate:(CLLocationCoordinate2D)arg1 forCategories:(id)arg2 precision:(double)arg3 inCache:(id)arg4 ;
+(id)shiftedLocationFromOriginalLocation:(id)arg1 ;
+(id)pointOfInterestCategories;
+(BOOL)doesRegion:(id)arg1 containLocation:(id)arg2 ;
+(id)areaOfInterestCategories;
+(BOOL)doesRegion:(id)arg1 intersectOtherRegion:(id)arg2 ;
+(id)filterBusinessItems:(id)arg1 forCategories:(id)arg2 subCategories:(id)arg3 blacklistCategories:(id)arg4 ;
+(CLLocationCoordinate2D)shiftedCoordinatesFromOriginalCoordinates:(CLLocationCoordinate2D)arg1 ;
+(id)_categoriesDescriptionFromCategories:(id)arg1 ;
+(id)regionOfInterestCategories;
+(BOOL)location:(CLLocationCoordinate2D)arg1 isCloseToLocation:(CLLocationCoordinate2D)arg2 ;
+(BOOL)location:(CLLocationCoordinate2D)arg1 isFarFromLocation:(CLLocationCoordinate2D)arg2 ;
-(id)gatherCluesForInvestigation:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(id)_regionOfInterestCategories;
-(id)_pointOfInterestTraits;
-(id)_regionOfInterestTraits;
-(id)outputLocationCluesForOuputClueKey:(id)arg1 inputClue:(id)arg2 region:(id)arg3 traits:(id)arg4 categories:(id)arg5 exactMatch:(BOOL)arg6 precision:(double)arg7 cache:(id)arg8 ;
-(id)locationAreaOfInterestCluesForInputClue:(id)arg1 ;
-(id)locationPointOfInterestCluesForInputClue:(id)arg1 ;
-(id)locationRegionOfInterestCluesForInputClue:(id)arg1 ;
@end
