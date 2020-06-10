/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:13 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNDArray.framework/MPSNDArray
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNDArray/MPSNDArrayMultiaryBase.h>

@interface MPSNDArrayMultiaryKernel : MPSNDArrayMultiaryBase
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)initWithDevice:(id)arg1 sourceCount:(unsigned long long)arg2 ;
-(void)encodeToCommandBuffer:(id)arg1 sourceArrays:(id)arg2 destinationArray:(id)arg3 ;
-(id)encodeToCommandBuffer:(id)arg1 sourceArrays:(id)arg2 ;
-(id)encodeToCommandBuffer:(id)arg1 sourceArrays:(id)arg2 resultState:(id*)arg3 outputStateIsTemporary:(BOOL)arg4 ;
-(void)encodeToCommandBuffer:(id)arg1 sourceArrays:(id)arg2 resultState:(id)arg3 destinationArray:(id)arg4 ;
@end
