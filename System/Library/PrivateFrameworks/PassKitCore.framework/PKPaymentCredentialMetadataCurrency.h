/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:49 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentCredentialMetadata.h>

@class NSString;

@interface PKPaymentCredentialMetadataCurrency : PKPaymentCredentialMetadata {

	NSString* _currencyCode;

}

@property (nonatomic,copy,readonly) NSString * currencyCode;              //@synthesize currencyCode=_currencyCode - In the implementation block
-(NSString *)currencyCode;
-(id)initWithConfiguration:(id)arg1 ;
-(id)displayString;
@end
