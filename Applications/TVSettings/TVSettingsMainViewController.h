//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVSettingKit/TSKViewController.h>

@class TSKBundleLoader, TVSettingsFollowUpFacade;

@interface TVSettingsMainViewController : TSKViewController
{
    TSKBundleLoader *_developerBundleLoader;	// 8 = 0x8
    TVSettingsFollowUpFacade *_followUpFacade;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100031808
@property(retain, nonatomic) TVSettingsFollowUpFacade *followUpFacade; // @synthesize followUpFacade=_followUpFacade;
@property(retain, nonatomic) TSKBundleLoader *developerBundleLoader; // @synthesize developerBundleLoader=_developerBundleLoader;
- (id)_supervisionDescription;	// IMP=0x000000010003150c
- (void)_updateDeveloperBundleLoader;	// IMP=0x00000001000313dc
- (id)_airPlayViewController;	// IMP=0x000000010003125c
- (void)_sleepNow:(id)arg1;	// IMP=0x0000000100031208
- (id)loadSettingGroups;	// IMP=0x0000000100030240
- (id)title;	// IMP=0x00000001000301d0
- (void)dealloc;	// IMP=0x0000000100030178
- (id)initWithStyle:(long long)arg1;	// IMP=0x00000001000300c8

@end

