/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:41 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSURL;

@interface ETModelDefinition : NSObject {

	NSArray* _layerNames;
	NSArray* _inputs;
	NSArray* _outputs;
	NSURL* _modelURL;

}

@property (readonly) NSArray * layerNames;              //@synthesize layerNames=_layerNames - In the implementation block
@property (readonly) NSArray * inputs;                  //@synthesize inputs=_inputs - In the implementation block
@property (readonly) NSArray * outputs;                 //@synthesize outputs=_outputs - In the implementation block
@property (readonly) NSURL * modelURL;                  //@synthesize modelURL=_modelURL - In the implementation block
-(NSArray *)outputs;
-(NSArray *)inputs;
-(NSArray *)layerNames;
-(NSURL *)modelURL;
-(id)initWithInferenceNetworkPath:(id)arg1 error:(id*)arg2 ;
-(id)initWithInferenceNetworkPath:(id)arg1 inferenceInputs:(id)arg2 inferenceOutputs:(id)arg3 error:(id*)arg4 ;
@end
