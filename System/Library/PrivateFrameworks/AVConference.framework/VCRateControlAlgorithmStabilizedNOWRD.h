/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:27 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/VCRateControlAlgorithm.h>

@class VCRateControlMediaController, NSString;

@interface VCRateControlAlgorithmStabilizedNOWRD : NSObject <VCRateControlAlgorithm> {

	VCRateControlAlgorithmConfig* _config;
	VCRateControlMediaController* _mediaController;
	int _state;
	int _rampUpStatus;
	int _rampDownStatus;
	BOOL _paused;
	unsigned short _echoedTimestamp;
	unsigned short _previousTimestamp;
	unsigned short _queuingDelayTimestamp;
	unsigned _receiveTimestamp;
	unsigned _timestampWrapAroundCounter;
	double _rateControlTime;
	unsigned _rateControlCounter;
	unsigned _rateChangeCounter;
	unsigned _lastRateChangeCounter;
	unsigned _newOWRDSampleCollected;
	unsigned _remoteBandwidthEstimation;
	unsigned _localBandwidthEstimation;
	double _owrd;
	SCD_Struct_VC55 _owrdList;
	BOOL _isOWRDListReady;
	BOOL _isOWRDConstant;
	double _nowrd;
	double _nowrdShort;
	double _nowrdAcc;
	double _previousNOWRD;
	double _lastOWRDChangeTime;
	double _lastNoOvershootBWEstimationTime;
	double _firstBelowNoRampUpBandwidthTime;
	double _sendBitrateLimitedStartTime;
	double _rampUpFrozenTime;
	double _stabilizationTime;
	double _rateChangeSystemTime;
	double _lastRampDownTime;
	double _lastPositiveOWRDTime;
	BOOL _isCongested;
	BOOL _isRampUpSettling;
	BOOL _isStable;
	BOOL _isSendBitrateLimited;
	BOOL _isOvershoot;
	BOOL _belowNoRampUpBandwidth;
	BOOL _isFirstTimestampArrived;
	BOOL _isNewRateSentOut;
	double _inVideoBitrate;
	double _outVideoBitrate;
	double _inAudioBitrate;
	double _outAudioBitrate;
	unsigned _actualVideoBitrateFromAFRC;
	unsigned _fastRampDownBitrateRange;
	unsigned _consecutiveRampDown;
	double _lastTimeStartRampingDown;
	double _basebandNotificationArrivalTime;
	unsigned _basebandAverageBitrate;
	unsigned _basebandTotalQueueDepth;
	double _basebandExpectedQueuingDelay;
	double _basebandNormalizedBDCD;
	double _basebandNormalizedQueuingDelay;
	BOOL _isWaitingForBasebandRampDown;
	double _lastBasebandRampDownTime;
	double _lastHighNBDCDTime;
	int _basebandAdditionalTiersForRampUp;
	unsigned _totalPacketReceived;
	unsigned _packetReceivedVideo;
	unsigned _mostBurstLoss;
	unsigned _packetBurstLoss;
	unsigned _roundTripTimeTick;
	double _roundTripTime;
	double _worstRecentRoundTripTime;
	double _packetLossRate;
	double _packetLossRateVideo;
	unsigned _worstRecentBurstLoss;
	int _currentTierIndex;
	int _previousTierIndex;
	unsigned _targetBitrate;
	unsigned _actualBitrate;
	void* _logDump;
	void* _logBasebandDump;
	BOOL _isPeriodicLoggingEnabled;
	BOOL _didMBLRampDown;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) VCRateControlMediaController * mediaController;              //@synthesize mediaController=_mediaController - In the implementation block
@property (nonatomic,readonly) unsigned targetBitrate;                                    //@synthesize targetBitrate=_targetBitrate - In the implementation block
@property (nonatomic,readonly) unsigned rateChangeCounter;                                //@synthesize rateChangeCounter=_rateChangeCounter - In the implementation block
@property (nonatomic,readonly) BOOL isCongested;                                          //@synthesize isCongested=_isCongested - In the implementation block
@property (nonatomic,readonly) unsigned mostBurstLoss;                                    //@synthesize mostBurstLoss=_mostBurstLoss - In the implementation block
@property (nonatomic,readonly) double packetLossRate;                                     //@synthesize packetLossRate=_packetLossRate - In the implementation block
@property (nonatomic,readonly) double packetLossRateVideo;                                //@synthesize packetLossRateVideo=_packetLossRateVideo - In the implementation block
@property (nonatomic,readonly) unsigned totalPacketReceived;                              //@synthesize totalPacketReceived=_totalPacketReceived - In the implementation block
@property (nonatomic,readonly) double roundTripTime;                                      //@synthesize roundTripTime=_roundTripTime - In the implementation block
@property (nonatomic,readonly) double worstRecentRoundTripTime;                           //@synthesize worstRecentRoundTripTime=_worstRecentRoundTripTime - In the implementation block
@property (nonatomic,readonly) unsigned worstRecentBurstLoss;                             //@synthesize worstRecentBurstLoss=_worstRecentBurstLoss - In the implementation block
@property (nonatomic,readonly) double owrd;                                               //@synthesize owrd=_owrd - In the implementation block
@property (nonatomic,readonly) BOOL isNewRateSentOut;                                     //@synthesize isNewRateSentOut=_isNewRateSentOut - In the implementation block
@property (assign,nonatomic) unsigned localBandwidthEstimation;                           //@synthesize localBandwidthEstimation=_localBandwidthEstimation - In the implementation block
@property (assign,getter=isPaused,nonatomic) BOOL paused;                                 //@synthesize paused=_paused - In the implementation block
@property (nonatomic,readonly) unsigned actualBitrate;                                    //@synthesize actualBitrate=_actualBitrate - In the implementation block
@property (assign,nonatomic) BOOL didMBLRampDown;                                         //@synthesize didMBLRampDown=_didMBLRampDown - In the implementation block
@property (nonatomic,readonly) BOOL isSendBitrateLimited;                                 //@synthesize isSendBitrateLimited=_isSendBitrateLimited - In the implementation block
-(id)init;
-(void)dealloc;
-(BOOL)isPaused;
-(id)className;
-(void)setPaused:(BOOL)arg1 ;
-(double)packetLossRate;
-(double)roundTripTime;
-(VCRateControlMediaController *)mediaController;
-(double)worstRecentRoundTripTime;
-(unsigned)worstRecentBurstLoss;
-(BOOL)isSendBitrateLimited;
-(BOOL)didMBLRampDown;
-(void)setDidMBLRampDown:(BOOL)arg1 ;
-(void)configure:(VCRateControlAlgorithmConfig*)arg1 restartRequired:(BOOL)arg2 ;
-(void)enableBasebandDump:(void*)arg1 ;
-(unsigned)targetBitrate;
-(unsigned)rateChangeCounter;
-(BOOL)doRateControlWithStatistics:(SCD_Struct_AV29)arg1 ;
-(BOOL)doRateControlWithBasebandStatistics:(SCD_Struct_AV29)arg1 ;
-(void)enableLogDump:(void*)arg1 enablePeriodicLogging:(BOOL)arg2 ;
-(void)setMediaController:(VCRateControlMediaController *)arg1 ;
-(unsigned)actualBitrate;
-(BOOL)isNewRateSentOut;
-(void)setLocalBandwidthEstimation:(unsigned)arg1 ;
-(double)packetLossRateVideo;
-(unsigned)mostBurstLoss;
-(double)owrd;
-(BOOL)isCongested;
-(BOOL)shouldRampDown;
-(int)rampDownTier;
-(BOOL)shouldRampUp;
-(int)rampUpTier;
-(void)stateExit;
-(void)stateEnter;
-(void)resetRampingStatus;
-(void)logToDumpFilesWithString:(id)arg1 ;
-(BOOL)doRateControlWithVCRCStatistics:(SCD_Struct_AV29)arg1 ;
-(double)getDoubleTimeFromTimestamp:(unsigned)arg1 timestampTick:(unsigned)arg2 wrapAroundCounter:(unsigned)arg3 ;
-(void)calculateCongestionMetricsFromOWRD:(double)arg1 time:(double)arg2 ;
-(void)checkBandwidthOvershoot;
-(void)checkCongestionStatus;
-(void)stateChangeTo:(int)arg1 ;
-(void)printRateControlInfoToLogDump;
-(BOOL)shouldRampDownDueToBaseband;
-(int)rampDownTierDueToBaseband;
-(BOOL)shouldRampUpDueToBaseband;
-(BOOL)recentlyGoAboveRampUpBandwidth;
-(BOOL)keepOvershootingRampDownBandwidth;
-(unsigned)totalPacketReceived;
-(unsigned)localBandwidthEstimation;
-(unsigned short)getTimestampFromMicroTime:(double)arg1 ;
-(void)updateInternalStatus;
-(BOOL)shouldRampDownDueToNOWRD;
-(BOOL)shouldRampDownDueToNOWRDAcc;
-(void)setBitrateUnstable;
-(void)calculateRoundTripTime;
-(void)calculatePacketLossWithReceivedPacketCount:(unsigned)arg1 receivedPacketCountVideo:(unsigned)arg2 packetBurstLoss:(unsigned short)arg3 ;
-(int)basebandAdditionalTiersForRampUp;
-(void)checkMediaQueueBitrates;
-(void)checkStabilizationWithEchoedTimestamp:(unsigned short)arg1 queuingDelay:(unsigned short)arg2 ;
-(void)updateCongestionStatusWhenRampUp;
-(void)updateCongestionStatusWhenRampDown:(double)arg1 ;
@end
