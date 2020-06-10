//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PallasResponseVerifier : NSObject
{
    double _issuanceDate;	// 8 = 0x8
    struct __SecKey *_leafPublicKey;	// 16 = 0x10
    const struct __CFString *_keyAlg;	// 24 = 0x18
}

@property(readonly) const struct __CFString *keyAlg; // @synthesize keyAlg=_keyAlg;
@property(readonly) struct __SecKey *leafPublicKey; // @synthesize leafPublicKey=_leafPublicKey;
@property(readonly) double issuanceDate; // @synthesize issuanceDate=_issuanceDate;
- (_Bool)verifyResponse:(id)arg1 signature:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100006d94
- (_Bool)verifyCerts:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100006a70
- (_Bool)determineAlg:(id)arg1;	// IMP=0x00000001000069f0
- (id)init;	// IMP=0x00000001000069b4

@end

