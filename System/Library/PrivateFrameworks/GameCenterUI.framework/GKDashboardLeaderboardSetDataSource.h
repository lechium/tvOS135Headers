/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:25 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKCollectionDataSource.h>

@class NSDictionary, GKGameRecord, NSArray;

@interface GKDashboardLeaderboardSetDataSource : GKCollectionDataSource {

	NSDictionary* _leaderboardSetAssetNames;
	NSDictionary* _leaderboardAssetNames;
	GKGameRecord* _gameRecord;
	NSArray* _leaderboardSets;

}

@property (nonatomic,retain) GKGameRecord * gameRecord;                            //@synthesize gameRecord=_gameRecord - In the implementation block
@property (nonatomic,retain) NSArray * leaderboardSets;                            //@synthesize leaderboardSets=_leaderboardSets - In the implementation block
@property (nonatomic,retain) NSDictionary * leaderboardSetAssetNames;              //@synthesize leaderboardSetAssetNames=_leaderboardSetAssetNames - In the implementation block
@property (nonatomic,retain) NSDictionary * leaderboardAssetNames;                 //@synthesize leaderboardAssetNames=_leaderboardAssetNames - In the implementation block
-(void)dealloc;
-(long long)itemCount;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)loadDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setupCollectionView:(id)arg1 ;
-(double)preferredCollectionHeight;
-(id)itemForIndexPath:(id)arg1 ;
-(id)sectionHeaderText;
-(void)setGameRecord:(GKGameRecord *)arg1 ;
-(id)initWithGameRecord:(id)arg1 ;
-(void)setLeaderboardSetAssetNames:(NSDictionary *)arg1 ;
-(void)setLeaderboardAssetNames:(NSDictionary *)arg1 ;
-(GKGameRecord *)gameRecord;
-(NSDictionary *)leaderboardSetAssetNames;
-(NSDictionary *)leaderboardAssetNames;
-(void)setLeaderboardSets:(NSArray *)arg1 ;
-(void)removeLeaderboardSetsWithoutImages;
-(NSArray *)leaderboardSets;
@end

