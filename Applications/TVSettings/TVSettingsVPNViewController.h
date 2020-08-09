//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVSettingKit/TSKViewController.h>

@interface TVSettingsVPNViewController : TSKViewController
{
    _Bool _loadingProfile;	// 8 = 0x8
    unsigned long long _configurationCheckState;	// 16 = 0x10
}

@property(nonatomic) _Bool loadingProfile; // @synthesize loadingProfile=_loadingProfile;
@property(nonatomic) unsigned long long configurationCheckState; // @synthesize configurationCheckState=_configurationCheckState;
- (void)_warnAboutVPNOnInternalNetwork;	// IMP=0x000000010002ab8c
- (void)_warnAboutMissingAppleConnectCredentials;	// IMP=0x000000010002a9e4
- (void)_checkVPNConfiguration;	// IMP=0x000000010002a578
- (void)_VPNProfileLoaded:(id)arg1 error:(id)arg2;	// IMP=0x0000000100029f94
- (void)_loadVPNProfile;	// IMP=0x0000000100029b40
- (void)_updateCheckVPNItem:(id)arg1;	// IMP=0x00000001000297f0
- (void)_updateLoadVPNItem:(id)arg1;	// IMP=0x0000000100029424
- (id)loadSettingGroups;	// IMP=0x0000000100028f44
- (void)viewDidLoad;	// IMP=0x0000000100028ee0

@end
