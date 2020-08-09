//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MTTVGenericSettingsViewController.h"

#import "MTPodcastInfoViewDelegate-Protocol.h"
#import "UIPopoverPresentationControllerDelegate-Protocol.h"

@class MTDefaultsChangeNotifier, MTOptionSetting, MTRadioGroupDescription, MTSetting, MTSettingsGroup, NSString;
@protocol MTShowSettingsViewControllerDelegate;

@interface MTShowSettingsViewController : MTTVGenericSettingsViewController <MTPodcastInfoViewDelegate, UIPopoverPresentationControllerDelegate>
{
    _Bool _descriptionViewIsExpanded;	// 8 = 0x8
    id <MTShowSettingsViewControllerDelegate> _delegate;	// 16 = 0x10
    NSString *_uuid;	// 24 = 0x18
    MTSettingsGroup *_showSettingsGroup;	// 32 = 0x20
    MTSetting *_subscribedSetting;	// 40 = 0x28
    MTSettingsGroup *_presetSettingsGroup;	// 48 = 0x30
    MTOptionSetting *_showTypeSetting;	// 56 = 0x38
    MTRadioGroupDescription *_showTypeRadioGroup;	// 64 = 0x40
    MTSettingsGroup *_customSettingsGroup;	// 72 = 0x48
    MTSetting *_episodeOrderSetting;	// 80 = 0x50
    MTOptionSetting *_deletePlayedEpisodesSetting;	// 88 = 0x58
    MTOptionSetting *_episodesToKeepSetting;	// 96 = 0x60
    MTOptionSetting *_refreshIntervalSetting;	// 104 = 0x68
    MTSettingsGroup *_timelySettingsGroup;	// 112 = 0x70
    MTRadioGroupDescription *_episodeLimitRadioGroup;	// 120 = 0x78
    MTDefaultsChangeNotifier *_defaultsNotifier;	// 128 = 0x80
}

+ (void)promptToTurnOnRemovePlayedEpisodesForPodcast:(id)arg1 presentingViewController:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000d3ee0
- (void).cxx_destruct;	// IMP=0x00000001000d5f84
@property(retain, nonatomic) MTDefaultsChangeNotifier *defaultsNotifier; // @synthesize defaultsNotifier=_defaultsNotifier;
@property(retain, nonatomic) MTRadioGroupDescription *episodeLimitRadioGroup; // @synthesize episodeLimitRadioGroup=_episodeLimitRadioGroup;
@property(retain, nonatomic) MTSettingsGroup *timelySettingsGroup; // @synthesize timelySettingsGroup=_timelySettingsGroup;
@property(retain, nonatomic) MTOptionSetting *refreshIntervalSetting; // @synthesize refreshIntervalSetting=_refreshIntervalSetting;
@property(retain, nonatomic) MTOptionSetting *episodesToKeepSetting; // @synthesize episodesToKeepSetting=_episodesToKeepSetting;
@property(retain, nonatomic) MTOptionSetting *deletePlayedEpisodesSetting; // @synthesize deletePlayedEpisodesSetting=_deletePlayedEpisodesSetting;
@property(retain, nonatomic) MTSetting *episodeOrderSetting; // @synthesize episodeOrderSetting=_episodeOrderSetting;
@property(retain, nonatomic) MTSettingsGroup *customSettingsGroup; // @synthesize customSettingsGroup=_customSettingsGroup;
@property(retain, nonatomic) MTRadioGroupDescription *showTypeRadioGroup; // @synthesize showTypeRadioGroup=_showTypeRadioGroup;
@property(retain, nonatomic) MTOptionSetting *showTypeSetting; // @synthesize showTypeSetting=_showTypeSetting;
@property(retain, nonatomic) MTSettingsGroup *presetSettingsGroup; // @synthesize presetSettingsGroup=_presetSettingsGroup;
@property(retain, nonatomic) MTSetting *subscribedSetting; // @synthesize subscribedSetting=_subscribedSetting;
@property(retain, nonatomic) MTSettingsGroup *showSettingsGroup; // @synthesize showSettingsGroup=_showSettingsGroup;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(nonatomic) _Bool descriptionViewIsExpanded; // @synthesize descriptionViewIsExpanded=_descriptionViewIsExpanded;
@property(nonatomic) __weak id <MTShowSettingsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)syncControllerOperationCompleted:(id)arg1;	// IMP=0x00000001000d5ce4
- (_Bool)_hideGroupName:(id)arg1;	// IMP=0x00000001000d5b24
- (_Bool)_showGroup:(id)arg1 name:(id)arg2;	// IMP=0x00000001000d5938
- (_Bool)_isShowingGroup:(id)arg1;	// IMP=0x00000001000d5824
- (_Bool)isShowingTimelySettings;	// IMP=0x00000001000d5810
- (_Bool)hideTimleySettings;	// IMP=0x00000001000d57fc
- (_Bool)showTimleySettings;	// IMP=0x00000001000d579c
- (_Bool)isShowingCustomSettings;	// IMP=0x00000001000d5788
- (_Bool)hideCustomSettings;	// IMP=0x00000001000d5774
- (_Bool)showCustomSettings;	// IMP=0x00000001000d5714
- (_Bool)updateTimleySettingsVisibility;	// IMP=0x00000001000d56a0
- (_Bool)updateCustomSettingsVisibility;	// IMP=0x00000001000d562c
- (void)addPodcastInfoViewHeader;	// IMP=0x00000001000d5628
- (void)podcastInfoViewWasTapped:(id)arg1;	// IMP=0x00000001000d5618
- (void)podcastInfoViewDidExpand:(id)arg1;	// IMP=0x00000001000d558c
- (id)metricDataSource;	// IMP=0x00000001000d54d8
- (id)metricsName;	// IMP=0x00000001000d54cc
- (void)updateShowPresetSetting:(unsigned long long)arg1;	// IMP=0x00000001000d5260
- (void)updateIntervalSettingChanged:(unsigned long long)arg1;	// IMP=0x00000001000d510c
- (void)updateEpisodeOrder:(_Bool)arg1;	// IMP=0x00000001000d4f6c
- (void)updateNotifications:(_Bool)arg1;	// IMP=0x00000001000d4dd0
- (void)updateNotificationSettingsToMatchSubscription:(_Bool)arg1;	// IMP=0x00000001000d4dcc
- (void)updateSubscription:(_Bool)arg1;	// IMP=0x00000001000d4a88
- (void)updateDeletePlayedEpisodes:(long long)arg1;	// IMP=0x00000001000d48e0
- (void)updateEpisodeLimit:(long long)arg1;	// IMP=0x00000001000d3d44
- (id)updateIntervalOptionValues;	// IMP=0x00000001000d3b8c
- (id)updateIntervalOptionArray:(_Bool)arg1 defaultValue:(long long)arg2;	// IMP=0x00000001000d39c4
- (id)stringForUpdateInterval:(long long)arg1 short:(_Bool)arg2 defaultValue:(long long)arg3;	// IMP=0x00000001000d3728
- (id)optionsForDownloadEpisodes;	// IMP=0x00000001000d3188
- (id)deletePlayedText:(long long)arg1;	// IMP=0x00000001000d30e0
- (id)optionsForDeletePlayedEpisodes;	// IMP=0x00000001000d2c7c
- (id)optionsForLimitSetting;	// IMP=0x00000001000d25b8
- (id)optionsForRefreshInterval;	// IMP=0x00000001000d24bc
- (id)headerForOnThisDevice;	// IMP=0x00000001000d244c
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x00000001000d2440
- (id)footerTextForDefaultGloablSettings;	// IMP=0x00000001000d22c4
- (id)footerTextForShowType:(long long)arg1;	// IMP=0x00000001000d2174
- (void)refreshSettings;	// IMP=0x00000001000d15f8
- (id)settingsForCustomGroup;	// IMP=0x00000001000d14d0
- (id)settingsForEpisodesGroup;	// IMP=0x00000001000d1434
- (id)settingsForShowGroup;	// IMP=0x00000001000d1398
- (void)setupView;	// IMP=0x00000001000cf948
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00000001000cf824
- (void)viewDidLoad;	// IMP=0x00000001000cf7d4
- (void)dealloc;	// IMP=0x00000001000cf754
- (id)initWithPodcastUuid:(id)arg1 delegate:(id)arg2;	// IMP=0x00000001000cf6a8
- (id)initWithPodcastUuid:(id)arg1;	// IMP=0x00000001000cf698
- (id)init;	// IMP=0x00000001000cf658

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

