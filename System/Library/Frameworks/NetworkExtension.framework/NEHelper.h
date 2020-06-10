/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:27 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject;

@interface NEHelper : NSObject {

	NSObject*<OS_xpc_object> _connection;
	/*^block*/id _incomingMessageHandler;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_xpc_object> _initMessage;

}

@property (readonly) NSObject*<OS_dispatch_queue> queue;                //@synthesize queue=_queue - In the implementation block
@property (readonly) NSObject*<OS_xpc_object> initMessage;              //@synthesize initMessage=_initMessage - In the implementation block
@property (copy) id incomingMessageHandler;                             //@synthesize incomingMessageHandler=_incomingMessageHandler - In the implementation block
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)connection;
-(id)initWithDelegateClassID:(int)arg1 queue:(id)arg2 initialMessage:(id)arg3 ;
-(void)setIncomingMessageHandler:(id)arg1 ;
-(id)incomingMessageHandler;
-(void)sendRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(id)initWithDelegateClassID:(int)arg1 queue:(id)arg2 ;
-(NSObject*<OS_xpc_object>)initMessage;
@end

