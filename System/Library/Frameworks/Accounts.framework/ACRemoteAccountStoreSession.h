/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:56 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Accounts/Accounts-Structs.h>
#import <libobjc.A.dylib/NSXPCProxyCreating.h>

@class NSXPCConnection, NSXPCListenerEndpoint, NSString;

@interface ACRemoteAccountStoreSession : NSObject <NSXPCProxyCreating> {

	NSXPCConnection* _connection;
	os_unfair_lock_s _connectionLock;
	BOOL _notificationsEnabled;
	NSXPCListenerEndpoint* _listenerEndpoint;
	NSString* _effectiveBundleID;

}

@property (nonatomic,readonly) NSXPCListenerEndpoint * listenerEndpoint;              //@synthesize listenerEndpoint=_listenerEndpoint - In the implementation block
@property (nonatomic,copy) NSString * effectiveBundleID;                              //@synthesize effectiveBundleID=_effectiveBundleID - In the implementation block
@property (assign,nonatomic) BOOL notificationsEnabled;                               //@synthesize notificationsEnabled=_notificationsEnabled - In the implementation block
-(id)init;
-(void)dealloc;
-(id)_connection;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)remoteObjectProxy;
-(id)initWithListenerEndpoint:(id)arg1 ;
-(NSString *)effectiveBundleID;
-(void)setEffectiveBundleID:(NSString *)arg1 ;
-(void)setNotificationsEnabled:(BOOL)arg1 ;
-(void)_setConnectionInterrupted;
-(void)_setConnectionInvalidated;
-(void)_locked_configureRemoteAccountStoreWithConnection:(id)arg1 ;
-(void)_locked_connection:(id)arg1 setEffectiveBundleID:(id)arg2 ;
-(void)_locked_connection:(id)arg1 setNotificationsEnabled:(BOOL)arg2 ;
-(NSXPCListenerEndpoint *)listenerEndpoint;
-(BOOL)notificationsEnabled;
@end

