/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:38 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLComputePipelineDescriptor.h>

@interface MTLComputePipelineDescriptorInternal : MTLComputePipelineDescriptor {

	MTLComputePipelineDescriptorPrivate* _private;

}
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(void)reset;
-(id)label;
-(void)setLabel:(id)arg1 ;
-(unsigned long long)resourceIndex;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(void)setComputeFunction:(id)arg1 ;
-(void)setThreadGroupSizeIsMultipleOfThreadExecutionWidth:(BOOL)arg1 ;
-(void)setMaxTotalThreadsPerThreadgroup:(unsigned long long)arg1 ;
-(void)setSupportIndirectCommandBuffers:(BOOL)arg1 ;
-(id)stageInputDescriptor;
-(void)setStageInputDescriptor:(id)arg1 ;
-(id)buffers;
-(const MTLComputePipelineDescriptorPrivate*)_descriptorPrivate;
-(void)setResourceIndex:(unsigned long long)arg1 ;
-(BOOL)forceResourceIndex;
-(void)setForceResourceIndex:(BOOL)arg1 ;
-(void)validateWithDevice:(id)arg1 ;
-(void)setPipelineLibrary:(id)arg1 ;
-(id)newSerializedComputeDataWithFlags:(unsigned long long)arg1 options:(unsigned long long)arg2 ;
-(id)computeFunction;
-(void)setDriverCompilerOptions:(id)arg1 ;
-(id)driverCompilerOptions;
-(id)pipelineLibrary;
-(BOOL)threadGroupSizeIsMultipleOfThreadExecutionWidth;
-(unsigned long long)maxTotalThreadsPerThreadgroup;
-(BOOL)supportIndirectCommandBuffers;
-(id)newSerializedComputeData;
@end

