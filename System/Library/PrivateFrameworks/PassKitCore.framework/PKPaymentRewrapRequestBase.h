/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:51 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class PKPaymentPass, PKPaymentApplication, PKWrappedPayment, NSData, NSString;

@interface PKPaymentRewrapRequestBase : PKPaymentWebServiceRequest {

	PKPaymentPass* _pass;
	PKPaymentApplication* _paymentApplication;
	PKWrappedPayment* _wrappedPayment;
	NSData* _applicationData;

}

@property (nonatomic,readonly) NSString * endpointName; 
@property (nonatomic,retain) PKPaymentPass * pass;                                   //@synthesize pass=_pass - In the implementation block
@property (nonatomic,retain) PKPaymentApplication * paymentApplication;              //@synthesize paymentApplication=_paymentApplication - In the implementation block
@property (nonatomic,retain) PKWrappedPayment * wrappedPayment;                      //@synthesize wrappedPayment=_wrappedPayment - In the implementation block
@property (nonatomic,copy) NSData * applicationData;                                 //@synthesize applicationData=_applicationData - In the implementation block
-(id)bodyDictionary;
-(NSData *)applicationData;
-(void)setApplicationData:(NSData *)arg1 ;
-(PKPaymentPass *)pass;
-(void)setPass:(PKPaymentPass *)arg1 ;
-(PKPaymentApplication *)paymentApplication;
-(void)setPaymentApplication:(PKPaymentApplication *)arg1 ;
-(PKWrappedPayment *)wrappedPayment;
-(void)setWrappedPayment:(PKWrappedPayment *)arg1 ;
-(NSString *)endpointName;
-(id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 rewrapData:(id)arg3 appleAccountInformation:(id)arg4 ;
@end

