//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVSettingKit/TSKViewController.h>

@class TSKPreviewViewController;

@interface TVSettingsLanguageViewController : TSKViewController
{
    TSKPreviewViewController *_languagePreviewViewController;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100089360
@property(readonly, nonatomic) TSKPreviewViewController *languagePreviewViewController; // @synthesize languagePreviewViewController=_languagePreviewViewController;
- (id)_localizedLanguageFormatter;	// IMP=0x00000001000892a0
- (id)_languageFormatter;	// IMP=0x00000001000891cc
- (void)_warnAboutSiriInLanguage:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000010008850c
- (void)setLanguage:(id)arg1;	// IMP=0x0000000100087df8
- (id)previewForItemAtIndexPath:(id)arg1;	// IMP=0x0000000100087cb8
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100087b4c
- (void)viewDidLoad;	// IMP=0x0000000100087a98
- (id)loadSettingGroups;	// IMP=0x00000001000876c8

@end

