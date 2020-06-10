/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:16 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPCNNPoseEstimator : NSObject
+(id)estimator;
-(float*)getInputBuffer;
-(int)computePoseScore:(float*)arg1 ;
-(int)detectPoseForFace:(CGRect)arg1 inBuffer:(CVBufferRef)arg2 yaw:(long long*)arg3 ;
@end

