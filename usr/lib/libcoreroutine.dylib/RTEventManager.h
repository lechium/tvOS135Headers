/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:03 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/RTTransientObjectProtocol.h>

@protocol OS_dispatch_queue;
@class RTInvocationDispatcher, NSObject, NSString;

@interface RTEventManager : NSObject <RTTransientObjectProtocol> {

	BOOL _accessToEventsGranted;
	RTInvocationDispatcher* _invocationDispatcher;
	id _eventStore;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) RTInvocationDispatcher * invocationDispatcher;              //@synthesize invocationDispatcher=_invocationDispatcher - In the implementation block
@property (nonatomic,retain) id eventStore;                                              //@synthesize eventStore=_eventStore - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                         //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) BOOL accessToEventsGranted;                                 //@synthesize accessToEventsGranted=_accessToEventsGranted - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)calendars;
-(id)eventStore;
-(void)setEventStore:(id)arg1 ;
-(id)initWithEventStore:(id)arg1 ;
-(void)fetchEventsBetweenStartDate:(id)arg1 andEndDate:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)transientObjectDidCreateBackingObject:(id)arg1 ;
-(void)transientObjectDidReleaseBackingObject:(id)arg1 ;
-(void)fetchEventsBetweenStartDate:(id)arg1 andEndDate:(id)arg2 includeSuggestions:(BOOL)arg3 withHandler:(/*^block*/id)arg4 ;
-(void)setAccessToEventsGranted:(BOOL)arg1 ;
-(RTInvocationDispatcher *)invocationDispatcher;
-(BOOL)accessToEventsGranted;
-(id)eventsBetweenStartDate:(id)arg1 andEndDate:(id)arg2 calendars:(id)arg3 ;
-(id)eventsBetweenStartDate:(id)arg1 andEndDate:(id)arg2 ;
-(void)_fetchCurrentlyInEventWithHandler:(/*^block*/id)arg1 ;
-(id)eventsSortedByStartDateBetweenStartDate:(id)arg1 andEndDate:(id)arg2 ;
-(void)_fetchNextFreeStartDateWithHandler:(/*^block*/id)arg1 ;
-(void)_fetchLastEventEndDateWithHandler:(/*^block*/id)arg1 ;
-(id)eventsSortedByEndDateBetweenStartDate:(id)arg1 andEndDate:(id)arg2 ;
-(void)_fetchFreeDateIntervalsBetweenStartDate:(id)arg1 endDate:(id)arg2 filterAllDayEvents:(BOOL)arg3 filterFreeTimeEvents:(BOOL)arg4 handler:(/*^block*/id)arg5 ;
-(void)_fetchEventsBetweenStartDate:(id)arg1 endDate:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_fetchEventsBetweenStartDate:(id)arg1 andEndDate:(id)arg2 includeSuggestions:(BOOL)arg3 withHandler:(/*^block*/id)arg4 ;
-(id)calendarsExcludingSuggested;
-(id)eventsSortedByStartDateBetweenStartDate:(id)arg1 andEndDate:(id)arg2 calendars:(id)arg3 ;
-(void)fetchCurrentlyInEventWithHandler:(/*^block*/id)arg1 ;
-(void)fetchNextFreeStartDateWithHandler:(/*^block*/id)arg1 ;
-(void)fetchLastEventEndDateWithHandler:(/*^block*/id)arg1 ;
-(void)fetchFreeDateIntervalsBetweenStartDate:(id)arg1 endDate:(id)arg2 filterAllDayEvents:(BOOL)arg3 filterFreeTimeEvents:(BOOL)arg4 handler:(/*^block*/id)arg5 ;
-(void)fetchEventsBetweenStartDate:(id)arg1 endDate:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)setInvocationDispatcher:(RTInvocationDispatcher *)arg1 ;
@end

