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

@interface SNAudioLevelMeasurer : NSObject <SNAnalyzing> {

	SNSystemConfiguration* _systemConfiguration;
	shared_ptr<DSPGraph::Graph>* _graph;
	float _inputSensitivity;

}

@property (nonatomic,readonly) float inputSensitivity;                          //@synthesize inputSensitivity=_inputSensitivity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) shared_ptr<DSPGraph::Graph>* graph; 
@property (nonatomic,readonly) Box* resultsBox; 
-(shared_ptr<DSPGraph::Graph>*)graph;
-(void)updateGraph;
-(BOOL)adaptToSystemConfiguration:(id)arg1 error:(id*)arg2 ;
-(id)resultsFromBox:(Box*)arg1 renderedWithFrameCount:(int)arg2 ;
-(id)sharedProcessorConfiguration;
-(Box*)resultsBox;
-(id)initWithInputSensitivity:(float)arg1 ;
-(float)inputSensitivity;
@end
