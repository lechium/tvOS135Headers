//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVSettingKit/TSKViewController.h>

@class TVSettingsSystemPairingsPairing;

@interface TVSettingsSystemPairingDetailViewController : TSKViewController
{
    TVSettingsSystemPairingsPairing *_device;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010003bbac
@property(retain, nonatomic) TVSettingsSystemPairingsPairing *device; // @synthesize device=_device;
- (void)unpairDevice:(id)arg1;	// IMP=0x000000010003b698
- (id)loadSettingGroups;	// IMP=0x000000010003b420

@end

