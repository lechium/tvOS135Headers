/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:59 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
@class NSMutableArray;

@interface MPCAudioSpectrumAnalyzer : NSObject {

	unsigned long long _frequencyBuffersSize;
	float* _frequencyData;
	float* _absoluteFrequencyData;
	DSPSplitComplex* _fftBuffer;
	unsigned long long _frequencyDataSize;
	opaqueMTAudioProcessingTapRef _audioProcessingTap;
	float _sampleRate;
	float _powerLevel;
	OpaqueFFTSetupRef _fftSetup;
	NSMutableArray* _observers;

}

@property (assign,nonatomic) float powerLevel;                        //@synthesize powerLevel=_powerLevel - In the implementation block
@property (assign,nonatomic) float sampleRate;                        //@synthesize sampleRate=_sampleRate - In the implementation block
@property (assign,nonatomic) OpaqueFFTSetupRef fftSetup;              //@synthesize fftSetup=_fftSetup - In the implementation block
@property (nonatomic,retain) NSMutableArray * observers;              //@synthesize observers=_observers - In the implementation block
-(id)init;
-(void)dealloc;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)reset;
-(float)sampleRate;
-(void)setSampleRate:(float)arg1 ;
-(NSMutableArray *)observers;
-(void)setObservers:(NSMutableArray *)arg1 ;
-(float)powerLevel;
-(void)_createAudioTap;
-(void)_freeBuffers;
-(void)_destroyAudioTap;
-(void)_attachAudioTapToPlayerItem:(id)arg1 ;
-(void)setPowerLevel:(float)arg1 ;
-(void)_analyzeFrequencies:(AudioBufferList*)arg1 numberFrames:(long long)arg2 timeRange:(SCD_Struct_MP17)arg3 ;
-(void)_resizeOrResetBuffers:(unsigned long long)arg1 ;
-(OpaqueFFTSetupRef)fftSetup;
-(void)configurePlayerItem:(id)arg1 ;
-(void)_analyzeSamples:(AudioBufferList*)arg1 numberFrames:(long long)arg2 timeRange:(SCD_Struct_MP17)arg3 ;
-(void)setFftSetup:(OpaqueFFTSetupRef)arg1 ;
@end

