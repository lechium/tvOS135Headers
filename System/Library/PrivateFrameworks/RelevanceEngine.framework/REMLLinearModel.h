/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:10 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/REMLModel.h>
#import <libobjc.A.dylib/REMLLinearModelProperties.h>

@class NSDictionary;

@interface REMLLinearModel : REMLModel <REMLLinearModelProperties> {

	NSDictionary* _models;

}

@property (nonatomic,readonly) NSDictionary * models; 
-(NSDictionary *)models;
-(void)_clearCache;
-(void)setMetricsRecorder:(id)arg1 ;
-(id)_predictWithFeatures:(id)arg1 ;
-(id)predictionSetWithFeatures:(id)arg1 ;
-(void)_trainWithFeatures:(id)arg1 positiveEvent:(id)arg2 ;
-(BOOL)_saveModelToURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)_loadModelFromURL:(id)arg1 error:(id*)arg2 ;
-(void)_clearModel;
-(long long)_getNumberOfCoordinates;
-(float)_getAveragePrediction;
-(float)_getNormalizedEntropy;
-(unsigned long long)_getTotalExampleCount;
-(unsigned long long)_getTotalPositiveCount;
-(BOOL)requiresDirectory;
-(void)logCoreAnalyticsMetrics;
-(id)initWithFeatureSet:(id)arg1 interactionDescriptors:(id)arg2 ;
-(void)trainWithFeatures:(id)arg1 positiveEvent:(id)arg2 interaction:(id)arg3 ;
-(void)_enumerateModelsForFeatureMap:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
@end

