//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MCNewCertificatePayloadHandler.h"

@interface MCNewWAPIIdentityCertificatePayloadHandler : MCNewCertificatePayloadHandler
{
}

- (void)remove;	// IMP=0x000000010006c210
- (void)unsetAside;	// IMP=0x000000010006c170
- (void)setAside;	// IMP=0x000000010006c05c
- (_Bool)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;	// IMP=0x000000010006bce8
- (_Bool)_storePEMDataInKeychain:(id)arg1 UUID:(id)arg2 outError:(id *)arg3;	// IMP=0x000000010006ba14
- (id)_cannotStoreCertificateError;	// IMP=0x000000010006b934
- (id)_cannotStorePEMDataError;	// IMP=0x000000010006b854
- (id)_malformedCertificateError;	// IMP=0x000000010006b774

@end

