/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:41 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Espresso/Espresso-Structs.h>
#import <libobjc.A.dylib/ETTaskContext.h>

@class ETVariablesDefinition, ETModelDefinition, ETOptimizerDefinition, ETTaskState, NSArray;

@interface ETTaskDefinition : NSObject <ETTaskContext> {

	unordered_map<std::__1::basic_string<char>, unsigned long, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, unsigned long> > >* inference_layer_index;
	ETVariablesDefinition* varsDef;
	unsigned long long runtimePlatform;
	int precision;
	basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > training_control_name;
	basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > training_control_end_name;
	basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > gradient_control_name;
	basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > gradient_control_end_name;
	basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > optimizer_control_name;
	basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > optimizer_control_end_name;
	ETModelDefinition* _inferenceModel;
	ETOptimizerDefinition* _optimizer;
	unsigned long long _platform;
	ETTaskState* _taskState;
	unsigned long long _batchSize;
	NSArray* _outputNames;
	shared_ptr<Espresso::net>* _inferenceGraphNetPtr;
	shared_ptr<Espresso::net>* _trainingGraphNetPtr;
	vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > >* _non_batches;
	unordered_map<std::__1::basic_string<char>, Espresso::layer_shape, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, Espresso::layer_shape> > >* _blobShapes;

}

@property (assign) shared_ptr<Espresso::net>* inferenceGraphNetPtr;                    //@synthesize inferenceGraphNetPtr=_inferenceGraphNetPtr - In the implementation block
@property (assign) shared_ptr<Espresso::net>* trainingGraphNetPtr;                     //@synthesize trainingGraphNetPtr=_trainingGraphNetPtr - In the implementation block
@property (assign) unsigned long long batchSize;                                       //@synthesize batchSize=_batchSize - In the implementation block
@property (retain) NSArray * outputNames;                                              //@synthesize outputNames=_outputNames - In the implementation block
@property (assign) unordered_map<std::__1::basic_string<char> blobShapes;              //@synthesize blobShapes=_blobShapes - In the implementation block
@property (assign) vector<std::__1::basic_string<char> non_batches;                    //@synthesize non_batches=_non_batches - In the implementation block
@property (nonatomic,retain) ETModelDefinition * inferenceModel;                       //@synthesize inferenceModel=_inferenceModel - In the implementation block
@property (nonatomic,retain) ETOptimizerDefinition * optimizer;                        //@synthesize optimizer=_optimizer - In the implementation block
@property (assign,nonatomic) unsigned long long platform;                              //@synthesize platform=_platform - In the implementation block
@property (nonatomic,retain) ETTaskState * taskState;                                  //@synthesize taskState=_taskState - In the implementation block
-(id)description;
-(ETTaskState *)taskState;
-(void)setPlatform:(unsigned long long)arg1 ;
-(unsigned long long)platform;
-(unsigned long long)batchSize;
-(void)setBatchSize:(unsigned long long)arg1 ;
-(unordered_map<std::__1::basic_string<char>)blobShapes;
-(void)setBlobShapes:(unordered_map<std::__1::basic_string<char>)arg1 ;
-(BOOL)setTensorNamed:(id)arg1 withValue:(id)arg2 error:(id*)arg3 ;
-(id)getTensorNamed:(id)arg1 ;
-(id)doInferenceOnData:(id)arg1 error:(id*)arg2 ;
-(BOOL)saveNetwork:(id)arg1 inplace:(BOOL)arg2 error:(id*)arg3 ;
-(void)reloadOnRuntinePlatform:(id*)arg1 ;
-(void)shareWeights;
-(id)initWithModelDefinition:(id)arg1 lossDefinition:(id)arg2 variablesDefinition:(id)arg3 optimizerDefinition:(id)arg4 forPlatform:(unsigned long long)arg5 error:(id*)arg6 ;
-(id)namesVectorToFoundationArray:(vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > >*)arg1 ;
-(BOOL)doTrainingOnData:(id)arg1 forNumberOfEpochs:(unsigned long long)arg2 withCallback:(id)arg3 error:(id*)arg4 ;
-(BOOL)saveInferenceNetwork:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)dataTypeForParameterOfType:(unsigned long long)arg1 fromLayerNamed:(id)arg2 ;
-(id)getParameterOfType:(unsigned long long)arg1 forLayerNamed:(id)arg2 error:(id*)arg3 ;
-(unsigned long long)platformForLayerNamed:(id)arg1 error:(id*)arg2 ;
-(ETModelDefinition *)inferenceModel;
-(void)setInferenceModel:(ETModelDefinition *)arg1 ;
-(void)setOptimizer:(ETOptimizerDefinition *)arg1 ;
-(void)setTaskState:(ETTaskState *)arg1 ;
-(shared_ptr<Espresso::net>*)inferenceGraphNetPtr;
-(void)setInferenceGraphNetPtr:(shared_ptr<Espresso::net>*)arg1 ;
-(shared_ptr<Espresso::net>*)trainingGraphNetPtr;
-(void)setTrainingGraphNetPtr:(shared_ptr<Espresso::net>*)arg1 ;
-(NSArray *)outputNames;
-(void)setOutputNames:(NSArray *)arg1 ;
-(vector<std::__1::basic_string<char>)non_batches;
-(void)setNon_batches:(vector<std::__1::basic_string<char>)arg1 ;
-(ETOptimizerDefinition *)optimizer;
@end
