/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:28:30 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Extensions/AGXMetalA8.bundle/AGXMetalA8
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AGXMetalA8/AGXMetalA8-Structs.h>
#import <Metal/MTLIOAccelParallelRenderCommandEncoder.h>
#import <libobjc.A.dylib/MTLParallelRenderCommandEncoderSPI.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface AGXA8ThreadedRenderPass : MTLIOAccelParallelRenderCommandEncoder <MTLParallelRenderCommandEncoderSPI> {

	ThreadedRenderPass<AGX::G4P::Encoders, AGX::G4P::Classes, AGX::G4P::ObjClasses>* _impl;
	NSObject*<OS_dispatch_queue> dispatchQueue;
	vector<AGXA8RenderContext *, std::__1::allocator<AGXA8RenderContext *> >* _subOBJCRenderCommandEncoders;
	vector<AGX::G4P::RenderContext *, std::__1::allocator<AGX::G4P::RenderContext *> >* _subRenderCommandEncoders;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) id<MTLDevice> device; 
@property (copy) NSString * label; 
-(void)dealloc;
-(void)endEncoding;
-(id)renderCommandEncoder;
-(void)setColorStoreAction:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setDepthStoreAction:(unsigned long long)arg1 ;
-(void)setStencilStoreAction:(unsigned long long)arg1 ;
-(id)initWithCommandBuffer:(id)arg1 renderPassDescriptor:(id)arg2 ;
-(id)sampledRenderCommandEncoderWithProgramInfoBuffer:(SCD_Struct_AG15*)arg1 capacity:(unsigned long long)arg2 ;
-(BOOL)isMemorylessRender;
-(void)filterCounterRangeWithFirstBatch:(unsigned)arg1 lastBatch:(unsigned)arg2 filterIndex:(unsigned)arg3 ;
@end
