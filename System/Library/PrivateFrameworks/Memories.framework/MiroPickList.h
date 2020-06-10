/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:25 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSSet, NSDictionary;

@interface MiroPickList : NSObject <NSCopying> {

	NSArray* _sourceAssets;
	BOOL _prioritizeCuratedSetAssets;
	BOOL _skipDistanceCalculation;
	BOOL _penalizeNonLocalAssets;
	BOOL _calculatingPickOrder;
	NSSet* _requiredAssetIDs;
	NSSet* _disallowedAssetIDs;
	NSSet* _photosCuratedAssetIDs;
	NSDictionary* _freezeRanges;
	NSDictionary* _specialInfo;
	NSArray* _sourceOrder;
	NSArray* _pickOrder;
	NSArray* _splitOrder;
	NSArray* _scoreOrder;
	NSArray* _dateOrder;
	NSArray* _adjustedPickOrder;
	NSArray* _frozenSourceAssets;
	NSArray* _frozenSourceOrder;
	NSArray* _frozenAdjustedPickOrder;

}

@property (nonatomic,retain) NSArray * sourceAssets; 
@property (nonatomic,retain) NSArray * sourceOrder;                          //@synthesize sourceOrder=_sourceOrder - In the implementation block
@property (nonatomic,retain) NSArray * pickOrder;                            //@synthesize pickOrder=_pickOrder - In the implementation block
@property (nonatomic,retain) NSArray * splitOrder;                           //@synthesize splitOrder=_splitOrder - In the implementation block
@property (nonatomic,retain) NSArray * scoreOrder;                           //@synthesize scoreOrder=_scoreOrder - In the implementation block
@property (nonatomic,retain) NSArray * dateOrder;                            //@synthesize dateOrder=_dateOrder - In the implementation block
@property (nonatomic,retain) NSArray * adjustedPickOrder;                    //@synthesize adjustedPickOrder=_adjustedPickOrder - In the implementation block
@property (nonatomic,retain) NSArray * frozenSourceAssets;                   //@synthesize frozenSourceAssets=_frozenSourceAssets - In the implementation block
@property (nonatomic,retain) NSArray * frozenSourceOrder;                    //@synthesize frozenSourceOrder=_frozenSourceOrder - In the implementation block
@property (nonatomic,retain) NSArray * frozenAdjustedPickOrder;              //@synthesize frozenAdjustedPickOrder=_frozenAdjustedPickOrder - In the implementation block
@property (assign,nonatomic) BOOL calculatingPickOrder;                      //@synthesize calculatingPickOrder=_calculatingPickOrder - In the implementation block
@property (nonatomic,retain) NSSet * requiredAssetIDs;                       //@synthesize requiredAssetIDs=_requiredAssetIDs - In the implementation block
@property (nonatomic,retain) NSSet * disallowedAssetIDs;                     //@synthesize disallowedAssetIDs=_disallowedAssetIDs - In the implementation block
@property (nonatomic,retain) NSSet * photosCuratedAssetIDs;                  //@synthesize photosCuratedAssetIDs=_photosCuratedAssetIDs - In the implementation block
@property (nonatomic,retain) NSDictionary * freezeRanges;                    //@synthesize freezeRanges=_freezeRanges - In the implementation block
@property (assign,nonatomic) BOOL prioritizeCuratedSetAssets;                //@synthesize prioritizeCuratedSetAssets=_prioritizeCuratedSetAssets - In the implementation block
@property (nonatomic,copy) NSDictionary * specialInfo;                       //@synthesize specialInfo=_specialInfo - In the implementation block
@property (assign,nonatomic) BOOL skipDistanceCalculation;                   //@synthesize skipDistanceCalculation=_skipDistanceCalculation - In the implementation block
@property (assign,nonatomic) BOOL penalizeNonLocalAssets;                    //@synthesize penalizeNonLocalAssets=_penalizeNonLocalAssets - In the implementation block
@property (nonatomic,readonly) int freezeState; 
@property (nonatomic,readonly) BOOL isCompelling; 
@property (nonatomic,readonly) int idealCount; 
@property (nonatomic,readonly) int countAtOrAboveBadT; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)_reset;
-(id)people;
-(id)photoLibrary;
-(id)initWithAssets:(id)arg1 ;
-(BOOL)isCompelling;
-(id)classifications;
-(int)freezeState;
-(NSArray *)pickOrder;
-(NSArray *)sourceOrder;
-(NSArray *)adjustedPickOrder;
-(NSArray *)splitOrder;
-(NSArray *)scoreOrder;
-(NSArray *)dateOrder;
-(int)idealCount;
-(int)countAtTValue:(double)arg1 ;
-(void)setPenalizeNonLocalAssets:(BOOL)arg1 ;
-(void)setFreezeRanges:(NSDictionary *)arg1 ;
-(id)scenesUpToCount:(long long)arg1 localOnly:(BOOL)arg2 ;
-(NSDictionary *)freezeRanges;
-(void)setSourceOrder:(NSArray *)arg1 ;
-(void)setPickOrder:(NSArray *)arg1 ;
-(void)setAdjustedPickOrder:(NSArray *)arg1 ;
-(BOOL)calculateFreezeFromFrozenSourceAssets;
-(void)setFrozenSourceAssets:(NSArray *)arg1 ;
-(NSArray *)sourceAssets;
-(void)setFrozenSourceOrder:(NSArray *)arg1 ;
-(void)setFrozenAdjustedPickOrder:(NSArray *)arg1 ;
-(id)sourceOrderFromSourceAssets;
-(id)pickOrderFromSourceOrder;
-(void)setSplitOrder:(NSArray *)arg1 ;
-(BOOL)calculatingPickOrder;
-(NSArray *)frozenAdjustedPickOrder;
-(void)calculatePickListFromVPFrameworkResults;
-(id)expandVideoAssetsAndConvertToScenes:(id)arg1 ;
-(id)mediaAnalyzer;
-(id)sourceOrderFromSourceAssetsViaNewAPI;
-(id)sourceOrderFromSourceAssetsViaOldAPI;
-(id)sourceOrderFromSourceAssetsViaNewAPIStoppingAtCompelling:(BOOL*)arg1 ;
-(NSArray *)frozenSourceAssets;
-(id)rangesForAssets:(id)arg1 ;
-(BOOL)skipDistanceCalculation;
-(NSSet *)photosCuratedAssetIDs;
-(BOOL)penalizeNonLocalAssets;
-(void)setCalculatingPickOrder:(BOOL)arg1 ;
-(void)updateAssetsWithSpecialInfo;
-(id)highestScoringItemFromIndex:(long long)arg1 lookingRight:(BOOL)arg2 ;
-(id)highestScoringItemToTheRightFromIndex:(long long)arg1 ;
-(id)highestScoringItemToTheLeftFromIndex:(long long)arg1 ;
-(id)_computeAdjustedPickOrder;
-(BOOL)prioritizeCuratedSetAssets;
-(void)_assignTrimRangesIntelligentlyToPickInfos:(id)arg1 ;
-(double)_fractionOfPickInfo:(id)arg1 coveredByRanges:(id)arg2 ;
-(id)_pickInfosForAssetID:(id)arg1 ;
-(NSDictionary *)specialInfo;
-(void)setSourceAssets:(NSArray *)arg1 ;
-(void)_assignTrimRangesChronologicallyToPickInfos:(id)arg1 ;
-(int)countAtOrAboveBadT;
-(id)splitDistancesForAssetID:(id)arg1 ;
-(void)setScoreOrder:(NSArray *)arg1 ;
-(void)setDateOrder:(NSArray *)arg1 ;
-(NSArray *)frozenSourceOrder;
-(NSSet *)disallowedAssetIDs;
-(NSSet *)requiredAssetIDs;
-(void)setSkipDistanceCalculation:(BOOL)arg1 ;
-(void)setRequiredAssetIDs:(NSSet *)arg1 ;
-(void)setDisallowedAssetIDs:(NSSet *)arg1 ;
-(void)setPhotosCuratedAssetIDs:(NSSet *)arg1 ;
-(void)setPrioritizeCuratedSetAssets:(BOOL)arg1 ;
-(void)setSpecialInfo:(NSDictionary *)arg1 ;
-(void)calculateFullPickList;
-(id)assetsUpToSceneCount:(long long)arg1 ;
@end

