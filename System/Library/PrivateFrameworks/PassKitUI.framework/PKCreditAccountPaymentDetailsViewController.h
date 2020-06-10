/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:47 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PKSectionTableViewController.h>

@protocol PKCreditAccountPaymentDetailsViewControllerDelegate;
@class PKAccount, NSDate, PKAccountPayment, PKPaymentWebService, NSDictionary, NSNumberFormatter, NSDateFormatter, PKFooterHyperlinkView;

@interface PKCreditAccountPaymentDetailsViewController : PKSectionTableViewController {

	PKAccount* _account;
	NSDate* _paymentDueDate;
	unsigned long long _featureIdentifier;
	PKAccountPayment* _payment;
	PKPaymentWebService* _paymentWebService;
	long long _detailViewStyle;
	NSDictionary* _recurringDetailsRowMap;
	NSNumberFormatter* _currencyFormatter;
	NSNumberFormatter* _localizedDayNumberFormatter;
	NSDateFormatter* _productDateFormatter;
	NSDateFormatter* _productDayFormatter;
	NSDateFormatter* _localTimeFormatter;
	NSDateFormatter* _localCancellationDateFormatter;
	NSDateFormatter* _productPaymentMonthFormatter;
	NSDateFormatter* _productPaymentDateFormatter;
	BOOL _cancellingPayment;
	BOOL _showStatusSection;
	BOOL _showUpcomingPaymentSection;
	BOOL _paymentAmountPending;
	BOOL _isFailedRecurringPayment;
	PKFooterHyperlinkView* _hyperlinkFooterView;
	id<PKCreditAccountPaymentDetailsViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PKCreditAccountPaymentDetailsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<PKCreditAccountPaymentDetailsViewControllerDelegate>)delegate;
-(void)setDelegate:(id<PKCreditAccountPaymentDetailsViewControllerDelegate>)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)_cancelButtonPressed:(id)arg1 ;
-(BOOL)shouldMapSection:(unsigned long long)arg1 ;
-(void)_reportEventForPassIfNecessary:(id)arg1 ;
-(void)_computeRecurringDetailsRowMap;
-(id)_reuseIdentifierForSection:(unsigned long long)arg1 ;
-(BOOL)_showRecurringDetailsAmount;
-(BOOL)_showRecurringDay;
-(long long)_recurringPaymentDetailsRowTypeForRowAtIndex:(long long)arg1 ;
-(id)_cancellationDateForPayment;
-(id)_hyperlinkFooterView;
-(long long)_numberOfRecurringPaymentDetailsRows;
-(id)_tableView:(id)arg1 paymentDetailsCellForPaymentDetailsRowAtIndexPath:(id)arg2 ;
-(id)_tableView:(id)arg1 recurringPaymentDetailsCellForPaymentDetailsRowAtIndexPath:(id)arg2 ;
-(id)_tableView:(id)arg1 recurringPaymentUpcomingPaymentCellForPaymentDetailsRowAtIndexPath:(id)arg2 ;
-(id)_tableView:(id)arg1 recurringPaymentStatusCellForRowAtIndexPath:(id)arg2 ;
-(id)_cancelPaymentCellForTableView:(id)arg1 ;
-(void)_applyDetailViewStylingToCell:(id)arg1 ;
-(id)_stringForPaymentPreset;
-(id)_stringForPaymentFrequency;
-(id)_modifyPaymentCellForTableView:(id)arg1 ;
-(id)_paymentAmountToDisplay;
-(void)_configureDismissCell:(id)arg1 ;
-(void)_cancelPaymentSelected:(unsigned long long)arg1 ;
-(void)_modifyPaymentSelected;
-(void)_cancelPayment:(unsigned long long)arg1 ;
-(void)_configureDeletePaymentCell:(id)arg1 ;
-(void)_configureLinkCell:(id)arg1 ;
-(id)initWithAccount:(id)arg1 payment:(id)arg2 paymentWebService:(id)arg3 detailViewStyle:(long long)arg4 ;
@end
