/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:23 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SASLockStateMonitorDelegate.h>

@protocol OS_dispatch_semaphore;
@class NSObject, CMMotionActivityManager, SASLockStateMonitor, FBSDisplayLayoutMonitor, NSString;

@interface SASMyriadController : NSObject <SASLockStateMonitorDelegate> {

	NSObject*<OS_dispatch_semaphore> _myriadFinishedSemaphore;
	CMMotionActivityManager* _activityManager;
	BOOL _isLifted;
	double _liftEndTime;
	BOOL _isLocked;
	SASLockStateMonitor* _lockStateMonitor;
	FBSDisplayLayoutMonitor* _displayMonitor;
	double _raiseToWakeTime;
	BOOL _canceledByMyriad;

}

@property (assign,nonatomic) BOOL canceledByMyriad;                 //@synthesize canceledByMyriad=_canceledByMyriad - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)currentController;
-(void)dealloc;
-(id)_init;
-(void)_handleCMMotionActivity:(id)arg1 ;
-(void)_updateRaiseToWakeTimeForTransition:(id)arg1 ;
-(void)setCanceledByMyriad:(BOOL)arg1 ;
-(void)didChangeLockState:(unsigned long long)arg1 toState:(unsigned long long)arg2 ;
-(BOOL)activateForRequest:(id)arg1 visible:(BOOL)arg2 ;
-(void)activateForInTaskRequest:(BOOL)arg1 isVisible:(BOOL)arg2 ;
-(BOOL)canceledByMyriad;
@end

