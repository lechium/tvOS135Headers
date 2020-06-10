/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:18 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SoundAnalysis/SoundAnalysis-Structs.h>
#import <libobjc.A.dylib/SNAnalyzing.h>

@protocol MLCustomModel;
@class MLModelDescription, MLModel, SNSystemConfiguration, NSString;

@interface SNFeaturePrintExtractor : NSObject <SNAnalyzing> {

	shared_ptr<DSPGraph::Graph>* _graph;
	id<MLCustomModel> _logMelSpectrogramModel;
	MLModelDescription* _logMelSpectrogramModelDescription;
	MLModel* _featureEmbeddingModel;
	SNSystemConfiguration* _systemConfiguration;
	int _timeDomainBlockSize;
	int _resultsToDiscardCount;
	float _overlapFactor;
	long long _featurePrintType;

}

@property (assign,nonatomic) long long featurePrintType;                        //@synthesize featurePrintType=_featurePrintType - In the implementation block
@property (assign,nonatomic) float overlapFactor;                               //@synthesize overlapFactor=_overlapFactor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) shared_ptr<DSPGraph::Graph>* graph; 
@property (nonatomic,readonly) Box* resultsBox; 
-(id)init;
-(shared_ptr<DSPGraph::Graph>*)graph;
-(id)embeddingModel;
-(void)setFeaturePrintType:(long long)arg1 ;
-(long long)featurePrintType;
-(float)overlapFactor;
-(void)setOverlapFactor:(float)arg1 ;
-(void)updateGraph;
-(id)logMelSpectrogramModel;
-(id)logMelSpectrogramModelDescription;
-(BOOL)adaptToSystemConfiguration:(id)arg1 error:(id*)arg2 ;
-(id)resultsFromBox:(Box*)arg1 renderedWithFrameCount:(int)arg2 ;
-(id)sharedProcessorConfiguration;
-(Box*)resultsBox;
-(void)primeGraph;
@end
