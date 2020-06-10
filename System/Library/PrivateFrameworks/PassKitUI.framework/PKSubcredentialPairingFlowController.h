/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:42 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PKSubcredentialPairingFlowControllerProtocol.h>

@protocol OS_dispatch_queue, PKSubcredentialProvisioningFlowControllerDelegate, PKPaymentSetupViewControllerDelegate;
@class NSObject, NSString;

@interface PKSubcredentialPairingFlowController : NSObject <PKSubcredentialPairingFlowControllerProtocol> {

	NSObject*<OS_dispatch_queue> _queue;
	id<PKSubcredentialProvisioningFlowControllerDelegate> _delegate;
	id<PKPaymentSetupViewControllerDelegate> _setupDelegate;

}

@property (assign,nonatomic,__weak) id<PKSubcredentialProvisioningFlowControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<PKPaymentSetupViewControllerDelegate> setupDelegate;                      //@synthesize setupDelegate=_setupDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharingRequestForContext:(id)arg1 withCredential:(id)arg2 ;
+(id)credentialToShareForContext:(id)arg1 ;
+(id)contextFromPaymentCredential:(id)arg1 provisioningController:(id)arg2 ;
-(id<PKSubcredentialProvisioningFlowControllerDelegate>)delegate;
-(void)setDelegate:(id<PKSubcredentialProvisioningFlowControllerDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(id)remoteDeviceProvisioningViewModelForOperation:(id)arg1 ;
-(void)provisioningFinishedWithOperation:(id)arg1 ;
-(void)nextViewControllerFromProvisioningOperation:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id<PKPaymentSetupViewControllerDelegate>)setupDelegate;
-(void)setSetupDelegate:(id<PKPaymentSetupViewControllerDelegate>)arg1 ;
-(void)nextViewControllerFromHeroViewController:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)canProvisionOnRemoteDeviceWithContext:(id)arg1 sharingRequest:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)nextQueuedProvisioningViewControllerFromProvisioningOperation:(id)arg1 ;
-(id)localizedIssuerNameForProvisioningOperation:(id)arg1 ;
-(void)provisioningWasCanceledWithOperation:(id)arg1 ;
-(id)localDeviceProvisioningViewModelForOperation:(id)arg1 ;
-(void)prewarmPairingWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)alertForOperation:(id)arg1 withError:(id)arg2 retryHandler:(/*^block*/id)arg3 cancelationHandler:(/*^block*/id)arg4 ;
-(id)startingViewControllerForContext:(id)arg1 ;
@end

