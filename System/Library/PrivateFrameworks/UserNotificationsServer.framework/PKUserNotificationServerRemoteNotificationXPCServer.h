/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:48 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKUserNotificationServerRemoteNotificationXPCServer <NSObject>
@required
-(void)requestTokenForRemoteNotificationsForBundleIdentifier:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(void)invalidateTokenForRemoteNotificationsForBundleIdentifier:(id)arg1;
-(void)getAllowsRemoteNotificationsForBundleIdentifier:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;

@end

