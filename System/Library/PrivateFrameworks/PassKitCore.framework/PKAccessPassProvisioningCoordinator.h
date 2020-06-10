/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:49 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/PKSubcredentialPairingCoordinatorInterface.h>

@protocol OS_dispatch_source, PKAccessPassProvisioningControllerDelegate;
@class PKAccessPassProvisioningConfiguration, NSXPCListener, NSObject, NSXPCConnection, NSString;

@interface PKAccessPassProvisioningCoordinator : NSObject <NSXPCListenerDelegate, PKSubcredentialPairingCoordinatorInterface> {

	PKAccessPassProvisioningConfiguration* _configuration;
	NSXPCListener* _listener;
	NSObject*<OS_dispatch_source> _timer;
	atomic_flag _hasCalledDidFinishDelegate;
	os_unfair_lock_s _lock;
	NSXPCConnection* _connection;
	BOOL _hasPresentBeenCalled;
	BOOL _isServicePresented;
	/*^block*/id _presentationCompletionBlock;
	id<PKAccessPassProvisioningControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PKAccessPassProvisioningControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<PKAccessPassProvisioningControllerDelegate>)delegate;
-(void)setDelegate:(id<PKAccessPassProvisioningControllerDelegate>)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)initWithConfiguration:(id)arg1 ;
-(void)presentWithCompletion:(/*^block*/id)arg1 ;
-(void)dismissWithCompletion:(/*^block*/id)arg1 ;
-(void)startPresentationTimeoutTimer;
-(void)cancelPresentationTimeoutTimer;
-(void)provisioningDidFinishWithPaymentPass:(id)arg1 error:(id)arg2 ;
-(void)_provisioningDidFinishWithPaymentPass:(id)arg1 error:(id)arg2 ;
-(void)startConnectionWithCompletion:(/*^block*/id)arg1 ;
@end

