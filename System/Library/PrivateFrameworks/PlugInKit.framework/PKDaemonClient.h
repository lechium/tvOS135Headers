/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:14 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject;

@interface PKDaemonClient : NSObject {

	NSObject*<OS_xpc_object> _pkd;
	NSObject*<OS_dispatch_queue> _replyQueue;
	long long _protocolVersion;

}

@property (retain) NSObject*<OS_xpc_object> pkd;                         //@synthesize pkd=_pkd - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> replyQueue;              //@synthesize replyQueue=_replyQueue - In the implementation block
@property (assign) long long protocolVersion;                            //@synthesize protocolVersion=_protocolVersion - In the implementation block
+(id)convertToXPC:(id)arg1 version:(unsigned long long)arg2 ;
-(void)findPlugInByUUID:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)findPlugInByPathURL:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)initWithServiceName:(const char*)arg1 ;
-(id)request:(const char*)arg1 ;
-(void)setProtocolVersion:(long long)arg1 ;
-(long long)protocolVersion;
-(void)setReplyQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)errorInReply:(id)arg1 ;
-(id)convertFromXPC:(id)arg1 ;
-(void)matchPlugIns:(id)arg1 flags:(unsigned long long)arg2 uuid:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)accessPlugIns:(id)arg1 synchronously:(BOOL)arg2 flags:(unsigned long long)arg3 reply:(/*^block*/id)arg4 ;
-(void)readyPlugIns:(id)arg1 synchronously:(BOOL)arg2 flags:(unsigned long long)arg3 environment:(id)arg4 reply:(/*^block*/id)arg5 ;
-(void)setPluginAnnotations:(id)arg1 annotations:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)copyReceipt:(/*^block*/id)arg1 ;
-(id)initWithServiceName:(const char*)arg1 user:(unsigned)arg2 ;
-(void)setPkd:(NSObject*<OS_xpc_object>)arg1 ;
-(id)request:(const char*)arg1 paths:(id)arg2 ;
-(void)send:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)set:(id)arg1 plugins:(id)arg2 ;
-(void)sendSynchronously:(BOOL)arg1 request:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)set:(id)arg1 uuids:(id)arg2 ;
-(void)addPlugIns:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)removePlugIns:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)bulkPlugins:(unsigned long long)arg1 reply:(/*^block*/id)arg2 ;
-(void)bulkSetPluginAnnotations:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)holdPlugins:(id)arg1 flags:(unsigned long long)arg2 reply:(/*^block*/id)arg3 ;
-(void)releaseHold:(id)arg1 flags:(unsigned long long)arg2 reply:(/*^block*/id)arg3 ;
-(NSObject*<OS_xpc_object>)pkd;
-(NSObject*<OS_dispatch_queue>)replyQueue;
@end

