//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBSOSUpdateServiceInterface-Protocol.h"

@class NSString, PBSOSUpdateManagerClient, PBSystemServiceConnection;
@protocol PBSOSUpdateServiceDelegate;

@interface PBOSUpdateService : NSObject <PBSOSUpdateServiceInterface>
{
    id <PBSOSUpdateServiceDelegate> _delegate;	// 8 = 0x8
    PBSOSUpdateManagerClient *_managerClientDelegate;	// 16 = 0x10
    PBSystemServiceConnection *_remoteConnection;	// 24 = 0x18
}

+ (void)_obliterateDataPreservingPaths:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000d24c0
- (void).cxx_destruct;	// IMP=0x00000001000d4898
@property(readonly, nonatomic) PBSystemServiceConnection *remoteConnection; // @synthesize remoteConnection=_remoteConnection;
- (void)didFinishApplyWithData:(id)arg1;	// IMP=0x00000001000d47dc
- (void)didEncounterSlowUpdateWithData:(id)arg1;	// IMP=0x00000001000d473c
- (void)didUpdateApplyProgressWithData:(id)arg1;	// IMP=0x00000001000d469c
- (void)didStartApplyWithData:(id)arg1;	// IMP=0x00000001000d45fc
- (void)didStartRedownloadWithData:(id)arg1;	// IMP=0x00000001000d455c
- (void)didFinishDownloadWithData:(id)arg1;	// IMP=0x00000001000d44bc
- (void)didUpdateDownloadProgressWithData:(id)arg1;	// IMP=0x00000001000d441c
- (void)didStartDownloadWithData:(id)arg1;	// IMP=0x00000001000d437c
- (void)didFinishCheckWithData:(id)arg1;	// IMP=0x00000001000d42dc
- (void)didStartCheckWithData:(id)arg1;	// IMP=0x00000001000d423c
- (void)obliterateDataPreservingPaths:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000d4198
- (void)purgeAssetsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000d405c
- (void)purgeableAssetSpaceWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000d3f20
- (void)cancelUpdate;	// IMP=0x00000001000d3e84
- (void)isUpdateRunningWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000d3d48
- (void)restore;	// IMP=0x00000001000d3cac
- (void)installUpdate:(id)arg1 withOptions:(id)arg2 withResult:(CDUnknownBlockType)arg3;	// IMP=0x00000001000d3aa8
- (void)isUpdate:(id)arg1 readyForInstallation:(CDUnknownBlockType)arg2;	// IMP=0x00000001000d3908
- (void)isDownloading:(CDUnknownBlockType)arg1;	// IMP=0x00000001000d37cc
- (void)setAssetDownloadIsDiscretionary:(_Bool)arg1;	// IMP=0x00000001000d36e0
- (void)currentDownload:(CDUnknownBlockType)arg1;	// IMP=0x00000001000d35a4
- (void)purgeDownload:(CDUnknownBlockType)arg1;	// IMP=0x00000001000d3468
- (void)cancelDownload:(CDUnknownBlockType)arg1;	// IMP=0x00000001000d332c
- (void)startDownload:(CDUnknownBlockType)arg1;	// IMP=0x00000001000d31f0
- (void)isCheckingForUpdates:(CDUnknownBlockType)arg1;	// IMP=0x00000001000d30b4
- (void)checkForUpdatesWithOptions:(id)arg1 response:(CDUnknownBlockType)arg2;	// IMP=0x00000001000d2f14
- (void)checkForUpdateViaMDM;	// IMP=0x00000001000d2e78
- (void)checkForUpdate;	// IMP=0x00000001000d2cf8
- (void)setManagerClientDelegate:(id)arg1;	// IMP=0x00000001000d2c94
- (void)setDelegate:(id)arg1;	// IMP=0x00000001000d2c3c
- (void)invalidate;	// IMP=0x00000001000d2c28
- (id)initWithRemoteConnection:(id)arg1;	// IMP=0x00000001000d2af4
- (id)init;	// IMP=0x00000001000d2ac0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
