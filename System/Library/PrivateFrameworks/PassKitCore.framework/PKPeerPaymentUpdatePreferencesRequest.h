/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:56 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPeerPaymentWebServiceRequest.h>

@class PKPeerPaymentPreferences;

@interface PKPeerPaymentUpdatePreferencesRequest : PKPeerPaymentWebServiceRequest {

	PKPeerPaymentPreferences* _peerPaymentPreferences;

}

@property (nonatomic,retain) PKPeerPaymentPreferences * peerPaymentPreferences;              //@synthesize peerPaymentPreferences=_peerPaymentPreferences - In the implementation block
-(id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2 ;
-(PKPeerPaymentPreferences *)peerPaymentPreferences;
-(id)initWithPeerPaymentPreferences:(id)arg1 ;
-(void)setPeerPaymentPreferences:(PKPeerPaymentPreferences *)arg1 ;
@end

