//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSTimer;

@interface TVSettingsAppsFacade : NSObject
{
    unsigned long long _knockCount;	// 8 = 0x8
    _Bool _needsUpdate;	// 16 = 0x10
    NSArray *_installedThirdPartyApps;	// 24 = 0x18
    NSArray *_installedSystemApps;	// 32 = 0x20
    NSArray *_provisionedThirdPartyApps;	// 40 = 0x28
    NSArray *_provisionedSystemApps;	// 48 = 0x30
    NSTimer *_knockTimer;	// 56 = 0x38
}

+ (id)_allowedSystemApps;	// IMP=0x000000010009d6d0
+ (_Bool)isAppEnabledForBundleID:(id)arg1;	// IMP=0x000000010009d630
+ (_Bool)userAccessSettingsNeededForBundleID:(id)arg1;	// IMP=0x000000010009d570
+ (_Bool)bluetoothPrivacySettingsNeededForBundleID:(id)arg1;	// IMP=0x000000010009d4dc
+ (_Bool)photosSettingsNeededForBundleID:(id)arg1;	// IMP=0x000000010009d448
+ (_Bool)MSOSettingsNeededForBundleID:(id)arg1;	// IMP=0x000000010009d3b4
+ (_Bool)homeKitSettingsNeededForBundleID:(id)arg1;	// IMP=0x000000010009d320
+ (_Bool)backgroundAppRefreshSettingsNeededForBundleID:(id)arg1;	// IMP=0x000000010009d28c
+ (_Bool)notificationSettingsNeededForBundleID:(id)arg1;	// IMP=0x000000010009d1f8
+ (_Bool)locationSettingsNeededForBundleID:(id)arg1;	// IMP=0x000000010009d154
+ (_Bool)settingsNeededForBundleID:(id)arg1;	// IMP=0x000000010009cfa8
- (void).cxx_destruct;	// IMP=0x000000010009e718
@property(retain, nonatomic) NSTimer *knockTimer; // @synthesize knockTimer=_knockTimer;
@property(nonatomic) _Bool needsUpdate; // @synthesize needsUpdate=_needsUpdate;
@property(copy, nonatomic) NSArray *provisionedSystemApps; // @synthesize provisionedSystemApps=_provisionedSystemApps;
@property(copy, nonatomic) NSArray *provisionedThirdPartyApps; // @synthesize provisionedThirdPartyApps=_provisionedThirdPartyApps;
@property(copy, nonatomic) NSArray *installedSystemApps; // @synthesize installedSystemApps=_installedSystemApps;
@property(copy, nonatomic) NSArray *installedThirdPartyApps; // @synthesize installedThirdPartyApps=_installedThirdPartyApps;
- (void)_updateProvisionedApps;	// IMP=0x000000010009e2f4
- (void)_appDepotDidChange:(id)arg1;	// IMP=0x000000010009e2e8
- (void)_updateAppsCoalesced;	// IMP=0x000000010009e1e4
- (void)_updateApps;	// IMP=0x000000010009de74
- (void)_trySomeStuffWithURLString:(id)arg1;	// IMP=0x000000010009dc7c
- (void)_cancelKnockTimer:(id)arg1;	// IMP=0x000000010009dc4c
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000010009db40
- (void)knockForEntry;	// IMP=0x000000010009d760
- (void)dealloc;	// IMP=0x000000010009cce8
- (id)init;	// IMP=0x000000010009c980

@end

