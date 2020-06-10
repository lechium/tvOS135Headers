/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:40:51 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpeech/CSEventMonitor.h>

@interface CSAudioSessionMonitor : CSEventMonitor {

	unsigned long long _audioSessionState;

}

@property (assign,getter=getAudioSessionState,nonatomic) unsigned long long audioSessionState;              //@synthesize audioSessionState=_audioSessionState - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)_stopMonitoring;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(void)notifyAduioSessionStateChange:(unsigned long long)arg1 ;
-(unsigned long long)getAudioSessionState;
-(void)setAudioSessionState:(unsigned long long)arg1 ;
@end

