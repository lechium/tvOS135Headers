//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep  6 2019 11:16:02).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, TVCKPushNotificationServer;

@protocol TVCKPushNotificationListener <NSObject>
- (void)pushNotificationServerTokenDidChange:(TVCKPushNotificationServer *)arg1;
- (void)pushNotificationServer:(TVCKPushNotificationServer *)arg1 didReceiveMessageForTopic:(NSString *)arg2 userInfo:(NSDictionary *)arg3;
@end

