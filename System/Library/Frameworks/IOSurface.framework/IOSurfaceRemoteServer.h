/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:35 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/IOSurface.framework/IOSurface
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface IOSurfaceRemoteServer : NSObject {

	NSObject*<OS_xpc_object> _listener;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _clients;

}

@property (nonatomic,retain) NSObject*<OS_xpc_object> listener;               //@synthesize listener=_listener - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSMutableArray * clients;                        //@synthesize clients=_clients - In the implementation block
-(void)dealloc;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSObject*<OS_xpc_object>)listener;
-(void)setListener:(NSObject*<OS_xpc_object>)arg1 ;
-(void)setClients:(NSMutableArray *)arg1 ;
-(void)_handleClientConnection:(id)arg1 ;
-(NSMutableArray *)clients;
-(void)_handleClientDisconnected:(id)arg1 ;
-(id)initWithListener:(id)arg1 options:(id)arg2 ;
-(void)shutdown;
@end

