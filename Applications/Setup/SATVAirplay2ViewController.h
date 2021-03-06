//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SATVStepViewController.h"

#import "SATVActionStep-Protocol.h"
#import "SATVAirplay2HomePickerViewControllerDelegate-Protocol.h"
#import "SATVAirplay2RoomPickerViewControllerDelegate-Protocol.h"
#import "SATVTextEntryViewControllerDelegate-Protocol.h"

@class NSString, NSTimer, TVSStateMachine, UINavigationController;

@interface SATVAirplay2ViewController : SATVStepViewController <SATVTextEntryViewControllerDelegate, SATVAirplay2HomePickerViewControllerDelegate, SATVAirplay2RoomPickerViewControllerDelegate, SATVActionStep>
{
    CDUnknownBlockType _completionHandler;	// 8 = 0x8
    TVSStateMachine *_homeKitStateMachine;	// 16 = 0x10
    UINavigationController *_childNavigationController;	// 24 = 0x18
    CDUnknownBlockType _textEntryCompletionHandler;	// 32 = 0x20
    NSTimer *_loadingTimer;	// 40 = 0x28
}

+ (_Bool)isSupportedForUpgrade;	// IMP=0x000000010003c9c8
+ (_Bool)isSupported;	// IMP=0x000000010003c974
+ (id)_trimCustomRoomName:(id)arg1;	// IMP=0x000000010003bc84
+ (id)stableKey;	// IMP=0x0000000100039834
- (void).cxx_destruct;	// IMP=0x000000010003cb1c
@property(retain, nonatomic, getter=_loadingTimer, setter=_setLoadingTimer:) NSTimer *loadingTimer; // @synthesize loadingTimer=_loadingTimer;
@property(copy, nonatomic, getter=_textEntryCompletionHandler, setter=_setTextEntryCompletionHandler:) CDUnknownBlockType textEntryCompletionHandler; // @synthesize textEntryCompletionHandler=_textEntryCompletionHandler;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)autoAdvance;	// IMP=0x000000010003cac4
- (void)textEntryViewController:(id)arg1 didEnterText:(id)arg2;	// IMP=0x000000010003c8e4
- (void)textEntryViewController:(id)arg1 textDidChange:(id)arg2;	// IMP=0x000000010003c834
- (void)textEntryViewControllerDidCancel:(id)arg1;	// IMP=0x000000010003c7cc
- (void)roomPickerViewControllerWantsNewRoomViewController:(id)arg1;	// IMP=0x000000010003c284
- (void)roomPickerViewController:(id)arg1 didSelectSuggestedRoom:(id)arg2;	// IMP=0x000000010003c0c8
- (void)roomPickerViewController:(id)arg1 didSelectExistingRoom:(id)arg2;	// IMP=0x000000010003bf0c
- (void)homePickerViewController:(id)arg1 didSelectHome:(id)arg2;	// IMP=0x000000010003bd0c
- (void)_presentCreateRoomFailedViewControllerWithError:(id)arg1;	// IMP=0x000000010003bae8
- (void)_postHomeConfigurationStateDidChangeEvent;	// IMP=0x000000010003ba38
- (void)_scheduleLoadingTimer;	// IMP=0x000000010003b9a0
- (void)_loadingTimerFired;	// IMP=0x000000010003b8f0
- (void)_showPickerViewController;	// IMP=0x000000010003b7a0
- (void)_showLoadingViewController;	// IMP=0x000000010003b5e8
@property(readonly, nonatomic, getter=_childNavigationController) UINavigationController *childNavigationController; // @synthesize childNavigationController=_childNavigationController;
- (void)_createDefaultHome;	// IMP=0x000000010003b36c
@property(readonly, nonatomic, getter=_homeKitStateMachine) TVSStateMachine *homeKitStateMachine; // @synthesize homeKitStateMachine=_homeKitStateMachine;
- (void)_moveOrAddLocalAccessoryToRoom:(id)arg1 inHome:(id)arg2;	// IMP=0x000000010003aba0
- (void)__moveOrAddLocalAccessoryToRoomWithName:(id)arg1 inHome:(id)arg2;	// IMP=0x000000010003a97c
- (void)_moveOrAddLocalAccessoryToRoomWithName:(id)arg1 inHome:(id)arg2;	// IMP=0x000000010003a684
- (void)_saveRoomName:(id)arg1;	// IMP=0x000000010003a4d8
- (void)_sendCompletionWithSuccess:(_Bool)arg1;	// IMP=0x000000010003a424
- (id)_makeLoadingViewController;	// IMP=0x000000010003a2f0
- (id)_makeRoomPickerViewControllerForHome:(id)arg1;	// IMP=0x000000010003a174
- (id)_makeHomePickerViewController;	// IMP=0x000000010003a024
- (id)_makePickerViewController;	// IMP=0x0000000100039c60
- (void)didEnterStateBackwards;	// IMP=0x0000000100039c18
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100039b84
- (void)viewDidLoad;	// IMP=0x0000000100039a40
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000100039988
- (void)dealloc;	// IMP=0x0000000100039900
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000100039840

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isConfigured;
@property(copy, nonatomic) CDUnknownBlockType menuHandler;
@property(readonly) Class superclass;

@end

