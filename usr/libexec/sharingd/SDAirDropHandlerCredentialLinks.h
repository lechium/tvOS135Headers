//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SDAirDropHandler.h"

@class SFSharablePassword;

__attribute__((visibility("hidden")))
@interface SDAirDropHandlerCredentialLinks : SDAirDropHandler
{
    SFSharablePassword *_credential;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001000dd8a0
- (void)updatePossibleActions;	// IMP=0x00000001000dd608
- (long long)transferTypes;	// IMP=0x00000001000dd5d0
- (id)suitableContentsDescription;	// IMP=0x00000001000dd424
- (void)handleAction;	// IMP=0x00000001000dd38c
- (_Bool)canHandleTransfer;	// IMP=0x00000001000dd248

@end

