/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:28:05 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/PAEFilterDefaultBase.h>

@interface PAEGlow : PAEFilterDefaultBase
-(void)dealloc;
-(id)properties;
-(id)initWithAPIManager:(id)arg1 ;
-(BOOL)addParameters;
-(BOOL)canThrowRenderOutput:(id)arg1 withInput:(id)arg2 withInfo:(SCD_Struct_PA78*)arg3 ;
-(BOOL)frameSetup:(SCD_Struct_PA78*)arg1 inputInfo:(SCD_Struct_PA79)arg2 hardware:(BOOL*)arg3 software:(BOOL*)arg4 ;
-(id)dynamicPropertiesAtTime:(/*function pointer*/void**)arg1 withError:(id*)arg2 ;
-(BOOL)getOutputWidth:(unsigned long long*)arg1 height:(unsigned long long*)arg2 withInput:(SCD_Struct_PA79)arg3 withInfo:(SCD_Struct_PA78*)arg4 ;
-(HGRef<HGNode>*)get360BlurNode:(HGRef<HGNode>*)arg1 withInputImage:(id)arg2 outputImage:(id)arg3 blurRadius:(double)arg4 blurScale:(PCVector2<double>)arg5 ;
-(HGRef<HGNode>*)getPlanarBlurNode:(HGRef<HGNode>*)arg1 withInputImage:(id)arg2 outputImage:(id)arg3 blurRadius:(double)arg4 blurScale:(PCVector2<double>)arg5 ;
-(HGRef<HGNode>*)getBlurNode:(HGRef<HGNode>*)arg1 withInputImage:(id)arg2 outputImage:(id)arg3 blurRadius:(double)arg4 blurScale:(PCVector2<double>)arg5 is360:(BOOL)arg6 ;
@end
