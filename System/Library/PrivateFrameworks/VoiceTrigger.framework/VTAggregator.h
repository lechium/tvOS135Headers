/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:59 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSString;

@interface VTAggregator : NSObject {

	unsigned long long _currentState;
	double _lastAggTime;
	double _cumulativeUptime;
	double _cumulativeDowntime;
	double _lastAggTimeFalseWakeUp;
	unsigned long long _numFalseWakeUp;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _timer;
	NSString* _languageCode;
	NSString* _assetString;

}
+(id)sharedAggregator;
-(id)init;
-(void)setLanguageCode:(id)arg1 ;
-(void)logTimeVoiceTriggerTransitionsToState:(unsigned long long)arg1 ;
-(void)logVoiceProfilePruningFailureWithReasonCode:(unsigned long long)arg1 ;
-(void)logProfileUpdateUtt:(id)arg1 withScore:(double)arg2 ;
-(void)logProfileUpdateScoreMSE:(double)arg1 ;
-(void)logProfileUpdateNumDiscardedUttsPHS:(int)arg1 ;
-(void)logProfileUpdateNumPrunedUttsPHS:(int)arg1 ;
-(void)logProfileUpdateNumRetainedUttsPHS:(int)arg1 ;
-(void)logTdPsrSATRetrainingTimedOut;
-(void)logTdPsrSATRetrainingWaitTimeMs:(double)arg1 ;
-(void)logTdPsrFailedDuringSATRetraining;
-(void)_logUptime;
-(id)_makeKeyWithLanguageAndAssetString:(id)arg1 ;
-(void)_addValueForScalarKey:(id)arg1 withValue:(long long)arg2 ;
-(void)_pushValueForDistributionKey:(id)arg1 withValue:(double)arg2 ;
-(id)_makeKeyWithLanguageCode:(id)arg1 ;
-(id)_makeKey:(id)arg1 ;
-(void)cumulativeUptime:(id*)arg1 cumulativeDowntime:(id*)arg2 reset:(BOOL)arg3 ;
-(void)setAssetString:(id)arg1 ;
-(void)logActivation;
-(void)logSecondPassResult:(BOOL)arg1 ;
-(void)logFalseWakeUp:(BOOL)arg1 ;
-(void)logZeroRunAudio:(int)arg1 ;
-(void)logRecognizerTimedOut;
-(void)logProfileUpdateNumDeletedUttsStrategy:(int)arg1 ;
-(void)logTdPsrSATDetectionWaitTimeMs:(double)arg1 ;
-(void)logTdPsrFailedDuringSATDetection;
-(void)logTdPsrSATDetectionTimedOut;
-(void)logTdPsrExtraAudioSamplesProcessed:(unsigned long long)arg1 ;
@end

