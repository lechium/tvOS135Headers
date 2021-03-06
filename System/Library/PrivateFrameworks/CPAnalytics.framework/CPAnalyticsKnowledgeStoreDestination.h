/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:09 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CPAnalytics.framework/CPAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CPAnalytics/CPAnalyticsDestination.h>

@protocol _DKKnowledgeSaving;
@class NSMutableArray;

@interface CPAnalyticsKnowledgeStoreDestination : NSObject <CPAnalyticsDestination> {

	NSMutableArray* _matchers;
	id<_DKKnowledgeSaving> _knowledgeStore;

}

@property (nonatomic,readonly) NSMutableArray * matchers;                          //@synthesize matchers=_matchers - In the implementation block
@property (nonatomic,readonly) id<_DKKnowledgeSaving> knowledgeStore;              //@synthesize knowledgeStore=_knowledgeStore - In the implementation block
-(id<_DKKnowledgeSaving>)knowledgeStore;
-(void)processEvent:(id)arg1 ;
-(id)initWithConfig:(id)arg1 cpAnalyticsInstance:(id)arg2 ;
-(id)_datasetSampleFromEvent:(id)arg1 andMatcher:(id)arg2 ;
-(void)_addCoreDuetDatasetSample:(id)arg1 toDataset:(id)arg2 ;
-(NSMutableArray *)matchers;
@end

