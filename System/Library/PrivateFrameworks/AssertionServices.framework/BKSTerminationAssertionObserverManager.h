/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:41 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AssertionServices.framework/AssertionServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AssertionServices/AssertionServices-Structs.h>
@class RBSProcessMonitor, NSMutableSet, NSObject;

@interface BKSTerminationAssertionObserverManager : NSObject {

	RBSProcessMonitor* _monitor;
	BOOL _monitorIsReady;
	NSMutableSet* _observers;
	os_unfair_lock_s _lock;
	NSObject*<OS_dispatch_queue> _calloutQueue;

}
-(id)init;
-(void)dealloc;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)_createMonitor;
-(BOOL)hasTerminationAssertionForBundleID:(id)arg1 ;
-(unsigned long long)efficacyForBundleID:(id)arg1 ;
@end

