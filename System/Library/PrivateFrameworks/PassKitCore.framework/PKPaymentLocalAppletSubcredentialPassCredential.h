/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:48 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentCredential.h>

@class PKPaymentPass, PKAppletSubcredential;

@interface PKPaymentLocalAppletSubcredentialPassCredential : PKPaymentCredential {

	PKPaymentPass* _paymentPass;
	PKAppletSubcredential* _credentialToShare;

}

@property (nonatomic,readonly) PKPaymentPass * paymentPass;                            //@synthesize paymentPass=_paymentPass - In the implementation block
@property (nonatomic,readonly) PKAppletSubcredential * credentialToShare;              //@synthesize credentialToShare=_credentialToShare - In the implementation block
-(PKPaymentPass *)paymentPass;
-(id)initWithPaymentPass:(id)arg1 credentialToShare:(id)arg2 ;
-(PKAppletSubcredential *)credentialToShare;
@end

