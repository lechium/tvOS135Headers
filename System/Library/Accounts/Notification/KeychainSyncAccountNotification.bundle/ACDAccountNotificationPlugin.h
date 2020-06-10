/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:05 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Accounts/Notification/KeychainSyncAccountNotification.bundle/KeychainSyncAccountNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ACDAccountNotificationPlugin <NSObject>
@optional
-(BOOL)canRemoveAccount:(id)arg1 inStore:(id)arg2 error:(id*)arg3;
-(BOOL)canSaveAccount:(id)arg1 inStore:(id)arg2 error:(id*)arg3;
-(BOOL)canSaveAccount:(id)arg1 inStore:(id)arg2;
-(BOOL)canRemoveAccount:(id)arg1 inStore:(id)arg2;
-(BOOL)account:(id)arg1 willChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4;
-(void)account:(id)arg1 didChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4;
-(void)account:(id)arg1 willPerformActionsForDataclasses:(id)arg2;
-(void)account:(id)arg1 didPerformActionsForDataclasses:(id)arg2;

@end

