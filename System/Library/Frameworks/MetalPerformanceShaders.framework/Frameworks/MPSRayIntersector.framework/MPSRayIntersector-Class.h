/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:14 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSRayIntersector.framework/MPSRayIntersector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSRayIntersector/MPSRayIntersector-Structs.h>
#import <MPSCore/MPSKernel.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol MTLBuffer, MTLComputePipelineState;
@interface MPSRayIntersector : MPSKernel <NSSecureCoding, NSCopying> {

	unsigned long long _cullMode;
	unsigned long long _frontFacingWinding;
	unsigned long long _triangleIntersectionTestType;
	unsigned long long _boundingBoxIntersectionTestType;
	unsigned long long _rayMaskOptions;
	unsigned long long _rayDataType;
	unsigned long long _intersectionDataType;
	BOOL _proRender;
	unsigned long long _rayMaskOperator;
	id<MTLBuffer> _dispatchIndirectBuffer;
	id<MTLComputePipelineState> _dispatchIndirectPipeline;
	unsigned long long _proRenderOptions;
	id<MTLBuffer> _shapeIndexBuffer;
	unsigned long long _shapeIndexBufferOffset;
	id<MTLBuffer> _shapeDataBuffer;
	unsigned long long _shapeDataBufferOffset;
	id<MTLBuffer> _rayIndexBuffer;
	unsigned long long _rayIndexBufferOffset;
	id<MTLBuffer> _rayMaskBuffer;
	unsigned long long _rayMaskBufferOffset;
	unsigned long long _multiHitCount;
	unsigned long long _renderLayerMask;
	 _clippingPlane;
	unsigned long long _globalRayMask;
	unsigned _rayIndexDataType;
	unsigned long long _shapeDataStride;
	unsigned long long _shapeDataMaskOffset;
	unsigned long long _shapeDataRenderLayerOffset;
	id<MTLBuffer> _rayStatisticsBuffer;
	unsigned long long _rayStatisticsBufferOffset;
	unsigned long long _rayStatistics;
	BOOL _useMultipleThreadsPerRay;
	unsigned long long _intersectionEvent;
	unsigned _rayMask;
	unsigned long long _rayStride;
	unsigned long long _intersectionStride;

}

@property (assign,nonatomic) unsigned long long cullMode; 
@property (assign,nonatomic) unsigned long long frontFacingWinding; 
@property (assign,nonatomic) unsigned long long triangleIntersectionTestType; 
@property (assign,nonatomic) unsigned long long boundingBoxIntersectionTestType; 
@property (assign,nonatomic) unsigned long long rayMaskOptions; 
@property (assign,nonatomic) unsigned long long rayMaskOperator; 
@property (assign,nonatomic) unsigned long long rayStride;                                    //@synthesize rayStride=_rayStride - In the implementation block
@property (assign,nonatomic) unsigned long long intersectionStride;                           //@synthesize intersectionStride=_intersectionStride - In the implementation block
@property (assign,nonatomic) unsigned long long rayDataType; 
@property (assign,nonatomic) unsigned long long intersectionDataType; 
@property (assign,nonatomic) unsigned rayIndexDataType; 
@property (assign,nonatomic) unsigned rayMask;                                                //@synthesize rayMask=_rayMask - In the implementation block
+(BOOL)supportsSecureCoding;
+(const MPSLibraryInfo*)libraryInfo;
-(id)description;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(void)setCullMode:(unsigned long long)arg1 ;
-(void)setFrontFacingWinding:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(unsigned long long)cullMode;
-(unsigned long long)frontFacingWinding;
-(void)sharedInitRaytracer;
-(MPSRayIntersectorFunctionHash)getHashForIntersectionType:(unsigned long long)arg1 indexing:(BOOL)arg2 indexType:(unsigned)arg3 instancing:(BOOL)arg4 vertexStride:(unsigned long long)arg5 transformType:(unsigned long long)arg6 rootNodeType:(int)arg7 branchingFactor:(unsigned long long)arg8 nodeLayout:(int)arg9 polygonType:(unsigned long long)arg10 rayIndexing:(BOOL)arg11 useRayTexture:(BOOL)arg12 useResourceBuffer:(BOOL)arg13 ;
-(unsigned long long)startIntersectionEventWithCommandBuffer:(id)arg1 accelerationStructure:(id)arg2 ;
-(void)endIntersectionEvent:(unsigned long long)arg1 commandBuffer:(id)arg2 accelerationStructure:(id)arg3 ;
-(id)getPipelineForIntersectionType:(unsigned long long)arg1 rayIndexing:(BOOL)arg2 useRayTexture:(BOOL)arg3 useResourceBuffer:(BOOL)arg4 accelerationStructure:(id)arg5 commandBuffer:(id)arg6 ;
-(unsigned long long)rayMaskOptions;
-(void)setRayMaskOptions:(unsigned long long)arg1 ;
-(unsigned long long)rayMaskOperator;
-(void)setRayMaskOperator:(unsigned long long)arg1 ;
-(unsigned long long)rayDataType;
-(void)setRayDataType:(unsigned long long)arg1 ;
-(unsigned long long)intersectionDataType;
-(void)setIntersectionDataType:(unsigned long long)arg1 ;
-(unsigned long long)triangleIntersectionTestType;
-(void)setTriangleIntersectionTestType:(unsigned long long)arg1 ;
-(unsigned long long)boundingBoxIntersectionTestType;
-(void)setBoundingBoxIntersectionTestType:(unsigned long long)arg1 ;
-(unsigned long long)proRenderOptions;
-(void)setProRenderOptions:(unsigned long long)arg1 ;
-(id)shapeIndexBuffer;
-(void)setShapeIndexBuffer:(id)arg1 ;
-(unsigned long long)shapeIndexBufferOffset;
-(void)setShapeIndexBufferOffset:(unsigned long long)arg1 ;
-(id)shapeDataBuffer;
-(void)setShapeDataBuffer:(id)arg1 ;
-(unsigned long long)shapeDataBufferOffset;
-(void)setShapeDataBufferOffset:(unsigned long long)arg1 ;
-(id)rayIndexBuffer;
-(void)setRayIndexBuffer:(id)arg1 ;
-(unsigned long long)rayIndexBufferOffset;
-(void)setRayIndexBufferOffset:(unsigned long long)arg1 ;
-(unsigned)rayIndexDataType;
-(void)setRayIndexDataType:(unsigned)arg1 ;
-(id)rayMaskBuffer;
-(void)setRayMaskBuffer:(id)arg1 ;
-(unsigned long long)rayMaskBufferOffset;
-(void)setRayMaskBufferOffset:(unsigned long long)arg1 ;
-(unsigned long long)multiHitCount;
-(void)setMultiHitCount:(unsigned long long)arg1 ;
-(unsigned long long)renderLayerMask;
-(void)setRenderLayerMask:(unsigned long long)arg1 ;
-(1)clippingPlane;
-(void)setClippingPlane:;
-(unsigned long long)globalRayMask;
-(void)setGlobalRayMask:(unsigned long long)arg1 ;
-(unsigned long long)shapeDataStride;
-(void)setShapeDataStride:(unsigned long long)arg1 ;
-(unsigned long long)shapeDataMaskOffset;
-(void)setShapeDataMaskOffset:(unsigned long long)arg1 ;
-(unsigned long long)shapeDataRenderLayerOffset;
-(void)setShapeDataRenderLayerOffset:(unsigned long long)arg1 ;
-(id)rayStatisticsBuffer;
-(void)setRayStatisticsBuffer:(id)arg1 ;
-(unsigned long long)rayStatisticsBufferOffset;
-(void)setRayStatisticsBufferOffset:(unsigned long long)arg1 ;
-(unsigned long long)rayStatistics;
-(void)setRayStatistics:(unsigned long long)arg1 ;
-(BOOL)useMultipleThreadsPerRay;
-(void)setUseMultipleThreadsPerRay:(BOOL)arg1 ;
-(unsigned long long)recommendedMinimumRayBatchSizeForRayCount:(unsigned long long)arg1 ;
-(void)encodeIntersectionToCommandBuffer:(id)arg1 intersectionType:(unsigned long long)arg2 rayBuffer:(id)arg3 rayBufferOffset:(unsigned long long)arg4 intersectionBuffer:(id)arg5 intersectionBufferOffset:(unsigned long long)arg6 rayCount:(unsigned long long)arg7 accelerationStructure:(id)arg8 ;
-(void)encodeIntersectionToCommandBuffer:(id)arg1 intersectionType:(unsigned long long)arg2 rayBuffer:(id)arg3 rayBufferOffset:(unsigned long long)arg4 intersectionBuffer:(id)arg5 intersectionBufferOffset:(unsigned long long)arg6 rayCountBuffer:(id)arg7 rayCountBufferOffset:(unsigned long long)arg8 accelerationStructure:(id)arg9 ;
-(void)encodeIntersectionToCommandBuffer:(id)arg1 intersectionType:(unsigned long long)arg2 rayBuffer:(id)arg3 rayBufferOffset:(unsigned long long)arg4 rayIndexBuffer:(id)arg5 rayIndexBufferOffset:(unsigned long long)arg6 intersectionBuffer:(id)arg7 intersectionBufferOffset:(unsigned long long)arg8 rayIndexCount:(unsigned long long)arg9 accelerationStructure:(id)arg10 ;
-(void)encodeIntersectionToCommandBuffer:(id)arg1 intersectionType:(unsigned long long)arg2 rayBuffer:(id)arg3 rayBufferOffset:(unsigned long long)arg4 rayIndexBuffer:(id)arg5 rayIndexBufferOffset:(unsigned long long)arg6 intersectionBuffer:(id)arg7 intersectionBufferOffset:(unsigned long long)arg8 rayIndexCountBuffer:(id)arg9 rayIndexCountBufferOffset:(unsigned long long)arg10 accelerationStructure:(id)arg11 ;
-(void)encodeIntersectionToCommandBuffer:(id)arg1 intersectionType:(unsigned long long)arg2 rayTexture:(id)arg3 intersectionTexture:(id)arg4 accelerationStructure:(id)arg5 ;
-(unsigned long long)rayStride;
-(void)setRayStride:(unsigned long long)arg1 ;
-(unsigned long long)intersectionStride;
-(void)setIntersectionStride:(unsigned long long)arg1 ;
-(unsigned)rayMask;
-(void)setRayMask:(unsigned)arg1 ;
@end

