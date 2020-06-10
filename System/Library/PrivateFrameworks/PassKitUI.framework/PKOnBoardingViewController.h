/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:51 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PKExplanationViewController.h>
#import <libobjc.A.dylib/PKPaymentSetupPresentationProtocol.h>
#import <libobjc.A.dylib/PKExplanationViewControllerDelegate.h>
#import <libobjc.A.dylib/PKViewControllerPreflightable.h>

@protocol PKSetupFlowControllerProtocol, PKPaymentSetupViewControllerDelegate;
@class PKPaymentProvisioningController, PKPaymentSetupProduct, PKDynamicProvisioningPageContent, UIImage, NSString;

@interface PKOnBoardingViewController : PKExplanationViewController <PKPaymentSetupPresentationProtocol, PKExplanationViewControllerDelegate, PKViewControllerPreflightable> {

	id<PKSetupFlowControllerProtocol> _parentFlowController;
	id<PKPaymentSetupViewControllerDelegate> _setupDelegate;
	PKPaymentProvisioningController* _provisioningController;
	PKPaymentSetupProduct* _paymentSetupProduct;
	PKDynamicProvisioningPageContent* _currentPage;
	UIImage* _heroImage;

}

@property (assign,nonatomic,__weak) id<PKSetupFlowControllerProtocol> parentFlowController;              //@synthesize parentFlowController=_parentFlowController - In the implementation block
@property (assign,nonatomic,__weak) id<PKPaymentSetupViewControllerDelegate> setupDelegate;              //@synthesize setupDelegate=_setupDelegate - In the implementation block
@property (nonatomic,retain) PKPaymentProvisioningController * provisioningController;                   //@synthesize provisioningController=_provisioningController - In the implementation block
@property (nonatomic,retain) PKPaymentSetupProduct * paymentSetupProduct;                                //@synthesize paymentSetupProduct=_paymentSetupProduct - In the implementation block
@property (nonatomic,retain) PKDynamicProvisioningPageContent * currentPage;                             //@synthesize currentPage=_currentPage - In the implementation block
@property (nonatomic,retain) UIImage * heroImage;                                                        //@synthesize heroImage=_heroImage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidLoad;
-(void)setCurrentPage:(PKDynamicProvisioningPageContent *)arg1 ;
-(PKDynamicProvisioningPageContent *)currentPage;
-(PKPaymentProvisioningController *)provisioningController;
-(void)setProvisioningController:(PKPaymentProvisioningController *)arg1 ;
-(void)preflightWithCompletion:(/*^block*/id)arg1 ;
-(void)explanationViewDidSelectContinue:(id)arg1 ;
-(void)explanationViewDidSelectSetupLater:(id)arg1 ;
-(void)explanationViewDidSelectBodyButton:(id)arg1 ;
-(void)explanationViewControllerDidSelectCancel:(id)arg1 ;
-(void)explanationViewControllerDidSelectDone:(id)arg1 ;
-(id<PKPaymentSetupViewControllerDelegate>)setupDelegate;
-(void)setSetupDelegate:(id<PKPaymentSetupViewControllerDelegate>)arg1 ;
-(id)paymentSetupMarker;
-(void)setParentFlowController:(id<PKSetupFlowControllerProtocol>)arg1 ;
-(id)initWithParentFlowController:(id)arg1 setupDelegate:(id)arg2 context:(long long)arg3 provisioningController:(id)arg4 paymentSetupProduct:(id)arg5 currentPage:(id)arg6 ;
-(void)terminateSetupFlow;
-(UIImage *)heroImage;
-(id<PKSetupFlowControllerProtocol>)parentFlowController;
-(void)handleSetupLater;
-(void)handleProductAvailable;
-(id)nextOnboardingViewControllerWithPage:(id)arg1 product:(id)arg2 ;
-(void)handleNotifyRequested;
-(PKPaymentSetupProduct *)paymentSetupProduct;
-(void)setPaymentSetupProduct:(PKPaymentSetupProduct *)arg1 ;
-(void)setHeroImage:(UIImage *)arg1 ;
@end

