//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CCDCertificateSupport : NSObject
{
}

+ (id)decodeCertificateFromBase64String:(id)arg1;	// IMP=0x000000010000b9bc
+ (id)base64Encodedx509CertificateStringFromCertificate:(id)arg1;	// IMP=0x000000010000b930
+ (_Bool)verifySignature:(id)arg1 payload:(id)arg2 clientCertificate:(id)arg3;	// IMP=0x000000010000b6a8

@end

