/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:01 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServices/AMSTask.h>
#import <libobjc.A.dylib/AMSBagConsumer.h>

@class NSString;

@interface AMSCardEnrollmentPaymentSessionTask : AMSTask <AMSBagConsumer>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bagSubProfile;
+(id)bagSubProfileVersion;
+(id)bagKeySet;
+(void)addRequiredBagKeysToAggregator:(id)arg1 ;
+(id)_bagKeySet;
+(id)performPaymentSessionEnrollment;
+(id)performPaymentSessionEnrollmentWithBag:(id)arg1 ;
+(void)paymentSessionWithCompletion:(/*^block*/id)arg1 ;
+(void)paymentSessionWithBag:(id)arg1 completion:(/*^block*/id)arg2 ;
+(id)_paymentServiceURLStringForMerchantURL:(id)arg1 ;
@end

