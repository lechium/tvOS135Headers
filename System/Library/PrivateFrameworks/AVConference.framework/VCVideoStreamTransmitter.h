/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:24 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VCVideoTransmitterBase.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NSObject, VCMediaStreamStats, AVCStatisticsCollector;

@interface VCVideoStreamTransmitter : VCVideoTransmitterBase {

	tagHANDLE* _videoRTP;
	NSObject*<OS_dispatch_queue> _transmitterQueue;
	tagVCRealTimeThread* _encoderThread;
	BOOL _terminateEncoderThread;
	NSObject*<OS_dispatch_semaphore> _bufferQueueSemaphore;
	opaqueCMSampleBufferRef _savedSampleBuffer;
	opaqueCMBufferQueueRef _bufferQueue;
	char* _buffer;
	unsigned long long _bufferSize;
	int _packetBufferSize;
	char* _packetBuffer;
	int _maxPacketCount;
	int* _packetSizes;
	int* _packetFlags;
	unsigned long long _lastKeyFrameSampleBufferSize;
	int _iSMBCount;
	unsigned _keyFrameIntervalDuration;
	unsigned short _recommendedMTU;
	long long _videoCodecType;
	int _videoSource;
	unsigned _dwRefreshFrameCounter;
	opaque_pthread_mutex_t _xMBs;
	int _shouldGenerateKeyFrame;
	VCMediaStreamStats* _stats;
	double _reportingIntervalStartTime;
	double _reportingLastUpdateTime;
	unsigned char _lastCameraStatusBits;
	BOOL _enableCVO;
	unsigned long long _cvoExtensionID;
	opaqueRTCReportingRef _reportingAgent;
	int _reportingModuleID;
	SCD_Struct_VC64* _encoder;
	tagVCMemoryPool* _encodingArgPool;
	BOOL _forceDisableBitrateCap;
	AVCStatisticsCollector* _statisticsCollector;
	unsigned _totalPacketsSent;
	unsigned long long _totalBytesSent;
	unsigned _tilesPerFrame;
	unsigned _totalKeyFramesSent;
	CFAllocatorRef _videoPacketAllocator;

}
-(void)dealloc;
-(id)initWithConfig:(id)arg1 ;
-(void)setTargetBitrate:(unsigned)arg1 ;
-(void)generateKeyFrame;
-(void)initVideoCompressionWithWidth:(unsigned)arg1 height:(unsigned)arg2 bitrate:(unsigned)arg3 keyFrameIntervalDuration:(unsigned)arg4 ;
-(void)gatherRealtimeStats:(CFDictionaryRef)arg1 ;
-(unsigned)setTemporaryMaximumBitrate:(unsigned)arg1 ;
-(CFDictionaryRef)forceKeyFrameProperties;
-(BOOL)isKeyFrame:(opaqueCMSampleBufferRef)arg1 ;
-(BOOL)prependSPSPPS:(unsigned long long*)arg1 dataPointer:(char*)arg2 ;
-(int)transmitEncodedVideoFrame:(char*)arg1 size:(unsigned long long)arg2 timestamp:(unsigned)arg3 hostTime:(double)arg4 cameraStatusBits:(unsigned char)arg5 ;
-(void)reportingVideoStreamEvent:(unsigned short)arg1 ;
-(int)transmitFrameInGroups:(char*)arg1 numOfPackets:(int)arg2 timestamp:(unsigned)arg3 hostTime:(double)arg4 cameraStatusBits:(unsigned char)arg5 ;
-(int)transmitVideoPackets:(const char*)arg1 packetSizes:(int*)arg2 startPacket:(int)arg3 packetCount:(int)arg4 lastGroup:(int)arg5 timestamp:(unsigned)arg6 hostTime:(double)arg7 cameraStatusBits:(unsigned char)arg8 bytesSent:(int*)arg9 ;
-(void)updateSendStatisticsWithTimestamp:(unsigned)arg1 frameSize:(unsigned)arg2 packetsInFrame:(unsigned)arg3 ;
-(void)startVideo;
-(void)stopVideo;
-(BOOL)enqueueVideoFrame:(opaqueCMSampleBufferRef)arg1 frameTime:(SCD_Struct_VC52)arg2 droppedFrames:(int)arg3 cameraStatusBits:(unsigned char)arg4 ;
-(void)setKeyFrameOnlyStreamID:(unsigned short)arg1 ;
-(void)setStreamIDs:(unsigned short*)arg1 numOfStreamIDs:(unsigned char)arg2 repairedStreamIDs:(unsigned short*)arg3 numOfRepairedStreamIDs:(unsigned char)arg4 ;
-(void)setFECRatio:(double)arg1 ;
-(void)encodeVideoFrame:(opaqueCMSampleBufferRef)arg1 ;
-(void)transmitEncodedVideoFrame:(opaqueCMSampleBufferRef)arg1 cameraStatusBits:(unsigned char)arg2 ;
-(void)handleActiveConnectionChange:(id)arg1 ;
@end

