/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:41 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Espresso/Espresso-Structs.h>
#import <Espresso/EspressoConvolutionWeightsForMPS.h>

@protocol MTLBuffer;
@interface EspressoTrainingConvolutionWeightsForMPS : EspressoConvolutionWeightsForMPS {

	BOOL is_training;
	id<MTLBuffer> _weightsBuffer;
	id<MTLBuffer> _biasesBuffer;

}

@property (retain) id<MTLBuffer> weightsBuffer;              //@synthesize weightsBuffer=_weightsBuffer - In the implementation block
@property (retain) id<MTLBuffer> biasesBuffer;               //@synthesize biasesBuffer=_biasesBuffer - In the implementation block
-(BOOL)ready;
-(void*)weights;
-(float*)biasTerms;
-(unsigned)weightsLayout;
-(id<MTLBuffer>)weightsBuffer;
-(id<MTLBuffer>)biasesBuffer;
-(void)setBiasesBuffer:(id<MTLBuffer>)arg1 ;
-(void)setWeightsBuffer:(id<MTLBuffer>)arg1 ;
-(id)initWithParams:(convolution_uniforms)arg1 forMode:(BOOL)arg2 ;
@end

