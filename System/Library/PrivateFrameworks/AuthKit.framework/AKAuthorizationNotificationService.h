/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:33 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AKAdaptiveService, NSXPCListenerEndpoint;

@interface AKAuthorizationNotificationService : NSObject {

	AKAdaptiveService* _service;
	NSXPCListenerEndpoint* _daemonEndpoint;

}
+(id)_sharedService;
+(void)startServiceWithNotificationHandler:(id)arg1 ;
-(id)init;
-(id)initWithDaemonXPCEndpoint:(id)arg1 ;
-(void)startWithNotificationHandler:(id)arg1 ;
-(void)_configureNotificationService;
@end
