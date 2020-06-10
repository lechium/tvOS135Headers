//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MIContainer.h"

@class MIBundleMetadata, MIExecutableBundle;

@interface MIBundleContainer : MIContainer
{
    MIExecutableBundle *_bundle;	// 8 = 0x8
    MIBundleMetadata *_bundleMetadata;	// 16 = 0x10
}

+ (_Bool)updateiTunesMetadataForAppWithIdentifier:(id)arg1 plistData:(id)arg2 error:(id *)arg3;	// IMP=0x000000010005ba0c
+ (id)updateSinfDataForAppWithIdentifier:(id)arg1 sinfData:(id)arg2 error:(id *)arg3;	// IMP=0x000000010005b5bc
+ (id)allVPNPluginBundleContainersWithError:(id *)arg1;	// IMP=0x000000010005b58c
+ (id)allAppBundleContainersWithError:(id *)arg1;	// IMP=0x000000010005b55c
+ (id)tempPluginKitPluginBundleContainerWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x000000010005b548
+ (id)tempVPNPluginBundleContainerWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x000000010005b534
+ (id)tempAppBundleContainerWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x000000010005b520
+ (id)pluginKitPluginBundleContainerWithIdentifier:(id)arg1 createIfNeeded:(_Bool)arg2 created:(_Bool *)arg3 error:(id *)arg4;	// IMP=0x000000010005b504
+ (id)vpnPluginBundleContainerWithIdentifier:(id)arg1 createIfNeeded:(_Bool)arg2 created:(_Bool *)arg3 error:(id *)arg4;	// IMP=0x000000010005b4e8
+ (id)appBundleContainerWithIdentifier:(id)arg1 createIfNeeded:(_Bool)arg2 created:(_Bool *)arg3 error:(id *)arg4;	// IMP=0x000000010005b4cc
- (void).cxx_destruct;	// IMP=0x000000010005c840
@property(copy, nonatomic) MIBundleMetadata *bundleMetadata; // @synthesize bundleMetadata=_bundleMetadata;
@property(readonly, nonatomic) MIExecutableBundle *bundle; // @synthesize bundle=_bundle;
@property(readonly, nonatomic) unsigned int bundleMaxLinkedSDKVersion;
- (_Bool)makeContainerLiveReplacingContainer:(id)arg1 reason:(unsigned long long)arg2 waitForDeletion:(_Bool)arg3 withError:(id *)arg4;	// IMP=0x000000010005c4bc
- (_Bool)captureBundleByMoving:(id)arg1 withError:(id *)arg2;	// IMP=0x000000010005c180
- (_Bool)saveBundleMetadataWithError:(id *)arg1;	// IMP=0x000000010005c088
- (id)bundleMetadataWithError:(id *)arg1;	// IMP=0x000000010005bee8
- (id)_bundleMetadataURL;	// IMP=0x000000010005be88
- (id)initWithContainer:(id)arg1;	// IMP=0x000000010005bc74

@end

