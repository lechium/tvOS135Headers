/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:40:54 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpeech/CSEventMonitor.h>

@interface CSFirstUnlockMonitor : CSEventMonitor {

	int _notifyToken;
	BOOL _firstUnlocked;

}
+(id)sharedInstance;
-(id)init;
-(void)_stopMonitoring;
-(BOOL)isFirstUnlocked;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(BOOL)_checkFirstUnlocked;
-(void)_didReceiveFirstUnlock:(BOOL)arg1 ;
-(void)_notifyObserver:(id)arg1 withUnlocked:(BOOL)arg2 ;
-(void)_didReceiveFirstUnlockInQueue:(BOOL)arg1 ;
-(void)_firstUnlockNotified;
@end

