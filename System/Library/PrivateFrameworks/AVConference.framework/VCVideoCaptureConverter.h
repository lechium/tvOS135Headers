/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:28 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/VCVideoCaptureClient.h>

@interface VCVideoCaptureConverter : NSObject <VCVideoCaptureClient> {

	unsigned _destinationFramerate;
	unsigned _sourceFramerate;
	double _throttleRate;
	unsigned _sourceFrameCount;
	unsigned _lastDestinationFrameCount;
	BOOL _isThrottling;
	id _delegate;

}

@property (assign,nonatomic) unsigned sourceFramerate;                   //@synthesize sourceFramerate=_sourceFramerate - In the implementation block
@property (assign,nonatomic) unsigned destinationFramerate;              //@synthesize destinationFramerate=_destinationFramerate - In the implementation block
-(void)dealloc;
-(id)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(void)setSourceFramerate:(unsigned)arg1 ;
-(void)thermalLevelDidChange:(int)arg1 ;
-(id)clientCaptureRule;
-(BOOL)onCaptureFrame:(opaqueCMSampleBufferRef)arg1 frameTime:(SCD_Struct_AV75)arg2 droppedFrames:(int)arg3 cameraStatusBits:(unsigned char)arg4 ;
-(void)avConferencePreviewError:(id)arg1 ;
-(void)sourceFrameRateDidChange:(unsigned)arg1 ;
-(void)updateThrottleRate;
-(BOOL)processFrame:(opaqueCMSampleBufferRef)arg1 ;
-(void)setDestinationFramerate:(unsigned)arg1 ;
-(unsigned)sourceFramerate;
-(unsigned)destinationFramerate;
@end

