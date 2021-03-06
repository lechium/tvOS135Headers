/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:31 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString, NSXPCListenerEndpoint;

@interface NSXPCListener : NSObject {

	void* _xconnection;
	NSObject*<OS_dispatch_queue> _userQueue;
	void* reserved0;
	id _delegate;
	NSString* _serviceName;
	unsigned long long _state;
	id _reserved1;
	id _reserved2;

}

@property (__weak) id<NSXPCListenerDelegate> delegate; 
@property (retain,readonly) NSXPCListenerEndpoint * endpoint; 
+(id)_UUID;
+(id)anonymousListener;
+(id)serviceListener;
+(void)enableTransactions;
-(id)description;
-(void)dealloc;
-(void)invalidate;
-(id)_queue;
-(id<NSXPCListenerDelegate>)delegate;
-(void)setDelegate:(id<NSXPCListenerDelegate>)arg1 ;
-(void)resume;
-(id)initWithMachServiceName:(id)arg1 ;
-(void)suspend;
-(void)setOptions:(unsigned long long)arg1 ;
-(void)stop;
-(NSXPCListenerEndpoint *)endpoint;
-(void)_setQueue:(id)arg1 ;
-(id)initWithServiceName:(id)arg1 ;
-(id)_xpcConnection;
-(id)serviceName;
-(id)_initShared;
@end

