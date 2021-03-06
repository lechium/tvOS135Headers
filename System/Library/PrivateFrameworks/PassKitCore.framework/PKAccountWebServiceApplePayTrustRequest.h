/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:44 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKAccountWebServiceRequest.h>

@protocol PKAccountWebServiceApplePayTrustProtocol;
@class PKApplePayTrustSignature;

@interface PKAccountWebServiceApplePayTrustRequest : PKAccountWebServiceRequest {

	id<PKAccountWebServiceApplePayTrustProtocol> _protocol;
	PKApplePayTrustSignature* _signature;

}

@property (nonatomic,retain) PKApplePayTrustSignature * signature;              //@synthesize signature=_signature - In the implementation block
-(PKApplePayTrustSignature *)signature;
-(Class)responseClass;
-(void)setSignature:(PKApplePayTrustSignature *)arg1 ;
-(id)_urlRequestWithAppleAccountInformation:(id)arg1 ;
-(id)initWithApplePayTrustProtocol:(id)arg1 ;
-(id)endpointComponents;
@end

