//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UISystemShellApplication.h>

#import "PBAppInfoControllerDelegate-Protocol.h"
#import "PBSBulletinServiceDelegate-Protocol.h"
#import "PBSceneManagerObserver-Protocol.h"

@class BSSimpleAssertion, NSMutableArray, NSString, NSTimer, PBAppInfoController, PBBulletinService, PBDialogHiddenAssertion, PBProfileServiceDelegate, PBSBulletin;

@interface PBApplication : UISystemShellApplication <PBAppInfoControllerDelegate, PBSBulletinServiceDelegate, PBSceneManagerObserver>
{
    PBBulletinService *_bulletinService;	// 8 = 0x8
    PBSBulletin *_networkBulletin;	// 16 = 0x10
    PBSBulletin *_sysdiagnoseBulletin;	// 24 = 0x18
    PBSBulletin *_screenshotCapturedBulletin;	// 32 = 0x20
    _Bool _needsAdjustToDisplayChange;	// 40 = 0x28
    _Bool _inhibitForThermal;	// 41 = 0x29
    _Bool _inhibitForOSUpdate;	// 42 = 0x2a
    _Bool _processingSysdiagnoseViaChord;	// 43 = 0x2b
    NSMutableArray *_enqueuedEvents;	// 48 = 0x30
    _Bool _userInterfaceLayoutDirectionIsValid;	// 56 = 0x38
    long long _userInterfaceLayoutDirection;	// 64 = 0x40
    _Bool _airPlayActive;	// 72 = 0x48
    NSTimer *_suppressWakeForHIDEventsTimer;	// 80 = 0x50
    PBAppInfoController *_appInfoController;	// 88 = 0x58
    PBProfileServiceDelegate *_profileServiceDelegate;	// 96 = 0x60
    PBDialogHiddenAssertion *_singleAppModeDialogAssertion;	// 104 = 0x68
    BSSimpleAssertion *_restoreSystemFromSleepAssertion;	// 112 = 0x70
}

+ (id)sharedAppInfoStore;	// IMP=0x000000010001dd90
+ (id)sharedApplicationLibrary;	// IMP=0x000000010001dbe8
+ (id)sharedApplication;	// IMP=0x000000010001b470
- (void).cxx_destruct;	// IMP=0x0000000100028f08
@property(readonly, nonatomic) BSSimpleAssertion *restoreSystemFromSleepAssertion; // @synthesize restoreSystemFromSleepAssertion=_restoreSystemFromSleepAssertion;
@property(readonly, nonatomic) PBDialogHiddenAssertion *singleAppModeDialogAssertion; // @synthesize singleAppModeDialogAssertion=_singleAppModeDialogAssertion;
@property(retain, nonatomic) PBProfileServiceDelegate *profileServiceDelegate; // @synthesize profileServiceDelegate=_profileServiceDelegate;
@property(readonly, nonatomic) PBAppInfoController *appInfoController; // @synthesize appInfoController=_appInfoController;
@property(retain, nonatomic) NSTimer *suppressWakeForHIDEventsTimer; // @synthesize suppressWakeForHIDEventsTimer=_suppressWakeForHIDEventsTimer;
@property(nonatomic) _Bool airPlayActive; // @synthesize airPlayActive=_airPlayActive;
- (void)activateAppSwitcher;	// IMP=0x0000000100028cb8
- (id)appSwitcherWindow;	// IMP=0x0000000100028b88
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000001000288bc
- (void)bulletinService:(id)arg1 didDismissBulletin:(id)arg2 withReason:(unsigned long long)arg3;	// IMP=0x0000000100028734
- (void)appInfoController:(id)arg1 didUpdate:(id)arg2;	// IMP=0x00000001000277ec
- (void)sceneManager:(id)arg1 didChangeFocusFromScene:(id)arg2 toScene:(id)arg3;	// IMP=0x0000000100027720
- (void)_enhanceLogging:(unsigned int)arg1;	// IMP=0x0000000100026c04
- (void)_checkForQuestionableBootArgs;	// IMP=0x00000001000269ac
- (void)_startUpAndRunningTimer;	// IMP=0x000000010002690c
- (id)_sanitizeAppIdentifierHistory:(id)arg1;	// IMP=0x000000010002663c
- (void)_activateScreenSaverFromUserAction:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100026520
- (void)_saveRecentApplicationBundleIdentifiers;	// IMP=0x0000000100026450
- (void)_startExternalControlManagement;	// IMP=0x0000000100026180
- (void)userActivityTriggeredForReason:(id)arg1;	// IMP=0x00000001000260b8
- (void)sendEventData:(id)arg1 fromClient:(id)arg2;	// IMP=0x0000000100025e78
- (void)sendMenuButtonEventRequestedByClient:(id)arg1;	// IMP=0x0000000100025d24
- (void)deactivateScreenSaverRequestedByClient:(id)arg1;	// IMP=0x0000000100025ab4
- (void)activateScreenSaverRequestedByClient:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100025934
- (void)activateScreenSaverRequestedByClient:(id)arg1;	// IMP=0x00000001000258c4
- (void)noteUserPresenceDetected;	// IMP=0x0000000100025678
- (void)rebootRequestedByClient:(id)arg1;	// IMP=0x0000000100025500
- (void)relaunchRequestedByClient:(id)arg1;	// IMP=0x0000000100025388
- (void)relaunchBackboarddRequestedByClient:(id)arg1;	// IMP=0x0000000100025234
- (void)wakeRequestedByClient:(id)arg1 forReason:(id)arg2;	// IMP=0x0000000100024e20
- (void)sleepRequestedByClient:(id)arg1 forReason:(id)arg2;	// IMP=0x0000000100024a98
- (void)client:(id)arg1 setSleepTimeout:(double)arg2;	// IMP=0x0000000100024914
- (void)_handleDeviceWillSleepNotification:(id)arg1;	// IMP=0x00000001000243c0
- (void)_handleDeviceWillWakeNotification:(id)arg1;	// IMP=0x00000001000241e0
- (void)_bluetoothRemotePowerSourceLimitedSourceNotification:(id)arg1;	// IMP=0x00000001000240b4
- (void)sendHIDButtonEventWithUsagePage:(unsigned int)arg1 usage:(unsigned int)arg2 type:(unsigned long long)arg3 senderID:(unsigned long long)arg4 toApplication:(id)arg5;	// IMP=0x0000000100023d20
- (void)forwardHIDButtonEventWithUsagePage:(unsigned int)arg1 usage:(unsigned int)arg2 type:(unsigned long long)arg3 senderID:(unsigned long long)arg4;	// IMP=0x0000000100023abc
- (void)_blackScreenRecoveryModeNotification:(id)arg1;	// IMP=0x0000000100023194
- (void)_internetAvailabilityDidChangeNotification;	// IMP=0x0000000100022d60
- (void)_handleFocusedProcessDidChange;	// IMP=0x0000000100022b3c
- (void)resetIdleTimerAndUndim;	// IMP=0x0000000100022af0
- (void)languageDidChange;	// IMP=0x0000000100022a6c
- (_Bool)_isSystemEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x00000001000229a8
- (_Bool)_isButtonDownEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x0000000100022950
@property(readonly, copy, nonatomic) NSString *kioskAppBundleIdentifier;
- (_Bool)activityInhibited;	// IMP=0x0000000100022834
- (void)resumeActivityAfterOSUpdate;	// IMP=0x00000001000227e0
- (void)stopAllActivityForOSUpdate;	// IMP=0x000000010002278c
- (void)resumeActivityAfterThermal;	// IMP=0x0000000100022738
- (void)stopAllActivityForThermal;	// IMP=0x00000001000226e4
- (void)_resumeAllActivityCommon:(const char *)arg1 flag:(_Bool *)arg2;	// IMP=0x0000000100022470
- (void)_stopAllActivityCommon:(const char *)arg1 flag:(_Bool *)arg2;	// IMP=0x00000001000221d4
- (_Bool)_validatePresses:(id)arg1 forWindow:(id)arg2;	// IMP=0x0000000100021f50
- (void)sendEvent:(id)arg1;	// IMP=0x0000000100021e4c
- (void)_finishButtonEvent:(id)arg1;	// IMP=0x0000000100021db0
- (void)_removeEnqueuedEvent:(id)arg1;	// IMP=0x0000000100021cd0
- (void)_handleKeyUIEvent:(id)arg1;	// IMP=0x00000001000218b0
- (void)_logButtonEventTiming:(id)arg1;	// IMP=0x0000000100020f28
- (_Bool)_prepareButtonEvent:(id)arg1 withPressInfo:(id)arg2;	// IMP=0x0000000100020808
- (_Bool)_shouldTriggerExternalControlActionForEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x000000010002073c
- (void)_handleHIDEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x00000001000203bc
- (_Bool)__handleHIDEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x000000010001ff80
- (_Bool)_handlePhysicalButtonEvent:(id)arg1;	// IMP=0x000000010001fa0c
- (void)_processChordsWithPressesEvent:(id)arg1;	// IMP=0x000000010001eb74
- (_Bool)_handleSystemPressHidEvent:(struct __IOHIDEvent *)arg1 withType:(long long)arg2;	// IMP=0x000000010001e298
- (id)keyCommands;	// IMP=0x000000010001e0e8
- (void)resignActive;	// IMP=0x000000010001e0d4
- (_Bool)_accessibilityIsSystemAppServer;	// IMP=0x000000010001e094
- (long long)userInterfaceLayoutDirection;	// IMP=0x000000010001df6c
- (id)bulletinService;	// IMP=0x000000010001db14
- (void)dealloc;	// IMP=0x000000010001dae0
- (void)_showScreenshotCapturedIndication;	// IMP=0x000000010001d44c
- (void)_hideSysdiagnoseIndication;	// IMP=0x000000010001d2b4
- (void)_showSysdiagnoseIndication;	// IMP=0x000000010001cf08
- (void)_showStackShotIndication;	// IMP=0x000000010001cc78
- (void)finishSystemAppLaunch;	// IMP=0x000000010001bde4
- (_Bool)disablesFrontBoardImplicitWindowScenes;	// IMP=0x000000010001bdc8
- (id)init;	// IMP=0x000000010001b4bc
- (void)failedTest:(id)arg1;	// IMP=0x00000001000ec98c
- (void)finishedTest:(id)arg1;	// IMP=0x00000001000ec86c
- (void)_runSiriBringUpTest:(id)arg1 testOptions:(id)arg2;	// IMP=0x00000001000ec60c
- (void)_startResumeTestNamed:(id)arg1 options:(id)arg2;	// IMP=0x00000001000ec520
- (void)_startLaunchTestNamed:(id)arg1 options:(id)arg2;	// IMP=0x00000001000ebf10
- (void)_retryLaunchTestWithOptions:(id)arg1;	// IMP=0x00000001000ebd38
- (void)_activateApplication:(id)arg1 suspended:(_Bool)arg2 forTest:(id)arg3;	// IMP=0x00000001000ebb3c
- (void)_markUserLaunchInitiationTimeForTest:(id)arg1;	// IMP=0x00000001000eba00
- (_Bool)_isAppExecutableRunning:(id)arg1;	// IMP=0x00000001000eb924
- (_Bool)runTest:(id)arg1 options:(id)arg2;	// IMP=0x00000001000eb6a8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

