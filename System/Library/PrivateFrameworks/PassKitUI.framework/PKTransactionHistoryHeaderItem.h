/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:47 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PKDashboardItem.h>

@class PKMerchant, NSString, CNContact, PKPaymentTransactionGroup, PKInstallmentPlanProduct;

@interface PKTransactionHistoryHeaderItem : NSObject <PKDashboardItem> {

	unsigned long long _type;
	PKMerchant* _merchant;
	NSString* _peerPaymentCounterpartHandle;
	CNContact* _contact;
	PKPaymentTransactionGroup* _transactionGroup;
	long long _transactionType;
	PKInstallmentPlanProduct* _installmentProduct;

}

@property (nonatomic,readonly) unsigned long long type;                                  //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) PKMerchant * merchant;                                      //@synthesize merchant=_merchant - In the implementation block
@property (nonatomic,copy) NSString * peerPaymentCounterpartHandle;                      //@synthesize peerPaymentCounterpartHandle=_peerPaymentCounterpartHandle - In the implementation block
@property (nonatomic,retain) CNContact * contact;                                        //@synthesize contact=_contact - In the implementation block
@property (nonatomic,retain) PKPaymentTransactionGroup * transactionGroup;               //@synthesize transactionGroup=_transactionGroup - In the implementation block
@property (assign,nonatomic) long long transactionType;                                  //@synthesize transactionType=_transactionType - In the implementation block
@property (nonatomic,retain) PKInstallmentPlanProduct * installmentProduct;              //@synthesize installmentProduct=_installmentProduct - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)type;
-(id)initWithType:(unsigned long long)arg1 ;
-(long long)transactionType;
-(void)setTransactionType:(long long)arg1 ;
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(PKMerchant *)merchant;
-(void)setPeerPaymentCounterpartHandle:(NSString *)arg1 ;
-(void)setMerchant:(PKMerchant *)arg1 ;
-(NSString *)peerPaymentCounterpartHandle;
-(PKPaymentTransactionGroup *)transactionGroup;
-(void)setTransactionGroup:(PKPaymentTransactionGroup *)arg1 ;
-(PKInstallmentPlanProduct *)installmentProduct;
-(void)setInstallmentProduct:(PKInstallmentPlanProduct *)arg1 ;
@end

