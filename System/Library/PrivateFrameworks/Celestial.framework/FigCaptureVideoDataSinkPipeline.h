/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:15 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/FigCaptureRemoteQueueSinkPipeline.h>

@class BWFigVideoCaptureDevice, FigCaptureVISPipeline, BWPixelTransferNode, BWNodeOutput, NSString;

@interface FigCaptureVideoDataSinkPipeline : FigCaptureRemoteQueueSinkPipeline {

	BWFigVideoCaptureDevice* _captureDevice;
	FigCaptureVISPipeline* _visPipeline;
	BWPixelTransferNode* _videoDataConverterRotatorNode;
	BWNodeOutput* _faceTrackingVideoCaptureOutput;
	BWNodeOutput* _offlineVISMotionDataCaptureOutput;
	NSString* _sourceID;
	int _sourceDeviceType;

}

@property (nonatomic,readonly) NSString * sourceID;                                           //@synthesize sourceID=_sourceID - In the implementation block
@property (nonatomic,readonly) int sourceDeviceType;                                          //@synthesize sourceDeviceType=_sourceDeviceType - In the implementation block
@property (nonatomic,readonly) BWNodeOutput * faceTrackingVideoCaptureOutput;                 //@synthesize faceTrackingVideoCaptureOutput=_faceTrackingVideoCaptureOutput - In the implementation block
@property (nonatomic,readonly) BWNodeOutput * offlineVISMotionDataCaptureOutput;              //@synthesize offlineVISMotionDataCaptureOutput=_offlineVISMotionDataCaptureOutput - In the implementation block
+(void)initialize;
-(void)dealloc;
-(NSString *)sourceID;
-(int)sourceDeviceType;
-(int)_buildVideoDataSinkPipelineWithConfiguration:(id)arg1 sourceVideoOutput:(id)arg2 captureDevice:(id)arg3 graph:(id)arg4 delegate:(id)arg5 ;
-(id)initWithConfiguration:(id)arg1 sourceVideoOutput:(id)arg2 captureDevice:(id)arg3 graph:(id)arg4 name:(id)arg5 delegate:(id)arg6 ;
-(BWNodeOutput *)faceTrackingVideoCaptureOutput;
-(BWNodeOutput *)offlineVISMotionDataCaptureOutput;
@end
