/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:23 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/IOAccessoryManager.framework/IOAccessoryManager
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IOAccessoryManager/IOAccessoryManager-Structs.h>
@class NSMutableData;

@interface HalogenLdcmCalc : NSObject {

	BOOL _isDigitalFilterTrigger;
	int _nSamples;
	int _diffWindowSize;
	int _clipDetectWindowSize;
	int _sizeofSample;
	int _tmp1DataBuffSize;
	int _tmp2DataBuffSize;
	int _tmp3DataBuffSize;
	double _precalVoltageSignalLevel;
	double _precalVoltageNoiseLevel;
	double _precalVoltageSNR;
	double _precalCurrentSignalLevel;
	double _precalCurrentNoiseLevel;
	double _precalCurrentSNR;
	double _voltageGainCorrection;
	double _currentGainCorrection;
	double _currentPhaseCompensation;
	double _calVoltageSignalLevel;
	double _calVoltageNoiseLevel;
	double _calVoltageSNR;
	double _calCurrentSignalLevel;
	double _calCurrentNoiseLevel;
	double _calCurrentSNR;
	double _goertzelImpedance;
	double _goertzelPhase;
	double _compensatedImpedance;
	double _compensatedPhase;
	double _clippingScore;
	double _resistanceInOhms;
	double _capacitanceInNanoF;
	double _measurementVoltageSignalLevel;
	double _measurementVoltageNoiseLevel;
	double _measurementVoltageSNR;
	double _measurementCurrentSignalLevel;
	double _measurementCurrentNoiseLevel;
	double _measurementCurrentSNR;
	double _measurementCondetSNR;
	double _sampleRate;
	double _signalFrequency;
	double _adcGain;
	double _tiaGain;
	double _hydraImpedance;
	double _movesumClipThreshold;
	double _hydraR;
	double _ldcmAcCap;
	double _sanitycheckImpedanceLowerbound;
	double _sanitycheckImpedanceUpperbound;
	double _sanitycheckPhaseLowerbound;
	double _sanitycheckPhaseUperbound;
	double _sanitycheckVoltageGainCorrectionLowerbound;
	double _sanitycheckVoltageGainCorrectionUpperbound;
	double _sanitycheckCurrentGainCorrectionLowerbound;
	double _sanitycheckCurrentGainCorrectionUpperbound;
	double _sanitycheckCurrentPhaseCompensationLowerbound;
	double _sanitycheckCurrentPhaseCompensationUpperbound;
	NSMutableData* _tmp1DataBuff;
	NSMutableData* _tmp2DataBuff;
	NSMutableData* _tmp3DataBuff;
	OpaqueFFTSetupDRef _fftContext;

}

@property (assign) int nSamples;                                                      //@synthesize nSamples=_nSamples - In the implementation block
@property (assign) int diffWindowSize;                                                //@synthesize diffWindowSize=_diffWindowSize - In the implementation block
@property (assign) int clipDetectWindowSize;                                          //@synthesize clipDetectWindowSize=_clipDetectWindowSize - In the implementation block
@property (assign) int sizeofSample;                                                  //@synthesize sizeofSample=_sizeofSample - In the implementation block
@property (assign) double sampleRate;                                                 //@synthesize sampleRate=_sampleRate - In the implementation block
@property (assign) double signalFrequency;                                            //@synthesize signalFrequency=_signalFrequency - In the implementation block
@property (assign) double adcGain;                                                    //@synthesize adcGain=_adcGain - In the implementation block
@property (assign) double tiaGain;                                                    //@synthesize tiaGain=_tiaGain - In the implementation block
@property (assign) double hydraImpedance;                                             //@synthesize hydraImpedance=_hydraImpedance - In the implementation block
@property (assign) double movesumClipThreshold;                                       //@synthesize movesumClipThreshold=_movesumClipThreshold - In the implementation block
@property (assign) double hydraR;                                                     //@synthesize hydraR=_hydraR - In the implementation block
@property (assign) double ldcmAcCap;                                                  //@synthesize ldcmAcCap=_ldcmAcCap - In the implementation block
@property (assign) double sanitycheckImpedanceLowerbound;                             //@synthesize sanitycheckImpedanceLowerbound=_sanitycheckImpedanceLowerbound - In the implementation block
@property (assign) double sanitycheckImpedanceUpperbound;                             //@synthesize sanitycheckImpedanceUpperbound=_sanitycheckImpedanceUpperbound - In the implementation block
@property (assign) double sanitycheckPhaseLowerbound;                                 //@synthesize sanitycheckPhaseLowerbound=_sanitycheckPhaseLowerbound - In the implementation block
@property (assign) double sanitycheckPhaseUperbound;                                  //@synthesize sanitycheckPhaseUperbound=_sanitycheckPhaseUperbound - In the implementation block
@property (assign) double sanitycheckVoltageGainCorrectionLowerbound;                 //@synthesize sanitycheckVoltageGainCorrectionLowerbound=_sanitycheckVoltageGainCorrectionLowerbound - In the implementation block
@property (assign) double sanitycheckVoltageGainCorrectionUpperbound;                 //@synthesize sanitycheckVoltageGainCorrectionUpperbound=_sanitycheckVoltageGainCorrectionUpperbound - In the implementation block
@property (assign) double sanitycheckCurrentGainCorrectionLowerbound;                 //@synthesize sanitycheckCurrentGainCorrectionLowerbound=_sanitycheckCurrentGainCorrectionLowerbound - In the implementation block
@property (assign) double sanitycheckCurrentGainCorrectionUpperbound;                 //@synthesize sanitycheckCurrentGainCorrectionUpperbound=_sanitycheckCurrentGainCorrectionUpperbound - In the implementation block
@property (assign) double sanitycheckCurrentPhaseCompensationLowerbound;              //@synthesize sanitycheckCurrentPhaseCompensationLowerbound=_sanitycheckCurrentPhaseCompensationLowerbound - In the implementation block
@property (assign) double sanitycheckCurrentPhaseCompensationUpperbound;              //@synthesize sanitycheckCurrentPhaseCompensationUpperbound=_sanitycheckCurrentPhaseCompensationUpperbound - In the implementation block
@property (assign) BOOL isDigitalFilterTrigger;                                       //@synthesize isDigitalFilterTrigger=_isDigitalFilterTrigger - In the implementation block
@property (assign) NSMutableData * tmp1DataBuff;                                      //@synthesize tmp1DataBuff=_tmp1DataBuff - In the implementation block
@property (assign) int tmp1DataBuffSize;                                              //@synthesize tmp1DataBuffSize=_tmp1DataBuffSize - In the implementation block
@property (assign) NSMutableData * tmp2DataBuff;                                      //@synthesize tmp2DataBuff=_tmp2DataBuff - In the implementation block
@property (assign) int tmp2DataBuffSize;                                              //@synthesize tmp2DataBuffSize=_tmp2DataBuffSize - In the implementation block
@property (assign) NSMutableData * tmp3DataBuff;                                      //@synthesize tmp3DataBuff=_tmp3DataBuff - In the implementation block
@property (assign) int tmp3DataBuffSize;                                              //@synthesize tmp3DataBuffSize=_tmp3DataBuffSize - In the implementation block
@property (assign) OpaqueFFTSetupDRef fftContext;                                     //@synthesize fftContext=_fftContext - In the implementation block
@property (readonly) double precalVoltageSignalLevel;                                 //@synthesize precalVoltageSignalLevel=_precalVoltageSignalLevel - In the implementation block
@property (readonly) double precalVoltageNoiseLevel;                                  //@synthesize precalVoltageNoiseLevel=_precalVoltageNoiseLevel - In the implementation block
@property (readonly) double precalVoltageSNR;                                         //@synthesize precalVoltageSNR=_precalVoltageSNR - In the implementation block
@property (readonly) double precalCurrentSignalLevel;                                 //@synthesize precalCurrentSignalLevel=_precalCurrentSignalLevel - In the implementation block
@property (readonly) double precalCurrentNoiseLevel;                                  //@synthesize precalCurrentNoiseLevel=_precalCurrentNoiseLevel - In the implementation block
@property (readonly) double precalCurrentSNR;                                         //@synthesize precalCurrentSNR=_precalCurrentSNR - In the implementation block
@property (readonly) double voltageGainCorrection;                                    //@synthesize voltageGainCorrection=_voltageGainCorrection - In the implementation block
@property (readonly) double currentGainCorrection;                                    //@synthesize currentGainCorrection=_currentGainCorrection - In the implementation block
@property (readonly) double currentPhaseCompensation;                                 //@synthesize currentPhaseCompensation=_currentPhaseCompensation - In the implementation block
@property (readonly) double calVoltageSignalLevel;                                    //@synthesize calVoltageSignalLevel=_calVoltageSignalLevel - In the implementation block
@property (readonly) double calVoltageNoiseLevel;                                     //@synthesize calVoltageNoiseLevel=_calVoltageNoiseLevel - In the implementation block
@property (readonly) double calVoltageSNR;                                            //@synthesize calVoltageSNR=_calVoltageSNR - In the implementation block
@property (readonly) double calCurrentSignalLevel;                                    //@synthesize calCurrentSignalLevel=_calCurrentSignalLevel - In the implementation block
@property (readonly) double calCurrentNoiseLevel;                                     //@synthesize calCurrentNoiseLevel=_calCurrentNoiseLevel - In the implementation block
@property (readonly) double calCurrentSNR;                                            //@synthesize calCurrentSNR=_calCurrentSNR - In the implementation block
@property (readonly) double goertzelImpedance;                                        //@synthesize goertzelImpedance=_goertzelImpedance - In the implementation block
@property (readonly) double goertzelPhase;                                            //@synthesize goertzelPhase=_goertzelPhase - In the implementation block
@property (readonly) double compensatedImpedance;                                     //@synthesize compensatedImpedance=_compensatedImpedance - In the implementation block
@property (readonly) double compensatedPhase;                                         //@synthesize compensatedPhase=_compensatedPhase - In the implementation block
@property (readonly) double clippingScore;                                            //@synthesize clippingScore=_clippingScore - In the implementation block
@property (readonly) double resistanceInOhms;                                         //@synthesize resistanceInOhms=_resistanceInOhms - In the implementation block
@property (readonly) double capacitanceInNanoF;                                       //@synthesize capacitanceInNanoF=_capacitanceInNanoF - In the implementation block
@property (readonly) double measurementVoltageSignalLevel;                            //@synthesize measurementVoltageSignalLevel=_measurementVoltageSignalLevel - In the implementation block
@property (readonly) double measurementVoltageNoiseLevel;                             //@synthesize measurementVoltageNoiseLevel=_measurementVoltageNoiseLevel - In the implementation block
@property (readonly) double measurementVoltageSNR;                                    //@synthesize measurementVoltageSNR=_measurementVoltageSNR - In the implementation block
@property (readonly) double measurementCurrentSignalLevel;                            //@synthesize measurementCurrentSignalLevel=_measurementCurrentSignalLevel - In the implementation block
@property (readonly) double measurementCurrentNoiseLevel;                             //@synthesize measurementCurrentNoiseLevel=_measurementCurrentNoiseLevel - In the implementation block
@property (readonly) double measurementCurrentSNR;                                    //@synthesize measurementCurrentSNR=_measurementCurrentSNR - In the implementation block
@property (readonly) double measurementCondetSNR;                                     //@synthesize measurementCondetSNR=_measurementCondetSNR - In the implementation block
-(void)dealloc;
-(double)sampleRate;
-(void)setSampleRate:(double)arg1 ;
-(id)initWithSize:(int)arg1 ;
-(void)_freeBuffers;
-(BOOL)_allocBuffers;
-(double)_snr:(id)arg1 withGain:(double)arg2 hasSignalLevel:(double*)arg3 hasNoiseLevel:(double*)arg4 hasCondetSnr:(double*)arg5 ;
-(void)_goertzelSecondOrder:(id)arg1 hasFftValue:(double*)arg2 hasPhase:(double*)arg3 withHanning:(BOOL)arg4 ;
-(BOOL)isBoundViolation_voltageGainCorrection;
-(BOOL)isBoundViolation_currentGainCorrection;
-(BOOL)isBoundViolation_currentPhaseCompensation;
-(void)_applyGain:(double)arg1 toData:(id)arg2 ;
-(void)_applyFractionalPhaseShift:(id)arg1 withPhaseDelay:(double)arg2 ;
-(BOOL)_isClipped:(id)arg1 ;
-(void)_applyTiaGain:(id)arg1 toCurrentData:(id)arg2 ;
-(void)setIsDigitalFilterTrigger:(BOOL)arg1 ;
-(void)_applyDigitalFilter:(id)arg1 ;
-(void)_doHydraComp:(double)arg1 withPhase:(double)arg2 ;
-(void)_rcSolver;
-(BOOL)isLowerBoundViolation_goertzelImpedance;
-(BOOL)isUpperBoundViolation_goertzelImpedance;
-(BOOL)isLowerBoundViolation_goertzelPhase;
-(BOOL)isUpperBoundViolation_goertzelPhase;
-(void)_applyHanningWindow:(id)arg1 withSize:(int)arg2 ;
-(double)_condetSnr:(double*)arg1 ;
-(double)_mean:(double*)arg1 ofSize:(unsigned long long)arg2 ;
-(double)_variance:(double*)arg1 ofSize:(unsigned long long)arg2 ;
-(double)_median:(double*)arg1 ofSize:(unsigned long long)arg2 ;
-(double)_stdev:(double*)arg1 ofSize:(unsigned long long)arg2 ;
-(void)_reconstructSignal:(id)arg1 ;
-(double)_sineExtractor:(id)arg1 ;
-(int)doPreCalibration:(id)arg1 withCurrentData:(id)arg2 ;
-(int)doCalibration:(id)arg1 withCurrentData:(id)arg2 ;
-(int)doLiquidDetection:(id)arg1 withCurrentData:(id)arg2 isReceptacleEmpty:(BOOL)arg3 isReceptacleWet:(BOOL)arg4 withWetTransitionThreshold:(double)arg5 withDryTransitionThreshold:(double)arg6 ;
-(BOOL)isBoundViolation_measurementCondetSNR;
-(double)precalVoltageSignalLevel;
-(double)precalVoltageNoiseLevel;
-(double)precalVoltageSNR;
-(double)precalCurrentSignalLevel;
-(double)precalCurrentNoiseLevel;
-(double)precalCurrentSNR;
-(double)voltageGainCorrection;
-(double)currentGainCorrection;
-(double)currentPhaseCompensation;
-(double)calVoltageSignalLevel;
-(double)calVoltageNoiseLevel;
-(double)calVoltageSNR;
-(double)calCurrentSignalLevel;
-(double)calCurrentNoiseLevel;
-(double)calCurrentSNR;
-(double)goertzelImpedance;
-(double)goertzelPhase;
-(double)compensatedImpedance;
-(double)compensatedPhase;
-(double)clippingScore;
-(double)resistanceInOhms;
-(double)capacitanceInNanoF;
-(double)measurementVoltageSignalLevel;
-(double)measurementVoltageNoiseLevel;
-(double)measurementVoltageSNR;
-(double)measurementCurrentSignalLevel;
-(double)measurementCurrentNoiseLevel;
-(double)measurementCurrentSNR;
-(double)measurementCondetSNR;
-(int)nSamples;
-(void)setNSamples:(int)arg1 ;
-(int)diffWindowSize;
-(void)setDiffWindowSize:(int)arg1 ;
-(int)clipDetectWindowSize;
-(void)setClipDetectWindowSize:(int)arg1 ;
-(int)sizeofSample;
-(void)setSizeofSample:(int)arg1 ;
-(double)signalFrequency;
-(void)setSignalFrequency:(double)arg1 ;
-(double)adcGain;
-(void)setAdcGain:(double)arg1 ;
-(double)tiaGain;
-(void)setTiaGain:(double)arg1 ;
-(double)hydraImpedance;
-(void)setHydraImpedance:(double)arg1 ;
-(double)movesumClipThreshold;
-(void)setMovesumClipThreshold:(double)arg1 ;
-(double)hydraR;
-(void)setHydraR:(double)arg1 ;
-(double)ldcmAcCap;
-(void)setLdcmAcCap:(double)arg1 ;
-(double)sanitycheckImpedanceLowerbound;
-(void)setSanitycheckImpedanceLowerbound:(double)arg1 ;
-(double)sanitycheckImpedanceUpperbound;
-(void)setSanitycheckImpedanceUpperbound:(double)arg1 ;
-(double)sanitycheckPhaseLowerbound;
-(void)setSanitycheckPhaseLowerbound:(double)arg1 ;
-(double)sanitycheckPhaseUperbound;
-(void)setSanitycheckPhaseUperbound:(double)arg1 ;
-(double)sanitycheckVoltageGainCorrectionLowerbound;
-(void)setSanitycheckVoltageGainCorrectionLowerbound:(double)arg1 ;
-(double)sanitycheckVoltageGainCorrectionUpperbound;
-(void)setSanitycheckVoltageGainCorrectionUpperbound:(double)arg1 ;
-(double)sanitycheckCurrentGainCorrectionLowerbound;
-(void)setSanitycheckCurrentGainCorrectionLowerbound:(double)arg1 ;
-(double)sanitycheckCurrentGainCorrectionUpperbound;
-(void)setSanitycheckCurrentGainCorrectionUpperbound:(double)arg1 ;
-(double)sanitycheckCurrentPhaseCompensationLowerbound;
-(void)setSanitycheckCurrentPhaseCompensationLowerbound:(double)arg1 ;
-(double)sanitycheckCurrentPhaseCompensationUpperbound;
-(void)setSanitycheckCurrentPhaseCompensationUpperbound:(double)arg1 ;
-(BOOL)isDigitalFilterTrigger;
-(NSMutableData *)tmp1DataBuff;
-(void)setTmp1DataBuff:(NSMutableData *)arg1 ;
-(int)tmp1DataBuffSize;
-(void)setTmp1DataBuffSize:(int)arg1 ;
-(NSMutableData *)tmp2DataBuff;
-(void)setTmp2DataBuff:(NSMutableData *)arg1 ;
-(int)tmp2DataBuffSize;
-(void)setTmp2DataBuffSize:(int)arg1 ;
-(NSMutableData *)tmp3DataBuff;
-(void)setTmp3DataBuff:(NSMutableData *)arg1 ;
-(int)tmp3DataBuffSize;
-(void)setTmp3DataBuffSize:(int)arg1 ;
-(OpaqueFFTSetupDRef)fftContext;
-(void)setFftContext:(OpaqueFFTSetupDRef)arg1 ;
@end

