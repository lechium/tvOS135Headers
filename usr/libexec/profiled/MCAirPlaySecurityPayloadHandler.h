//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MCNewPayloadHandler.h"

@interface MCAirPlaySecurityPayloadHandler : MCNewPayloadHandler
{
}

- (unsigned long long)_securityTypeForPayloadType:(id)arg1;	// IMP=0x000000010006cdb4
- (unsigned long long)_accessTypeForPayloadType:(id)arg1;	// IMP=0x000000010006cd40
- (void)_setAccessType:(id)arg1 securityType:(id)arg2 password:(id)arg3;	// IMP=0x000000010006cc38
- (void)_unsetAirPlaySecurityConfiguration;	// IMP=0x000000010006cbc4
- (void)_setAirPlaySecurityConfiguration;	// IMP=0x000000010006cab0
- (void)unsetAside;	// IMP=0x000000010006caa4
- (void)remove;	// IMP=0x000000010006ca30
- (void)setAside;	// IMP=0x000000010006ca24
- (_Bool)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;	// IMP=0x000000010006ca04

@end

