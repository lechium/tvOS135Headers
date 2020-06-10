/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:26 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject, PLChangeStore;

@interface PLChangeHub : NSObject {

	BOOL _didInitializeState;
	NSObject*<OS_dispatch_source> _memoryPressureSource;
	NSObject*<OS_dispatch_queue> _eventsSerializationQueue;
	PLChangeStore* _changeStore;

}
+(id)sharedChangeHub;
+(unsigned long long)currentInMemoryEventIndex;
+(void)setCurrentInMemoryEventIndex:(unsigned long long)arg1 ;
-(id)init;
-(void)sendPendingEventsForRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)clearChangeStore:(/*^block*/id)arg1 ;
-(void)_onEventsQueueAsyncWithTransaction:(id)arg1 perform:(/*^block*/id)arg2 ;
-(void)_startListeningToMemoryPressureEvents;
-(unsigned long long)_inq_currentEventIndex;
-(void)fetchCurrentEventIndexWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)eventsSinceIndex:(unsigned long long)arg1 filteredBy:(/*^block*/id)arg2 onQueue:(id)arg3 withBlock:(/*^block*/id)arg4 ;
-(void)_inq_sendPendingEventsForRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

