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

@interface MPSTemporalAA : MPSKernel <NSSecureCoding, NSCopying> {

	float _blendFactor;

}

@property (assign,nonatomic) float blendFactor; 
+(BOOL)supportsSecureCoding;
+(const MPSLibraryInfo*)libraryInfo;
-(id)description;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(MPSTemporalAAParams)params;
-(void)setBlendFactor:(float)arg1 ;
-(float)blendFactor;
-(unsigned long long)channelCount:(id)arg1 ;
-(MPSTemporalAAFunctionHash)getHashForKernelID:(unsigned long long)arg1 haveMotionVectorTexture:(BOOL)arg2 haveDepthTexture:(BOOL)arg3 ;
-(id)getPipelineForFunctionName:(id)arg1 kernelID:(unsigned long long)arg2 haveMotionVectorTexture:(BOOL)arg3 haveDepthTexture:(BOOL)arg4 ;
-(void)encodeToCommandBuffer:(id)arg1 sourceTexture:(id)arg2 previousTexture:(id)arg3 destinationTexture:(id)arg4 motionVectorTexture:(id)arg5 depthTexture:(id)arg6 ;
@end

