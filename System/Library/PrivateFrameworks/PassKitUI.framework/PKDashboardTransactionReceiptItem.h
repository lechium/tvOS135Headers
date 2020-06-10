/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:43 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PKDashboardItem.h>

@class PKTransactionReceipt, PKPaymentTransaction, PKPaymentPass, PKAccount, NSString;

@interface PKDashboardTransactionReceiptItem : NSObject <PKDashboardItem> {

	PKTransactionReceipt* _receipt;
	PKPaymentTransaction* _transaction;
	PKPaymentPass* _paymentPass;
	PKAccount* _account;

}

@property (nonatomic,retain) PKTransactionReceipt * receipt;                  //@synthesize receipt=_receipt - In the implementation block
@property (nonatomic,retain) PKPaymentTransaction * transaction;              //@synthesize transaction=_transaction - In the implementation block
@property (nonatomic,retain) PKPaymentPass * paymentPass;                     //@synthesize paymentPass=_paymentPass - In the implementation block
@property (nonatomic,retain) PKAccount * account;                             //@synthesize account=_account - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PKPaymentTransaction *)transaction;
-(void)setTransaction:(PKPaymentTransaction *)arg1 ;
-(PKAccount *)account;
-(void)setAccount:(PKAccount *)arg1 ;
-(PKTransactionReceipt *)receipt;
-(void)setReceipt:(PKTransactionReceipt *)arg1 ;
-(PKPaymentPass *)paymentPass;
-(void)setPaymentPass:(PKPaymentPass *)arg1 ;
@end

