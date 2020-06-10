/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:40:54 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_xpc_object;
@class NSObject;

@interface CSVoiceIdXPCConnection : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_xpc_object> _connection;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;               //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_xpc_object> connection;              //@synthesize connection=_connection - In the implementation block
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(id)initWithConnection:(id)arg1 ;
-(NSObject*<OS_xpc_object>)connection;
-(void)_handleClientEvent:(id)arg1 ;
-(void)_handleClientMessage:(id)arg1 client:(id)arg2 ;
-(void)_handleClientError:(id)arg1 client:(id)arg2 ;
-(void)_sendReplyMessageWithResult:(BOOL)arg1 error:(id)arg2 event:(id)arg3 client:(id)arg4 ;
-(void)activateConnection;
@end

