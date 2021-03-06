//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVSettingKit/TSKViewController.h>

@class NSArray, TVPAudioRoute, TVPAudioRoutingController;

@interface TVSettingsAudioRouteViewController : TSKViewController
{
    TVPAudioRoutingController *_routingController;	// 8 = 0x8
    TVPAudioRoute *_recentlySelectedRoute;	// 16 = 0x10
    NSArray *_routes;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001000a1ab4
- (id)_identifierForRoute:(id)arg1;	// IMP=0x00000001000a1994
- (void)_selectRoute:(id)arg1;	// IMP=0x00000001000a192c
- (id)indexPathForPreferredFocusedViewInTableView:(id)arg1;	// IMP=0x00000001000a163c
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000001000a1444
- (id)loadSettingGroups;	// IMP=0x00000001000a1070
- (void)viewDidLoad;	// IMP=0x00000001000a0fbc
- (id)initWithStyle:(long long)arg1;	// IMP=0x00000001000a0f3c

@end

