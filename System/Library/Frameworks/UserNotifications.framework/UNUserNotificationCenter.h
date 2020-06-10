/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:31 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/UNUserNotificationServiceConnectionObserver.h>
#import <libobjc.A.dylib/UNUserNotificationCenterDelegateConnectionListenerDelegate.h>

@protocol UNUserNotificationCenterDelegate, OS_dispatch_queue, UNUserNotificationCenterDelegatePrivate;
@class NSString, NSObject;

@interface UNUserNotificationCenter : NSObject <UNUserNotificationServiceConnectionObserver, UNUserNotificationCenterDelegateConnectionListenerDelegate> {

	id<UNUserNotificationCenterDelegate> _delegate;
	NSString* _bundleIdentifier;
	NSObject*<OS_dispatch_queue> _queue;
	id<UNUserNotificationCenterDelegatePrivate> _privateDelegate;

}

@property (nonatomic,copy) NSString * bundleIdentifier;                                                       //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                              //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic,__weak) id<UNUserNotificationCenterDelegatePrivate> privateDelegate;              //@synthesize privateDelegate=_privateDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<UNUserNotificationCenterDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL supportsContentExtensions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsContentExtensions;
+(id)currentNotificationCenter;
-(id)init;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id<UNUserNotificationCenterDelegate>)delegate;
-(void)setDelegate:(id<UNUserNotificationCenterDelegate>)arg1 ;
-(NSString *)bundleIdentifier;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(id)notificationSettings;
-(void)didReceiveNotificationResponse:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)didChangeSettings:(id)arg1 ;
-(void)didOpenApplicationForResponse:(id)arg1 ;
-(id)initWithBundleIdentifier:(id)arg1 queue:(id)arg2 ;
-(BOOL)supportsContentExtensions;
-(void)addNotificationRequest:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setWantsNotificationResponsesDelivered;
-(void)requestAuthorizationWithOptions:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getNotificationSettingsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setNotificationCategories:(id)arg1 ;
-(id)notificationCategories;
-(void)getNotificationCategoriesWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)pendingNotificationRequests;
-(void)getPendingNotificationRequestsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)addNotificationRequest:(id)arg1 ;
-(void)replaceContentForRequestWithIdentifier:(id)arg1 replacementContent:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setNotificationRequests:(id)arg1 ;
-(void)removePendingNotificationRequestsWithIdentifiers:(id)arg1 ;
-(void)removeSimilarNotificationRequests:(id)arg1 ;
-(void)removeAllPendingNotificationRequests;
-(id)deliveredNotifications;
-(void)getDeliveredNotificationsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)removeDeliveredNotificationsWithIdentifiers:(id)arg1 ;
-(void)removeAllDeliveredNotifications;
-(id)badgeNumber;
-(void)getBadgeNumberWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setBadgeNumber:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setBadgeString:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setNotificationTopics:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)getNotificationTopicsWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)notificationTopics;
-(void)getNotificationSettingsForTopicsWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)notificationSettingsForTopics;
-(id<UNUserNotificationCenterDelegatePrivate>)privateDelegate;
-(void)setPrivateDelegate:(id<UNUserNotificationCenterDelegatePrivate>)arg1 ;
@end
