//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSSet, NSString, NSURL;

@interface MIBundle : NSObject
{
    unsigned char _bundleType;	// 8 = 0x8
    NSDictionary *_infoPlistSubset;	// 16 = 0x10
    NSURL *_bundleParentDirectoryURL;	// 24 = 0x18
    NSString *_parentBundleID;	// 32 = 0x20
    NSString *_bundleName;	// 40 = 0x28
    NSString *_bundleParentSubdirectory;	// 48 = 0x30
    MIBundle *_parentBundle;	// 56 = 0x38
    NSArray *_pluginKitBundles;	// 64 = 0x40
    NSArray *_frameworkBundles;	// 72 = 0x48
    NSArray *_xpcServiceBundles;	// 80 = 0x50
}

+ (id)bundleForURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000010002927c
+ (_Bool)bundleIsBlacklisted:(id)arg1;	// IMP=0x00000001000287a4
+ (id)bundlesInParentBundle:(id)arg1 subDirectory:(id)arg2 matchingPredicate:(CDUnknownBlockType)arg3 error:(id *)arg4;	// IMP=0x0000000100026710
+ (id)_URLOfFirstBundleInDirectory:(id)arg1 withExtension:(id)arg2 error:(id *)arg3;	// IMP=0x00000001000256c4
- (void).cxx_destruct;	// IMP=0x000000010002ae54
@property(retain, nonatomic) NSArray *xpcServiceBundles; // @synthesize xpcServiceBundles=_xpcServiceBundles;
@property(retain, nonatomic) NSArray *frameworkBundles; // @synthesize frameworkBundles=_frameworkBundles;
@property(retain, nonatomic) NSArray *pluginKitBundles; // @synthesize pluginKitBundles=_pluginKitBundles;
@property(readonly, nonatomic) __weak MIBundle *parentBundle; // @synthesize parentBundle=_parentBundle;
@property(readonly, copy, nonatomic) NSString *bundleParentSubdirectory; // @synthesize bundleParentSubdirectory=_bundleParentSubdirectory;
@property(readonly, copy, nonatomic) NSString *bundleName; // @synthesize bundleName=_bundleName;
@property(readonly, copy, nonatomic) NSString *parentBundleID; // @synthesize parentBundleID=_parentBundleID;
- (_Bool)sdkBuildVersionIsAtLeast:(id)arg1;	// IMP=0x000000010002ad50
@property(readonly, copy, nonatomic) NSString *sdkBuildVersion;
- (_Bool)validateAppMetadataWithError:(id *)arg1;	// IMP=0x000000010002a990
@property(readonly, nonatomic) NSSet *siriIntents;
- (id)description;	// IMP=0x000000010002a61c
- (_Bool)thinningMatchesCurrentDeviceWithError:(id *)arg1;	// IMP=0x000000010002a140
@property(readonly, copy, nonatomic) NSArray *supportedDevices;
- (_Bool)isApplicableToCurrentDeviceCapabilitiesWithError:(id *)arg1;	// IMP=0x0000000100029ddc
- (_Bool)isApplicableToOSVersion:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100029c08
- (_Bool)isApplicableToCurrentOSVersionWithError:(id *)arg1;	// IMP=0x0000000100029b24
- (_Bool)isApplicableToCurrentDeviceFamilyWithError:(id *)arg1;	// IMP=0x000000010002978c
- (_Bool)isCompatibleWithDeviceFamily:(int)arg1;	// IMP=0x000000010002962c
@property(readonly, nonatomic) _Bool isLaunchProhibited;
@property(readonly, nonatomic) _Bool isWatchApp;
@property(readonly, copy, nonatomic) NSArray *deviceFamilies;
@property(readonly, copy, nonatomic) NSString *minimumOSVersion;
@property(readonly, nonatomic) _Bool needsDataContainer;
@property(readonly, nonatomic) NSURL *bundleURL;
@property(retain, nonatomic) NSURL *bundleParentDirectoryURL; // @synthesize bundleParentDirectoryURL=_bundleParentDirectoryURL;
- (id)xpcServiceBundlesWithError:(id *)arg1;	// IMP=0x0000000100028bfc
- (id)frameworkBundlesWithError:(id *)arg1;	// IMP=0x0000000100028a04
- (_Bool)validatePluginMetadataWithError:(id *)arg1;	// IMP=0x00000001000273d0
- (id)pluginKitBundlesWithError:(id *)arg1;	// IMP=0x00000001000273bc
- (id)pluginKitBundlesSkippingPlatformValidation:(_Bool)arg1 withError:(id *)arg2;	// IMP=0x0000000100026c50
@property(readonly, nonatomic) _Bool isPlaceholder;
@property(readonly, copy, nonatomic) NSString *bundleTypeDescription;
@property(readonly, nonatomic) unsigned char bundleType; // @synthesize bundleType=_bundleType;
@property(readonly, nonatomic) _Bool isRemovableSystemApp;
@property(readonly, copy, nonatomic) NSString *identifier;
@property(readonly, copy, nonatomic) NSDictionary *infoPlistSubset; // @synthesize infoPlistSubset=_infoPlistSubset;
- (id)_infoPlistKeysToLoad;	// IMP=0x0000000100025a68
- (id)initWithBundleInDirectory:(id)arg1 withExtension:(id)arg2 error:(id *)arg3;	// IMP=0x000000010002599c
- (id)initWithBundleURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100025610
- (id)initWithParentBundle:(id)arg1 parentSubdirectory:(id)arg2 bundleName:(id)arg3 error:(id *)arg4;	// IMP=0x00000001000254bc
- (id)initWithBundleParentURL:(id)arg1 parentSubdirectory:(id)arg2 bundleName:(id)arg3 error:(id *)arg4;	// IMP=0x00000001000253ac
- (_Bool)_validateWithError:(id *)arg1;	// IMP=0x0000000100024f98
- (id)_extraInfoPlistLogging;	// IMP=0x00000001000247f4

@end

