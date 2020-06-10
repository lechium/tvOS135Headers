/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:04 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RESingleton.h>
#import <libobjc.A.dylib/REPipedLocationReceiver.h>

@protocol OS_dispatch_queue;
@class REObserverStore, NSXPCConnection, NSObject, CLLocation, NSLock, NSString;

@interface REPipedLocationDonor : RESingleton <REPipedLocationReceiver> {

	REObserverStore* _observers;
	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _queue;
	CLLocation* _location;
	NSLock* _locationAccessLock;

}

@property (nonatomic,readonly) CLLocation * location; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_locationFromDefaults;
+(void)_saveLocationIntoDefaultsWithLocation:(id)arg1 ;
-(id)_init;
-(void)setConnection:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(CLLocation *)location;
-(void)_handleInvalidation;
-(void)updateLocation:(id)arg1 ;
@end

