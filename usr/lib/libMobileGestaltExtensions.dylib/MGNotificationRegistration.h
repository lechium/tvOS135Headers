/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:55 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /usr/lib/libMobileGestaltExtensions.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface MGNotificationRegistration : NSObject {

	NSMutableDictionary* _observers;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _block;
	BOOL _deliverNotifications;
	NSMutableDictionary* _requestedRegistrations;

}
-(void)dealloc;
-(void)cancel;
-(BOOL)start;
-(id)initWithQueue:(id)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)registerForNotification:(int)arg1 argument:(const char*)arg2 question:(id)arg3 ;
@end
