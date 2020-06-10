/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:10 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppleAccount/AppleAccount-Structs.h>
@interface AAUserNotification : NSObject
+(void)showUserNotificationWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitle:(id)arg4 withCompletionBlock:(/*^block*/id)arg5 ;
+(id)_defaultParameters;
+(void)_waitForResponseAndReleaseNotification:(CFUserNotificationRef)arg1 completion:(/*^block*/id)arg2 ;
+(void)waitForResponseToNotification:(CFUserNotificationRef)arg1 completion:(/*^block*/id)arg2 ;
+(void)showUserNotificationWithTitle:(id)arg1 message:(id)arg2 textFieldTitle:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitle:(id)arg5 completion:(/*^block*/id)arg6 ;
+(void)showUserNotificationWithTitle:(id)arg1 message:(id)arg2 secureTextFieldTitle:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitle:(id)arg5 completion:(/*^block*/id)arg6 ;
@end

