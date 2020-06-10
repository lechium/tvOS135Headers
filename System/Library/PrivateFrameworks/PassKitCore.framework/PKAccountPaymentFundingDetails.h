/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:53 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface PKAccountPaymentFundingDetails : NSObject <NSSecureCoding> {

	NSData* _encryptedData;
	NSData* _publicKeyHash;

}
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)jsonDictionaryRepresentation;
-(id)jsonString;
-(id)hashComponentWithCertificatesResponse:(id)arg1 ;
-(id)jsonDictionaryRepresentationWithCertificatesResponse:(id)arg1 ;
-(id)_encryptedDataWithCertificatesResponse:(id)arg1 publicKeyHash:(id*)arg2 ;
-(id)fundingDetailsUnencryptedDictionary;
@end

