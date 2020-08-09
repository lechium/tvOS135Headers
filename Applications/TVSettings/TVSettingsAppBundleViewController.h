//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVSettingKit/TSKViewController.h>

@class NSBundle, NSString, TSKPreviewViewController;

@interface TVSettingsAppBundleViewController : TSKViewController
{
    TSKPreviewViewController *_appPreviewViewController;	// 8 = 0x8
    _Bool _root;	// 16 = 0x10
    NSBundle *_settingsBundle;	// 24 = 0x18
    NSString *_bundleID;	// 32 = 0x20
    NSString *_containerPath;	// 40 = 0x28
    NSString *_plistName;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000100024254
@property(nonatomic, getter=isRoot) _Bool root; // @synthesize root=_root;
@property(copy, nonatomic) NSString *plistName; // @synthesize plistName=_plistName;
@property(copy, nonatomic) NSString *containerPath; // @synthesize containerPath=_containerPath;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(retain, nonatomic) NSBundle *settingsBundle; // @synthesize settingsBundle=_settingsBundle;
- (id)previewForItemAtIndexPath:(id)arg1;	// IMP=0x00000001000240c0
- (id)loadSettingGroups;	// IMP=0x00000001000225c0

@end
