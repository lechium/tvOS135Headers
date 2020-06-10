/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:42 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CLSCurationDebugCluster, NSMapTable, NSString;

@interface CLSCurationDebugInfo : NSObject {

	CLSCurationDebugCluster* _rootCluster;
	NSMapTable* _debugItemByItem;
	NSMapTable* _debugClusterByCluster;
	NSString* _agent;
	NSString* _stage;

}

@property (nonatomic,copy) NSString * agent;              //@synthesize agent=_agent - In the implementation block
@property (nonatomic,copy) NSString * stage;              //@synthesize stage=_stage - In the implementation block
-(id)initWithItems:(id)arg1 ;
-(NSString *)stage;
-(NSString *)agent;
-(void)setAgent:(NSString *)arg1 ;
-(void)setStage:(NSString *)arg1 ;
-(void)beginTentativeSection;
-(void)endTentativeSectionWithSuccess:(BOOL)arg1 ;
-(id)initWithDebugCluster:(id)arg1 ;
-(id)debugInfoForCluster:(id)arg1 ;
-(id)debugItemForItem:(id)arg1 ;
-(id)debugItemsForItems:(id)arg1 ;
-(id)debugClusterForCluster:(id)arg1 ;
-(void)setClusters:(id)arg1 withReason:(id)arg2 ;
-(void)addClusters:(id)arg1 withReason:(id)arg2 ;
-(void)setState:(unsigned long long)arg1 ofCluster:(id)arg2 withReason:(id)arg3 ;
-(void)setState:(unsigned long long)arg1 ofItem:(id)arg2 withReason:(id)arg3 ;
-(void)setState:(unsigned long long)arg1 ofItems:(id)arg2 withReason:(id)arg3 ;
-(void)forceState:(unsigned long long)arg1 ofItem:(id)arg2 withReason:(id)arg3 ;
-(void)setUnclusteredItemsState:(unsigned long long)arg1 withReason:(id)arg2 ;
-(void)chooseItem:(id)arg1 inCluster:(id)arg2 withReason:(id)arg3 ;
-(void)chooseItem:(id)arg1 inItems:(id)arg2 withReason:(id)arg3 ;
-(void)chooseItems:(id)arg1 inCluster:(id)arg2 withReason:(id)arg3 ;
-(void)chooseItems:(id)arg1 inItems:(id)arg2 withReason:(id)arg3 ;
-(void)requireItems:(id)arg1 inCluster:(id)arg2 ;
-(void)requireItems:(id)arg1 inItems:(id)arg2 ;
-(void)dedupItems:(id)arg1 toItem:(id)arg2 withDedupingType:(unsigned long long)arg3 ;
-(void)dedupItems:(id)arg1 toItems:(id)arg2 withDedupingType:(unsigned long long)arg3 ;
-(void)dedupItems:(id)arg1 toRequiredItems:(id)arg2 withDedupingType:(unsigned long long)arg3 ;
-(void)_dedupItems:(id)arg1 toItems:(id)arg2 chosenState:(unsigned long long)arg3 withDedupingType:(unsigned long long)arg4 ;
-(void)resetWithReason:(id)arg1 ;
-(id)dictionaryRepresentationWithAppendExtraItemInfoBlock:(/*^block*/id)arg1 ;
@end

