//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MCNewPayloadHandler.h"

@interface MCNewAPNPayloadHandler : MCNewPayloadHandler
{
}

- (void)didRemoveOldGlobalRestrictions:(id)arg1 newGlobalRestrictions:(id)arg2;	// IMP=0x00000001000492e8
- (void)didInstallOldGlobalRestrictions:(id)arg1 newGlobalRestrictions:(id)arg2;	// IMP=0x00000001000492dc
- (void)_sendNotifications;	// IMP=0x00000001000491fc
- (void)migrateDefaults;	// IMP=0x00000001000490d4
- (void)unsetAside;	// IMP=0x0000000100049060
- (void)setAside;	// IMP=0x0000000100048fec
- (void)remove;	// IMP=0x0000000100048f30
- (void)_remove;	// IMP=0x0000000100048e64
- (_Bool)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;	// IMP=0x0000000100048af8
- (_Bool)_install;	// IMP=0x0000000100048a48
- (void)_notifyCoreTelephonyOfAPNChange;	// IMP=0x0000000100048954

@end

