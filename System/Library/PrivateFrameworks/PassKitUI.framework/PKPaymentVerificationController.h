/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:45 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UINavigationControllerDelegate.h>

@protocol PKPaymentVerificationControllerDelegate, PKPaymentSetupViewControllerDelegate;
@class NSString, NSNumber, UIImage, PKPaymentPass, PKPaymentWebService, PKVerificationRequestRecord, PKPaymentProvisioningController, PKPassView;

@interface PKPaymentVerificationController : NSObject <UINavigationControllerDelegate> {

	NSString* _installedBankAppBundleID;
	NSString* _installedBankAppTitle;
	NSString* _inStoreBankAppTitle;
	NSNumber* _inStoreBankAppStoreID;
	UIImage* _passSnapshot;
	BOOL _bankAppNotFound;
	PKPaymentPass* _pass;
	id<PKPaymentVerificationControllerDelegate> _delegate;
	id<PKPaymentSetupViewControllerDelegate> _setupDelegate;
	PKPaymentWebService* _webService;
	long long _context;
	long long _verificationContext;
	PKVerificationRequestRecord* _verificationRecord;
	PKPaymentProvisioningController* _provisioningController;
	PKPassView* _passView;

}

@property (nonatomic,retain) PKPaymentPass * pass;                                                       //@synthesize pass=_pass - In the implementation block
@property (assign,nonatomic,__weak) id<PKPaymentVerificationControllerDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<PKPaymentSetupViewControllerDelegate> setupDelegate;              //@synthesize setupDelegate=_setupDelegate - In the implementation block
@property (nonatomic,readonly) PKPaymentWebService * webService;                                         //@synthesize webService=_webService - In the implementation block
@property (assign,nonatomic) long long context;                                                          //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) long long verificationContext;                                              //@synthesize verificationContext=_verificationContext - In the implementation block
@property (nonatomic,readonly) PKVerificationRequestRecord * verificationRecord;                         //@synthesize verificationRecord=_verificationRecord - In the implementation block
@property (nonatomic,retain) PKPaymentProvisioningController * provisioningController;                   //@synthesize provisioningController=_provisioningController - In the implementation block
@property (readonly) NSString * verificationTitleString; 
@property (readonly) NSString * verificationBodyString; 
@property (readonly) BOOL shouldDisabledVerificationButton; 
@property (readonly) NSString * continueVerificationButtonTitle; 
@property (readonly) NSString * alternateMethodButtonTitle; 
@property (nonatomic,retain) PKPassView * passView;                                                      //@synthesize passView=_passView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<PKPaymentVerificationControllerDelegate>)delegate;
-(void)setDelegate:(id<PKPaymentVerificationControllerDelegate>)arg1 ;
-(long long)context;
-(void)setContext:(long long)arg1 ;
-(PKPaymentPass *)pass;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(long long)verificationContext;
-(PKPaymentProvisioningController *)provisioningController;
-(void)setProvisioningController:(PKPaymentProvisioningController *)arg1 ;
-(PKPaymentWebService *)webService;
-(void)setPass:(PKPaymentPass *)arg1 ;
-(unsigned long long)_channelType;
-(id<PKPaymentSetupViewControllerDelegate>)setupDelegate;
-(id)passSnapshot;
-(PKVerificationRequestRecord *)verificationRecord;
-(void)performVerificationOptionsRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setSetupDelegate:(id<PKPaymentSetupViewControllerDelegate>)arg1 ;
-(void)performVerificationUpdateRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(PKPassView *)passView;
-(void)setPassView:(PKPassView *)arg1 ;
-(id)initWithPaymentPass:(id)arg1 passView:(id)arg2 webService:(id)arg3 context:(long long)arg4 delegate:(id)arg5 setupDelegate:(id)arg6 verificationContext:(long long)arg7 ;
-(void)continueVerification;
-(void)sharedPaymentServiceChanged;
-(void)_queue_sharedPaymentWebServiceChanged;
-(void)setVerificationRecord:(PKVerificationRequestRecord *)arg1 ;
-(BOOL)_isBankAppInstalled;
-(void)_performStoreLookupForBankApp;
-(void)_didChangePresentation;
-(id)_textMessageFormattedPhoneNumber:(id)arg1 ;
-(id)_voiceCallFormattedPhoneNumber:(id)arg1 ;
-(id)_bankAppName;
-(id)_bankAppStoreIDs;
-(void)_presentVerificationViewControllerForStepIdentifier:(id)arg1 ;
-(void)_presentVerificatonEntryCompletionViewController;
-(void)_completeVerificationUsingOutboundCall;
-(void)_completeVerificationUsingBankApp;
-(void)_launchBankApp;
-(id)_outboundCallPhoneNumber;
-(void)_wrapViewControllerAndRequestDelegatePresentationOfView:(id)arg1 ;
-(void)_requestDelegatePresentationOfViewController:(id)arg1 ;
-(void)_downloadAndAddPassWithCompletion:(/*^block*/id)arg1 ;
-(NSString *)verificationTitleString;
-(NSString *)verificationBodyString;
-(BOOL)shouldDisabledVerificationButton;
-(NSString *)continueVerificationButtonTitle;
-(NSString *)alternateMethodButtonTitle;
-(void)selectOtherVerificationMethod;
-(void)submitVerificationCode:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setVerificationContext:(long long)arg1 ;
@end
