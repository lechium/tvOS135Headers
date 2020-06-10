/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:50 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PKContactlessCardIngesterDelegate.h>

@protocol PKPaymentSetupViewControllerDelegate;
@class PKReaderModeProvisioningView, UIScrollView, PKContactlessCardIngester, PKPaymentContactlessProductCredential, PKPaymentPass, NSString, NSMutableDictionary, NSTimer, UILabel, PKPasscodeUpgradeFlowController, PKPaymentProvisioningController, PKPaymentSetupFieldsModel, PKPaymentSetupProduct, PKPaymentWebService;

@interface PKPaymentReaderModeProvisioningViewController : UIViewController <PKContactlessCardIngesterDelegate> {

	PKReaderModeProvisioningView* _provisioningView;
	UIScrollView* _scrollView;
	unsigned long long _state;
	unsigned long long _stateOnRetry;
	BOOL _startedInitialIngestion;
	PKContactlessCardIngester* _cardIngester;
	PKPaymentContactlessProductCredential* _paymentCredential;
	PKPaymentPass* _paymentPass;
	NSString* _cardSessionToken;
	NSMutableDictionary* _durations;
	unsigned long long _startTime;
	id _currentNextActionBlock;
	NSTimer* _cardNotFoundTimer;
	UILabel* _debugStateLabel;
	NSString* _lastProvisioningStateName;
	BOOL _isGoodState;
	BOOL _idleTimerDisabled;
	PKPasscodeUpgradeFlowController* _passcodeUpgradeFlowController;
	PKPaymentProvisioningController* _provisioningController;
	long long _context;
	id<PKPaymentSetupViewControllerDelegate> _setupDelegate;
	PKPaymentSetupFieldsModel* _fieldsModel;
	PKPaymentSetupProduct* _product;
	PKPaymentWebService* _webService;

}

@property (nonatomic,readonly) PKPaymentProvisioningController * provisioningController;                 //@synthesize provisioningController=_provisioningController - In the implementation block
@property (assign,nonatomic) long long context;                                                          //@synthesize context=_context - In the implementation block
@property (assign,nonatomic,__weak) id<PKPaymentSetupViewControllerDelegate> setupDelegate;              //@synthesize setupDelegate=_setupDelegate - In the implementation block
@property (nonatomic,readonly) PKPaymentSetupFieldsModel * fieldsModel;                                  //@synthesize fieldsModel=_fieldsModel - In the implementation block
@property (nonatomic,readonly) PKPaymentSetupProduct * product;                                          //@synthesize product=_product - In the implementation block
@property (nonatomic,readonly) PKPaymentWebService * webService;                                         //@synthesize webService=_webService - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(long long)context;
-(void)setContext:(long long)arg1 ;
-(void)loadView;
-(PKPaymentSetupProduct *)product;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(PKPaymentProvisioningController *)provisioningController;
-(PKPaymentWebService *)webService;
-(void)acceptTerms;
-(id<PKPaymentSetupViewControllerDelegate>)setupDelegate;
-(PKPaymentSetupFieldsModel *)fieldsModel;
-(void)setSetupDelegate:(id<PKPaymentSetupViewControllerDelegate>)arg1 ;
-(id)newPaymentEligibilityRequest;
-(void)_performEligibilityWithCompletion:(/*^block*/id)arg1 ;
-(void)_performProvisionWithCompletion:(/*^block*/id)arg1 ;
-(void)_performFinishWithCompletion:(/*^block*/id)arg1 ;
-(void)showEligibilityIssueWithReason:(long long)arg1 learnMoreURL:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)newPaymentProvisioningRequest;
-(void)showProvisioningError:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)performNextActionForProvisioningState:(long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)initWithProvisioningController:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3 fieldsModel:(id)arg4 product:(id)arg5 ;
-(void)_done:(id)arg1 ;
-(void)_setIdleTimerDisabled:(BOOL)arg1 ;
-(void)handleNextActionWithCompletion:(/*^block*/id)arg1 ;
-(void)_startIngestion;
-(void)_tearDownCardIngester;
-(void)_removePassIfNecessary;
-(void)_updateDebugStateLabel:(id)arg1 isGoodState:(BOOL)arg2 ;
-(void)_updateDebugStateLabel:(id)arg1 isGoodState:(BOOL)arg2 showTiming:(BOOL)arg3 ;
-(void)_hideBackButton:(BOOL)arg1 ;
-(void)_invalidateCardNotFoundTimer;
-(void)_resetProvisioningState;
-(void)_updateToUIState:(unsigned long long)arg1 ;
-(void)showReaderModeError:(id)arg1 isRecoverable:(BOOL)arg2 ;
-(void)_startCardNotFoundTimer;
-(void)cardNotFoundTimerFired:(id)arg1 ;
-(void)_setupCardIngester;
-(void)_startReadingCard;
-(void)_startTransferringCard;
-(void)_startAppletProvisioning;
-(void)contactlessCardIngester:(id)arg1 didFailToIngestCardWithError:(id)arg2 resetProvisioning:(BOOL)arg3 isRecoverable:(BOOL)arg4 ;
-(void)_triggerNextActionLoop;
-(void)_logAndAggDDurations;
-(void)_performPasscodeUpgradeIfNeededWithCompletion:(/*^block*/id)arg1 ;
-(void)_showError:(id)arg1 retry:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)contactlessCardIngester:(id)arg1 didUpdateCardIngestionStatus:(unsigned long long)arg2 ;
@end

