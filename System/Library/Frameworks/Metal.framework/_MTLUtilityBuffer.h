/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:37 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLBuffer, MTLArgumentEncoder, OS_dispatch_queue;
#import <Metal/Metal-Structs.h>
@class _MTLDevice, NSObject;

@interface _MTLUtilityBuffer : NSObject {

	_MTLDevice* _device;
	id<MTLBuffer> _utilArgumentBuffer;
	id<MTLArgumentEncoder> _utilArgumentEncoder;
	MTLUtilityBufferResourceTable* _resourceTable;
	NSObject*<OS_dispatch_queue> _utilityQueue;

}
-(void)dealloc;
-(void)removeResourceFromGlobalResourceTable:(unsigned long long)arg1 resourceType:(unsigned long long)arg2 ;
-(id)utilityBufferForComputeCommandEncoder:(id)arg1 ;
-(id)utilityBufferForRenderCommandEncoder:(id)arg1 ;
-(void)addBufferToGlobalResourceTable:(id)arg1 ;
-(void)reserveResourceIndicesForResourceType:(unsigned long long)arg1 indices:(unsigned long long*)arg2 indexCount:(unsigned long long)arg3 ;
-(void)addTextureToGlobalResourceTable:(id)arg1 ;
-(void)addSamplerStateToGlobalResourceTable:(id)arg1 ;
-(void)addComputePipelineStateToGlobalResourceTable:(id)arg1 ;
-(void)addRenderPipelineStateToGlobalResourceTable:(id)arg1 ;
-(void)addIndirectCommandBufferToGlobalResourceTable:(id)arg1 ;
-(BOOL)createArgumentBufferWithLayout:(id)arg1 type:(id)arg2 ;
-(void)encodeBuffer:(id)arg1 atResourceIndex:(unsigned long long)arg2 ;
-(void)encodeTexture:(id)arg1 atResourceIndex:(unsigned long long)arg2 ;
-(void)encodeSampler:(id)arg1 atResourceIndex:(unsigned long long)arg2 ;
-(void)encodeComputePipeline:(id)arg1 atResourceIndex:(unsigned long long)arg2 ;
-(void)encodeRenderPipeline:(id)arg1 atResourceIndex:(unsigned long long)arg2 ;
-(void)encodeIndirectCommandBuffer:(id)arg1 atResourceIndex:(unsigned long long)arg2 ;
-(id)initWithLayout:(id)arg1 type:(id)arg2 device:(id)arg3 ;
-(unsigned long long)reserveNextResourceIndexForType:(unsigned long long)arg1 ;
@end

