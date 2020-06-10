/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:20 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSProxyConnectionDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString, SocksHandshake, NSProxyConnection, NSDictionary;

@interface _NSCFSocksProxy : NSObject <NSProxyConnectionDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	int _outPort;
	NSString* _outHost;
	SocksHandshake* _socksHandshake;
	NSProxyConnection* _inbound;
	NSProxyConnection* _outbound;
	NSDictionary* _configuration;

}

@property (retain) NSProxyConnection * inbound;                     //@synthesize inbound=_inbound - In the implementation block
@property (retain) NSProxyConnection * outbound;                    //@synthesize outbound=_outbound - In the implementation block
@property (retain) NSDictionary * configuration;                    //@synthesize configuration=_configuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)handleIncomingConnection:(id)arg1 queue:(id)arg2 configuration:(id)arg3 ;
+(id)proxyServers;
-(void)dealloc;
-(NSDictionary *)configuration;
-(void)setConfiguration:(NSDictionary *)arg1 ;
-(void)connected:(int)arg1 ;
-(void)cleanup;
-(void)outboundConnectionReceivedData:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)outboundConnectionCompleteWithError:(int)arg1 ;
-(id)initWithConnection:(id)arg1 queue:(id)arg2 ;
-(void)handshakeRead;
-(void)readInbound;
-(void)readOutbound;
-(NSProxyConnection *)inbound;
-(void)setInbound:(NSProxyConnection *)arg1 ;
-(NSProxyConnection *)outbound;
-(void)setOutbound:(NSProxyConnection *)arg1 ;
@end
