/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:13:24 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNKernel.h>

@protocol MPSImageTransformProvider, MPSHandle;
@class MPSImageScale;

@interface MPSNNScale : MPSCNNKernel {

	id<MPSImageTransformProvider> _transformProvider;
	MPSImageCoordinate _destSize;
	MPSImageScale* _filter;
	id<MPSHandle> _handle;

}
+(const MPSLibraryInfo*)libraryInfo;
-(id)debugDescription;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setOptions:(unsigned long long)arg1 ;
-(void)setLabel:(id)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(void)setEdgeMode:(unsigned long long)arg1 ;
-(id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 paddingMethod:(unsigned long long)arg3 sourceOffset:(SCD_Struct_MP1*)arg4 ;
-(id)initWithDevice:(id)arg1 transformProvider:(id)arg2 handle:(id)arg3 outputSize:(MPSImageCoordinate)arg4 scaleClass:(Class)arg5 ;
@end

