/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:04 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Accounts/Notification/AAAccountNotificationPlugin.bundle/AAAccountNotificationPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ACDAccountNotificationPlugin.h>

@protocol OS_dispatch_queue;
@class NSObject, AAFollowUpController, NSString;

@interface AAAccountNotificationPlugin : NSObject <ACDAccountNotificationPlugin> {

	NSObject*<OS_dispatch_queue> _backgroundQueue;
	AAFollowUpController* _followUpController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_secondaryAccountTypes;
-(id)init;
-(BOOL)canSaveAccount:(id)arg1 inStore:(id)arg2 ;
-(BOOL)account:(id)arg1 willChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4 ;
-(void)account:(id)arg1 didChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4 ;
-(void)addFMIPChildAccountToAccount:(id)arg1 inStore:(id)arg2 ;
-(void)addFMFChildAccountToAccount:(id)arg1 inStore:(id)arg2 ;
-(BOOL)updateFMFChildAccountWithAccount:(id)arg1 inStore:(id)arg2 ;
-(BOOL)updateFMIPChildAccountWithAccount:(id)arg1 inStore:(id)arg2 ;
-(void)_dismissStartUsingFollowUp;
@end
