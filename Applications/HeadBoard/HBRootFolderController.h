//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "HBAppInfoControllerDelegate-Protocol.h"
#import "HBFolderObserver-Protocol.h"
#import "HBRootFolderProvider-Protocol.h"

@class HBAppInfoController, HBFolder, NSString, NSURL, PBSAppInfoConfiguration;
@protocol OS_dispatch_source;

@interface HBRootFolderController : NSObject <HBFolderObserver, HBAppInfoControllerDelegate, HBRootFolderProvider>
{
    int _backgroundStateNotificationToken;	// 8 = 0x8
    _Bool _storeDemoMode;	// 12 = 0xc
    HBFolder *_rootFolder;	// 16 = 0x10
    HBAppInfoController *_appInfoController;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_reloadSource;	// 32 = 0x20
    NSObject<OS_dispatch_source> *_saveSource;	// 40 = 0x28
    NSObject<OS_dispatch_source> *_prepareFolderIconCacheSource;	// 48 = 0x30
    NSURL *_appOrderURL;	// 56 = 0x38
    PBSAppInfoConfiguration *_configuration;	// 64 = 0x40
    NSURL *_storeDemoModeAppOrderURL;	// 72 = 0x48
}

+ (_Bool)_hasRestrictedLayout;	// IMP=0x00000001000a3194
+ (id)_emptyFolder;	// IMP=0x00000001000a23ac
+ (id)_provisionedBundleIdentifiersFromDefaultAppOrder;	// IMP=0x00000001000a1cc4
+ (id)_provisionedBundleIdentifiers;	// IMP=0x00000001000a1bf8
+ (id)_folderWithContentsOfURL:(id)arg1;	// IMP=0x00000001000a1668
+ (id)_rawFolderWithContentsOfURL:(id)arg1;	// IMP=0x00000001000a1588
+ (id)_userAppOrderURL;	// IMP=0x00000001000a13c0
+ (id)_bundleAppOrderURL;	// IMP=0x00000001000a12a0
+ (void)_writeAppOrderFilesIfNeeded;	// IMP=0x00000001000a11f4
+ (void)_removeAppOrderFilesIfNeeded;	// IMP=0x00000001000a1124
+ (id)_folderWithItunesRepresentation:(id)arg1;	// IMP=0x00000001000a1074
+ (void)initialize;	// IMP=0x00000001000a05f4
- (void).cxx_destruct;	// IMP=0x00000001000a3cec
@property(copy, nonatomic, getter=_storeDemoModeAppOrderURL, setter=_setStoreDemoModeAppOrderURL:) NSURL *storeDemoModeAppOrderURL; // @synthesize storeDemoModeAppOrderURL=_storeDemoModeAppOrderURL;
@property(nonatomic, getter=_isStoreDemoMode, setter=_setStoreDemoMode:) _Bool storeDemoMode; // @synthesize storeDemoMode=_storeDemoMode;
@property(retain, nonatomic, getter=_configuration, setter=_setConfiguration:) PBSAppInfoConfiguration *configuration; // @synthesize configuration=_configuration;
@property(copy, nonatomic, getter=_appOrderURL, setter=_setAppOrderURL:) NSURL *appOrderURL; // @synthesize appOrderURL=_appOrderURL;
@property(readonly, nonatomic, getter=_prepareFolderIconCacheSource) NSObject<OS_dispatch_source> *prepareFolderIconCacheSource; // @synthesize prepareFolderIconCacheSource=_prepareFolderIconCacheSource;
@property(readonly, nonatomic, getter=_saveSource) NSObject<OS_dispatch_source> *saveSource; // @synthesize saveSource=_saveSource;
@property(readonly, nonatomic, getter=_reloadSource) NSObject<OS_dispatch_source> *reloadSource; // @synthesize reloadSource=_reloadSource;
@property(readonly, nonatomic, getter=_appInfoController) HBAppInfoController *appInfoController; // @synthesize appInfoController=_appInfoController;
@property(readonly, nonatomic) HBFolder *rootFolder; // @synthesize rootFolder=_rootFolder;
- (void)itemsDidChange:(id)arg1;	// IMP=0x00000001000a3c88
- (void)folderChangeNeedsSaving:(id)arg1;	// IMP=0x00000001000a3c7c
- (void)appInfoController:(id)arg1 didUpdateConfiguration:(id)arg2;	// IMP=0x00000001000a3bdc
- (void)appInfoController:(id)arg1 didUpdateAlternateAppIconsForAppInfos:(id)arg2;	// IMP=0x00000001000a3b3c
- (void)appInfoController:(id)arg1 didRemoveAppInfos:(id)arg2;	// IMP=0x00000001000a38dc
- (void)appInfoController:(id)arg1 didAddAppInfos:(id)arg2;	// IMP=0x00000001000a3784
- (void)_setNeedsPrepareFolderIconCache;	// IMP=0x00000001000a36e8
- (void)_prepareFolderIconCache;	// IMP=0x00000001000a34ec
- (id)_makeStoreDemoModeFolder;	// IMP=0x00000001000a33d0
- (id)_makeManagedModeFolder;	// IMP=0x00000001000a3314
- (void)_didAddAppInfos:(id)arg1;	// IMP=0x00000001000a2e38
- (void)_addAppInfosToRootFolder:(id)arg1;	// IMP=0x00000001000a2aa0
- (void)_updateRootFolderWithCurrentAppInfos;	// IMP=0x00000001000a2684
- (void)_save;	// IMP=0x00000001000a2490
- (void)_setNeedsSave;	// IMP=0x00000001000a23f4
- (void)_updateStoreDemoMode;	// IMP=0x00000001000a22c8
- (void)_setNeedsReload;	// IMP=0x00000001000a2178
- (void)_reload;	// IMP=0x00000001000a1eac
- (void)_mergeRootFolderInPlaceWithFolder:(id)arg1;	// IMP=0x00000001000a1a98
- (void)_reloadRootFolderFromFolder:(id)arg1;	// IMP=0x00000001000a16d4
- (void)_modelSerializationDidSerialize:(id)arg1;	// IMP=0x00000001000a0e3c
- (void)_applicationDidBecomeActive;	// IMP=0x00000001000a0dbc
- (void)dealloc;	// IMP=0x00000001000a0cb8
- (id)init;	// IMP=0x00000001000a064c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

