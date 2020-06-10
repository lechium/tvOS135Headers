/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:45 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData, PKSecureElementCertificateSet;

@interface PKWrappedPayment : NSObject <NSSecureCoding> {

	NSString* _transactionIdentifier;
	NSData* _transactionData;
	NSData* _transactionInstructionsSignature;
	PKSecureElementCertificateSet* _certificates;
	NSString* _merchantCountryCode;
	NSString* _kextBlacklistVersion;
	NSData* _enrollmentSignature;

}

@property (nonatomic,copy) NSString * transactionIdentifier;                          //@synthesize transactionIdentifier=_transactionIdentifier - In the implementation block
@property (nonatomic,copy) NSData * transactionData;                                  //@synthesize transactionData=_transactionData - In the implementation block
@property (nonatomic,copy) NSData * transactionInstructionsSignature;                 //@synthesize transactionInstructionsSignature=_transactionInstructionsSignature - In the implementation block
@property (nonatomic,copy) PKSecureElementCertificateSet * certificates;              //@synthesize certificates=_certificates - In the implementation block
@property (nonatomic,copy) NSString * merchantCountryCode;                            //@synthesize merchantCountryCode=_merchantCountryCode - In the implementation block
@property (nonatomic,copy) NSString * kextBlacklistVersion;                           //@synthesize kextBlacklistVersion=_kextBlacklistVersion - In the implementation block
@property (nonatomic,copy) NSData * enrollmentSignature;                              //@synthesize enrollmentSignature=_enrollmentSignature - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(PKSecureElementCertificateSet *)certificates;
-(NSString *)merchantCountryCode;
-(void)setMerchantCountryCode:(NSString *)arg1 ;
-(void)setTransactionIdentifier:(NSString *)arg1 ;
-(NSString *)transactionIdentifier;
-(void)setCertificates:(PKSecureElementCertificateSet *)arg1 ;
-(NSData *)transactionData;
-(void)setTransactionData:(NSData *)arg1 ;
-(void)setTransactionInstructionsSignature:(NSData *)arg1 ;
-(void)setKextBlacklistVersion:(NSString *)arg1 ;
-(void)setEnrollmentSignature:(NSData *)arg1 ;
-(NSData *)transactionInstructionsSignature;
-(NSString *)kextBlacklistVersion;
-(NSData *)enrollmentSignature;
@end

