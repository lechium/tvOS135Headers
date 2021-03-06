//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCListenerDelegate-Protocol.h"
#import "SWCDownloaderDelegate-Protocol.h"
#import "SWCXPCServer-Protocol.h"

@class NSString, NSXPCListener, SWCDatabase, SWCDownloadScheduler, SWCDownloader;

@interface SWCManager : NSObject <NSXPCListenerDelegate, SWCDownloaderDelegate, SWCXPCServer>
{
    NSXPCListener *_xpcListener;	// 8 = 0x8
    SWCDatabase *_database;	// 16 = 0x10
    SWCDownloader *_downloader;	// 24 = 0x18
    SWCDownloadScheduler *_downloadScheduler;	// 32 = 0x20
}

+ (id)beginListening;	// IMP=0x0000000100028d54
+ (id)new;	// IMP=0x0000000100028d48
+ (id)_log;	// IMP=0x000000010002b020
- (void).cxx_destruct;	// IMP=0x000000010002650c
@property(readonly) SWCDownloadScheduler *downloadScheduler; // @synthesize downloadScheduler=_downloadScheduler;
@property(readonly) SWCDownloader *downloader; // @synthesize downloader=_downloader;
@property(readonly) SWCDatabase *database; // @synthesize database=_database;
- (void)removeSettingsForKeys:(id)arg1 serviceSpecifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100026118
- (void)removeSettingsForKeys:(id)arg1 serviceType:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100025d80
- (void)commitServiceSettings:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000257d0
- (void)getServiceSettingsWithServiceSpecifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100025490
- (void)resetWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000251e4
- (void)showWithVerbosity:(unsigned char)arg1 isTTY:(_Bool)arg2 fileDescriptor:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100024584
- (void)addAllAppsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100024454
- (void)setFlags:(unsigned int)arg1 mask:(unsigned int)arg2 forServiceWithServiceSpecifier:(id)arg3 createIfNeeded:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000100023c48
- (void)setDetails:(id)arg1 forServiceWithServiceSpecifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100023598
- (void)removeServiceWithServiceSpecifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100022f20
- (void)addServiceWithServiceSpecifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100022908
- (void)getDetailsWithServiceSpecifier:(id)arg1 URL:(id)arg2 limit:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100022670
- (void)getInfoWithServiceSpecifier:(id)arg1 URL:(id)arg2 limit:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000010002235c
- (void)waitForSiteApprovalWithServiceSpecifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100022284
- (void)checkServiceWithServiceSpecifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000221ac
- (void)downloader:(id)arg1 failedToDownloadAASAFileFromDomain:(id)arg2 error:(id)arg3;	// IMP=0x00000001000220a4
- (void)downloader:(id)arg1 didDownloadAASAFileContainingJSONObject:(id)arg2 fromDomain:(id)arg3;	// IMP=0x0000000100021f9c
- (void)downloader:(id)arg1 willDownloadAASAFileFromDomain:(id)arg2;	// IMP=0x0000000100021ecc
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0000000100021b70
- (void)updateEntriesForAllBundles;	// IMP=0x00000001000215cc
- (id)init;	// IMP=0x000000010002159c
- (id)initWithDatabase:(id)arg1;	// IMP=0x0000000100021494
- (_Bool)_connectionMayConnect:(id)arg1;	// IMP=0x000000010002a978
- (_Bool)_connectionIsEntitled:(id)arg1 forMutation:(_Bool)arg2;	// IMP=0x000000010002a5f8
- (void)_waitForSiteApprovalWithServiceSpecifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100029ccc
- (id)_serviceDetailsWithEntry:(id)arg1;	// IMP=0x0000000100029c04
- (id)_entriesWithServiceSpecifier:(id)arg1 URL:(id)arg2 limit:(unsigned long long)arg3;	// IMP=0x00000001000299c8
- (void)_updateAllEntries:(id)arg1;	// IMP=0x00000001000291d4
- (void)_addEntriesForAllBundlesWithEnumerator:(id)arg1 toWorkingSet:(id)arg2 enterpriseContext:(id)arg3;	// IMP=0x0000000100028fb4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

