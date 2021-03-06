//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MDM/MCMDMParser.h>

@class MCIPCUTunnelParser;

@interface MCChaperoneParser : MCMDMParser
{
    MCIPCUTunnelParser *_iPCUParser;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010000c73c
- (void)commandProceedWithKeybagMigrationRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010000c674
- (void)waitUntilKeybagRollingHasBeenPerformedCompletionBlock:(CDUnknownBlockType)arg1 timeRemaining:(double)arg2;	// IMP=0x000000010000bfac
- (_Bool)isKeybagRollingNeeded;	// IMP=0x000000010000bdd4
- (void)commandSetDefaultMDMOptionsRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010000bcd8
- (void)commandDefaultMDMOptionsCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010000bc18
- (id)_clearPasscode:(id)arg1;	// IMP=0x000000010000bac8
- (id)_requestUnlockToken:(id)arg1;	// IMP=0x000000010000b948
- (id)_removeProfile:(id)arg1;	// IMP=0x000000010000b72c
- (id)_profileList:(id)arg1;	// IMP=0x000000010000b71c
- (id)_removeApplication:(id)arg1;	// IMP=0x000000010000b6fc
- (id)_managedApplicationList:(id)arg1;	// IMP=0x000000010000b6dc
- (id)_applyRedemptionCode:(id)arg1;	// IMP=0x000000010000b6bc
- (void)_installApplication:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010000b5bc
- (unsigned long long)_profileInstallationStyleForRequest:(id)arg1;	// IMP=0x000000010000b554
- (id)_allCommands;	// IMP=0x000000010000b0f0
- (void)_processRequest:(id)arg1 accessRights:(int)arg2 assertion:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000010000ad74
- (void)processRequest:(id)arg1 assertion:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000010000ad04
- (id)init;	// IMP=0x000000010000ac80

@end

