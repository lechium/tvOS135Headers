/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:19 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@class AVAssetTrack;

@interface VCPVideoTrackDecoder : NSObject {

	AVAssetTrack* _track;

}
+(SCD_Struct_VC58)decodeDimensionsForTrack:(id)arg1 ;
-(id)init;
-(long long)status;
-(id)settings;
-(opaqueCMSampleBufferRef)copyNextSampleBuffer;
-(id)initWithTrack:(id)arg1 ;
-(opaqueCMSampleBufferRef)getNextCaptureSampleBuffer;
@end

