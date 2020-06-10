/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:40 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSSet, NSArray;


@protocol MCFilterSupport
@property (readonly) NSSet * filters; 
@property (readonly) NSArray * orderedFilters; 
@property (nonatomic,readonly) unsigned long long countOfFilters; 
@required
-(NSSet *)filters;
-(id)filterAtIndex:(unsigned long long)arg1;
-(id)insertFilterWithFilterID:(id)arg1 atIndex:(unsigned long long)arg2;
-(void)removeFiltersAtIndices:(id)arg1;
-(void)moveFiltersAtIndices:(id)arg1 toIndex:(unsigned long long)arg2;
-(void)removeAllFilters;
-(id)addFilterWithFilterID:(id)arg1;
-(unsigned long long)countOfFilters;
-(void)initFiltersWithImprints:(id)arg1;
-(void)demolishFilters;
-(id)imprintsForFilters;
-(void)observeFilter:(id)arg1;
-(void)unobserveFilter:(id)arg1;
-(NSArray *)orderedFilters;

@end

