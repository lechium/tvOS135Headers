/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:19 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/WirelessCoexManager.framework/WirelessCoexManager
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WCMClientCallback, OS_dispatch_queue, OS_xpc_object;
@class NSObject;

@interface WCMClientProxy : NSObject {

	int mProcessId;
	id<WCMClientCallback> mDelegate;
	NSObject*<OS_dispatch_queue> mQueue;
	BOOL mIsRegistered;
	NSObject*<OS_xpc_object> mConnection;

}
-(id)init;
-(void)dealloc;
-(void)reConnect;
-(BOOL)connectToServer;
-(void)registerToServer;
-(id)initWithClientProcessId:(int)arg1 delegate:(id)arg2 dispatch:(id)arg3 ;
-(void)sendMessage:(int)arg1 argument:(id)arg2 ;
@end

