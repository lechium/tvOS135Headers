/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:50 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PDXPCServiceExportedInterface.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSString, NSObject;

@interface PDXPCService : NSObject <PDXPCServiceExportedInterface> {

	NSXPCConnection* _connection;
	NSString* _className;
	BOOL _callbacksSuspended;
	NSObject*<OS_dispatch_queue> _readWriteQueue;
	int _remoteProcessIdentifier;
	NSString* _remoteProcessApplicationIdentifier;

}

@property (nonatomic,readonly) int remoteProcessIdentifier;                                //@synthesize remoteProcessIdentifier=_remoteProcessIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * remoteProcessApplicationIdentifier;              //@synthesize remoteProcessApplicationIdentifier=_remoteProcessApplicationIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * remoteProcessBundleIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)initWithConnection:(id)arg1 ;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)remoteObjectProxy;
-(id)connection;
-(void)serviceResumed;
-(void)serviceSuspended;
-(void)clearConnectionReference;
-(int)remoteProcessIdentifier;
-(NSString *)remoteProcessBundleIdentifier;
-(NSString *)remoteProcessApplicationIdentifier;
@end
