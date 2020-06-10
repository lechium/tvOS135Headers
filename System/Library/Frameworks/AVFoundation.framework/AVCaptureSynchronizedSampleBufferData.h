/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:32 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVCaptureSynchronizedData.h>

@class AVCaptureSynchronizedSampleBufferDataInternal;

@interface AVCaptureSynchronizedSampleBufferData : AVCaptureSynchronizedData {

	AVCaptureSynchronizedSampleBufferDataInternal* _internal;

}

@property (readonly) opaqueCMSampleBufferRef sampleBuffer; 
@property (readonly) BOOL sampleBufferWasDropped; 
@property (readonly) long long droppedReason; 
-(void)dealloc;
-(opaqueCMSampleBufferRef)sampleBuffer;
-(BOOL)sampleBufferWasDropped;
-(long long)droppedReason;
-(BOOL)hasCorrespondingDepthData;
-(id)_initWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 sampleBufferWasDropped:(BOOL)arg2 ;
@end

