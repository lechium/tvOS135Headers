/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:28:07 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/PAESharedDefaultBase.h>
#import <libobjc.A.dylib/FxFilter.h>

@interface PAEFilterDefaultBase : PAESharedDefaultBase <FxFilter>
-(BOOL)canThrowRenderOutput:(id)arg1 withInput:(id)arg2 withInfo:(SCD_Struct_PA78*)arg3 ;
-(BOOL)frameSetup:(SCD_Struct_PA78*)arg1 inputInfo:(SCD_Struct_PA79)arg2 hardware:(BOOL*)arg3 software:(BOOL*)arg4 ;
-(id)getParamErrorFor:(id)arg1 ;
-(BOOL)getOutputWidth:(unsigned long long*)arg1 height:(unsigned long long*)arg2 withInput:(SCD_Struct_PA79)arg3 withInfo:(SCD_Struct_PA78*)arg4 ;
-(HGRef<HGNode>*)makePrescaledBlurNode:(HGRef<HGNode>*)arg1 radius:(float)arg2 withScale:(PCVector2<float>)arg3 minInputScale:(float)arg4 maxInputScale:(float)arg5 ;
-(id)getParamAPIWithError:(id*)arg1 ;
-(BOOL)getInputBitmap:(id*)arg1 withInfo:(SCD_Struct_PA78*)arg2 atTime:(/*function pointer*/void**)arg3 withROI:(HGRect*)arg4 ;
-(BOOL)getInputBitmap:(id*)arg1 withInfo:(SCD_Struct_PA78*)arg2 atTime:(/*function pointer*/void**)arg3 appendHGGraph:(HGRef<HGNode>*)arg4 ;
-(HGRef<HGNode>*)preScaleDown:(float)arg1 withOutputRadius:(float*)arg2 withOutputScaleFactor:(float*)arg3 withInput:(HGRef<HGNode>*)arg4 minInputScale:(float)arg5 maxInputScale:(float)arg6 ;
-(HGRef<HGNode>*)preScaleUp:(float)arg1 withInput:(HGRef<HGNode>*)arg2 ;
-(BOOL)renderOutput:(id)arg1 withInput:(id)arg2 withInfo:(SCD_Struct_PA78*)arg3 ;
@end

