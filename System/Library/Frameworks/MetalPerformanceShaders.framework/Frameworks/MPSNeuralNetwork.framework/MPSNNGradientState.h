/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:13:27 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSCore/MPSState.h>

@protocol MPSNNPadding;
@interface MPSNNGradientState : MPSState {

	SCD_Struct_MP11 _offset;
	SCD_Struct_MP4 _clipRect;
	MPSImageCoordinate _destSize;
	unsigned long long _destFeatureChannels;
	unsigned long long _destinationFeatureChannelOffset;
	unsigned long long _sourceFeatureChannelOffset;
	unsigned long long _kernelWidth;
	unsigned long long _kernelHeight;
	unsigned long long _strideInPixelsX;
	unsigned long long _strideInPixelsY;
	unsigned long long _dilationRateX;
	unsigned long long _dilationRateY;
	id<MPSNNPadding> _padding;
	unsigned long long _maxBatchSize;
	BOOL _isBackwards;
	unsigned long long _edgeMode;
	MPSImageCoordinate _srcSize;
	unsigned long long _sourceFeatureChannels;
	BOOL _initOnce;
	unsigned _provenance;

}
-(id)debugDescription;
-(void)dealloc;
-(id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 forKernel:(id)arg3 suggestedDescriptor:(id)arg4 ;
@end

