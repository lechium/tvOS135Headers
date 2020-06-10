//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MSDHubTrustEvaluate : NSObject
{
    NSString *_hubCertificateIdentifier;	// 8 = 0x8
}

+ (id)getTrustObject;	// IMP=0x0000000100002fb8
- (void).cxx_destruct;	// IMP=0x00000001000043d4
@property(retain) NSString *hubCertificateIdentifier; // @synthesize hubCertificateIdentifier=_hubCertificateIdentifier;
- (_Bool)isHubCertificatePinnedTo:(struct __SecCertificate *)arg1 applePKI:(_Bool)arg2;	// IMP=0x0000000100004334
- (_Bool)saveHubCertificateIdentifer:(struct __SecCertificate *)arg1 applePKI:(_Bool)arg2;	// IMP=0x0000000100004288
- (id)identifierFor:(struct __SecCertificate *)arg1 applePKI:(_Bool)arg2;	// IMP=0x0000000100003f50
- (id)hashForCertificate:(struct __SecCertificate *)arg1;	// IMP=0x0000000100003e04
- (_Bool)trustServer:(struct __SecTrust *)arg1 withRootCA:(struct __SecCertificate *)arg2 withHostName:(id)arg3;	// IMP=0x0000000100003af8
- (_Bool)trustServerWithAxinoePKI:(struct __SecTrust *)arg1;	// IMP=0x0000000100003924
- (_Bool)trustServerWithApplePKI:(struct __SecTrust *)arg1;	// IMP=0x000000010000364c
- (_Bool)trustDAServer:(struct __SecTrust *)arg1;	// IMP=0x0000000100003350
- (_Bool)trustServer:(struct __SecTrust *)arg1 forRequestType:(_Bool)arg2 typeOfCommand:(unsigned long long)arg3;	// IMP=0x0000000100002fd4

@end
