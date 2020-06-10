/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:28:05 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/PAEFilterDefaultBase.h>

@interface PAEContrast : PAEFilterDefaultBase
-(id)properties;
-(id)initWithAPIManager:(id)arg1 ;
-(BOOL)addParameters;
-(BOOL)canThrowRenderOutput:(id)arg1 withInput:(id)arg2 withInfo:(SCD_Struct_PA78*)arg3 ;
-(BOOL)frameSetup:(SCD_Struct_PA78*)arg1 inputInfo:(SCD_Struct_PA79)arg2 hardware:(BOOL*)arg3 software:(BOOL*)arg4 ;
-(CGPoint)calculateBezier:(double)arg1 startPt:(CGPoint)arg2 controlPoint1:(CGPoint)arg3 controlPoint2:(CGPoint)arg4 endPt:(CGPoint)arg5 ;
-(void)generateLut:(RGBAfPixel*)arg1 forContrast:(double)arg2 andPivot:(double)arg3 ;
@end

