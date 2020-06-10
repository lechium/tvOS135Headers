/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:28:04 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/PAEGeneratorDefaultBase.h>

@interface PAECheckerboard : PAEGeneratorDefaultBase
-(id)properties;
-(id)initWithAPIManager:(id)arg1 ;
-(BOOL)addParameters;
-(id)multiplyMatrix:(id)arg1 byMatrix:(id)arg2 ;
-(void)getTransformMatrix:(double*)arg1 forCenterX:(double)arg2 centerY:(double)arg3 angle:(double)arg4 andOutputImage:(id)arg5 ;
-(BOOL)variesOverTime;
-(BOOL)frameSetup:(SCD_Struct_PA78*)arg1 hardware:(BOOL*)arg2 software:(BOOL*)arg3 ;
-(BOOL)parameterChanged:(unsigned)arg1 ;
-(void)filteredEdges:(BOOL*)arg1 withInfo:(SCD_Struct_PA78*)arg2 ;
-(void)updateShapeParameter:(unsigned)arg1 atTime:(/*function pointer*/void**)arg2 ;
-(BOOL)canThrowRenderOutput:(id)arg1 withInfo:(SCD_Struct_PA78*)arg2 ;
@end

