/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:51 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject;

@interface _UIKeyboardMediaServiceWarmUpConnection : NSObject {

	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _queue;

}
+(id)sharedConnection;
+(void)warmUp;
-(void)warmUp;
@end

