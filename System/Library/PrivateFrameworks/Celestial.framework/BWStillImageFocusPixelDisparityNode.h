/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:22 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

@class BWStillImageNodeConfiguration, BWSensorConfiguration, FigFocusPixelDisparityGenerator;

@interface BWStillImageFocusPixelDisparityNode : BWNode {

	BWStillImageNodeConfiguration* _nodeConfiguration;
	BWSensorConfiguration* _sensorConfiguration;
	FigFocusPixelDisparityGenerator* _focusPixelDisparityGenerator;
	opaqueCMFormatDescriptionRef _disparityFormatDescription;
	SCD_Struct_BW68 _identityExtrinsicMatrix;
	float _pixelSizeInMm;
	BOOL _depthIsAlwaysHighQuality;

}
+(void)initialize;
-(void)dealloc;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(id)nodeType;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3 ;
-(void)handleNodeError:(id)arg1 forInput:(id)arg2 ;
-(id)initWithNodeConfiguration:(id)arg1 sensorConfiguration:(id)arg2 disparityMapWidth:(unsigned long long)arg3 disparityMapHeight:(unsigned long long)arg4 depthIsAlwaysHighQuality:(BOOL)arg5 ;
-(int)_loadAndConfigureDisparityGenerator;
-(void)_processDisparityForSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_removeConsumedAttachedMediaFromSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(id)processorOptionsForProcessorVersion:(int)arg1 ;
-(void)_attachDepthMetadataToSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
@end

