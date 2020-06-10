/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:26 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <Memories/VEKPipelineStage.h>

@class VEKProduction, NSArray;

@interface VEKPicklistStage : VEKPipelineStage {

	VEKProduction* _production;
	NSArray* _featuredPeople;
	double _maximumPossibleMemoryDuration;

}

@property (assign,nonatomic,__weak) VEKProduction * production;                   //@synthesize production=_production - In the implementation block
@property (nonatomic,retain) NSArray * featuredPeople;                            //@synthesize featuredPeople=_featuredPeople - In the implementation block
@property (nonatomic,readonly) double maximumPossibleMemoryDuration;              //@synthesize maximumPossibleMemoryDuration=_maximumPossibleMemoryDuration - In the implementation block
-(VEKProduction *)production;
-(void)setProduction:(VEKProduction *)arg1 ;
-(double)maximumPossibleMemoryDuration;
-(BOOL)needsTitleCard;
-(NSArray *)featuredPeople;
-(id)runStageWithInput:(id)arg1 ;
-(id)memoryClassificationKeys;
-(id)fudgedDurationInfoWithBuckets:(id)arg1 pickList:(id)arg2 ;
-(long long)pickedItemCountForBuckets:(Buckets)arg1 pickList:(id)arg2 ;
-(double)durationRangeForBuckets:(Buckets)arg1 ;
-(double)maximumPossibleMemoryDurationForPickList:(id)arg1 ;
-(double)maxDurationRangeForBuckets:(Buckets)arg1 ;
-(double)titleCardDuration;
-(BOOL)memoryClassificationBased;
-(id)inputTypes;
-(id)outputTypes;
-(void)setFeaturedPeople:(NSArray *)arg1 ;
@end

