/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:18 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPVideoFacePoseAnalyzer : NSObject {

	SCD_Struct_VC41 _pose;

}

@property (assign) SCD_Struct_VC41 pose;              //@synthesize pose=_pose - In the implementation block
-(SCD_Struct_VC41)pose;
-(void)setPose:(SCD_Struct_VC41)arg1 ;
-(id)initWithFocalLengthInPixels:(float)arg1 ;
-(BOOL)updateFocalLengthInPixels:(float)arg1 ;
-(int)analyzeFrameForPose:(CVBufferRef)arg1 withFaceRect:(CGRect)arg2 withTimestamp:(SCD_Struct_VC6)arg3 ;
@end
