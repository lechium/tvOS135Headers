/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:28:30 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Extensions/AGXMetalA8.bundle/AGXMetalA8
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AGXMetalA8/AGXMetalA8-Structs.h>
#import <Metal/_MTLComputePipelineState.h>
#import <libobjc.A.dylib/MTLComputePipelineStateSPI.h>

@class MTLDebugInstrumentationData, AGXA8ComputeProgram, NSString;

@interface AGXA8ComputePipeline : _MTLComputePipelineState <MTLComputePipelineStateSPI> {

	ComputePipeline* _impl;
	AGXA8ComputeProgram* _cp;

}

@property (readonly) unsigned long long maxTotalThreadsPerThreadgroup; 
@property (readonly) unsigned long long threadExecutionWidth; 
@property (readonly) unsigned long long staticThreadgroupMemoryLength; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSString * label; 
@property (readonly) id<MTLDevice> device; 
@property (readonly) BOOL supportIndirectCommandBuffers; 
@property (assign,nonatomic) unsigned long long resourceIndex; 
@property (readonly) unsigned long long uniqueIdentifier; 
@property (nonatomic,retain,readonly) MTLDebugInstrumentationData * debugInstrumentationData; 
-(void)dealloc;
-(unsigned long long)uniqueIdentifier;
-(unsigned long long)maxTotalThreadsPerThreadgroup;
-(unsigned long long)threadExecutionWidth;
-(unsigned long long)staticThreadgroupMemoryLength;
-(id)initWithDevice:(id)arg1 pipelineStateDescriptor:(id)arg2 ;
@end

