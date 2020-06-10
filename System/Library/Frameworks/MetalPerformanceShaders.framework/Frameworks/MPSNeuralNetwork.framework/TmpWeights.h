/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:13:24 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNConvolutionDataSource.h>

@protocol MPSCNNConvolutionDataSource;
@class MPSCNNConvolutionDescriptor, NSString;

@interface TmpWeights : NSObject <MPSCNNConvolutionDataSource> {

	id<MPSCNNConvolutionDataSource> _parentObj;
	MPSCNNConvolutionDescriptor* _convDesc;
	BOOL _hasBias;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)load;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)label;
-(id)descriptor;
-(unsigned)dataType;
-(void)purge;
-(void*)weights;
-(float*)biasTerms;
-(id)initWithWeights:(id)arg1 useBias:(BOOL)arg2 desc:(id)arg3 ;
@end

