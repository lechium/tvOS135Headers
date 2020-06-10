/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:40 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NWActivityStatistics, NWActivityEpilogueStatistics, NSMutableArray, NSDictionary;

@interface NWActivitySuperMetric : NSObject {

	NWActivityStatistics* _activity;
	NWActivityEpilogueStatistics* _activityEpilogue;
	NSMutableArray* _connectionReports;
	NSMutableArray* _taskMetrics;
	NSMutableArray* _wifiFragments;
	NSMutableArray* _cellularFragments;

}

@property (nonatomic,retain) NWActivityStatistics * activity;                              //@synthesize activity=_activity - In the implementation block
@property (nonatomic,retain) NWActivityEpilogueStatistics * activityEpilogue;              //@synthesize activityEpilogue=_activityEpilogue - In the implementation block
@property (nonatomic,retain) NSMutableArray * connectionReports;                           //@synthesize connectionReports=_connectionReports - In the implementation block
@property (nonatomic,retain) NSMutableArray * taskMetrics;                                 //@synthesize taskMetrics=_taskMetrics - In the implementation block
@property (nonatomic,retain) NSMutableArray * wifiFragments;                               //@synthesize wifiFragments=_wifiFragments - In the implementation block
@property (nonatomic,retain) NSMutableArray * cellularFragments;                           //@synthesize cellularFragments=_cellularFragments - In the implementation block
@property (readonly) NSDictionary * dictionaryRepresentation; 
+(void)flattenObject:(id)arg1 intoDictionary:(id)arg2 atPath:(id)arg3 ;
-(id)description;
-(id)init;
-(NSMutableArray *)taskMetrics;
-(void)setTaskMetrics:(NSMutableArray *)arg1 ;
-(NWActivityStatistics *)activity;
-(void)setActivity:(NWActivityStatistics *)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(void)setActivityEpilogue:(NWActivityEpilogueStatistics *)arg1 ;
-(NSMutableArray *)connectionReports;
-(NSMutableArray *)wifiFragments;
-(NSMutableArray *)cellularFragments;
-(void)setConnectionReports:(NSMutableArray *)arg1 ;
-(void)setWifiFragments:(NSMutableArray *)arg1 ;
-(void)setCellularFragments:(NSMutableArray *)arg1 ;
-(NWActivityEpilogueStatistics *)activityEpilogue;
@end
