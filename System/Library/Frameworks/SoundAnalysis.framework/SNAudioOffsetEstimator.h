/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:19 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SoundAnalysis/SoundAnalysis-Structs.h>
#import <libobjc.A.dylib/SNAnalyzing.h>

@class NSString;

@interface SNAudioOffsetEstimator : NSObject <SNAnalyzing> {

	shared_ptr<DSPGraph::Graph>* _graph;
	double _minimumObservableOffset;
	double _maximumObservableOffset;

}

@property (nonatomic,readonly) double offset; 
@property (assign,nonatomic) double minimumObservableOffset;                    //@synthesize minimumObservableOffset=_minimumObservableOffset - In the implementation block
@property (assign,nonatomic) double maximumObservableOffset;                    //@synthesize maximumObservableOffset=_maximumObservableOffset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) shared_ptr<DSPGraph::Graph>* graph; 
@property (nonatomic,readonly) Box* resultsBox; 
-(id)init;
-(double)offset;
-(shared_ptr<DSPGraph::Graph>*)graph;
-(BOOL)adaptToSystemConfiguration:(id)arg1 error:(id*)arg2 ;
-(id)resultsFromBox:(Box*)arg1 renderedWithFrameCount:(int)arg2 ;
-(id)sharedProcessorConfiguration;
-(Box*)resultsBox;
-(double)minimumObservableOffset;
-(double)maximumObservableOffset;
-(shared_ptr<DSPGraph::Graph>*)createGraph;
-(void)updateMinMaxDelayWithSampleRate:(float)arg1 micDelay:(float)arg2 refDelay:(float)arg3 eclen:(float)arg4 ;
-(void)setMinimumObservableOffset:(double)arg1 ;
-(void)setMaximumObservableOffset:(double)arg1 ;
@end
