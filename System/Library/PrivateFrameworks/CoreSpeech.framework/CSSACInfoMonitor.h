/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:40:52 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpeech/CSEventMonitor.h>
#import <libobjc.A.dylib/SACInfoDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, SACInfoListener, SACInfo, NSString;

@interface CSSACInfoMonitor : CSEventMonitor <SACInfoDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	SACInfoListener* _infoListener;
	SACInfo* _currentSACInfo;
	BOOL _isDeviceRoleStereo;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)_stopMonitoring;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(BOOL)isDeviceRoleStereo;
-(void)handleSACInfo:(id)arg1 ;
@end
