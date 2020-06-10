/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:44 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TVPPlayer, RTCReporting, NSString;

@interface TVPPlayerReporter : NSObject {

	TVPPlayer* _player;
	RTCReporting* _rtcAgent;
	NSString* _optFlag;
	double _timeWatched;
	double _timeWatchedStart;
	id _reportingHierarchyToken;

}

@property (assign,nonatomic,__weak) TVPPlayer * player;               //@synthesize player=_player - In the implementation block
@property (retain) RTCReporting * rtcAgent;                           //@synthesize rtcAgent=_rtcAgent - In the implementation block
@property (retain) NSString * optFlag;                                //@synthesize optFlag=_optFlag - In the implementation block
@property (assign) double timeWatched;                                //@synthesize timeWatched=_timeWatched - In the implementation block
@property (assign) double timeWatchedStart;                           //@synthesize timeWatchedStart=_timeWatchedStart - In the implementation block
@property (nonatomic,retain) id reportingHierarchyToken;              //@synthesize reportingHierarchyToken=_reportingHierarchyToken - In the implementation block
+(void)initialize;
-(void)dealloc;
-(TVPPlayer *)player;
-(void)setPlayer:(TVPPlayer *)arg1 ;
-(id)initWithPlayer:(id)arg1 ;
-(id)reportingHierarchyToken;
-(void)setReportingHierarchyToken:(id)arg1 ;
-(void)_playerStateWillChange:(id)arg1 ;
-(void)sendPlaybackStartupMetricsManually;
-(void)_playerCurrentMediaItemWillChange:(id)arg1 ;
-(void)_playerCurrentMediaItemDidChange:(id)arg1 ;
-(RTCReporting *)rtcAgent;
-(void)_setupRTCAgent;
-(void)_sendPlaybackStartupEventsIfNecessary;
-(void)_tearDownRTCAgent;
-(void)_sendSessionSummaryIfNecessary;
-(void)setTimeWatchedStart:(double)arg1 ;
-(double)timeWatchedStart;
-(double)timeWatched;
-(void)setTimeWatched:(double)arg1 ;
-(id)_rtcAgentUserInfo;
-(void)setRtcAgent:(RTCReporting *)arg1 ;
-(void)setOptFlag:(NSString *)arg1 ;
-(NSString *)optFlag;
-(void)_sendRTCEvent:(id)arg1 withCategory:(unsigned short)arg2 type:(unsigned short)arg3 values:(id)arg4 ;
-(id)_gatherSessionSummary;
@end

