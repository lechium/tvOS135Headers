/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:18 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/WLKNotificationCenterDelegate.h>
#import <libobjc.A.dylib/VUIJSNotificationCenter.h>

@protocol VUIJSNotificationCenter <JSExport>
@required
-(void)setBadgeNumber:(id)arg1;
-(void)post:(id)arg1 :(id)arg2 :(id)arg3 :(id)arg4;
-(void)setBadgeString:(id)arg1;

@end


@class WLKNotificationCenter, NSString;

@interface VUIJSNotificationCenter : IKJSObject <WLKNotificationCenterDelegate, VUIJSNotificationCenter> {

	WLKNotificationCenter* _center;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)showSignupAlertPushNotificationWithAppContext:(id)arg1 ;
+(void)showAppInstallCompletePushNotificationWithAppContext:(id)arg1 appName:(id)arg2 contentName:(id)arg3 punchoutURL:(id)arg4 ;
-(id)initWithAppContext:(id)arg1 ;
-(void)handleAction:(id)arg1 ;
-(void)setBadgeNumber:(id)arg1 ;
-(void)post:(id)arg1 :(id)arg2 :(id)arg3 :(id)arg4 ;
-(void)setBadgeString:(id)arg1 ;
@end

