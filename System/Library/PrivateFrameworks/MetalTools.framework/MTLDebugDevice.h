/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:32 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsDevice.h>

@class NSMutableSet;

@interface MTLDebugDevice : MTLToolsDevice {

	BOOL _prevResourceTrackingEnabled;
	NSMutableSet* _buffersAlreadyChecksummedInFrame;
	MTLSamplerDescriptorHashMap* _argumentBufferSamplers;
	BOOL _resourceTrackingEnabled;
	BOOL _resourceTrackingChecksummingEnabled;
	BOOL _resourceTrackingChecksummingForceAll;
	unsigned _frameNum;

}

@property (nonatomic,readonly) BOOL resourceTrackingEnabled;                           //@synthesize resourceTrackingEnabled=_resourceTrackingEnabled - In the implementation block
@property (assign,nonatomic) unsigned frameNum;                                        //@synthesize frameNum=_frameNum - In the implementation block
@property (nonatomic,readonly) BOOL resourceTrackingChecksummingEnabled;               //@synthesize resourceTrackingChecksummingEnabled=_resourceTrackingChecksummingEnabled - In the implementation block
@property (nonatomic,readonly) BOOL resourceTrackingChecksummingForceAll;              //@synthesize resourceTrackingChecksummingForceAll=_resourceTrackingChecksummingForceAll - In the implementation block
+(BOOL)complainAboutSloppyTextureUsage;
-(void)dealloc;
-(id)newArgumentEncoderWithLayout:(id)arg1 ;
-(id)newSharedTextureWithHandle:(id)arg1 ;
-(id)newTextureWithDescriptor:(id)arg1 iosurface:(IOSurfaceRef)arg2 plane:(unsigned long long)arg3 ;
-(id)newComputePipelineStateWithDescriptor:(id)arg1 error:(id*)arg2 ;
-(void)newComputePipelineStateWithDescriptor:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4 ;
-(void)newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)newComputePipelineStateWithFunction:(id)arg1 error:(id*)arg2 ;
-(id)newCommandQueueWithDescriptor:(id)arg1 ;
-(id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2 ;
-(id)newBufferWithBytes:(const void*)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3 ;
-(id)newBufferWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3 deallocator:(/*^block*/id)arg4 ;
-(id)newLibraryWithFile:(id)arg1 error:(id*)arg2 ;
-(id)newLibraryWithURL:(id)arg1 error:(id*)arg2 ;
-(id)newSharedTextureWithDescriptor:(id)arg1 ;
-(id)newDefaultLibrary;
-(id)newDefaultLibraryWithBundle:(id)arg1 error:(id*)arg2 ;
-(id)newLibraryWithData:(id)arg1 error:(id*)arg2 ;
-(id)newLibraryWithSource:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(void)newLibraryWithSource:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)newPipelineLibraryWithFilePath:(id)arg1 error:(id*)arg2 ;
-(void)newComputePipelineStateWithFunction:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4 ;
-(void)newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)newComputePipelineStateWithImageFilterFunctionsSPI:(id)arg1 imageFilterFunctionInfo:(const SCD_Struct_MT19*)arg2 error:(id*)arg3 ;
-(id)newLibraryWithImageFilterFunctionsSPI:(id)arg1 imageFilterFunctionInfo:(const SCD_Struct_MT19*)arg2 error:(id*)arg3 ;
-(unsigned long long)minimumLinearTextureAlignmentForPixelFormat:(unsigned long long)arg1 ;
-(unsigned long long)minLinearTextureAlignmentForPixelFormat:(unsigned long long)arg1 ;
-(id)newCommandQueue;
-(id)newCommandQueueWithMaxCommandBufferCount:(unsigned long long)arg1 ;
-(id)newArgumentEncoderWithArguments:(id)arg1 ;
-(id)newEvent;
-(id)newSharedEvent;
-(id)newSharedEventWithHandle:(id)arg1 ;
-(id)newSharedEventWithMachPort:(unsigned)arg1 ;
-(id)newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4 ;
-(NSRange)heapTextureSizeAndAlignWithDescriptor:(id)arg1 ;
-(NSRange)heapBufferSizeAndAlignWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2 ;
-(id)newHeapWithDescriptor:(id)arg1 ;
-(id)newDepthStencilStateWithDescriptor:(id)arg1 ;
-(id)newTextureWithDescriptor:(id)arg1 ;
-(id)newSamplerStateWithDescriptor:(id)arg1 ;
-(id)newRenderPipelineStateWithDescriptor:(id)arg1 error:(id*)arg2 ;
-(void)newRenderPipelineStateWithDescriptor:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)newIndirectCommandBufferWithDescriptor:(id)arg1 maxCommandCount:(unsigned long long)arg2 options:(unsigned long long)arg3 ;
-(id)newBufferWithIOSurface:(IOSurfaceRef)arg1 ;
-(id)newTextureWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 descriptor:(id)arg3 deallocator:(/*^block*/id)arg4 ;
-(id)newTextureLayoutWithDescriptor:(id)arg1 isHeapOrBufferBacked:(BOOL)arg2 ;
-(id)initWithBaseObject:(id)arg1 parent:(id)arg2 ;
-(void)eventSignaled:(id)arg1 value:(unsigned long long)arg2 ;
-(void)validateTraceBuffer:(unsigned long long)arg1 maxBufferCount:(unsigned long long)arg2 options:(unsigned long long)arg3 ;
-(BOOL)resourceTrackingEnabled;
-(BOOL)resourceTrackingChecksummingForceAll;
-(BOOL)resourceTrackingChecksummingEnabled;
-(unsigned)checksumBuffer:(id)arg1 ;
-(unsigned)frameNum;
-(void)bufferChecksummedInFrame:(id)arg1 ;
-(void)validateResourceOptions:(unsigned long long)arg1 isTexture:(BOOL)arg2 isIOSurface:(BOOL)arg3 ;
-(void)validateNewBufferArgs:(unsigned long long)arg1 options:(unsigned long long)arg2 ;
-(void)validateMemorylessResource:(id)arg1 ;
-(id)_newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4 ;
-(void)_newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4 ;
-(void)_newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4 ;
-(void)_newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_resourceTrackingChecksummingEndOfFrame;
-(id)_newSharedEventWithParent:(id)arg1 ;
-(void)notifySamplerStateDeallocated:(id)arg1 ;
-(void)resourceTrackingEndOfFrame;
-(BOOL)overrideResourceTrackingEnabled:(BOOL)arg1 ;
-(BOOL)restoreResourceTrackingEnabled;
-(void)setFrameNum:(unsigned)arg1 ;
@end

