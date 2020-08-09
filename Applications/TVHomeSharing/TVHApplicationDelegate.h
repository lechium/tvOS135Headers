//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIResponder.h>

#import "PBSystemServiceNowPlayingDelegate-Protocol.h"
#import "TVApplicationControllerDelegate-Protocol.h"
#import "UIApplicationDelegate-Protocol.h"
#import "_TVInterfaceCreatingPrivate-Protocol.h"

@class IKAppContext, NSDictionary, NSMutableDictionary, NSObject, NSString, NSURL, TVApplicationController, TVPPlayer, UIWindow;
@protocol OS_dispatch_source;

@interface TVHApplicationDelegate : UIResponder <_TVInterfaceCreatingPrivate, PBSystemServiceNowPlayingDelegate, UIApplicationDelegate, TVApplicationControllerDelegate>
{
    _Bool _shouldTerminateOnEnterBackground;	// 8 = 0x8
    _Bool _headless;	// 9 = 0x9
    _Bool _didEnterBackground;	// 10 = 0xa
    UIWindow *_window;	// 16 = 0x10
    TVApplicationController *_applicationController;	// 24 = 0x18
    TVPPlayer *_player;	// 32 = 0x20
    long long _playlistRepeatMode;	// 40 = 0x28
    NSDictionary *_launchOptions;	// 48 = 0x30
    NSDictionary *_filteredLaunchOptions;	// 56 = 0x38
    NSURL *_deferredOpenURL;	// 64 = 0x40
    NSDictionary *_deferredOpenURLOptions;	// 72 = 0x48
    NSObject<OS_dispatch_source> *_tickleTimer;	// 80 = 0x50
    IKAppContext *_appContext;	// 88 = 0x58
    NSString *_javascriptPlaybackState;	// 96 = 0x60
    NSMutableDictionary *_javascriptCallbacksByNotificationName;	// 104 = 0x68
}

+ (id)_mediaItemsFromJSMediaItems:(id)arg1;	// IMP=0x000000010003d568
+ (long long)_playlistRepeatModeForMediaRepeatMode:(long long)arg1;	// IMP=0x000000010003c00c
+ (long long)_playlistRepeatModeFromPreferences;	// IMP=0x000000010003bfa0
+ (void)_addMovie:(id)arg1 withContributors:(id)arg2 toDictionary:(id)arg3;	// IMP=0x000000010003bd90
+ (id)theAppDelegate;	// IMP=0x0000000100036d9c
- (void).cxx_destruct;	// IMP=0x000000010003dcd4
@property(retain, nonatomic) NSMutableDictionary *javascriptCallbacksByNotificationName; // @synthesize javascriptCallbacksByNotificationName=_javascriptCallbacksByNotificationName;
@property(copy, nonatomic) NSString *javascriptPlaybackState; // @synthesize javascriptPlaybackState=_javascriptPlaybackState;
@property(nonatomic) __weak IKAppContext *appContext; // @synthesize appContext=_appContext;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *tickleTimer; // @synthesize tickleTimer=_tickleTimer;
@property(nonatomic) _Bool didEnterBackground; // @synthesize didEnterBackground=_didEnterBackground;
@property(nonatomic) _Bool headless; // @synthesize headless=_headless;
@property(nonatomic) _Bool shouldTerminateOnEnterBackground; // @synthesize shouldTerminateOnEnterBackground=_shouldTerminateOnEnterBackground;
@property(copy, nonatomic) NSDictionary *deferredOpenURLOptions; // @synthesize deferredOpenURLOptions=_deferredOpenURLOptions;
@property(copy, nonatomic) NSURL *deferredOpenURL; // @synthesize deferredOpenURL=_deferredOpenURL;
@property(copy, nonatomic) NSDictionary *filteredLaunchOptions; // @synthesize filteredLaunchOptions=_filteredLaunchOptions;
@property(copy, nonatomic) NSDictionary *launchOptions; // @synthesize launchOptions=_launchOptions;
@property(nonatomic) long long playlistRepeatMode; // @synthesize playlistRepeatMode=_playlistRepeatMode;
@property(retain, nonatomic) TVPPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) TVApplicationController *applicationController; // @synthesize applicationController=_applicationController;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (id)_contributorImageProxyWithImageParamsString:(id)arg1;	// IMP=0x000000010003da48
- (id)_mediaEntityImageProxyWithImageParamsString:(id)arg1 element:(id)arg2;	// IMP=0x000000010003d84c
- (void)_evaluateJSContextBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010003d6d8
- (id)_filteredLaunchOptions:(id)arg1;	// IMP=0x000000010003d504
- (_Bool)_isHeadlessLaunchURL:(id)arg1;	// IMP=0x000000010003d4a8
- (void)_configureAudioSession;	// IMP=0x000000010003d378
- (void)_presentFatalErrorDialogWithError:(id)arg1;	// IMP=0x000000010003cf00
- (void)_handleFatalError:(id)arg1;	// IMP=0x000000010003cef4
- (void)_startHomeSharingManagementWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010003cbc0
- (void)_startApplicationController;	// IMP=0x000000010003ca20
- (void)_startApplication;	// IMP=0x000000010003c7d0
- (void)_startHeadlessApplication;	// IMP=0x000000010003c7cc
- (id)_applicationControllerContext;	// IMP=0x000000010003c690
- (id)_bootURL;	// IMP=0x000000010003c450
- (void)_sendTickle;	// IMP=0x000000010003c37c
- (void)_stopTickleTimer;	// IMP=0x000000010003c274
- (void)_startTickleTimer;	// IMP=0x000000010003c020
- (void)systemServicePresentNowPlayingUI;	// IMP=0x000000010003bd34
- (id)_javascriptPlainTextFromHTMLString:(id)arg1;	// IMP=0x000000010003badc
- (id)_javascriptNextPlaybackMediaItemForMediaItems:(id)arg1;	// IMP=0x000000010003ba28
- (id)_javascriptParseDeepLinkURL:(id)arg1;	// IMP=0x000000010003b918
- (id)_javascriptMoviesByContributorFromMovies:(id)arg1;	// IMP=0x000000010003b68c
- (id)_javascriptMediaEntitiesByGroupTitleFromGroups:(id)arg1;	// IMP=0x000000010003b4dc
- (void)_javascriptSetScreensaverForMediaServer:(id)arg1 mediaCategoryType:(id)arg2 mediaCollection:(id)arg3;	// IMP=0x000000010003b318
- (void)_javascriptUnregisterNotificationWithName:(id)arg1 callback:(id)arg2;	// IMP=0x000000010003b21c
- (void)_javascriptRegisterNotificationWithName:(id)arg1 callback:(id)arg2;	// IMP=0x000000010003b120
- (void)_javascriptAddMediaItemsToUpNext:(id)arg1;	// IMP=0x000000010003afc4
- (void)_javascriptPlayMediaItemsNext:(id)arg1;	// IMP=0x000000010003ae68
- (void)_javascriptPlayGeniusMixMediaItems:(id)arg1 fetchRequest:(id)arg2 mediaServer:(id)arg3;	// IMP=0x000000010003ac9c
- (void)_javascriptPlayMediaItems:(id)arg1 shuffle:(_Bool)arg2 playbackStartIndex:(unsigned long long)arg3 allowRepeat:(_Bool)arg4;	// IMP=0x000000010003ab04
- (double)_javascriptRemainingSecondsBetweenTargetDate:(id)arg1 andTestDate:(id)arg2;	// IMP=0x000000010003aa84
- (id)_javascriptRemainingTimeStringBetweenTargetDate:(id)arg1 andTestDate:(id)arg2;	// IMP=0x000000010003a9e8
- (id)_javascriptPositionalDurationStringForSeconds:(id)arg1;	// IMP=0x000000010003a954
- (id)_javascriptDurationStringForSeconds:(id)arg1;	// IMP=0x000000010003a8c0
- (id)_javascriptLocalizedStringForFormatKey:(id)arg1 comment:(id)arg2 arguments:(id)arg3;	// IMP=0x000000010003a7f4
- (id)_javascriptLocalizedStringForKey:(id)arg1 comment:(id)arg2;	// IMP=0x000000010003a770
- (void)_addPropertiesToJavascriptAppObject:(id)arg1;	// IMP=0x000000010003a54c
- (void)_addMethodsToJavascriptAppObject:(id)arg1;	// IMP=0x0000000100039304
- (void)_executeJavascriptAppMethod:(id)arg1 arguments:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100039160
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000100039090
- (void)_handleNowPlayingViewDidDisappearNotification:(id)arg1;	// IMP=0x0000000100038f14
- (void)_handleNowPlayingViewWillAppearNotification:(id)arg1;	// IMP=0x0000000100038d98
- (void)_handleDidDisplayViewControllerNotification:(id)arg1;	// IMP=0x0000000100038d04
- (void)_handlePlaybackStateDidChangeNotification:(id)arg1;	// IMP=0x0000000100038878
- (void)_handleMediaServerConnectionStateDidChangeNotification:(id)arg1;	// IMP=0x0000000100038514
- (id)_imageProxyForElement:(id)arg1;	// IMP=0x00000001000383cc
- (Class)collectionViewCellClassForElement:(id)arg1;	// IMP=0x00000001000382d4
- (id)imageForResource:(id)arg1;	// IMP=0x00000001000382c0
- (id)viewControllerForElement:(id)arg1 existingViewController:(id)arg2;	// IMP=0x00000001000381ac
- (id)viewForElement:(id)arg1 existingView:(id)arg2;	// IMP=0x00000001000381a4
- (void)appController:(id)arg1 didStopWithOptions:(id)arg2;	// IMP=0x00000001000380b0
- (void)appController:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x0000000100037fa4
- (void)appController:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;	// IMP=0x0000000100037eb0
- (void)appController:(id)arg1 evaluateAppJavaScriptInContext:(id)arg2;	// IMP=0x0000000100037bbc
- (void)applicationWillTerminate:(id)arg1;	// IMP=0x0000000100037ba0
- (void)applicationDidBecomeActive:(id)arg1;	// IMP=0x0000000100037b3c
- (void)applicationWillEnterForeground:(id)arg1;	// IMP=0x00000001000379bc
- (void)applicationDidEnterBackground:(id)arg1;	// IMP=0x0000000100037924
- (void)applicationWillResignActive:(id)arg1;	// IMP=0x0000000100037908
- (_Bool)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;	// IMP=0x00000001000377fc
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;	// IMP=0x0000000100037158
- (void)replaceNowPlayingViewController:(id)arg1 withMediaCollectionDetailsForMediaItem:(id)arg2 collectionType:(unsigned long long)arg3;	// IMP=0x0000000100036df8
- (void)dealloc;	// IMP=0x0000000100036d24
- (id)init;	// IMP=0x0000000100036c64

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

