/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:57 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSHashTable, NSObject;

@interface NRActiveDeviceAssertionMonitor : NSObject {

	int _assertionToken;
	NSHashTable* _observers;
	NSObject*<OS_dispatch_queue> _workQueue;

}

@property (nonatomic,retain) NSHashTable * observers;                             //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
@property (assign,nonatomic) int assertionToken;                                  //@synthesize assertionToken=_assertionToken - In the implementation block
@property (nonatomic,readonly) BOOL hasActiveAssertion; 
+(id)sharedInstance;
-(id)_init;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSHashTable *)observers;
-(void)setObservers:(NSHashTable *)arg1 ;
-(void)startObservingToken;
-(void)stopObservingToken;
-(void)notifyObserversWithTokenValue:(int)arg1 ;
-(BOOL)hasActiveAssertion;
-(int)assertionToken;
-(void)setAssertionToken:(int)arg1 ;
@end

