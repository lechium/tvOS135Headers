/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:26 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/VCCallSessionDelegate.h>
#import <libobjc.A.dylib/VCVideoCaptureClient.h>
#import <libobjc.A.dylib/GKNATObserverDelegate.h>
#import <libobjc.A.dylib/VCAudioIOSource.h>
#import <libobjc.A.dylib/VCAudioIOSink.h>
#import <libobjc.A.dylib/VCAudioIODelegate.h>
#import <libobjc.A.dylib/VCAudioPowerLevelMonitorDelegate.h>
#import <libobjc.A.dylib/VCMomentTransportDelegate.h>

@protocol VideoConferenceSpeakingDelegate, VideoConferenceChannelQualityDelegate, OS_dispatch_queue;
@class VCAudioIO, VideoConferenceManager, NSMutableDictionary, NSArray, NSMutableArray, VCAudioPowerSpectrumSource, VCImageQueue, VCVideoRule, CameraConferenceSynchronizer, NSString, VCCallSession, NSObject, NSDictionary, VCAudioPowerLevelMonitor, GKNATObserver, VCMoments;

@interface VideoConference : NSObject <VCCallSessionDelegate, VCVideoCaptureClient, GKNATObserverDelegate, VCAudioIOSource, VCAudioIOSink, VCAudioIODelegate, VCAudioPowerLevelMonitorDelegate, VCMomentTransportDelegate> {

	int _clientPid;
	id delegate;
	id _captionsDelegate;
	VCAudioIO* _audioIO;
	opaqueVCAudioBufferListRef _sourceBuffer;
	opaqueVCAudioBufferListRef _sinkBuffer;
	opaqueVCAudioBufferListRef _sinkBufferMix;
	VideoConferenceManager* manager;
	opaque_pthread_rwlock_t stateLock;
	NSMutableDictionary* sessionDict;
	NSArray* sessionArray;
	NSMutableArray* _startedSessions;
	BOOL outputMeteringEnabled;
	BOOL inputMeteringEnabled;
	BOOL inputFrequencyMeteringEnabled;
	BOOL outputFrequencyMeteringEnabled;
	opaqueVCFFTMeterRef _inputFFTMeter;
	opaqueVCFFTMeterRef _outputFFTMeter;
	float outputMeterLevel;
	float inputMeterLevel;
	long long _inputAudioPowerSpectrumToken;
	long long _outputAudioPowerSpectrumToken;
	VCAudioPowerSpectrumSource* _inputAudioPowerSpectrumSource;
	VCAudioPowerSpectrumSource* _outputAudioPowerSpectrumSource;
	BOOL microphoneMuted;
	VCImageQueue* frontQueue;
	VCImageQueue* backQueue;
	VCImageQueue* screenQueue;
	VCImageQueue* currentQueue;
	char* currentFacing;
	int localFrameWidth;
	int localFrameHeight;
	int remoteFrameWidth;
	int remoteFrameHeight;
	VCVideoRule* conferenceCaptureRule;
	CameraConferenceSynchronizer* synchronizer;
	double dAudioHostTime;
	opaque_pthread_mutex_t xRemoteLayer;
	opaque_pthread_mutex_t xAudioTS;
	unsigned dwAudioTS;
	BOOL forceNoICE;
	BOOL useViceroyBlobFormat;
	int chatMode;
	BOOL isFocus;
	NSString* currentFocus;
	VCCallSession* currentFocusSession;
	BOOL hasMic;
	float conferenceVolume;
	NSArray* mutedPeers;
	NSArray* connectedPeers;
	unsigned talkingPeersLimit;
	unsigned char speakingArray[16];
	NSObject*<VideoConferenceSpeakingDelegate> speakingDelegate;
	NSObject*<VideoConferenceChannelQualityDelegate> qualityDelegate;
	float longTerm;
	float shortTerm;
	BOOL isTalking;
	unsigned talkTime;
	int packetsPerBundle;
	SCD_Struct_AV75 recvRTPTimeStamp;
	BOOL disableVAD;
	BOOL requiresWifi;
	unsigned preferredCodec;
	int upstreamBandwidth;
	int downstreamBandwidth;
	BOOL useRateControl;
	BOOL isGKVoiceChat;
	BOOL isUsingSuppression;
	BOOL shouldTimeoutPackets;
	unsigned char requestedCameraType;
	BOOL useCompressedConnectionData;
	NSDictionary* natTypeDictionary;
	opaque_pthread_mutex_t natMutex;
	unsigned lastSentAudioSampleTime;
	VCAudioPowerLevelMonitor* _remoteAudioPowerLevelMonitor;
	GKNATObserver* natObserver;
	unsigned mostRecentStartedCall;
	unsigned lastActiveCall;
	BOOL _isWarmedUp;
	BOOL bweOperatingModeInitialized;
	BOOL useNewBWEMode;
	BOOL useActiveProbingSenderLog;
	BOOL useFakeLargeFrameMode;
	BOOL shouldPrioritizeParticipantIDForSIPInvite;
	BOOL shouldResumeAudio;
	BOOL shouldResumeVideo;
	int currentCamera;
	unsigned timeStampUpdateCounter;
	NSObject*<OS_dispatch_queue> delegateNotificationQueue;
	unsigned _transportType;
	int conferenceOperatingMode;
	int _deviceRole;
	BOOL isValid;
	VCMoments* _vcMoments;

}

@property (assign,nonatomic) BOOL useCompressedConnectionData; 
@property (getter=isSpeakerPhoneEnabled) BOOL enableSpeakerPhone; 
@property (assign,nonatomic) BOOL requiresWifi; 
@property (assign,nonatomic) unsigned transportType;                                                                   //@synthesize transportType=_transportType - In the implementation block
@property (assign,nonatomic) BOOL shouldPrioritizeParticipantIDForSIPInvite; 
@property (assign,nonatomic) NSObject*<VideoConferenceDelegate> delegate; 
@property (assign,nonatomic) BOOL useViceroyBlobFormat; 
@property (assign,getter=isMicrophoneMuted,nonatomic) BOOL microphoneMuted; 
@property (assign,getter=isOutputMeteringEnabled,nonatomic) BOOL outputMeteringEnabled; 
@property (assign,getter=isInputMeteringEnabled,nonatomic) BOOL inputMeteringEnabled; 
@property (assign,getter=isInputFrequencyMeteringEnabled,nonatomic) BOOL inputFrequencyMeteringEnabled; 
@property (assign,getter=isOutputFrequencyMeteringEnabled,nonatomic) BOOL outputFrequencyMeteringEnabled; 
@property (nonatomic,readonly) float outputMeterLevel; 
@property (nonatomic,readonly) float inputMeterLevel; 
@property (nonatomic,readonly) long long inputAudioPowerSpectrumToken;                                                 //@synthesize inputAudioPowerSpectrumToken=_inputAudioPowerSpectrumToken - In the implementation block
@property (nonatomic,readonly) long long outputAudioPowerSpectrumToken;                                                //@synthesize outputAudioPowerSpectrumToken=_outputAudioPowerSpectrumToken - In the implementation block
@property (assign,nonatomic) int chatMode; 
@property (assign,nonatomic) BOOL isFocus; 
@property (nonatomic,copy) NSString * currentFocus; 
@property (assign,nonatomic) int packetsPerBundle; 
@property (assign) BOOL hasMic; 
@property (assign) float conferenceVolume; 
@property (assign) NSObject*<VideoConferenceSpeakingDelegate> speakingDelegate; 
@property (assign) NSObject*<VideoConferenceChannelQualityDelegate> qualityDelegate; 
@property (assign) unsigned talkingPeersLimit; 
@property (assign) BOOL disableVAD; 
@property (assign) BOOL shouldTimeoutPackets; 
@property (assign) int upstreamBandwidth; 
@property (assign) int downstreamBandwidth; 
@property (readonly) int localFrameHeight; 
@property (readonly) int localFrameWidth; 
@property (assign,nonatomic) unsigned preferredCodec; 
@property (assign,nonatomic) BOOL isUsingSuppression; 
@property (assign,nonatomic) BOOL isGKVoiceChat; 
@property (nonatomic,readonly) VCVideoRule * conferenceCaptureRule; 
@property (assign) unsigned lastActiveCall; 
@property (assign) BOOL isValid; 
@property (readonly) int deviceRole;                                                                                   //@synthesize deviceRole=_deviceRole - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(BOOL)isValid;
-(NSObject*<VideoConferenceDelegate>)delegate;
-(void)setDelegate:(NSObject*<VideoConferenceDelegate>)arg1 ;
-(void)unlock;
-(BOOL)setActive:(BOOL)arg1 ;
-(unsigned)transportType;
-(void)setTransportType:(unsigned)arg1 ;
-(void)setIsValid:(BOOL)arg1 ;
-(long long)inputAudioPowerSpectrumToken;
-(long long)outputAudioPowerSpectrumToken;
-(BOOL)isInputMeteringEnabled;
-(int)deviceRole;
-(void)didUpdateBasebandCodec:(const VCRemoteCodecInfo*)arg1 ;
-(void)setMicrophoneMuted:(BOOL)arg1 ;
-(BOOL)isGKVoiceChat;
-(void)setIsGKVoiceChat:(BOOL)arg1 ;
-(BOOL)isMicrophoneMuted;
-(BOOL)isSpeakerPhoneEnabled;
-(id)initWithClientPid:(int)arg1 ;
-(unsigned)initializeNewCallWithDeviceRole:(int)arg1 reportingHierarchyToken:(id)arg2 ;
-(void)stopAllCalls:(id)arg1 ;
-(void)cleanupManager;
-(double)networkQualityForCallID:(unsigned)arg1 ;
-(unsigned)initializeNewCallWithDeviceRole:(int)arg1 ;
-(void)warmupForCall;
-(void)setUseViceroyBlobFormat:(BOOL)arg1 ;
-(void)sendARPLData:(id)arg1 toCallID:(unsigned)arg2 ;
-(id)callMetadataForCallID:(unsigned)arg1 ;
-(void)setPeerCN:(id)arg1 callID:(unsigned)arg2 ;
-(void)setSessionID:(id)arg1 callID:(unsigned)arg2 ;
-(BOOL)requiresWifi;
-(void)setRequiresWifi:(BOOL)arg1 ;
-(void)stopCallID:(unsigned)arg1 ;
-(void)cancelCallID:(unsigned)arg1 ;
-(void)remoteCancelledCallID:(unsigned)arg1 ;
-(void)setCallReport:(unsigned)arg1 withReport:(id)arg2 ;
-(void)processRemoteIPChange:(id)arg1 callID:(unsigned)arg2 ;
-(BOOL)isOutputMeteringEnabled;
-(void)setOutputMeteringEnabled:(BOOL)arg1 ;
-(void)setInputMeteringEnabled:(BOOL)arg1 ;
-(BOOL)isInputFrequencyMeteringEnabled;
-(void)setInputFrequencyMeteringEnabled:(BOOL)arg1 ;
-(BOOL)isOutputFrequencyMeteringEnabled;
-(void)setOutputFrequencyMeteringEnabled:(BOOL)arg1 ;
-(float)outputMeterLevel;
-(BOOL)getIsAudioPaused:(BOOL*)arg1 callID:(unsigned)arg2 error:(id*)arg3 ;
-(BOOL)getIsVideoPaused:(BOOL*)arg1 callID:(unsigned)arg2 error:(id*)arg3 ;
-(float)inputMeterLevel;
-(double)localFramerateForCallID:(unsigned)arg1 ;
-(double)localBitrateForCallID:(unsigned)arg1 ;
-(double)remoteFramerateForCallID:(unsigned)arg1 ;
-(double)remoteBitrateForCallID:(unsigned)arg1 ;
-(int)localFrameHeight;
-(int)localFrameWidth;
-(double)remotePacketLossRateForCallID:(unsigned)arg1 ;
-(double)localPacketLossRateForCallID:(unsigned)arg1 ;
-(double)roundTripTimeForCallID:(unsigned)arg1 ;
-(id)statsForCallID:(unsigned)arg1 ;
-(void)setEnableSpeakerPhone:(BOOL)arg1 ;
-(int)natType;
-(BOOL)setPauseAudio:(BOOL)arg1 callID:(unsigned)arg2 error:(id*)arg3 ;
-(BOOL)setPauseVideo:(BOOL)arg1 callID:(unsigned)arg2 error:(id*)arg3 ;
-(void)updateCapabilities:(id)arg1 forCallID:(unsigned)arg2 ;
-(void)processRelayRequestResponse:(unsigned)arg1 responseDict:(id)arg2 didOriginateRequest:(BOOL)arg3 ;
-(void)processRelayUpdate:(unsigned)arg1 updateDict:(id)arg2 didOriginateRequest:(BOOL)arg3 ;
-(void)setConferenceState:(unsigned)arg1 forCallID:(unsigned)arg2 ;
-(void)setConferenceVisualRectangle:(CGRect)arg1 forCallID:(unsigned)arg2 ;
-(void)setPeerProtocolVersion:(unsigned)arg1 forCallID:(unsigned)arg2 ;
-(void)NATTypeDictionaryUpdated:(id)arg1 ;
-(void)triggerInterfaceChange;
-(void)pushAudioSamples:(opaqueVCAudioBufferListRef)arg1 ;
-(void)setPacketsPerBundle:(int)arg1 ;
-(void)captureMeshMode:(opaqueVCAudioBufferListRef)arg1 ;
-(void)didSuspendAudioIO:(id)arg1 ;
-(void)didResumeAudioIO:(id)arg1 ;
-(void)pullAudioSamples:(opaqueVCAudioBufferListRef)arg1 ;
-(BOOL)canProcessAudio;
-(void)setCanProcessAudio:(BOOL)arg1 ;
-(void)moments:(id)arg1 shouldProcessRequest:(id)arg2 recipientID:(id)arg3 ;
-(void)vcAudioPowerLevelMonitor:(id)arg1 isAudioBelowThreshold:(BOOL)arg2 ;
-(BOOL)useCompressedConnectionData;
-(void)setUseCompressedConnectionData:(BOOL)arg1 ;
-(BOOL)stopVideoSend:(BOOL)arg1 error:(id*)arg2 ;
-(void)session:(id)arg1 withCallID:(unsigned)arg2 videoIsDegraded:(BOOL)arg3 isRemote:(BOOL)arg4 ;
-(void)session:(id)arg1 didChangeRemoteScreenAttributes:(id)arg2 ;
-(void)session:(id)arg1 changeVideoRulesToCaptureRule:(id)arg2 encodeRule:(id)arg3 featuresListString:(id)arg4 ;
-(void)session:(id)arg1 remoteMediaStalled:(BOOL)arg2 ;
-(void)session:(id)arg1 receivedNoPacketsForSeconds:(double)arg2 ;
-(void)session:(id)arg1 isSendingAudio:(BOOL)arg2 error:(id)arg3 ;
-(int)packetsPerBundle;
-(void)didChangeLocalVariablesForSession:(id)arg1 ;
-(void)session:(id)arg1 didPauseAudio:(BOOL)arg2 error:(id)arg3 ;
-(void)session:(id)arg1 setRemoteBasebandCodecType:(unsigned)arg2 sampleRate:(double)arg3 ;
-(void)session:(id)arg1 startAudioWithFarEndVersionInfo:(VoiceIOFarEndVersionInfo*)arg2 internalFormat:(AudioStreamBasicDescription)arg3 internalSamplesPerFrame:(unsigned)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)session:(id)arg1 stopAudioWithCompletionHandler:(/*^block*/id)arg2 ;
-(void)session:(id)arg1 didPauseVideo:(BOOL)arg2 error:(id)arg3 ;
-(int)currentCameraID;
-(void)session:(id)arg1 connectionDidChangeWithLocalInterfaceType:(id)arg2 remoteInterfaceType:(id)arg3 callID:(unsigned)arg4 ;
-(void)thermalLevelDidChange:(int)arg1 ;
-(void)setQualityDelegate:(NSObject*<VideoConferenceChannelQualityDelegate>)arg1 ;
-(NSObject*<VideoConferenceChannelQualityDelegate>)qualityDelegate;
-(BOOL)startConnectionWithParticipantID:(id)arg1 callID:(unsigned)arg2 usingInviteData:(id)arg3 isCaller:(BOOL)arg4 capabilities:(id)arg5 idsSocket:(int)arg6 destination:(id)arg7 error:(id*)arg8 ;
-(id)inviteDataForParticipantID:(id)arg1 callID:(unsigned*)arg2 remoteInviteData:(id)arg3 nonCellularCandidateTimeout:(double)arg4 error:(id*)arg5 ;
-(BOOL)shouldTimeoutPackets;
-(void)setShouldTimeoutPackets:(BOOL)arg1 ;
-(void)session:(id)arg1 didReceiveData:(id)arg2 messageType:(unsigned)arg3 withCallID:(unsigned)arg4 ;
-(void)didReceiveCaptions:(id)arg1 remoteClient:(unsigned)arg2 ;
-(void)session:(id)arg1 withCallID:(unsigned)arg2 networkHint:(BOOL)arg3 ;
-(void)session:(id)arg1 didStart:(BOOL)arg2 connectionType:(unsigned)arg3 localInterfaceType:(id)arg4 remoteInterfaceType:(id)arg5 error:(id)arg6 ;
-(void)session:(id)arg1 didStopWithError:(id)arg2 ;
-(void)session:(id)arg1 cleanUpWithDelay:(long long)arg2 error:(id)arg3 ;
-(void)remoteVideoDidPause:(BOOL)arg1 callID:(unsigned)arg2 ;
-(void)remoteAudioDidPause:(BOOL)arg1 callID:(unsigned)arg2 ;
-(void)session:(id)arg1 setMomentsCapabilities:(int)arg2 imageType:(int)arg3 videoCodec:(int)arg4 ;
-(void)session:(id)arg1 localAudioEnabled:(BOOL)arg2 withCallID:(unsigned)arg3 error:(id)arg4 ;
-(BOOL)session:(id)arg1 startVideoSend:(id*)arg2 captureRuleWifi:(id)arg3 captureRuleCell:(id)arg4 interface:(int)arg5 isUnpausing:(BOOL)arg6 ;
-(BOOL)session:(id)arg1 startVideoReceive:(id*)arg2 ;
-(BOOL)session:(id)arg1 didStopVideoIO:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)session:(id)arg1 stopVideoReceive:(id*)arg2 isPausing:(BOOL)arg3 ;
-(AudioStreamBasicDescription)audioIOFormat;
-(void)setBWEOptions:(BOOL)arg1 UseNewBWEMode:(BOOL)arg2 FakeLargeFrameMode:(BOOL)arg3 ProbingSenderLog:(BOOL)arg4 ;
-(void)session:(id)arg1 remoteAudioEnabled:(BOOL)arg2 withCallID:(unsigned)arg3 ;
-(void)session:(id)arg1 remoteCallingModeChanged:(unsigned)arg2 withCallID:(unsigned)arg3 ;
-(void)session:(id)arg1 didReceiveMomentsRequest:(id)arg2 ;
-(void)session:(id)arg1 localIPChange:(id)arg2 withCallID:(unsigned)arg3 ;
-(void)session:(id)arg1 cancelRelayRequest:(id)arg2 ;
-(void)session:(id)arg1 initiateRelayRequest:(id)arg2 ;
-(void)session:(id)arg1 sendRelayResponse:(id)arg2 ;
-(void)session:(id)arg1 packMeters:(char*)arg2 withLength:(char*)arg3 ;
-(void)cleanupQueues;
-(id)newSessionWithDeviceRole:(int)arg1 reportingHierarchyToken:(id)arg2 ;
-(int)natTypeForCallSessions:(const char*)arg1 ;
-(void)wrlock;
-(void)rdlock;
-(void)setupNATObserver;
-(void)notifyDelegateOfLocalVariablesChange;
-(BOOL)deregisterForVideoFramesWithDeviceRole:(int)arg1 ;
-(BOOL)registerForVideoFramesWithDeviceRole:(int)arg1 captureRule:(id)arg2 isUnpausing:(BOOL)arg3 ;
-(void)setUpAudioIO:(int)arg1 ;
-(void)setConferenceOperatingMode:(int)arg1 ;
-(void)updateCapabilities:(id)arg1 forSession:(id)arg2 ;
-(BOOL)startConnectionWithParticipantID:(id)arg1 callID:(unsigned)arg2 usingInviteData:(id)arg3 isCaller:(BOOL)arg4 relayResponseDict:(id)arg5 didOriginateRelayRequest:(BOOL)arg6 capabilities:(id)arg7 idsSocket:(int)arg8 destination:(id)arg9 error:(id*)arg10 ;
-(id)sessionForParticipantID:(id)arg1 ;
-(void)stopCallID:(unsigned)arg1 didRemoteCancel:(BOOL)arg2 error:(id)arg3 ;
-(void)cancelCallID:(unsigned)arg1 error:(id)arg2 ;
-(int)tryrdlock;
-(BOOL)updateSpeaking:(unsigned)arg1 timeStamp:(unsigned)arg2 ;
-(void)captureAsFocus:(opaqueVCAudioBufferListRef)arg1 ;
-(void)captureAsFocusClient:(opaqueVCAudioBufferListRef)arg1 ;
-(int)pullDecodedAsFocus:(opaqueVCAudioBufferListRef)arg1 ;
-(int)pullDecodedAsFocusClient:(opaqueVCAudioBufferListRef)arg1 ;
-(int)pullDecodedMeshMode:(opaqueVCAudioBufferListRef)arg1 ;
-(void)sendData:(id)arg1 toCallID:(unsigned)arg2 encrypted:(BOOL)arg3 ;
-(double)packetLossRateForCallID:(unsigned)arg1 ;
-(void)setChatMode:(int)arg1 ;
-(void)setIsFocus:(BOOL)arg1 ;
-(void)setIsUsingSuppression:(BOOL)arg1 ;
-(void)inviteDataForParticipantID:(id)arg1 callID:(unsigned)arg2 remoteInviteData:(id)arg3 nonCellularCandidateTimeout:(unsigned long long)arg4 block:(/*^block*/id)arg5 queue:(id)arg6 caller:(id)arg7 ;
-(void)connectionBlobForParticipantID:(id)arg1 callID:(unsigned)arg2 block:(/*^block*/id)arg3 queue:(id)arg4 caller:(id)arg5 ;
-(id)connectionBlobForParticipantID:(id)arg1 callID:(unsigned*)arg2 error:(id*)arg3 ;
-(BOOL)shouldSendAudioForCallID:(unsigned)arg1 ;
-(void)setSendAudio:(BOOL)arg1 forCallID:(unsigned)arg2 ;
-(void)setPeerReportingID:(id)arg1 sessionID:(id)arg2 callID:(unsigned)arg3 ;
-(BOOL)shouldReinitializeCallWithDuration:(double)arg1 forCallID:(unsigned)arg2 ;
-(int)conferenceOperatingMode;
-(BOOL)startConnectionWithParticipantID:(id)arg1 callID:(unsigned)arg2 oldCallID:(unsigned)arg3 usingInviteData:(id)arg4 isCaller:(BOOL)arg5 relayResponseDict:(id)arg6 didOriginateRelayRequest:(BOOL)arg7 capabilities:(id)arg8 idsSocket:(int)arg9 destination:(id)arg10 error:(id*)arg11 ;
-(void)setCurrentFocus:(NSString *)arg1 ;
-(void)updatedMutedPeers:(id)arg1 forParticipantID:(id)arg2 ;
-(void)updatedConnectedPeers:(id)arg1 ;
-(void)setCallReportProtobuf:(unsigned)arg1 withProtobufData:(id)arg2 forMetricID:(long long)arg3 ;
-(CGSize)remoteFrameSizeForCallID:(unsigned)arg1 ;
-(void)forceNoICE:(BOOL)arg1 ;
-(void)setHasMic:(BOOL)arg1 ;
-(BOOL)hasMic;
-(void)setConferenceVolume:(float)arg1 ;
-(float)conferenceVolume;
-(void)handleCellTechChange:(int)arg1 cellularMaxPktLen:(unsigned short)arg2 ;
-(unsigned char)powerFloatToInt:(float)arg1 ;
-(float)powerIntToFloat:(unsigned char)arg1 ;
-(int)chatMode;
-(BOOL)isFocus;
-(NSString *)currentFocus;
-(unsigned)preferredCodec;
-(void)setPreferredCodec:(unsigned)arg1 ;
-(int)upstreamBandwidth;
-(void)setUpstreamBandwidth:(int)arg1 ;
-(int)downstreamBandwidth;
-(void)setDownstreamBandwidth:(int)arg1 ;
-(NSObject*<VideoConferenceSpeakingDelegate>)speakingDelegate;
-(void)setSpeakingDelegate:(NSObject*<VideoConferenceSpeakingDelegate>)arg1 ;
-(BOOL)useViceroyBlobFormat;
-(BOOL)isUsingSuppression;
-(unsigned)talkingPeersLimit;
-(void)setTalkingPeersLimit:(unsigned)arg1 ;
-(BOOL)disableVAD;
-(void)setDisableVAD:(BOOL)arg1 ;
-(BOOL)shouldPrioritizeParticipantIDForSIPInvite;
-(void)setShouldPrioritizeParticipantIDForSIPInvite:(BOOL)arg1 ;
-(VCVideoRule *)conferenceCaptureRule;
-(unsigned)lastActiveCall;
-(void)setLastActiveCall:(unsigned)arg1 ;
-(BOOL)recvSamplesForSession:(id)arg1 sampleBuffer:(opaqueVCAudioBufferListRef)arg2 ;
-(unsigned)pruneQuietestPeers:(unsigned)arg1 talking:(unsigned)arg2 mask:(unsigned)arg3 meters:(char*)arg4 ;
-(unsigned)calculateTalkingMaskAtTimeStamp:(unsigned)arg1 ;
-(void)calculateMixingArrays:(unsigned*)arg1 talkingMask:(unsigned)arg2 ;
-(void)updateAudioTimestampsForSession:(id)arg1 withNewSampleTime:(unsigned)arg2 hostTime:(double)arg3 numSamples:(int)arg4 ;
-(void)updateMeter:(unsigned char)arg1 forParticipant:(id)arg2 atIndex:(unsigned)arg3 ;
-(void)updateMeters:(unsigned short)arg1 ;
-(id)sessionForIncomingParticipantID:(id)arg1 ;
-(id)sessionForSourceDestinationInfo:(tagVCSourceDestinationInfo*)arg1 ;
-(id)loopbackSessionWaitingForSIPInvite;
-(int)sipCallbackNotification:(int)arg1 callID:(unsigned)arg2 msgIn:(const char*)arg3 msgOut:(char*)arg4 optional:(void*)arg5 confIndex:(int*)arg6 ;
-(id)openSessionForParticipant:(id)arg1 ;
-(BOOL)matchesCallID:(unsigned)arg1 ;
-(BOOL)matchesOpenSessionForParticipantID:(id)arg1 ;
-(unsigned)callIDForOpenSessionWithParticipantID:(id)arg1 ;
-(BOOL)matchesParticipantID:(id)arg1 ;
-(BOOL)conferenceMatchesSourceDestinationInfo:(tagVCSourceDestinationInfo*)arg1 ;
-(BOOL)hasSessionWaitingForSIPInvite;
-(int)stateForCallID:(unsigned)arg1 ;
-(void)markUnfinishedSessions;
-(void)cleanupProc:(id)arg1 ;
-(void)threadSafeCleanupSession:(id)arg1 ;
-(void)cleanupSession:(id)arg1 withDelay:(unsigned long long)arg2 ;
-(void)cleanupSession:(id)arg1 didRemoteCancel:(BOOL)arg2 ;
-(void)defaultCleanupSession:(id)arg1 ;
-(BOOL)setPauseAudio:(BOOL)arg1 ;
-(BOOL)setPauseVideo:(BOOL)arg1 ;
-(BOOL)initiateResolutionChangeToWidth:(int)arg1 height:(int)arg2 rate:(int)arg3 ;
-(unsigned)momentsCapabilitiesWithNegotiationBlobMomentsSettings_Capabilities:(int)arg1 ;
-(void)session:(id)arg1 didChangeVideoRule:(id)arg2 ;
-(BOOL)session:(id)arg1 receivedRemoteFrame:(CVBufferRef)arg2 atTime:(SCD_Struct_AV75)arg3 withScreenAttributes:(id)arg4 videoAttributes:(id)arg5 isFirstFrame:(BOOL)arg6 isVideoPaused:(BOOL)arg7 ;
-(void)session:(id)arg1 didReceiveARPLData:(id)arg2 fromCallID:(unsigned)arg3 ;
-(id)clientCaptureRule;
-(BOOL)onCaptureFrame:(opaqueCMSampleBufferRef)arg1 frameTime:(SCD_Struct_AV75)arg2 droppedFrames:(int)arg3 cameraStatusBits:(unsigned char)arg4 ;
-(void)avConferencePreviewError:(id)arg1 ;
-(void)avConferenceScreenCaptureError:(id)arg1 ;
-(void)shouldSendBlackFrame:(BOOL)arg1 callID:(id)arg2 ;
-(void)sourceFrameRateDidChange:(unsigned)arg1 ;
@end

