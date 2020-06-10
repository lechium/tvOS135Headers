/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:48 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentCredential.h>

@class NSString, PKServiceProviderPurchase, PKCurrencyAmount, PKPaymentSetupProduct, NSArray;

@interface PKPaymentDigitalIssuanceProductCredential : PKPaymentCredential {

	NSString* _productIdentifier;
	PKServiceProviderPurchase* _purchase;
	PKCurrencyAmount* _balance;
	PKPaymentSetupProduct* _product;

}

@property (nonatomic,retain) PKPaymentSetupProduct * product;                   //@synthesize product=_product - In the implementation block
@property (nonatomic,copy) NSString * productIdentifier;                        //@synthesize productIdentifier=_productIdentifier - In the implementation block
@property (nonatomic,retain) PKServiceProviderPurchase * purchase;              //@synthesize purchase=_purchase - In the implementation block
@property (nonatomic,copy) PKCurrencyAmount * balance;                          //@synthesize balance=_balance - In the implementation block
@property (nonatomic,copy,readonly) NSArray * metadata; 
-(NSArray *)metadata;
-(PKCurrencyAmount *)balance;
-(void)setBalance:(PKCurrencyAmount *)arg1 ;
-(void)setPurchase:(PKServiceProviderPurchase *)arg1 ;
-(PKServiceProviderPurchase *)purchase;
-(void)setProductIdentifier:(NSString *)arg1 ;
-(NSString *)productIdentifier;
-(PKPaymentSetupProduct *)product;
-(void)setProduct:(PKPaymentSetupProduct *)arg1 ;
-(void)setRequirementsResponse:(id)arg1 ;
-(id)initWithPaymentSetupProduct:(id)arg1 purchase:(id)arg2 balance:(id)arg3 ;
@end

