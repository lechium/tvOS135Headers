/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:25 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MailServices/MailServices-Structs.h>
#import <libobjc.A.dylib/NSXPCProxyCreating.h>

@class MSXPCConnection, NSXPCInterface;

@interface _MSXPCRemoteProxy : NSObject <NSXPCProxyCreating> {

	os_unfair_lock_s _selectorLock;
	CFDictionaryRef _knownSelectors;
	MSXPCConnection* _connection;
	NSXPCInterface* _remoteInterface;
	/*^block*/id _errorHandler;
	id ____nsxpc_remoteObjectProxy;

}

@property (setter=___setNSXPCRemoteObjectProxy:,nonatomic,retain) id ___nsxpc_remoteObjectProxy;              //@synthesize ___nsxpc_remoteObjectProxy=____nsxpc_remoteObjectProxy - In the implementation block
-(BOOL)conformsToProtocol:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(void)dealloc;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)remoteObjectProxy;
-(id)initWithConnection:(id)arg1 interface:(id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(void)___setNSXPCRemoteObjectProxy:(id)arg1 ;
-(id)___nsxpc_remoteObjectProxy;
@end

