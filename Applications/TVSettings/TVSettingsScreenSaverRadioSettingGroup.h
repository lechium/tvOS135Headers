//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVSettingKit/TSKRadioSettingGroup.h>

@protocol TVSettingsScreenSaverRadioSettingGroupDelegate;

@interface TVSettingsScreenSaverRadioSettingGroup : TSKRadioSettingGroup
{
    id <TVSettingsScreenSaverRadioSettingGroupDelegate> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010001caa0
@property(nonatomic) __weak id <TVSettingsScreenSaverRadioSettingGroupDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_itemSelected:(id)arg1;	// IMP=0x000000010001c9c8

@end
