//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface TVSettingsCertificateTrustFacade : NSObject
{
    NSArray *_trustCertificates;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00000001000383ac
- (void).cxx_destruct;	// IMP=0x00000001000387a4
@property(copy, nonatomic) NSArray *trustCertificates; // @synthesize trustCertificates=_trustCertificates;
- (id)_displayNameForCertificate:(struct __SecCertificate *)arg1;	// IMP=0x000000010003872c
- (void)_updateCertificates;	// IMP=0x00000001000384f8
- (id)init;	// IMP=0x0000000100038448

@end
