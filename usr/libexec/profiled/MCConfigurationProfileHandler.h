//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MCProfileHandler.h"

@class MCProfileServiceProfileHandler;

@interface MCConfigurationProfileHandler : MCProfileHandler
{
    MCProfileServiceProfileHandler *_OTAHandler;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000100018c7c
- (void)removeWithInstaller:(id)arg1 options:(id)arg2;	// IMP=0x0000000100018bdc
- (void)unsetAside;	// IMP=0x0000000100018b80
- (void)setAsideWithInstaller:(id)arg1;	// IMP=0x0000000100018b00
- (void)didInstallOldGlobalRestrictions:(id)arg1 newGlobalRestrictions:(id)arg2;	// IMP=0x0000000100018a64
- (_Bool)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;	// IMP=0x0000000100018918
- (id)initWithProfile:(id)arg1;	// IMP=0x0000000100018858

@end

