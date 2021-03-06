//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBOpenAppTransitionerObserver-Protocol.h"
#import "PBScreenSaverManagerObserver-Protocol.h"
#import "PBSiriScreenActionManagerDelegate-Protocol.h"
#import "PBSystemOverlayControllerDelegate-Protocol.h"
#import "PBSystemUIManaging-Protocol.h"

@class BSWatchdog, NSHashTable, NSString, PBSiriContentPresentingViewController, PBSiriScreenActionContextProvider, PBSystemOverlayController, PBUIPluginController, UIApplicationSceneDeactivationAssertion;

@interface PBSiriManager : NSObject <PBOpenAppTransitionerObserver, PBSiriScreenActionManagerDelegate, PBScreenSaverManagerObserver, PBSystemOverlayControllerDelegate, PBSystemUIManaging>
{
    _Bool _presenting;	// 8 = 0x8
    _Bool _siriEnabled;	// 9 = 0x9
    _Bool _shouldPreferDictation;	// 10 = 0xa
    long long _visibleState;	// 16 = 0x10
    PBUIPluginController *_siriPluginController;	// 24 = 0x18
    PBSiriScreenActionContextProvider *_onScreenActionContextProvider;	// 32 = 0x20
    PBSystemOverlayController *_overlayController;	// 40 = 0x28
    PBSiriContentPresentingViewController *_siriContainerViewController;	// 48 = 0x30
    BSWatchdog *_dismissWatchdog;	// 56 = 0x38
    UIApplicationSceneDeactivationAssertion *_fullscreenSiriSceneDeactivationAssertion;	// 64 = 0x40
    NSHashTable *_observers;	// 72 = 0x48
}

+ (_Bool)_isSiriEnabled;	// IMP=0x00000001001cd7c0
+ (id)sharedInstance;	// IMP=0x00000001001c9d0c
- (void).cxx_destruct;	// IMP=0x00000001001ce780
@property(readonly, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) UIApplicationSceneDeactivationAssertion *fullscreenSiriSceneDeactivationAssertion; // @synthesize fullscreenSiriSceneDeactivationAssertion=_fullscreenSiriSceneDeactivationAssertion;
@property(retain, nonatomic) BSWatchdog *dismissWatchdog; // @synthesize dismissWatchdog=_dismissWatchdog;
@property(readonly, nonatomic) PBSiriContentPresentingViewController *siriContainerViewController; // @synthesize siriContainerViewController=_siriContainerViewController;
@property(readonly, nonatomic) PBSystemOverlayController *overlayController; // @synthesize overlayController=_overlayController;
@property(nonatomic) _Bool shouldPreferDictation; // @synthesize shouldPreferDictation=_shouldPreferDictation;
@property(retain, nonatomic) PBSiriScreenActionContextProvider *onScreenActionContextProvider; // @synthesize onScreenActionContextProvider=_onScreenActionContextProvider;
@property(retain, nonatomic) PBUIPluginController *siriPluginController; // @synthesize siriPluginController=_siriPluginController;
@property(nonatomic, getter=isSiriEnabled) _Bool siriEnabled; // @synthesize siriEnabled=_siriEnabled;
@property(nonatomic) long long visibleState; // @synthesize visibleState=_visibleState;
@property(readonly, nonatomic, getter=isPresenting) _Bool presenting; // @synthesize presenting=_presenting;
- (void)_notifyObserversVisibleStateDidChange:(long long)arg1;	// IMP=0x00000001001ce3b8
- (void)removeObserver:(id)arg1;	// IMP=0x00000001001ce354
- (void)addObserver:(id)arg1;	// IMP=0x00000001001ce2f0
- (void)_stopProvidingScreenActionContext;	// IMP=0x00000001001ce228
- (void)_startProvidingScreenActionContext;	// IMP=0x00000001001cdf7c
- (void)_updateShouldPreferDictation;	// IMP=0x00000001001cdc74
- (id)_lazySiriPluginControllerIfEnabled;	// IMP=0x00000001001cdaf8
- (void)appTransitioner:(id)arg1 willStartAnimationForAppTransition:(id)arg2;	// IMP=0x00000001001cd60c
- (_Bool)siriScreenActionManagerIsSiriContentBeingDisplayed:(id)arg1;	// IMP=0x00000001001cd550
- (void)screenSaverManagerDidPresentScreenSaver:(id)arg1;	// IMP=0x00000001001cd4ec
- (void)screenSaverManagerWillPresentScreenSaver:(id)arg1;	// IMP=0x00000001001cd4a0
- (void)screenSaverManagerDidDismissScreenSaver:(id)arg1;	// IMP=0x00000001001cd454
- (void)screenSaverManagerWillDismissScreenSaver:(id)arg1;	// IMP=0x00000001001cd408
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000001001cd0e8
- (void)_handleAssistantPreferencesDidChangeNotification:(id)arg1;	// IMP=0x00000001001cd054
- (_Bool)endSiriSession;	// IMP=0x00000001001cca78
- (void)dismissSiriWindow;	// IMP=0x00000001001cc6b8
- (void)unhideSiriWindow;	// IMP=0x00000001001cc58c
- (void)hideSiriWindow;	// IMP=0x00000001001cc338
- (void)presentSiriViewController:(id)arg1;	// IMP=0x00000001001cbf70
- (void)setNextAssistantRecognitionStrings:(id)arg1;	// IMP=0x00000001001cbedc
- (void)setNextVoiceRecognitionAudioInputPaths:(id)arg1;	// IMP=0x00000001001cbe48
@property(readonly, nonatomic, getter=isListening) _Bool listening;
- (_Bool)stopSiriWithContext:(id)arg1;	// IMP=0x00000001001cb498
- (_Bool)startSiriWithContext:(id)arg1;	// IMP=0x00000001001cae70
- (_Bool)activateSiriWithContext:(id)arg1;	// IMP=0x00000001001ca874
- (void)prepareSiriViewServices;	// IMP=0x00000001001ca640
@property(readonly, nonatomic, getter=isHidden) _Bool hidden;
- (void)setup;	// IMP=0x00000001001ca1c0
- (void)dealloc;	// IMP=0x00000001001ca0e4
- (id)_init;	// IMP=0x00000001001c9e64
- (id)init;	// IMP=0x00000001001c9e18

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

