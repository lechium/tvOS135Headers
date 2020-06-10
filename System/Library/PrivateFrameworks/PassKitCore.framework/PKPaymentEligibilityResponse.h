/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:56 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSString, NSURL;

@interface PKPaymentEligibilityResponse : PKPaymentWebServiceResponse {

	NSString* _identifier;
	long long _eligibilityStatus;
	long long _cardType;
	NSURL* _termsURL;
	NSString* _termsID;
	NSString* _applicationIdentifier;
	NSString* _region;
	NSString* _nonce;
	NSURL* _learnMoreURL;

}

@property (nonatomic,copy,readonly) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) long long eligibilityStatus;                        //@synthesize eligibilityStatus=_eligibilityStatus - In the implementation block
@property (nonatomic,readonly) long long cardType;                                 //@synthesize cardType=_cardType - In the implementation block
@property (nonatomic,copy,readonly) NSURL * termsURL;                              //@synthesize termsURL=_termsURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * termsID;                            //@synthesize termsID=_termsID - In the implementation block
@property (nonatomic,copy,readonly) NSString * applicationIdentifier;              //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * region;                             //@synthesize region=_region - In the implementation block
@property (nonatomic,copy,readonly) NSString * nonce;                              //@synthesize nonce=_nonce - In the implementation block
@property (nonatomic,copy,readonly) NSURL * learnMoreURL;                          //@synthesize learnMoreURL=_learnMoreURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithData:(id)arg1 ;
-(NSString *)identifier;
-(NSString *)nonce;
-(NSString *)applicationIdentifier;
-(NSString *)region;
-(long long)eligibilityStatus;
-(long long)cardType;
-(NSURL *)termsURL;
-(NSString *)termsID;
-(NSURL *)learnMoreURL;
@end
