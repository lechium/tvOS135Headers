/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:17 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPCNNFastGestureRecognition : NSObject
+(id)detector;
-(float*)getInputBuffer:(int)arg1 srcWidth:(int)arg2 cnnInputHeight:(int*)arg3 cnnInputWidth:(int*)arg4 ;
-(int)createModel:(int)arg1 srcWidth:(int)arg2 ;
-(int)getDetectionScore:(float*)arg1 ;
-(int)planDestroy;
-(int)copyImage:(CVBufferRef)arg1 toData:(float*)arg2 withChunk:(int)arg3 ;
-(int)createInput:(float*)arg1 withBuffer:(CVBufferRef)arg2 cnnInputHeight:(int)arg3 cnnInputWidth:(int)arg4 ;
-(int)gestureDetection:(CVBufferRef)arg1 score:(float*)arg2 ;
@end

