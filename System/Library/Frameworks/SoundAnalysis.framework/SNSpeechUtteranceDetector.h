/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:19 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SoundAnalysis/SoundAnalysis-Structs.h>
#import <libobjc.A.dylib/SNAnalyzing.h>

@class SNSystemConfiguration, NSString;

@interface SNSpeechUtteranceDetector : NSObject <SNAnalyzing> {

	SNSystemConfiguration* _systemConfiguration;
	long long _requestType;
	shared_ptr<DSPGraph::Graph>* _graph;

}

@property (nonatomic,readonly) BOOL hardVAD; 
@property (readonly) double decisionDelay; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) shared_ptr<DSPGraph::Graph>* graph; 
@property (nonatomic,readonly) Box* resultsBox; 
-(id)init;
-(shared_ptr<DSPGraph::Graph>*)graph;
-(id)initWithRequestType:(long long)arg1 ;
-(double)decisionDelay;
-(BOOL)adaptToSystemConfiguration:(id)arg1 error:(id*)arg2 ;
-(id)resultsFromBox:(Box*)arg1 renderedWithFrameCount:(int)arg2 ;
-(id)sharedProcessorConfiguration;
-(Box*)resultsBox;
-(shared_ptr<DSPGraph::Graph>*)createGraph;
-(BOOL)hardVAD;
-(float)softVAD;
@end

