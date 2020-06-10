/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:10 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Frameworks/ViceroyTrace.framework/ViceroyTrace
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface MultiwayStream : NSObject {

	NSString* _streamID;
	int _interval;
	int _frequency;
	double _lastReceivedVideoStallTime;
	double _currentStallTime;
	double _totalVideoStallTime;
	double _maxVideoStallTime;
	unsigned short _significantVideoStallCount;
	unsigned short _audioErasureCount;
	double _totalAudioErasureTime;
	double _averageFramerateSum;
	unsigned short _averageFramerateReportCounter;
	double _averageJitterLengthSum;
	unsigned short _averageJitterReportCounter;
	int _totalVideoPacketsReceived;
	int _oooPacketCount;
	unsigned _totalFIRDemandCounter;
	unsigned _totalFIRCounter;
	unsigned _videoFrameDecodedButSkippedCounter;
	unsigned _videoFrameImcompleteNextTSCounter;
	unsigned _videoFrameTotalIncompleteCounter;
	unsigned _decodedVideoFrameEnqueueCounter;

}
-(void)dealloc;
-(void)processData:(id)arg1 ;
-(unsigned)RTPeriod;
-(unsigned)totalFIRDemandCounter;
-(unsigned)totalFIRCounter;
-(unsigned)videoFrameDecodedButSkippedCounter;
-(unsigned)videoFrameImcompleteNextTSCounter;
-(unsigned)videoFrameTotalIncompleteCounter;
-(unsigned)decodedVideoFrameEnqueueCounter;
-(id)initStreamWithID:(id)arg1 ;
-(unsigned short)significantVideoStallCount;
-(double)videoStallTotalTime;
-(unsigned short)audioErasureCount;
-(double)audioErasureTotalTime;
-(double)averageFramerateSum;
-(unsigned short)averageFramerateReportCounter;
-(double)averageJitterLengthSum;
-(unsigned short)averageJitterReportCounter;
-(unsigned)oooPacketCount;
-(unsigned)totalVideoPacketsReceived;
@end
