/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:15 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPCNNHandKeypointsDetector : NSObject
+(id)detector;
-(float*)getInputBuffer:(int)arg1 srcWidth:(int)arg2 cnnInputHeight:(int*)arg3 cnnInputWidth:(int*)arg4 ;
-(int)copyImage:(CVBufferRef)arg1 toData:(float*)arg2 ;
-(int)createInput:(float*)arg1 withBuffer:(CVBufferRef)arg2 cnnInputHeight:(int)arg3 cnnInputWidth:(int)arg4 box:(id)arg5 ;
-(int)generateHandKeypoints:(CGPoint*)arg1 ;
-(int)cvtHeatmaps2Keypoints:(float*)arg1 outHeight:(int)arg2 outWidth:(int)arg3 outChannel:(int)arg4 keypoints:(CGPoint*)arg5 ;
-(int)handKeypointsDetection:(CVBufferRef)arg1 box:(id)arg2 keypoints:(CGPoint*)arg3 ;
@end

