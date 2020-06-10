/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:08 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RELocationManager.h>
#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@protocol OS_dispatch_queue;
@class CLLocation, NSLock, CLLocationManager, NSObject, NSString;

@interface _RECoreLocationLocationManager : RELocationManager <CLLocationManagerDelegate> {

	CLLocation* _currentLocation;
	NSLock* _locationAccessLock;
	/*^block*/id _handler;
	CLLocationManager* _locationManager;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _resumedQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id)currentLocation;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)startLocationUpdatesWithHandler:(/*^block*/id)arg1 ;
-(void)stopLocationUpdates;
-(void)_updateLocation:(id)arg1 ;
-(void)_notifyUpdateHandlersWithError:(id)arg1 ;
@end
