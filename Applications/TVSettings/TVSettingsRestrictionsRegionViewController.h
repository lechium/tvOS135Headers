//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVSettingKit/TSKViewController.h>

@class NSArray;

@interface TVSettingsRestrictionsRegionViewController : TSKViewController
{
    NSArray *_filteredSectionIndexTitles;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100032294
@property(copy, nonatomic) NSArray *filteredSectionIndexTitles; // @synthesize filteredSectionIndexTitles=_filteredSectionIndexTitles;
- (id)_contentFilterRegionFormatter;	// IMP=0x00000001000321b8
- (void)setCountryCode:(id)arg1;	// IMP=0x00000001000320e8
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;	// IMP=0x00000001000320e0
- (id)sectionIndexTitlesForTableView:(id)arg1;	// IMP=0x00000001000320d0
- (id)loadSettingGroups;	// IMP=0x0000000100031848

@end
