/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:03 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSError, AMSPaymentSheetMetricsEvent, NSString, AMSBiometricsSignatureResult;

@interface _PaymentSheetState : NSObject {

	BOOL _didAuthorizePayment;
	BOOL _didBiometricLockout;
	BOOL _didPresent;
	NSError* _error;
	AMSPaymentSheetMetricsEvent* _event;
	NSString* _passwordEquivalentToken;
	NSString* _paymentToken;
	AMSBiometricsSignatureResult* _signatureResult;

}

@property (nonatomic,retain) NSError * error;                                             //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) BOOL didAuthorizePayment;                                    //@synthesize didAuthorizePayment=_didAuthorizePayment - In the implementation block
@property (assign,nonatomic) BOOL didBiometricLockout;                                    //@synthesize didBiometricLockout=_didBiometricLockout - In the implementation block
@property (assign,nonatomic) BOOL didPresent;                                             //@synthesize didPresent=_didPresent - In the implementation block
@property (nonatomic,retain) AMSPaymentSheetMetricsEvent * event;                         //@synthesize event=_event - In the implementation block
@property (nonatomic,retain) NSString * passwordEquivalentToken;                          //@synthesize passwordEquivalentToken=_passwordEquivalentToken - In the implementation block
@property (nonatomic,retain) NSString * paymentToken;                                     //@synthesize paymentToken=_paymentToken - In the implementation block
@property (nonatomic,retain) AMSBiometricsSignatureResult * signatureResult;              //@synthesize signatureResult=_signatureResult - In the implementation block
-(id)init;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(NSString *)passwordEquivalentToken;
-(void)setPasswordEquivalentToken:(NSString *)arg1 ;
-(AMSPaymentSheetMetricsEvent *)event;
-(void)setEvent:(AMSPaymentSheetMetricsEvent *)arg1 ;
-(BOOL)didPresent;
-(NSString *)paymentToken;
-(void)setDidPresent:(BOOL)arg1 ;
-(void)setPaymentToken:(NSString *)arg1 ;
-(AMSBiometricsSignatureResult *)signatureResult;
-(void)setSignatureResult:(AMSBiometricsSignatureResult *)arg1 ;
-(BOOL)didAuthorizePayment;
-(void)setDidAuthorizePayment:(BOOL)arg1 ;
-(BOOL)didBiometricLockout;
-(void)setDidBiometricLockout:(BOOL)arg1 ;
@end

