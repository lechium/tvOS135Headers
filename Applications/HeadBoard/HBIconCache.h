//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBSAppInfoControllerObserver-Protocol.h"
#import "PBSMigrationHandling-Protocol.h"

@class HBIconCacheDebounceTimer, HBIconCacheSynchronizedSet, NSString;
@protocol OS_dispatch_queue;

@interface HBIconCache : NSObject <PBSAppInfoControllerObserver, PBSMigrationHandling>
{
    NSObject<OS_dispatch_queue> *_writeSerialQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_preheatQueue;	// 16 = 0x10
    HBIconCacheDebounceTimer *_preheatDebounceTimer;	// 24 = 0x18
    HBIconCacheSynchronizedSet *_pendingItems;	// 32 = 0x20
}

+ (unsigned long long)migrateWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100007bb4
+ (id)_iconFileURLForFolder:(id)arg1;	// IMP=0x0000000100006fd8
+ (id)_folderIconCacheDirectoryURL;	// IMP=0x0000000100006e0c
+ (id)_appIconCacheDirectoryURL;	// IMP=0x0000000100006c40
+ (id)_iconFileURLForApplication:(id)arg1;	// IMP=0x000000010000699c
+ (id)_iconContainerURLForApplication:(id)arg1;	// IMP=0x00000001000068ac
+ (id)sharedInstance;	// IMP=0x0000000100004e70
- (void).cxx_destruct;	// IMP=0x0000000100007c7c
@property(readonly, nonatomic) HBIconCacheSynchronizedSet *pendingItems; // @synthesize pendingItems=_pendingItems;
@property(retain, nonatomic) HBIconCacheDebounceTimer *preheatDebounceTimer; // @synthesize preheatDebounceTimer=_preheatDebounceTimer;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *preheatQueue; // @synthesize preheatQueue=_preheatQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *writeSerialQueue; // @synthesize writeSerialQueue=_writeSerialQueue;
- (void)appInfoController:(id)arg1 didUpdate:(id)arg2;	// IMP=0x00000001000073bc
- (void)_writeIconFileForFolder:(id)arg1 toURL:(id)arg2;	// IMP=0x0000000100007090
- (void)_writeIconFileForApplication:(id)arg1 toURL:(id)arg2;	// IMP=0x0000000100006ab8
- (void)_prepareAppIconCache;	// IMP=0x00000001000061bc
- (id)flattenedIconForApplication:(id)arg1;	// IMP=0x0000000100006030
- (void)requestCacheForFolderItem:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100005bf4
- (void)prepareCacheForFolderItems:(id)arg1;	// IMP=0x0000000100005554
- (id)iconFileForFolderItem:(id)arg1;	// IMP=0x000000010000525c
- (id)iconFileForApplicationItem:(id)arg1;	// IMP=0x0000000100004ee8
- (id)_init;	// IMP=0x0000000100004a70

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

