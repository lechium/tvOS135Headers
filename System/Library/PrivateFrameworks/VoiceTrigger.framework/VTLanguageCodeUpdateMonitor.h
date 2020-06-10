/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:59 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceTrigger/VTEventMonitor.h>

@interface VTLanguageCodeUpdateMonitor : VTEventMonitor {

	int _notifyToken;

}
+(id)sharedInstance;
-(id)init;
-(void)_stopMonitoring;
-(void)_notifyObserver:(id)arg1 withLanguageCode:(id)arg2 ;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(void)_didReceiveLanguageCodeUpdate;
@end

