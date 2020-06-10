/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:31 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UNUserNotificationServerProtocol <NSObject>
@required
-(void)setObservingUserNotifications:(BOOL)arg1 forBundleIdentifier:(id)arg2;
-(void)requestAuthorizationWithOptions:(unsigned long long)arg1 forBundleIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)getNotificationSettingsForBundleIdentifier:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(void)getNotificationCategoriesForBundleIdentifier:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(void)setNotificationCategories:(id)arg1 forBundleIdentifier:(id)arg2;
-(void)addNotificationRequest:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(/*^block*/id)arg3;
-(void)replaceContentForRequestWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 replacementContent:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)setNotificationRequests:(id)arg1 forBundleIdentifier:(id)arg2;
-(void)getPendingNotificationRequestsForBundleIdentifier:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(void)removePendingNotificationRequestsWithIdentifiers:(id)arg1 forBundleIdentifier:(id)arg2;
-(void)removeSimilarNotificationRequests:(id)arg1 forBundleIdentifier:(id)arg2;
-(void)removeAllPendingNotificationRequestsForBundleIdentifier:(id)arg1;
-(void)getDeliveredNotificationsForBundleIdentifier:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(void)removeDeliveredNotificationsWithIdentifiers:(id)arg1 forBundleIdentifier:(id)arg2;
-(void)removeAllDeliveredNotificationsForBundleIdentifier:(id)arg1;
-(void)getBadgeNumberForBundleIdentifier:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(void)setBadgeNumber:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(/*^block*/id)arg3;
-(void)setBadgeString:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(/*^block*/id)arg3;
-(void)setNotificationTopics:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(/*^block*/id)arg3;
-(void)getNotificationTopicsForBundleIdentifier:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(void)getNotificationSettingsForTopicsWithBundleIdentifier:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;

@end

