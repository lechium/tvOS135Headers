/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:56 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGFeaturedMemoryGenerator.h>

@class NSString;

@interface PGPlaceLocationMemoryGenerator : PGFeaturedMemoryGenerator {

	NSString* _city;
	long long _year;

}

@property (assign,nonatomic) NSString * city;              //@synthesize city=_city - In the implementation block
@property (assign,nonatomic) long long year;               //@synthesize year=_year - In the implementation block
-(void)setYear:(long long)arg1 ;
-(long long)year;
-(NSString *)city;
-(void)setCity:(NSString *)arg1 ;
-(void)_enumeratePotentialMemoriesUsingBlock:(/*^block*/id)arg1 ;
-(void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2 ;
-(id)_potentialMemoriesForDryTesting;
-(BOOL)canFallbackToDejunkAndDedupeForShowMore;
-(void)_potentialMemoriesWithCityNode:(id)arg1 inYear:(long long)arg2 result:(/*^block*/id)arg3 ;
@end

