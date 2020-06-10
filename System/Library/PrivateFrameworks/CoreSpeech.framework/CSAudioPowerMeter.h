/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:40:54 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CSAudioPowerMeter : NSObject {

	int _averagePowerI;
	BOOL _instantaneousMode;
	double _peak;
	double _maxPeak;
	double _decay;
	double _peakDecay;
	double _averagePowerPeak;
	int _peakHoldCount;
	double _sampleRate;
	int _previousBlockSize;
	double _decay1;
	double _peakDecay1;

}
-(void)reset;
-(void)_reset;
-(id)initWithSampleRate:(float)arg1 ;
-(void)process:(const short*)arg1 stride:(int)arg2 inFrameToProcess:(int)arg3 ;
-(double)getPeakPowerDB;
-(double)getAveragePowerDB;
-(void)_scaleDecayConstants:(int)arg1 ;
-(void)_savePeaks:(int)arg1 averagePower:(int)arg2 maxSample:(int)arg3 ;
-(double)_linearToDB:(double)arg1 ;
-(double)_ampToDB:(double)arg1 ;
@end

