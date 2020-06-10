/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:00 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSXPCConnectionDelegate.h>

@class NSError, _UIAsyncInvocation, NSString, _UIRemoteViewService, BKSProcessAssertion, NSXPCConnection;

@interface _UIViewServiceInterface : NSObject <NSXPCConnectionDelegate> {

	os_unfair_lock_s _terminationStateLock;
	NSError* _terminationError;
	/*^block*/id _terminationHandler;
	BOOL _isTerminated;
	_UIAsyncInvocation* _terminateInvocation;
	NSString* _serviceBundleIdentifier;
	_UIRemoteViewService* _service;
	BKSProcessAssertion* _serviceProcessAssertion;
	NSXPCConnection* _serviceConnection;
	int __automatic_invalidation_retainCount;
	BOOL __automatic_invalidation_invalidated;

}

@property (nonatomic,readonly) int servicePID; 
@property (nonatomic,readonly) SCD_Struct_UI50 serviceAuditToken; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)connectToViewServiceWithBundleIdentifier:(id)arg1 deputyInterfaces:(id)arg2 connectionHandler:(/*^block*/id)arg3 ;
+(id)connectToViewService:(id)arg1 deputyInterfaces:(id)arg2 connectionHandler:(/*^block*/id)arg3 ;
-(id)retain;
-(oneway void)release;
-(BOOL)_tryRetain;
-(BOOL)_isDeallocating;
-(unsigned long long)retainCount;
-(void)dealloc;
-(void)setTerminationHandler:(/*^block*/id)arg1 ;
-(void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(BOOL)arg3 ;
-(id)disconnect;
-(void)_terminateUnconditionallyThen:(/*^block*/id)arg1 ;
-(int)__automatic_invalidation_logic;
-(id)_initWithConnectionInfo:(SCD_Struct_UI25)arg1 serviceBundleIdentifier:(id)arg2 deputyInterfaces:(id)arg3 ;
-(id)_initWithConnectionInfo:(SCD_Struct_UI25)arg1 service:(id)arg2 deputyInterfaces:(id)arg3 ;
-(id)_terminateWithError:(id)arg1 ;
-(id)_initWithConnectionInfo:(SCD_Struct_UI25)arg1 serviceBundleIdentifier:(id)arg2 service:(id)arg3 deputyInterfaces:(id)arg4 ;
-(id)connectToDeputyWithInterface:(id)arg1 fromExportedHostingObject:(id)arg2 connectionHandler:(/*^block*/id)arg3 ;
-(int)servicePID;
-(SCD_Struct_UI50)serviceAuditToken;
@end

