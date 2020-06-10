/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:37 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/VideoProcessors/FPDisparityV2.bundle/FPDisparityV2
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLCommandQueue, MTLComputePipelineState, MTLTexture;
#import <FPDisparityV2/FPDisparityV2-Structs.h>
@class FigMetalContext, PyrGPU;

@interface TVL1_v3 : NSObject {

	FigMetalContext* _mtlContext;
	id<MTLCommandQueue> _commandQueue;
	id<MTLComputePipelineState> _computePipelines[5];
	CVBufferRef _R_a_pxbuf;
	id<MTLTexture> _R_a_tex[32];
	CVBufferRef _R_d_pxbuf;
	id<MTLTexture> _R_d_tex[32];
	CVBufferRef _R_b_pxbuf;
	id<MTLTexture> _R_b_tex[32];
	_CVBuffer* _p_pxbuf[2];
	id<MTLTexture> _p_tex[32][2];
	_CVBuffer* _uv_relax_pxbuf[2];
	id<MTLTexture> _uv_relax_tex[32][2];
	_CVBuffer* _uv_pxbuf[2];
	id<MTLTexture> _uv_tex[32][2];
	id<MTLTexture> _uv_tex_user_ref;
	BOOL _isValid;
	int _countScales;
	PyrGPU* _pyramidReference;
	CGSize _outputDisparityResolution;

}

@property (nonatomic,readonly) BOOL isValid;                                  //@synthesize isValid=_isValid - In the implementation block
@property (nonatomic,readonly) int countScales;                               //@synthesize countScales=_countScales - In the implementation block
@property (nonatomic,readonly) CGSize outputDisparityResolution;              //@synthesize outputDisparityResolution=_outputDisparityResolution - In the implementation block
@property (nonatomic,retain) PyrGPU * pyramidReference;                       //@synthesize pyramidReference=_pyramidReference - In the implementation block
-(void)dealloc;
-(BOOL)isValid;
-(void)releaseResources;
-(int)_setupBuffer;
-(int)allocateResources;
-(int)_setupPipelines;
-(id)initWithMetalContext:(id)arg1 ;
-(int)countScales;
-(int)_setupTexture;
-(int)_doUpscaleSingleWithCommandBuffer:(id)arg1 in_tex:(id)arg2 out_tex:(id)arg3 coeff:(float)arg4 ;
-(int)_doUpscaleDualWithCommandBuffer:(id)arg1 in_tex:(id)arg2 out_tex:(id)arg3 ;
-(id)textureUVAtLevel:(int)arg1 idx_swap_uv:(int)arg2 ;
-(id)textureUVRelaxAtLevel:(int)arg1 idx_swap_uv:(int)arg2 ;
-(id)texturePAtLevel:(int)arg1 idx_swap_p:(int)arg2 ;
-(id)textureRaAtLevel:(int)arg1 ;
-(id)textureRbAtLevel:(int)arg1 ;
-(id)textureRdAtLevel:(int)arg1 ;
-(int)doSolveChambollePrimalDualWithCommandBuffer:(id)arg1 idx_swap_uv_in_out:(int*)arg2 idx_swap_p_in_out:(int*)arg3 in_res_tes:(id)arg4 in_hes_tes:(id)arg5 out_uv_tex:(id)arg6 level:(int)arg7 iterations:(int)arg8 box_cstr_range:(float)arg9 disparity_scaling_factor:(id)arg10 ;
-(int)doInitPrimalDualWithCommandBuffer:(id)arg1 disparity_value:(float)arg2 idx_swap_uv:(int)arg3 idx_swap_p:(int)arg4 level:(int)arg5 ;
-(int)doUpscalePrimalDualWithCommandBuffer:(id)arg1 idx_swap_uv_in_out:(int*)arg2 idx_swap_p_in_out:(int*)arg3 level:(int)arg4 coeff:(float)arg5 ;
-(int)doLocalRegularizationWithCommandBuffer:(id)arg1 in_tex:(id)arg2 level:(int)arg3 parameters:(id)arg4 ;
-(CGSize)outputDisparityResolution;
-(PyrGPU *)pyramidReference;
-(void)setPyramidReference:(PyrGPU *)arg1 ;
@end

