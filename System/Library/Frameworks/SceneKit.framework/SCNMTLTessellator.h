/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:35 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLBuffer;
#import <SceneKit/SceneKit-Structs.h>
@class SCNMTLResourceManager;

@interface SCNMTLTessellator : NSObject {

	_C3DGeometry* _geometry;
	SCNMTLResourceManager* _resourceManager;
	SCD_Struct_SC24 _cachedTessellator;
	id<MTLBuffer> _tessellationFactorBuffer;

}
-(void)dealloc;
-(void)update:(SCD_Struct_SC25*)arg1 ;
-(SCD_Struct_SC26)_pipelineStateHashForMeshElement:(id)arg1 patchType:(unsigned char)arg2 ;
-(void)updateUniformTessellator:(SCD_Struct_SC27)arg1 ;
-(void)updateScreenSpaceAdaptiveTessellator:(SCD_Struct_SC27)arg1 parameters:(SCD_Struct_SC25*)arg2 ;
-(void)updateConstrainedEdgeLengthTessellator:(SCD_Struct_SC27)arg1 withMesh:(id)arg2 computeCommandEncoder:(id)arg3 ;
-(void)updateSubdivisionSurfaceTessellator:(SCD_Struct_SC27)arg1 parameters:(SCD_Struct_SC25*)arg2 ;
-(void)uniformTessellationDrawMeshElement:(id)arg1 forMesh:(id)arg2 instanceCount:(unsigned long long)arg3 renderCommandEncoder:(id)arg4 renderContext:(id)arg5 ;
-(void)screenSpaceAdaptiveTessellationDrawMeshElement:(id)arg1 forMesh:(id)arg2 instanceCount:(unsigned long long)arg3 renderCommandEncoder:(id)arg4 renderContext:(id)arg5 ;
-(void)constrainedEdgeLengthTessellationDrawMeshElement:(id)arg1 forMesh:(id)arg2 instanceCount:(unsigned long long)arg3 renderCommandEncoder:(id)arg4 renderContext:(id)arg5 ;
-(void)subdivisionSurfaceTessellationDraw:(SCD_Struct_SC28*)arg1 ;
-(id)initWithGeometry:(_C3DGeometry*)arg1 resourceManager:(id)arg2 ;
-(unsigned char)pipelineStateHashForMeshElement:(id)arg1 patchType:(unsigned char)arg2 ;
-(/*^block*/id)newPipelineStateConfiguratorForMeshElement:(id)arg1 patchType:(unsigned char)arg2 device:(id)arg3 ;
-(void)draw:(SCD_Struct_SC28*)arg1 ;
@end

