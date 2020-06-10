/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:24 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface VCRateControlOWRDEstimator : NSObject {

	unsigned _mode;
	BOOL _useUINT16;
	unsigned _firstSendTimestamp;
	unsigned _previousSendTimestamp;
	unsigned _previousSendTimestampDiff;
	unsigned long long _sendTimestampWrappedAround;
	double _firstSendTime;
	unsigned _firstReceiveTimestamp;
	unsigned _previousReceiveTimestamp;
	unsigned _previousReceiveTimestampDiff;
	unsigned long long _receiveTimestampWrappedAround;
	double _firstReceiveTime;
	double _shortAverageLag;
	double _longAverageLag;
	double _owrd;
	BOOL _sendTimestampSpikeDetected;
	BOOL _receiveTimestampSpikeDetected;
	double _averageSendInterval;
	double _averageReceiveInterval;

}

@property (nonatomic,readonly) double owrd;              //@synthesize owrd=_owrd - In the implementation block
@property (assign,nonatomic) unsigned mode;              //@synthesize mode=_mode - In the implementation block
-(void)setMode:(unsigned)arg1 ;
-(unsigned)mode;
-(double)owrd;
-(double)relativeSendTimeWithTimestamp:(unsigned)arg1 timestampRate:(unsigned)arg2 ;
-(double)relativeReceiveTimeWithTimestamp:(unsigned)arg1 timestampRate:(unsigned)arg2 ;
-(void)calculateOWRDWithSendTime:(double)arg1 receiveTime:(double)arg2 ;
-(BOOL)detectOutOfOrderAndSpikeWithSendTimestamp:(unsigned)arg1 ;
-(BOOL)detectOutOfOrderAndSpikeWithReceiveTimestamp:(unsigned)arg1 ;
-(void)resetOWRDEstimation;
@end
