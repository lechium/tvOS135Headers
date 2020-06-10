/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:28:01 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ProVideo/ProVideo-Structs.h>
@class AVDepthData, NSDictionary, PVImageBuffer;

@interface PVCameraFrameSet : NSObject {

	opaqueCMSampleBufferRef _colorSampleBuffer;
	AVDepthData* _depthData;
	NSDictionary* _metadata;
	PVImageBuffer* _alphaMaskImageBuffer;
	CGAffineTransform _colorTransform;
	CGAffineTransform _depthTransform;

}

@property (assign,nonatomic) CGAffineTransform colorTransform;                         //@synthesize colorTransform=_colorTransform - In the implementation block
@property (assign,nonatomic) CGAffineTransform depthTransform;                         //@synthesize depthTransform=_depthTransform - In the implementation block
@property (nonatomic,readonly) opaqueCMSampleBufferRef colorSampleBuffer;              //@synthesize colorSampleBuffer=_colorSampleBuffer - In the implementation block
@property (nonatomic,readonly) SCD_Struct_PV0 presentationTimeStamp; 
@property (nonatomic,readonly) PVImageBuffer * colorImageBuffer; 
@property (nonatomic,readonly) AVDepthData * depthData;                                //@synthesize depthData=_depthData - In the implementation block
@property (retain) NSDictionary * metadata;                                            //@synthesize metadata=_metadata - In the implementation block
@property (retain) PVImageBuffer * alphaMaskImageBuffer;                               //@synthesize alphaMaskImageBuffer=_alphaMaskImageBuffer - In the implementation block
-(void)dealloc;
-(NSDictionary *)metadata;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(CGAffineTransform)colorTransform;
-(AVDepthData *)depthData;
-(SCD_Struct_PV0)presentationTimeStamp;
-(void)_sharedInitColorBuffer:(opaqueCMSampleBufferRef)arg1 colorTransform:(CGAffineTransform)arg2 depthData:(id)arg3 depthTransform:(CGAffineTransform)arg4 metadata:(id)arg5 ;
-(id)initWithColorBuffer:(opaqueCMSampleBufferRef)arg1 metadata:(id)arg2 ;
-(id)initWithColorBuffer:(opaqueCMSampleBufferRef)arg1 depthData:(id)arg2 metadata:(id)arg3 ;
-(PVImageBuffer *)colorImageBuffer;
-(void)setColorTransform:(CGAffineTransform)arg1 ;
-(CGAffineTransform)depthTransform;
-(void)setDepthTransform:(CGAffineTransform)arg1 ;
-(opaqueCMSampleBufferRef)colorSampleBuffer;
-(PVImageBuffer *)alphaMaskImageBuffer;
-(void)setAlphaMaskImageBuffer:(PVImageBuffer *)arg1 ;
@end

