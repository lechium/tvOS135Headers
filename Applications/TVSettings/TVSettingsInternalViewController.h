//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVSettingKit/TSKViewController.h>

@class NSMutableSet;

@interface TVSettingsInternalViewController : TSKViewController
{
    NSMutableSet *_loadedBundleNames;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010002fac0
@property(retain) NSMutableSet *loadedBundleNames; // @synthesize loadedBundleNames=_loadedBundleNames;
- (id)_loadSettingGroupWithBundlesInDirectory:(id)arg1;	// IMP=0x000000010002f5d4
- (id)loadSettingGroups;	// IMP=0x000000010002f4f4

@end

