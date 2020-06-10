/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:01 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PodcastsKit/MTBaseProcessor.h>

@class NSMutableDictionary;

@interface MTPodcastAndEpisodeProcessor : MTBaseProcessor {

	NSMutableDictionary* _episodeObservers;

}

@property (nonatomic,retain) NSMutableDictionary * episodeObservers;              //@synthesize episodeObservers=_episodeObservers - In the implementation block
-(id)init;
-(void)stop;
-(id)predicate;
-(id)entityName;
-(NSMutableDictionary *)episodeObservers;
-(id)podcastPredicate;
-(void)updateEpisodePredicates;
-(id)podcastUuids;
-(void)addEpisodeObserverForPodcast:(id)arg1 ;
-(id)episodePredicateForPodcast:(id)arg1 ;
-(id)episodeSortDescriptorsForPodcast:(id)arg1 ;
-(id)createEpisodeObserverForPodcastUuid:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 ;
-(void)episodeUuidObserver:(id)arg1 resultsChangedForPodcast:(id)arg2 withDeletedIds:(id)arg3 andInsertIds:(id)arg4 ;
-(void)resultsChangedWithDeletedIds:(id)arg1 andInsertIds:(id)arg2 ;
-(void)removeEpisodeObserverForPodcast:(id)arg1 ;
-(id)episodeObserverForPodcastUuid:(id)arg1 ;
-(id)episodeUuids;
-(void)setEpisodeObservers:(NSMutableDictionary *)arg1 ;
@end
