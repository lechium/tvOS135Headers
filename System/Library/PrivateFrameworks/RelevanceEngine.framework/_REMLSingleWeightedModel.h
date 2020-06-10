/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:10 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/_REMLWeightedModel.h>
#import <libobjc.A.dylib/_REMLSingleWeightedModelProperties.h>

@class REMLModel;

@interface _REMLSingleWeightedModel : _REMLWeightedModel <_REMLSingleWeightedModelProperties> {

	REMLModel* _model;

}

@property (nonatomic,readonly) REMLModel * model; 
-(REMLModel *)model;
-(id)predictWithFeatures:(id)arg1 ;
-(BOOL)saveModelToURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)loadModelFromURL:(id)arg1 error:(id*)arg2 ;
-(void)trainModelWithFeatureMap:(id)arg1 positiveEvent:(id)arg2 ;
-(void)enumerateModels:(/*^block*/id)arg1 ;
-(id)initWithFeatureSet:(id)arg1 priorMean:(float)arg2 biasFeature:(id)arg3 modelVarianceEpsilon:(float)arg4 ;
@end
