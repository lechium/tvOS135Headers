//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIResponder.h>

#import "TVPhotosAppDelegateTestingDelegate-Protocol.h"
#import "UIApplicationDelegate-Protocol.h"
#import "UIApplicationTestingDelegate-Protocol.h"

@class NSString, TVPhotosAppDelegateTesting, TVPiCloudPhotoSettings, UIViewController, UIWindow;

@interface TVPhotosAppDelegate : UIResponder <TVPhotosAppDelegateTestingDelegate, UIApplicationTestingDelegate, UIApplicationDelegate>
{
    _Bool _photoPickerModeEnabled;	// 8 = 0x8
    _Bool _didFinishAppLaunch;	// 9 = 0x9
    _Bool _screenSaverModeEnabled;	// 10 = 0xa
    UIWindow *_window;	// 16 = 0x10
    TVPiCloudPhotoSettings *_iCloudSettings;	// 24 = 0x18
    UIViewController *_photoPickerViewController;	// 32 = 0x20
    TVPhotosAppDelegateTesting *_applicationTesting;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000001000267bc
@property(readonly, nonatomic) TVPhotosAppDelegateTesting *applicationTesting; // @synthesize applicationTesting=_applicationTesting;
@property(retain, nonatomic) UIViewController *photoPickerViewController; // @synthesize photoPickerViewController=_photoPickerViewController;
@property(nonatomic) _Bool screenSaverModeEnabled; // @synthesize screenSaverModeEnabled=_screenSaverModeEnabled;
@property(nonatomic) _Bool didFinishAppLaunch; // @synthesize didFinishAppLaunch=_didFinishAppLaunch;
@property(retain, nonatomic) TVPiCloudPhotoSettings *iCloudSettings; // @synthesize iCloudSettings=_iCloudSettings;
@property(nonatomic, getter=isPhotoPickerModeEnabled) _Bool photoPickerModeEnabled; // @synthesize photoPickerModeEnabled=_photoPickerModeEnabled;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (_Bool)application:(id)arg1 runTest:(id)arg2 options:(id)arg3;	// IMP=0x0000000100026628
- (void)_tvs_enableSharedPhotoStreamPostUpdateForAccount:(id)arg1;	// IMP=0x00000001000264d4
- (void)_tvs_enableMyPhotoStreamPostUpdateForAccount:(id)arg1;	// IMP=0x0000000100026380
- (void)_setUpScreensaverPickerUI;	// IMP=0x0000000100026288
- (_Bool)_isDisplayingPhotoStreamContent;	// IMP=0x0000000100026220
- (void)_performAppLaunchForScheme:(id)arg1;	// IMP=0x0000000100025b94
- (void)_updateApplicationUIWithRootController:(id)arg1 forceRefresh:(_Bool)arg2;	// IMP=0x0000000100025b80
- (void)_deactivateApplication;	// IMP=0x0000000100025b14
- (void)_displayActivityIndicator;	// IMP=0x0000000100025998
- (void)_updateCRDPreferencesWithImage:(id)arg1;	// IMP=0x0000000100025898
- (void)photoPickerViewController:(id)arg1 selectedPhotoAsset:(id)arg2;	// IMP=0x00000001000256b0
- (void)internetAvailabilityChanged:(id)arg1;	// IMP=0x0000000100025584
- (void)iCloudAccountStatusChanged:(id)arg1;	// IMP=0x0000000100025208
- (void)applicationWillTerminate:(id)arg1;	// IMP=0x00000001000251b8
- (void)applicationDidBecomeActive:(id)arg1;	// IMP=0x0000000100024f8c
- (void)applicationWillResignActive:(id)arg1;	// IMP=0x0000000100024f7c
- (void)applicationDidEnterBackground:(id)arg1;	// IMP=0x0000000100024ef0
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;	// IMP=0x00000001000248c8
- (_Bool)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;	// IMP=0x0000000100024858
- (id)init;	// IMP=0x00000001000247d8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

