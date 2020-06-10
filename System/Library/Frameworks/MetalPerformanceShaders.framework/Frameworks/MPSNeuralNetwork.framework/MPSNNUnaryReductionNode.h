/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:13:24 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSNNFilterNode.h>

@interface MPSNNUnaryReductionNode : MPSNNFilterNode {

	SCD_Struct_MP4 _clipRectSource;

}

@property (assign,nonatomic) SCD_Struct_MP4 clipRectSource;              //@synthesize clipRectSource=_clipRectSource - In the implementation block
+(id)nodeWithSource:(id)arg1 ;
-(SCD_Struct_MP4)clipRectSource;
-(void)setClipRectSource:(SCD_Struct_MP4)arg1 ;
-(id)initWithSource:(id)arg1 ;
-(id)gradientFilterWithSource:(id)arg1 ;
@end

