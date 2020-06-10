/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:42 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PKPaymentAuthorizationCoordinatorDelegate.h>
#import <libobjc.A.dylib/PKPaymentAuthorizationCoordinatorPrivateDelegate.h>

@protocol PKAccountAutomaticPaymentsControllerDelegate;
@class PKAccountService, PKPaymentWebService, PKAccount, NSCalendar, NSTimeZone, PKAccountWebServiceSchedulePaymentRequest, PKBankAccountInformation, NSArray, PKApplePayTrustSignatureRequest, NSError, NSDate, UIViewController, PKAccountAutomaticPaymentsHeroViewController, PKAccountAutomaticPaymentsPresetViewController, PKAccountAutomaticPaymentsDateViewController, PKAccountAutomaticPaymentsConfigurationViewController, PKAccountAutomaticPaymentsSetupCompleteViewController, PKAccountAutomaticPaymentsMinimumPaymentDisclosureViewController, PKPaymentAuthorizationCoordinator, PKCurrencyAmount, NSString;

@interface PKAccountAutomaticPaymentsController : NSObject <PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate> {

	PKAccountService* _accountService;
	PKPaymentWebService* _paymentWebService;
	PKAccount* _account;
	NSCalendar* _productCalendar;
	NSTimeZone* _productTimeZone;
	PKAccountWebServiceSchedulePaymentRequest* _schedulePaymentRequest;
	PKBankAccountInformation* _bankInformation;
	NSArray* _fundingSources;
	PKApplePayTrustSignatureRequest* _applePayTrustSignatureRequest;
	NSError* _performScheduleAutomaticPaymentsError;
	NSDate* _paymentDate;
	UIViewController* _viewPaymentController;
	PKAccountAutomaticPaymentsHeroViewController* _heroViewController;
	PKAccountAutomaticPaymentsPresetViewController* _presetViewController;
	PKAccountAutomaticPaymentsDateViewController* _dateViewController;
	PKAccountAutomaticPaymentsConfigurationViewController* _configurationViewController;
	PKAccountAutomaticPaymentsSetupCompleteViewController* _setupCompleteViewController;
	PKAccountAutomaticPaymentsMinimumPaymentDisclosureViewController* _minimumPaymentDisclosureViewController;
	/*^block*/id _performScheduleAutomaticPaymentsCompletion;
	PKPaymentAuthorizationCoordinator* _paymentAuthorizationCoordinator;
	BOOL _authorized;
	unsigned long long _featureIdentifier;
	long long _paymentSetupContext;
	long long _paymentFrequency;
	long long _scheduledDay;
	long long _paymentPreset;
	PKCurrencyAmount* _amount;
	NSArray* _automaticPayments;
	id<PKAccountAutomaticPaymentsControllerDelegate> _delegate;

}

@property (nonatomic,readonly) unsigned long long featureIdentifier;                                        //@synthesize featureIdentifier=_featureIdentifier - In the implementation block
@property (nonatomic,readonly) long long paymentSetupContext;                                               //@synthesize paymentSetupContext=_paymentSetupContext - In the implementation block
@property (nonatomic,readonly) PKAccount * account;                                                         //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) NSDate * paymentDate;                                                          //@synthesize paymentDate=_paymentDate - In the implementation block
@property (assign,nonatomic) long long paymentFrequency;                                                    //@synthesize paymentFrequency=_paymentFrequency - In the implementation block
@property (assign,nonatomic) long long scheduledDay;                                                        //@synthesize scheduledDay=_scheduledDay - In the implementation block
@property (assign,nonatomic) long long paymentPreset;                                                       //@synthesize paymentPreset=_paymentPreset - In the implementation block
@property (nonatomic,retain) PKCurrencyAmount * amount;                                                     //@synthesize amount=_amount - In the implementation block
@property (nonatomic,retain) NSArray * fundingSources;                                                      //@synthesize fundingSources=_fundingSources - In the implementation block
@property (nonatomic,retain) NSArray * automaticPayments;                                                   //@synthesize automaticPayments=_automaticPayments - In the implementation block
@property (assign,nonatomic,__weak) id<PKAccountAutomaticPaymentsControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<PKAccountAutomaticPaymentsControllerDelegate>)delegate;
-(void)setDelegate:(id<PKAccountAutomaticPaymentsControllerDelegate>)arg1 ;
-(PKCurrencyAmount *)amount;
-(void)setAmount:(PKCurrencyAmount *)arg1 ;
-(unsigned long long)featureIdentifier;
-(PKAccount *)account;
-(NSDate *)paymentDate;
-(void)setPaymentDate:(NSDate *)arg1 ;
-(NSArray *)fundingSources;
-(void)setFundingSources:(NSArray *)arg1 ;
-(void)_performApplePayTrustSignatureRequestWithSignature:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_paymentSummaryItems;
-(id)_bankAccountsForFundingSources:(id)arg1 ;
-(void)setPaymentFrequency:(long long)arg1 ;
-(void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizePayment:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)paymentAuthorizationCoordinatorDidFinish:(id)arg1 ;
-(void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizeApplePayTrustSignature:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)paymentAuthorizationCoordinator:(id)arg1 didUpdateAccountServicePaymentMethod:(id)arg2 handler:(/*^block*/id)arg3 ;
-(id)_schedulePaymentRequest;
-(id)_paymentRequest;
-(long long)paymentFrequency;
-(void)preflightWithCompletion:(/*^block*/id)arg1 ;
-(long long)scheduledDay;
-(void)setScheduledDay:(long long)arg1 ;
-(long long)paymentSetupContext;
-(long long)paymentPreset;
-(void)_resetPaymentConfiguration;
-(void)_performPaymentRequest:(id)arg1 ;
-(void)presentNextViewControllerFromViewController:(id)arg1 ;
-(void)performScheduleAutomaticPayments:(/*^block*/id)arg1 ;
-(void)nextViewControllerFromViewController:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)initWithAccountService:(id)arg1 paymentWebService:(id)arg2 account:(id)arg3 context:(long long)arg4 ;
-(id)alertControllerForScheduledDate:(id)arg1 ;
-(long long)minimumPaymentDayForPreset:(long long)arg1 ;
-(BOOL)canPerformScheduleAutomaticPaymentsWithPreset:(long long)arg1 frequency:(long long)arg2 amount:(id)arg3 paymentDate:(id)arg4 ;
-(void)performScheduleAutomaticPaymentsFromViewController:(id)arg1 ;
-(void)setPaymentPreset:(long long)arg1 ;
-(NSArray *)automaticPayments;
-(void)setAutomaticPayments:(NSArray *)arg1 ;
@end

