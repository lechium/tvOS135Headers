/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:13:27 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNConvolutionGradientNode.h>

@interface MPSCNNFullyConnectedGradientNode : MPSCNNConvolutionGradientNode
+(id)nodeWithSourceGradient:(id)arg1 sourceImage:(id)arg2 convolutionGradientState:(id)arg3 weights:(id)arg4 ;
-(FilterGraphNode*)newFilterNode;
-(id)initWithSourceGradient:(id)arg1 sourceImage:(id)arg2 convolutionGradientState:(id)arg3 weights:(id)arg4 ;
@end

