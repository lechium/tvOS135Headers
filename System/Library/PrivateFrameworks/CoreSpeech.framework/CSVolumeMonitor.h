/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:40:50 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpeech/CSEventMonitor.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface CSVolumeMonitor : CSEventMonitor {

	NSObject*<OS_dispatch_queue> _queue;
	float _musicVolumeLevel;
	float _alarmVolumeLevel;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)systemControllerDied:(id)arg1 ;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(void)fetchVolumeFromAVSystemControllerForAudioCategory:(id)arg1 ;
-(void)_startObservingSystemControllerLifecycle;
-(void)startObservingSystemVolumes;
-(BOOL)_fetchSystemVolumeForCategory:(id)arg1 usingSystemController:(id)arg2 volume:(float*)arg3 ;
-(BOOL)_supportAVSystemVolumeFetch;
-(float)_getNewSystemVolumesWithNotification:(id)arg1 category:(id)arg2 ;
-(void)_notifyObserver:(id)arg1 volumeDidChanged:(float)arg2 forAudioCategory:(id)arg3 ;
-(void)systemVolumeDidChange:(id)arg1 ;
-(float)musicVolume;
-(void)musicVolumeWithCompletion:(/*^block*/id)arg1 ;
-(float)alarmVolume;
@end
