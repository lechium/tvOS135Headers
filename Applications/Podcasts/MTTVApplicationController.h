//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVMLKit/TVApplicationController.h>

#import "MTAppController-Protocol.h"
#import "TVApplicationControllerDelegate-Protocol.h"
#import "TVInterfaceCreating-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "UITabBarControllerDelegate-Protocol.h"

@class MTTVListenNowViewController, MTTVPodcastPlaybackHostControllerViewController, MTTVPodcastsAndStationsViewController, NSString, UINavigationController, UITabBarController;
@protocol UITabBarControllerDelegate;

@interface MTTVApplicationController : TVApplicationController <TVApplicationControllerDelegate, TVInterfaceCreating, UINavigationControllerDelegate, UITabBarControllerDelegate, MTAppController>
{
    _Bool _tabBarLoaded;	// 8 = 0x8
    MTTVListenNowViewController *_listenNowViewController;	// 16 = 0x10
    UINavigationController *_podcastsNavigationController;	// 24 = 0x18
    MTTVPodcastsAndStationsViewController *_podcastsAndStationsViewController;	// 32 = 0x20
    MTTVPodcastPlaybackHostControllerViewController *_nowPlayingController;	// 40 = 0x28
    id <UITabBarControllerDelegate> _originalTabBarDelegate;	// 48 = 0x30
}

+ (id)alertControllerForError:(long long)arg1;	// IMP=0x000000010013d384
- (void).cxx_destruct;	// IMP=0x000000010013d7bc
@property(nonatomic) __weak id <UITabBarControllerDelegate> originalTabBarDelegate; // @synthesize originalTabBarDelegate=_originalTabBarDelegate;
@property(retain, nonatomic) MTTVPodcastPlaybackHostControllerViewController *nowPlayingController; // @synthesize nowPlayingController=_nowPlayingController;
@property(retain, nonatomic) MTTVPodcastsAndStationsViewController *podcastsAndStationsViewController; // @synthesize podcastsAndStationsViewController=_podcastsAndStationsViewController;
@property(retain, nonatomic) UINavigationController *podcastsNavigationController; // @synthesize podcastsNavigationController=_podcastsNavigationController;
@property(retain, nonatomic) MTTVListenNowViewController *listenNowViewController; // @synthesize listenNowViewController=_listenNowViewController;
@property(nonatomic, getter=isTabBarLoaded) _Bool tabBarLoaded; // @synthesize tabBarLoaded=_tabBarLoaded;
- (void)tabBarController:(id)arg1 didSelectViewController:(id)arg2;	// IMP=0x000000010013d250
- (_Bool)tabBarController:(id)arg1 shouldSelectViewController:(id)arg2;	// IMP=0x000000010013d170
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x000000010013d164
- (void)appController:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;	// IMP=0x000000010013d098
- (void)appController:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x000000010013cf84
- (void)appContext:(id)arg1 evaluateAppJavaScriptInContext:(id)arg2;	// IMP=0x000000010013ce88
- (void)updateUnplayedBadgeCount;	// IMP=0x000000010013ce84
- (void)presentPodcast:(id)arg1 episode:(id)arg2 episodeNotAvailable:(_Bool)arg3 podcastTab:(unsigned long long)arg4 startPlayback:(_Bool)arg5 animated:(_Bool)arg6;	// IMP=0x000000010013ca30
- (void)presentPodcast:(id)arg1 episode:(id)arg2 podcastTab:(unsigned long long)arg3 startPlayback:(_Bool)arg4 animated:(_Bool)arg5;	// IMP=0x000000010013c9bc
- (void)presentStation:(id)arg1 new:(_Bool)arg2;	// IMP=0x000000010013c9b8
- (void)selectSearchTabAndFocusSearchField;	// IMP=0x000000010013c904
- (void)selectFeaturedTabAndPopToRoot:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010013c8d0
- (void)selectFeaturedTab;	// IMP=0x000000010013c8b8
- (void)selectMyPodcastsTabAndPopToRoot:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010013c884
- (void)selectMyPodcastsTab;	// IMP=0x000000010013c86c
- (_Bool)isMyPodcastsTabSelected;	// IMP=0x000000010013c818
- (void)selectUnplayedTabAndPopToRoot:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010013c7e4
- (void)selectUnplayedTab;	// IMP=0x000000010013c7cc
- (_Bool)isUnplayedTabSelected;	// IMP=0x000000010013c778
- (void)dismissNowPlayingAnimated:(_Bool)arg1;	// IMP=0x000000010013c6e0
- (void)presentNowPlayingAnimated:(_Bool)arg1;	// IMP=0x000000010013c518
- (void)showDownloadsControllerAnimated:(_Bool)arg1;	// IMP=0x000000010013c514
- (void)dismissSearchOverlayController;	// IMP=0x000000010013c510
- (void)showSearchControllerWithSearchText:(id)arg1;	// IMP=0x000000010013c4fc
- (void)openStoreURL:(id)arg1;	// IMP=0x000000010013c380
- (void)handlePodcastsUrlScheme:(id)arg1;	// IMP=0x000000010013c36c
- (void)handleiTMSUrlScheme:(id)arg1;	// IMP=0x000000010013c358
- (void)_configureTabBarOnFirstLoad;	// IMP=0x000000010013bfcc
- (void)_playPauseButtonAction:(id)arg1;	// IMP=0x000000010013bf34
- (void)_showNowPlaying;	// IMP=0x000000010013be20
- (void)_hideNowPlaying;	// IMP=0x000000010013bd18
- (_Bool)_isNowPlayingTabVisible;	// IMP=0x000000010013bb68
- (_Bool)_isNowPlayingTabSelected;	// IMP=0x000000010013bb14
- (id)_menuItemElements;	// IMP=0x000000010013bab8
- (id)_tabIdentifierForIndex:(unsigned long long)arg1;	// IMP=0x000000010013b9e8
- (unsigned long long)_tabIndexForIdentifier:(id)arg1;	// IMP=0x000000010013b820
- (id)_selectedTabIdentifier;	// IMP=0x000000010013b7bc
- (id)_selectTabWithIdentifier:(id)arg1 popToRoot:(_Bool)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010013b5f8
- (id)_selectTabWithIdentifier:(id)arg1;	// IMP=0x000000010013b5e0
- (void)updateNowPlayingTabVisibility;	// IMP=0x000000010013b59c
@property(readonly, nonatomic) UINavigationController *rootNavController;
@property(readonly, nonatomic) UINavigationController *rootViewController;
@property(readonly, nonatomic) UITabBarController *tabBarController;
- (id)viewControllerForElement:(id)arg1 existingViewController:(id)arg2;	// IMP=0x000000010013b0c8
- (id)initWithContext:(id)arg1 window:(id)arg2;	// IMP=0x000000010013ae7c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
