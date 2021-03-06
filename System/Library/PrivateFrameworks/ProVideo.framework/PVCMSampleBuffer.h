/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:28:03 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ProVideo/ProVideo-Structs.h>
@class PVImageBuffer;

@interface PVCMSampleBuffer : NSObject {

	opaqueCMSampleBufferRef _sampleBufferRef;
	PVImageBuffer* _backingPVImageBuffer;

}

@property (nonatomic,readonly) opaqueCMSampleBufferRef sampleBufferRef;              //@synthesize sampleBufferRef=_sampleBufferRef - In the implementation block
@property (nonatomic,readonly) PVImageBuffer * backingPVImageBuffer;                 //@synthesize backingPVImageBuffer=_backingPVImageBuffer - In the implementation block
@property (nonatomic,readonly) SCD_Struct_PV19 presentationTimeStamp; 
+(id)sampleBufferWithPVImageBuffer:(id)arg1 timestamp:(SCD_Struct_PV19)arg2 frameDuration:(SCD_Struct_PV19)arg3 ;
+(opaqueCMSampleBufferRef)createCMSampleBufferForPVImageBuffer:(id)arg1 timingInfo:(SCD_Struct_PV68)arg2 ;
-(void)dealloc;
-(SCD_Struct_PV19)presentationTimeStamp;
-(id)initWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(opaqueCMSampleBufferRef)sampleBufferRef;
-(PVImageBuffer *)backingPVImageBuffer;
@end

