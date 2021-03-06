/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:07 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/CoreAccessories/PlugIns/Transports/IOAccessoryManager.transport/IOAccessoryManager
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableSet, NSMutableDictionary, NSRecursiveLock;

@interface ACCUserNotificationManager : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableSet* _userNotifications;
	NSMutableDictionary* _completionHandlers;
	NSRecursiveLock* _lock;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                    //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSMutableSet * userNotifications;                      //@synthesize userNotifications=_userNotifications - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * completionHandlers;              //@synthesize completionHandlers=_completionHandlers - In the implementation block
@property (nonatomic,retain) NSRecursiveLock * lock;                                //@synthesize lock=_lock - In the implementation block
+(id)sharedManager;
-(id)init;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSRecursiveLock *)lock;
-(void)setLock:(NSRecursiveLock *)arg1 ;
-(NSMutableDictionary *)completionHandlers;
-(void)setCompletionHandlers:(NSMutableDictionary *)arg1 ;
-(void)presentNotification:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)dismissNotificationsWithGroupIdentifier:(id)arg1 ;
-(void)dismissNotificationWithIdentifier:(id)arg1 ;
-(NSMutableSet *)userNotifications;
-(void)dismissNotification:(id)arg1 ;
-(void)removeUserNotification:(id)arg1 ;
-(void)dismisssAllNotifications;
-(id)userNotificationWithUUID:(id)arg1 ;
-(void)setUserNotifications:(NSMutableSet *)arg1 ;
@end

