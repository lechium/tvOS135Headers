/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:32 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsParallelRenderCommandEncoder.h>

@class MTLRenderPassDescriptor;

@interface MTLDebugParallelRenderCommandEncoder : MTLToolsParallelRenderCommandEncoder {

	unsigned _unknownStoreActions;
	MTLRenderPassDescriptor* _descriptor;

}

@property (nonatomic,copy,readonly) MTLRenderPassDescriptor * descriptor;              //@synthesize descriptor=_descriptor - In the implementation block
-(id)description;
-(void)dealloc;
-(MTLRenderPassDescriptor *)descriptor;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(void)endEncoding;
-(id)renderCommandEncoder;
-(void)setColorStoreAction:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setDepthStoreAction:(unsigned long long)arg1 ;
-(void)setStencilStoreAction:(unsigned long long)arg1 ;
-(void)setColorStoreActionOptions:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setDepthStoreActionOptions:(unsigned long long)arg1 ;
-(void)setStencilStoreActionOptions:(unsigned long long)arg1 ;
-(id)sampledRenderCommandEncoderWithProgramInfoBuffer:(SCD_Struct_MT6*)arg1 capacity:(unsigned long long)arg2 ;
-(void)filterCounterRangeWithFirstBatch:(unsigned)arg1 lastBatch:(unsigned)arg2 filterIndex:(unsigned)arg3 ;
-(id)initWithBaseRenderPass:(id)arg1 commandBuffer:(id)arg2 descriptor:(id)arg3 ;
@end
