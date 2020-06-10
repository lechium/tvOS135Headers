/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:54 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNScheduler;
@class CNContactStore, CNMutableMultiDictionary;

@interface CNContactChangesNotifier : NSObject {

	BOOL _observingNotification;
	id<CNScheduler> _resourceLock;
	id<CNScheduler> _workQueue;
	id<CNScheduler> _downstream;
	CNContactStore* _contactStore;
	CNMutableMultiDictionary* _registeredObservers;

}

@property (nonatomic,readonly) id<CNScheduler> resourceLock;                                         //@synthesize resourceLock=_resourceLock - In the implementation block
@property (nonatomic,readonly) id<CNScheduler> workQueue;                                            //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) id<CNScheduler> downstream;                                           //@synthesize downstream=_downstream - In the implementation block
@property (nonatomic,readonly) CNContactStore * contactStore;                                        //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,readonly) CNMutableMultiDictionary * registeredObservers;                       //@synthesize registeredObservers=_registeredObservers - In the implementation block
@property (assign,getter=isObservingNotification,nonatomic) BOOL observingNotification;              //@synthesize observingNotification=_observingNotification - In the implementation block
+(id)os_log;
+(id)sharedNotifier;
+(id)createProxyForObserver:(id)arg1 keysToFetch:(id)arg2 ;
+(id)preparedContact:(id)arg1 withStore:(id)arg2 keysToFetch:(id)arg3 ;
+(id)workQueue_createFetchersFromRegisteredObservers:(id)arg1 ;
-(id)init;
-(id<CNScheduler>)workQueue;
-(id<CNScheduler>)resourceLock;
-(id<CNScheduler>)downstream;
-(CNContactStore *)contactStore;
-(id)initWithContactStore:(id)arg1 downstreamScheduler:(id)arg2 schedulerProvider:(id)arg3 ;
-(void)registerObserver:(id)arg1 forContact:(id)arg2 keysToFetch:(id)arg3 ;
-(void)registerObserver:(id)arg1 forContact:(id)arg2 keysToFetch:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)registerProxy:(id)arg1 identifier:(id)arg2 ;
-(BOOL)resourceLock_removeProxiesPassingTest:(/*^block*/id)arg1 forIdentifier:(id)arg2 ;
-(void)workQueue_updateObserving;
-(void)unregisterObserver:(id)arg1 forContact:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(CNMutableMultiDictionary *)registeredObservers;
-(void)workQueue_updateObservers;
-(BOOL)isObservingNotification;
-(void)contactStoreDidChange:(id)arg1 ;
-(void)setObservingNotification:(BOOL)arg1 ;
-(void)registerObserver:(id)arg1 forContact:(id)arg2 ;
-(void)unregisterObserver:(id)arg1 forContact:(id)arg2 ;
@end

