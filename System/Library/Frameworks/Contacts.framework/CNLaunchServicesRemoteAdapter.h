/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:52 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNLaunchServicesAdapter.h>

@interface CNLaunchServicesRemoteAdapter : NSObject <CNLaunchServicesAdapter>
+(id)launchServicesAdapterInterface;
+(id)createConnectionWithInterface:(id)arg1 ;
-(void)applicationsForUserActivityType:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)applicationsAvailableForHandlingURLScheme:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)applicationForBundleIdentifier:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)openUserActivityData:(id)arg1 inApplication:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)openSensitiveURLInBackground:(id)arg1 withOptions:(id)arg2 withReply:(/*^block*/id)arg3 ;
@end
