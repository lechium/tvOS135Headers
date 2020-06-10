/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:09 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class REMLModel, REContentRanker, NSArray;


@protocol REMLModelManagerProperties <REExportedInterface>
@property (nonatomic,readonly) unsigned long long modelVersionNumber; 
@property (nonatomic,readonly) REMLModel * model; 
@property (nonatomic,readonly) REContentRanker * contentRanker; 
@property (nonatomic,readonly) BOOL supportsContentRanking; 
@property (nonatomic,readonly) NSArray * orderedFeatures; 
@required
-(REMLModel *)model;
-(unsigned long long)modelVersionNumber;
-(REContentRanker *)contentRanker;
-(BOOL)supportsContentRanking;
-(NSArray *)orderedFeatures;

@end

