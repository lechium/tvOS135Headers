/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:56 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface PKPaymentSetupProductModel : NSObject {

	NSMutableDictionary* _paymentSetupProducts;

}
-(id)init;
-(id)productsForFeatureIdentifier:(unsigned long long)arg1 ;
-(void)setPaymentSetupProducts:(id)arg1 forType:(unsigned long long)arg2 ;
-(void)addPaymentSetupProducts:(id)arg1 ;
-(id)setupProductsOfType:(unsigned long long)arg1 ;
-(void)setPaymentSetupProducts:(id)arg1 ;
-(id)allSetupProducts;
@end

