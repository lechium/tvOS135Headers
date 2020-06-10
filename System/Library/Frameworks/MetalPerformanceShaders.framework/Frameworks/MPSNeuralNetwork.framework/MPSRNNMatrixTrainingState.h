/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:13:23 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSCore/MPSState.h>

@class MPSMatrix;

@interface MPSRNNMatrixTrainingState : MPSState {

	MPSMatrix* singleGateZ;
	BOOL _isTemporary;

}
-(void)dealloc;
-(void)setReadCount:(unsigned long long)arg1 ;
-(BOOL)isTemporary;
-(id)initForSingleGateWithCommandBuffer:(id)arg1 matrixDescriptor:(id)arg2 isTemporary:(BOOL)arg3 ;
@end
