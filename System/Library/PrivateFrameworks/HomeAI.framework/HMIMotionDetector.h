/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:33 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HMIMotionDetector
@required
-(id)initWithSize:(CGSize)arg1;
-(void)appendFramePixelBuffer:(CVBufferRef)arg1 atTime:(SCD_Struct_HM4)arg2;
-(id)detectWithGlobalMotionScore:(float*)arg1;

@end

