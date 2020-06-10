/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:22 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWStillImageProcessorConfiguration.h>

@protocol MTLBuffer;
@class BWVideoFormat, FigWiredMemory, NSDictionary;

@interface BWStillImageOverCaptureProcessorControllerConfiguration : BWStillImageProcessorConfiguration {

	BWVideoFormat* _inputFormat;
	BWVideoFormat* _outputFormat;
	float _overCapturePercentage;
	SCD_Struct_BW19 _overCaptureOutputDimensions;
	unsigned _figThreadPriority;
	id<MTLBuffer> _overCaptureMetalBuffer;
	FigWiredMemory* _regwarpBuffer;
	float _overCaptureMultiplier;
	NSDictionary* _baseZoomFactorByPortType;

}

@property (nonatomic,readonly) float overCaptureMultiplier;                          //@synthesize overCaptureMultiplier=_overCaptureMultiplier - In the implementation block
@property (nonatomic,readonly) NSDictionary * baseZoomFactorByPortType;              //@synthesize baseZoomFactorByPortType=_baseZoomFactorByPortType - In the implementation block
@property (nonatomic,retain) BWVideoFormat * inputFormat;                            //@synthesize inputFormat=_inputFormat - In the implementation block
@property (nonatomic,retain) BWVideoFormat * outputFormat;                           //@synthesize outputFormat=_outputFormat - In the implementation block
@property (assign,nonatomic) float overCapturePercentage;                            //@synthesize overCapturePercentage=_overCapturePercentage - In the implementation block
@property (assign,nonatomic) unsigned figThreadPriority;                             //@synthesize figThreadPriority=_figThreadPriority - In the implementation block
@property (nonatomic,retain) id<MTLBuffer> overCaptureMetalBuffer;                   //@synthesize overCaptureMetalBuffer=_overCaptureMetalBuffer - In the implementation block
@property (nonatomic,retain) FigWiredMemory * regwarpBuffer;                         //@synthesize regwarpBuffer=_regwarpBuffer - In the implementation block
-(void)dealloc;
-(BWVideoFormat *)outputFormat;
-(void)setOutputFormat:(BWVideoFormat *)arg1 ;
-(void)setSensorConfigurations:(id)arg1 ;
-(void)setFigThreadPriority:(unsigned)arg1 ;
-(void)setOverCapturePercentage:(float)arg1 ;
-(void)setInputFormat:(BWVideoFormat *)arg1 ;
-(void)setOverCaptureMetalBuffer:(id<MTLBuffer>)arg1 ;
-(void)setRegwarpBuffer:(FigWiredMemory *)arg1 ;
-(BWVideoFormat *)inputFormat;
-(unsigned)figThreadPriority;
-(float)overCapturePercentage;
-(id<MTLBuffer>)overCaptureMetalBuffer;
-(FigWiredMemory *)regwarpBuffer;
-(float)overCaptureMultiplier;
-(NSDictionary *)baseZoomFactorByPortType;
@end

