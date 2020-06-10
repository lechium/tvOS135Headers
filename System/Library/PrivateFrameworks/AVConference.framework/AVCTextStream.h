/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:29 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class AVConferenceXPCClient, AVCMediaStreamConfig, NSDictionary, NSObject;

@interface AVCTextStream : NSObject {

	AVConferenceXPCClient* _connection;
	AVCMediaStreamConfig* _configuration;
	id _delegate;
	long long _streamToken;
	NSDictionary* _capabilities;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSDictionary * capabilities;                                      //@synthesize capabilities=_capabilities - In the implementation block
@property (nonatomic,retain) AVCMediaStreamConfig * configuration;                             //@synthesize configuration=_configuration - In the implementation block
@property (assign,nonatomic) long long direction; 
@property (assign,getter=isRTCPEnabled,nonatomic) BOOL rtcpEnabled; 
@property (assign,getter=isRTPTimeOutEnabled,nonatomic) BOOL rtpTimeOutEnabled; 
@property (assign,getter=isRTCPTimeOutEnabled,nonatomic) BOOL rtcpTimeOutEnabled; 
@property (assign,nonatomic) double rtpTimeOutIntervalSec; 
@property (assign,nonatomic) double rtcpTimeOutIntervalSec; 
@property (assign,nonatomic) double rtcpSendIntervalSec; 
@property (nonatomic,readonly) long long streamToken;                                          //@synthesize streamToken=_streamToken - In the implementation block
@property (assign,nonatomic) id<AVCTextStreamDelegate> delegate;                               //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id<AVCTextStreamDelegate>)delegate;
-(void)setDelegate:(id<AVCTextStreamDelegate>)arg1 ;
-(void)resume;
-(void)start;
-(void)stop;
-(AVCMediaStreamConfig *)configuration;
-(void)setConfiguration:(AVCMediaStreamConfig *)arg1 ;
-(void)pause;
-(void)setCapabilities:(NSDictionary *)arg1 ;
-(NSDictionary *)capabilities;
-(long long)direction;
-(void)setDirection:(long long)arg1 ;
-(long long)streamToken;
-(void)refreshLoggingParameters;
-(void)setRtpTimeOutEnabled:(BOOL)arg1 ;
-(void)setRtcpTimeOutEnabled:(BOOL)arg1 ;
-(void)setRtcpEnabled:(BOOL)arg1 ;
-(id)newNSErrorWithErrorDictionary:(id)arg1 ;
-(BOOL)isRTCPEnabled;
-(BOOL)isRTPTimeOutEnabled;
-(BOOL)isRTCPTimeOutEnabled;
-(void)registerBlocksForDelegateNotifications;
-(void)deregisterBlocksForDelegateNotifications;
-(BOOL)configure:(id)arg1 error:(id*)arg2 ;
-(void)setRtpTimeOutIntervalSec:(double)arg1 ;
-(double)rtpTimeOutIntervalSec;
-(void)setRtcpTimeOutIntervalSec:(double)arg1 ;
-(double)rtcpTimeOutIntervalSec;
-(void)setRtcpSendIntervalSec:(double)arg1 ;
-(double)rtcpSendIntervalSec;
-(BOOL)initializeServerWithNetworkSockets:(id)arg1 callID:(id)arg2 error:(id*)arg3 ;
-(BOOL)validateResultsDictionary:(id)arg1 error:(id*)arg2 ;
-(id)initWithNetworkSockets:(id)arg1 callID:(id)arg2 error:(id*)arg3 ;
@end

