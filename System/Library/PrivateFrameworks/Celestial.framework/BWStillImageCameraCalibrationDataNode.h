/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:21 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

@class NSDictionary, NSSet, BWStillImageCaptureSettings, NSMutableDictionary, FigCalibration;

@interface BWStillImageCameraCalibrationDataNode : BWNode {

	NSDictionary* _sensorConfigurationsByPortType;
	BOOL _propagatesDetectedObjects;
	NSDictionary* _baseZoomFactorsByPortType;
	NSSet* _expectedPortTypes;
	BWStillImageCaptureSettings* _captureSettings;
	int _processingMode;
	NSMutableDictionary* _inputSbufsByPortType;
	FigCalibration* _calibrationProcessor;

}
+(void)initialize;
-(void)dealloc;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(id)nodeType;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)setBaseZoomFactorsByPortType:(id)arg1 ;
-(id)baseZoomFactorsByPortType;
-(void)handleNodeError:(id)arg1 forInput:(id)arg2 ;
-(void)_clearCaptureRequestState;
-(id)initWithSensorConfigurationsByPortType:(id)arg1 ;
-(void)setPropagatesDetectedObjects:(BOOL)arg1 ;
-(void)_finishPendingProcessing;
-(int)_loadAndConfigureCalibrationBundle;
-(void)_resolveProcessingMode;
-(BOOL)_receivedExpectedInputsForCaptureRequest;
-(void)_computeCameraCalibrationDataBetweenReferenceSampleBuffer:(opaqueCMSampleBufferRef)arg1 auxiliarySampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
-(void)_propagateDetectedObjects;
-(id)processorOptions;
-(id)_sensorConfigurationWithPortraitTuningParameters;
-(BOOL)propagatesDetectedObjects;
@end

