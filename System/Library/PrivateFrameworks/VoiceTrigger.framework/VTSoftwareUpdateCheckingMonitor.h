/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:00 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceTrigger/VTEventMonitor.h>

@interface VTSoftwareUpdateCheckingMonitor : VTEventMonitor {

	int _notifyToken;
	BOOL _isSoftwareUpdateCheckingRunning;

}
+(id)sharedInstance;
-(id)init;
-(void)_stopMonitoring;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(BOOL)isSoftwareUpdateCheckingRunning;
-(BOOL)_checkSoftwareUpdateCheckingState;
-(void)_didReceiveSoftwareUpdateCheckingStateChanged:(BOOL)arg1 ;
-(unsigned char)_softwareUpdateCheckingState;
-(void)_notifyObserver:(id)arg1 withSoftwareUpdateCheckingRunning:(BOOL)arg2 ;
-(void)_didReceiveSoftwareUpdateCheckingStateChangedInQueue:(BOOL)arg1 ;
@end

