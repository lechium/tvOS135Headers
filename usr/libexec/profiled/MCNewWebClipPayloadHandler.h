//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MCNewPayloadHandler.h"

@class UIWebClip;

@interface MCNewWebClipPayloadHandler : MCNewPayloadHandler
{
    UIWebClip *_setAsideClip;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100031ad0
- (void)unsetAside;	// IMP=0x0000000100031a0c
- (void)setAside;	// IMP=0x00000001000318a4
- (_Bool)isInstalled;	// IMP=0x00000001000317b4
- (void)remove;	// IMP=0x0000000100031628
- (id)_findInstalledClipWithIdentifier:(id)arg1;	// IMP=0x000000010003148c
- (_Bool)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;	// IMP=0x0000000100030f3c
- (id)savedWebClipIdentifier;	// IMP=0x0000000100030e58

@end

