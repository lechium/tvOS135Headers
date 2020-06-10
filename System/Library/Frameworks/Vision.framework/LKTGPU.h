/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:17 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLCommandQueue, MTLComputePipelineState, MTLTexture, MTLBuffer;
#import <Vision/Vision-Structs.h>
@class LKTMetalContext;

@interface LKTGPU : NSObject {

	LKTMetalContext* _mtlContext;
	id<MTLCommandQueue> _commandQueue;
	id<MTLComputePipelineState> _computePipelines[9];
	unsigned long long _maxThreadExecutionWidth;
	CGSize _pyramid_size[10];
	id<MTLTexture> _I_tex[2][10];
	id<MTLTexture> _I_u32_alias_tex[2][10];
	CVBufferRef _G0_pxbuf;
	CVBufferRef _G1_pxbuf;
	id<MTLTexture> _G0_tex[10];
	id<MTLTexture> _G1_tex[10];
	CVBufferRef _C0_pxbuf;
	CVBufferRef _C1_pxbuf;
	id<MTLTexture> _C0_tex[10];
	id<MTLTexture> _C1_tex[10];
	id<MTLBuffer> _Adiagb_buf[2];
	id<MTLBuffer> _Ixy_buf[2];
	CVBufferRef _w_pxbuf;
	id<MTLTexture> _w_tex[10];
	_CVBuffer* _uv_pxbuf[2];
	id<MTLTexture> _uv_tex[2][10];
	id<MTLTexture> _uv_u32_alias_tex[2][10];
	int _current_frame_index;
	int _streamFrameCount;
	id<MTLTexture> _uv_tex_user_ref;
	BOOL _isValid;
	BOOL _needConversionBGRA2YUVA;
	BOOL _useNonLocalRegularization;
	int _width;
	int _height;
	int _nscales;
	int _nwarpings;
	int _nlreg_radius;
	int _nlreg_padding;
	float _nlreg_sigma_l;
	float _nlreg_sigma_c;
	float _nlreg_sigma_w;

}

@property (nonatomic,readonly) BOOL isValid;                              //@synthesize isValid=_isValid - In the implementation block
@property (assign,nonatomic) BOOL needConversionBGRA2YUVA;                //@synthesize needConversionBGRA2YUVA=_needConversionBGRA2YUVA - In the implementation block
@property (nonatomic,readonly) int width;                                 //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) int height;                                //@synthesize height=_height - In the implementation block
@property (nonatomic,readonly) int nscales;                               //@synthesize nscales=_nscales - In the implementation block
@property (nonatomic,readonly) int streamFrameCount;                      //@synthesize streamFrameCount=_streamFrameCount - In the implementation block
@property (assign,nonatomic) int nwarpings;                               //@synthesize nwarpings=_nwarpings - In the implementation block
@property (assign,nonatomic) BOOL useNonLocalRegularization;              //@synthesize useNonLocalRegularization=_useNonLocalRegularization - In the implementation block
@property (assign,nonatomic) int nlreg_radius;                            //@synthesize nlreg_radius=_nlreg_radius - In the implementation block
@property (assign,nonatomic) int nlreg_padding;                           //@synthesize nlreg_padding=_nlreg_padding - In the implementation block
@property (assign,nonatomic) float nlreg_sigma_l;                         //@synthesize nlreg_sigma_l=_nlreg_sigma_l - In the implementation block
@property (assign,nonatomic) float nlreg_sigma_c;                         //@synthesize nlreg_sigma_c=_nlreg_sigma_c - In the implementation block
@property (assign,nonatomic) float nlreg_sigma_w;                         //@synthesize nlreg_sigma_w=_nlreg_sigma_w - In the implementation block
-(void)dealloc;
-(BOOL)isValid;
-(void)reset;
-(int)width;
-(int)height;
-(void)waitUntilCompleted;
-(id)initWithMetalContext:(id)arg1 width:(int)arg2 height:(int)arg3 nscales:(int)arg4 error:(id*)arg5 ;
-(BOOL)setOutputUV:(CVBufferRef)arg1 error:(id*)arg2 ;
-(int)estimateFlowFromReference:(CVBufferRef)arg1 target:(CVBufferRef)arg2 error:(id*)arg3 ;
-(int)estimateFlowStream:(CVBufferRef)arg1 error:(id*)arg2 ;
-(BOOL)_initMemory:(int)arg1 height:(int)arg2 nscales:(int)arg3 error:(id*)arg4 ;
-(void)_setupPipelines;
-(BOOL)_setupBufferAndReturnError:(id*)arg1 ;
-(int)_computeOpticalFlow;
-(BOOL)_createImagePyramidWithCommandBuffer:(id)arg1 in_pixelbuf:(CVBufferRef)arg2 I_idx:(int)arg3 error:(id*)arg4 ;
-(int)_zeroFlowWithCommandBuffer:(id)arg1 uv_tex:(id)arg2 ;
-(int)_downscale2XWithCommandBuffer:(id)arg1 in_u32_alias_tex:(id)arg2 out_u32_alias_tex:(id)arg3 ;
-(int)_computeFeaturesWithCommandBuffer:(id)arg1 in_tex:(id)arg2 out_tex:(id)arg3 ;
-(int)_computeFeaturesDerivativesWithCommandBuffer:(id)arg1 in_tex:(id)arg2 out_tex:(id)arg3 ;
-(int)_doSolverWithCommandBuffer:(id)arg1 scale:(int)arg2 scale_xy_inv:(id)arg3 coeff:(id)arg4 in_uv_tex:(id)arg5 ;
-(int)_doNLRegularizationWithCommandBuffer:(id)arg1 in_uv_tex:(id)arg2 join_tex:(id)arg3 w_tex:(id)arg4 out_uv_tex:(id)arg5 ;
-(BOOL)needConversionBGRA2YUVA;
-(void)setNeedConversionBGRA2YUVA:(BOOL)arg1 ;
-(int)nscales;
-(int)streamFrameCount;
-(int)nwarpings;
-(void)setNwarpings:(int)arg1 ;
-(BOOL)useNonLocalRegularization;
-(void)setUseNonLocalRegularization:(BOOL)arg1 ;
-(int)nlreg_radius;
-(void)setNlreg_radius:(int)arg1 ;
-(int)nlreg_padding;
-(void)setNlreg_padding:(int)arg1 ;
-(float)nlreg_sigma_l;
-(void)setNlreg_sigma_l:(float)arg1 ;
-(float)nlreg_sigma_c;
-(void)setNlreg_sigma_c:(float)arg1 ;
-(float)nlreg_sigma_w;
-(void)setNlreg_sigma_w:(float)arg1 ;
@end

