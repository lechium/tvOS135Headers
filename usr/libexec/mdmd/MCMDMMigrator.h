//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MCMDMMigrator : NSObject
{
}

+ (id)sharedMigrator;	// IMP=0x0000000100005778
- (void)_updateUnlockTokenSecretToClassDIfNeeded;	// IMP=0x0000000100006a90
- (void)_updateSkipBackupKeyForNonStoreBooksDirectory;	// IMP=0x00000001000068b8
- (void)_updateNonStoreBooksManifestForSystemGroupContainer;	// IMP=0x0000000100006298
- (void)_moveNonStoreManagedBooksToSystemGroupContainerFromLegacyPath:(id)arg1;	// IMP=0x0000000100005b00
- (void)_moveNonStoreManagedBooksToSystemGroupContainer;	// IMP=0x0000000100005abc
- (void)migrateMDMWithContext:(int)arg1;	// IMP=0x0000000100005804

@end

