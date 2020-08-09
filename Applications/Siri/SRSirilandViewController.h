//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AFUIDebugControllerDelegate-Protocol.h"
#import "AFUIInternalDebugControllerDelegate-Protocol.h"
#import "AFUIStateMachineDelegate-Protocol.h"
#import "RadiosPreferencesDelegate-Protocol.h"
#import "SRPagerViewControllerDelegate-Protocol.h"
#import "SRSirilandViewDelegate-Protocol.h"
#import "SRSuggestionsViewControllerDelegate-Protocol.h"
#import "SRTranscriptStackViewControllerDataSource-Protocol.h"
#import "SRTranscriptStackViewControllerDelegate-Protocol.h"
#import "SiriUIModalContainerViewControllerDelegate-Protocol.h"
#import "SiriUIPresentation-Protocol.h"
#import "SiriUIVideoPlayerViewControllerDelegate-Protocol.h"

@class AFUIStateMachine, NSString, RadiosPreferences, SFStartSearchFeedback, SRPagerViewController, SRSirilandView, SRSuggestionsViewController, UIAlertController;
@protocol AFUIDebugControlling, AFUIInternalDebugControlling, SiriUIPresentationDataSource, SiriUIPresentationDelegate;

@interface SRSirilandViewController : UIViewController <AFUIDebugControllerDelegate, AFUIInternalDebugControllerDelegate, SRPagerViewControllerDelegate, SRSirilandViewDelegate, SRTranscriptStackViewControllerDataSource, SRSuggestionsViewControllerDelegate, SRTranscriptStackViewControllerDelegate, RadiosPreferencesDelegate, AFUIStateMachineDelegate, SiriUIVideoPlayerViewControllerDelegate, SiriUIModalContainerViewControllerDelegate, SiriUIPresentation>
{
    AFUIStateMachine *_stateMachine;	// 8 = 0x8
    long long _currentRequestSource;	// 16 = 0x10
    _Bool _passcodeUnlockViewIsShowing;	// 24 = 0x18
    _Bool _presentedPreviousConversationFromBreadcrumb;	// 25 = 0x19
    CDStruct_a82615c4 _keyboardInfo;	// 32 = 0x20
    id <SiriUIPresentationDataSource> _dataSource;	// 80 = 0x50
    id <SiriUIPresentationDelegate> _delegate;	// 88 = 0x58
    SRSuggestionsViewController *_siriUnavailableViewController;	// 96 = 0x60
    SRPagerViewController *_pagerViewController;	// 104 = 0x68
    id <AFUIDebugControlling> _debugController;	// 112 = 0x70
    UIViewController<AFUIInternalDebugControlling> *_internalDebugController;	// 120 = 0x78
    double _lastPresentationTime;	// 128 = 0x80
    UIAlertController *_debugAlertController;	// 136 = 0x88
    RadiosPreferences *_radioPreferences;	// 144 = 0x90
    UIViewController *_presentedViewControllerForDebugController;	// 152 = 0x98
    SFStartSearchFeedback *_currentStartSearchFeedback;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x0000000100072800
@property(retain, nonatomic) SFStartSearchFeedback *currentStartSearchFeedback; // @synthesize currentStartSearchFeedback=_currentStartSearchFeedback;
@property(nonatomic) __weak UIViewController *presentedViewControllerForDebugController; // @synthesize presentedViewControllerForDebugController=_presentedViewControllerForDebugController;
@property(retain, nonatomic) RadiosPreferences *radioPreferences; // @synthesize radioPreferences=_radioPreferences;
@property(retain, nonatomic, getter=_debugAlertController) UIAlertController *debugAlertController; // @synthesize debugAlertController=_debugAlertController;
@property(nonatomic) double lastPresentationTime; // @synthesize lastPresentationTime=_lastPresentationTime;
@property(retain, nonatomic) UIViewController<AFUIInternalDebugControlling> *internalDebugController; // @synthesize internalDebugController=_internalDebugController;
@property(retain, nonatomic) id <AFUIDebugControlling> debugController; // @synthesize debugController=_debugController;
@property(readonly, nonatomic, getter=_pagerViewController) SRPagerViewController *pagerViewController; // @synthesize pagerViewController=_pagerViewController;
@property(readonly, nonatomic, getter=_siriUnavailableViewController) SRSuggestionsViewController *siriUnavailableViewController; // @synthesize siriUnavailableViewController=_siriUnavailableViewController;
@property(nonatomic) __weak id <SiriUIPresentationDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SiriUIPresentationDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)_topTranscriptViewController;	// IMP=0x0000000100072630
- (_Bool)_canShowWhileLocked;	// IMP=0x000000010007262c
- (void)_handleWillLeaveEmergencyCallView:(id)arg1;	// IMP=0x0000000100072628
- (void)_handleDidShowEmergencyCallView:(id)arg1;	// IMP=0x0000000100072624
- (void)siriNetworkAvailabilityDidChange;	// IMP=0x00000001000725c4
- (void)_updateSiriAvailability:(unsigned long long)arg1 animated:(_Bool)arg2;	// IMP=0x00000001000724d4
- (void)airplaneModeChanged;	// IMP=0x0000000100072480
- (void)_updateConversationAvailability:(unsigned long long)arg1;	// IMP=0x0000000100072198
- (void)showSpeechAlternatives:(id)arg1;	// IMP=0x000000010007212c
- (void)showFullScreenEffect:(id)arg1;	// IMP=0x00000001000720c0
- (void)handleGetResponseAlternativesPlayback:(id)arg1;	// IMP=0x0000000100072054
- (void)changeUtterance:(id)arg1;	// IMP=0x0000000100071fe8
- (id)requestContext;	// IMP=0x0000000100071f94
- (void)_presentInternalDebugController;	// IMP=0x0000000100071ed0
- (void)_presentRadarComposeController;	// IMP=0x0000000100071708
- (void)transcriptStackViewControllerDidResignFirstResponder:(id)arg1;	// IMP=0x00000001000716c0
- (void)transcriptStackViewController:(id)arg1 failTest:(id)arg2 withReason:(id)arg3;	// IMP=0x00000001000715f0
- (void)transcriptStackViewController:(id)arg1 didFinishTest:(id)arg2;	// IMP=0x0000000100071544
- (void)transcriptStackViewController:(id)arg1 willStartTest:(id)arg2;	// IMP=0x0000000100071498
- (_Bool)inTextInputModeForTranscriptStackViewController:(id)arg1;	// IMP=0x0000000100071444
- (void)transcriptStackViewController:(id)arg1 viewDidSetContentSizeForTranscriptAtIndex:(long long)arg2;	// IMP=0x00000001000712ec
- (void)transcriptStackViewController:(id)arg1 requestPasscodeUnlockWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000010007127c
- (unsigned long long)deviceLockStateForTranscriptStackViewController:(id)arg1;	// IMP=0x0000000100071228
- (id)transcriptStackViewController:(id)arg1 updatedUserUtteranceForRefId:(id)arg2;	// IMP=0x00000001000711a4
- (id)transcriptStackViewController:(id)arg1 additionalSpeechInterpretationsForRefId:(id)arg2;	// IMP=0x0000000100071120
- (void)transcriptStackViewController:(id)arg1 didShowGuideStartDate:(id)arg2 endDate:(id)arg3;	// IMP=0x0000000100071094
- (void)transcriptStackViewController:(id)arg1 didShowTipWithIdentifier:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 flowID:(id)arg5;	// IMP=0x0000000100070fc8
- (void)transcriptStackViewController:(id)arg1 didShowAceViewWithIdentifier:(id)arg2 aceViewClass:(Class)arg3 metricsContext:(id)arg4 forInterval:(double)arg5;	// IMP=0x0000000100070f1c
- (void)transcriptStackViewController:(id)arg1 didScrollForInterval:(double)arg2 metricsContext:(id)arg3;	// IMP=0x0000000100070e9c
- (void)transcriptStackViewController:(id)arg1 didEditSpeechRecognized:(id)arg2 forInterval:(double)arg3;	// IMP=0x0000000100070e1c
- (void)transcriptStackViewController:(id)arg1 shouldPresentPicker:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100070d2c
- (void)transcriptStackViewController:(id)arg1 setStatusBarHidden:(_Bool)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100070ca4
- (void)transcriptStackViewController:(id)arg1 setStatusBarHidden:(_Bool)arg2 animated:(_Bool)arg3;	// IMP=0x0000000100070c44
- (void)transcriptStackViewController:(id)arg1 didRequestKeyboardWithVisibility:(_Bool)arg2;	// IMP=0x0000000100070bec
- (void)transcriptStackViewController:(id)arg1 didDismissViewController:(id)arg2;	// IMP=0x0000000100070b7c
- (void)transcriptStackViewController:(id)arg1 willDismissViewController:(id)arg2;	// IMP=0x0000000100070b0c
- (void)transcriptStackViewController:(id)arg1 didPresentViewController:(id)arg2;	// IMP=0x0000000100070a9c
- (void)transcriptStackViewController:(id)arg1 willPresentViewController:(id)arg2;	// IMP=0x0000000100070a2c
- (void)transcriptStackViewController:(id)arg1 setTypeToSiriViewHidden:(_Bool)arg2;	// IMP=0x0000000100070980
- (void)transcriptStackViewController:(id)arg1 setStatusViewHidden:(_Bool)arg2;	// IMP=0x0000000100070928
- (void)willSendStartRequestForTranscriptStackViewController:(id)arg1;	// IMP=0x0000000100070884
- (_Bool)transcriptStackViewControllerShouldPreventUserInteraction:(id)arg1;	// IMP=0x0000000100070838
- (void)transcriptStackViewController:(id)arg1 openURL:(id)arg2 conversationItemIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100070788
- (id)effectiveCoreLocationBundleForTranscriptStackViewController:(id)arg1;	// IMP=0x000000010007072c
- (void)transcriptStackViewController:(id)arg1 synthesizeSpeechWithPhoneticText:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000706a0
- (void)stopSpeakingForTranscriptStackViewController:(id)arg1;	// IMP=0x0000000100070658
- (void)transcriptStackViewController:(id)arg1 speakText:(id)arg2 isPhonetic:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100070590
- (void)cancelRequestForTranscriptStackViewController:(id)arg1;	// IMP=0x0000000100070584
- (void)transcriptStackViewController:(id)arg1 performAceCommand:(id)arg2 conversationItemIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000001000704d4
- (void)transcriptStackViewController:(id)arg1 didCorrectRecognition:(id)arg2 correctionIdentifier:(id)arg3 forItemAtIndexPath:(id)arg4 userSelectionResults:(id)arg5;	// IMP=0x0000000100070394
- (void)transcriptStackViewControllerDidEndEditing:(id)arg1;	// IMP=0x000000010007034c
- (void)transcriptStackViewControllerWillBeginEditing:(id)arg1;	// IMP=0x00000001000702f4
- (void)transcriptStackViewControllerRequestKeyboardForTapToEditWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100070288
- (void)transcriptStackViewController:(id)arg1 didDelayPresentationOfItemsWithIdentifiers:(id)arg2;	// IMP=0x0000000100070218
- (void)transcriptStackViewController:(id)arg1 willDiscardConversationItemsWithIdentifiers:(id)arg2;	// IMP=0x00000001000701a8
- (void)transcriptStackViewController:(id)arg1 didPresentConversationItemsWithIdentifiers:(id)arg2;	// IMP=0x0000000100070138
- (void)transcriptStackViewControllerPulseHelpButton:(id)arg1;	// IMP=0x00000001000700f0
- (void)transcriptStackViewController:(id)arg1 setHelpButtonEmphasized:(_Bool)arg2;	// IMP=0x0000000100070098
- (void)transcriptStackViewController:(id)arg1 didHideVibrantView:(id)arg2;	// IMP=0x0000000100070034
- (void)transcriptStackViewControllerDidShowSuggestions:(id)arg1;	// IMP=0x000000010006ff54
- (_Bool)transcriptStackViewControllerShouldDelaySuggestions:(id)arg1;	// IMP=0x000000010006ff00
- (_Bool)transcriptStackViewControllerWillShowSuggestions:(id)arg1;	// IMP=0x000000010006feb0
- (long long)initialDisplayTypeForTranscriptStackViewController:(id)arg1;	// IMP=0x000000010006fdb0
- (double)statusViewHeightForTranscriptStackViewController:(id)arg1;	// IMP=0x000000010006fd54
- (struct CGRect)statusBarFrameForTranscriptStackViewController:(id)arg1;	// IMP=0x000000010006fcd8
- (void)transcriptStackViewControllerDidExitSiriland:(id)arg1;	// IMP=0x000000010006fc94
- (void)transcriptStackViewControllerWillEnterSiriland:(id)arg1;	// IMP=0x000000010006fc50
- (double)contentWidthForTranscriptStackViewController:(id)arg1;	// IMP=0x000000010006fbf4
- (CDStruct_a82615c4)keyboardInfoForSuggestionsController:(id)arg1;	// IMP=0x000000010006fbd4
- (void)suggestionsViewController:(id)arg1 performAceCommand:(id)arg2 conversationItemIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010006fb24
- (id)siriEnabledAppListForSuggestionsController:(id)arg1;	// IMP=0x000000010006fa78
- (double)statusViewHeightForSuggestionsViewController:(id)arg1;	// IMP=0x000000010006fa1c
- (double)contentWidthForSuggestionsViewController:(id)arg1;	// IMP=0x000000010006f9c0
- (struct CGRect)statusBarFrameForSuggestionsViewController:(id)arg1;	// IMP=0x000000010006f944
- (void)suggestionsViewDidShowSuggestions:(id)arg1;	// IMP=0x000000010006f940
- (CDStruct_a82615c4)keyboardInfoForTranscriptStackViewController:(id)arg1;	// IMP=0x000000010006f920
- (id)siriEnabledAppListForTranscriptStackViewController:(id)arg1;	// IMP=0x000000010006f874
- (id)domainObjectStoreForTranscriptStackViewController:(id)arg1;	// IMP=0x000000010006f818
- (id)conversationForTranscriptStackViewController:(id)arg1;	// IMP=0x000000010006f808
- (long long)siriStateForTranscriptStackViewController:(id)arg1;	// IMP=0x000000010006f7b4
- (void)internalDebugControllerWantsDismissViewController;	// IMP=0x000000010006f768
- (void)debugController:(id)arg1 openURL:(id)arg2;	// IMP=0x000000010006f6f0
- (void)getScreenshotImageForDebugController:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000010006f680
- (void)debugController:(id)arg1 wantsDismissViewController:(id)arg2;	// IMP=0x000000010006f594
- (void)debugController:(id)arg1 wantsPresentViewController:(id)arg2;	// IMP=0x000000010006f48c
- (void)debugController:(id)arg1 stateDidChangeWithAddViews:(id)arg2;	// IMP=0x000000010006f3ac
- (double)statusViewHeightForSirilandView:(id)arg1;	// IMP=0x000000010006f350
- (struct CGRect)statusBarFrameForSirilandView:(id)arg1;	// IMP=0x000000010006f2d4
- (void)pagerViewControllerDidChangeTransitionState:(id)arg1;	// IMP=0x000000010006f000
- (void)pagerViewController:(id)arg1 didActivatePageViewController:(id)arg2 oldActivePageViewController:(id)arg3;	// IMP=0x000000010006eca8
- (void)siriDidDetectMusic;	// IMP=0x000000010006eba4
- (void)_hideAcousticIDSpinner;	// IMP=0x000000010006e9e8
- (void)acousticIDRequestDidFinishWithSuccess:(_Bool)arg1;	// IMP=0x000000010006e92c
- (void)acousticIDRequestDidStart;	// IMP=0x000000010006e804
- (void)modalContainerViewControllerViewDidDisappear:(id)arg1;	// IMP=0x000000010006e794
- (void)modalContainerViewControllerViewWillDisappear:(id)arg1;	// IMP=0x000000010006e724
- (void)_dismissVideoPlayerViewController;	// IMP=0x000000010006e608
- (void)playbackDidFailForVideoPlayerViewController:(id)arg1;	// IMP=0x000000010006e5fc
- (void)playbackDidFinishForVideoPlayerViewController:(id)arg1;	// IMP=0x000000010006e5f0
- (_Bool)shouldResumeInterruptedAudioPlayback;	// IMP=0x000000010006e5e8
- (_Bool)shouldUseEventDrivenIdleAndQuietUpdates;	// IMP=0x000000010006e5e0
- (void)siriIsIdleAndQuietStatusDidChange:(_Bool)arg1;	// IMP=0x000000010006e5dc
- (void)handlePlayContentCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010006e224
- (id)prepareUpdateViewsCommandForConversation:(id)arg1;	// IMP=0x000000010006e214
- (id)prepareAddViewsCommandForConversation:(id)arg1;	// IMP=0x000000010006e204
- (void)siriDidStopSpeakingWithIdentifier:(id)arg1 speechQueueIsEmpty:(_Bool)arg2;	// IMP=0x000000010006e0b8
- (void)siriDidStartSpeakingWithIdentifier:(id)arg1;	// IMP=0x000000010006df74
- (void)siriFailTest:(id)arg1 withReason:(id)arg2;	// IMP=0x000000010006dea4
- (void)siriDidFinishTest:(id)arg1;	// IMP=0x000000010006ddf8
- (void)siriWillStartTest:(id)arg1;	// IMP=0x000000010006dd4c
- (void)speechRecordingDidDetectSpeechStartpoint;	// IMP=0x000000010006dd0c
- (void)speechRecordingDidFailForRequest:(id)arg1 onAVRecordRoute:(id)arg2 withError:(id)arg3;	// IMP=0x000000010006dd00
- (void)speechRecordingDidCancelForRequest:(id)arg1 onAVRecordRoute:(id)arg2;	// IMP=0x000000010006dcf4
- (void)speechRecordingDidEndForRequest:(id)arg1 onAVRecordRoute:(id)arg2;	// IMP=0x000000010006dce8
- (void)didReceiveBugButtonLongPress;	// IMP=0x000000010006d6ac
- (void)didReceiveReportBugAction;	// IMP=0x000000010006d6a0
- (void)didReceiveHelpAction;	// IMP=0x000000010006d218
- (_Bool)supportsTextInput;	// IMP=0x000000010006d210
- (void)_dismissForLongIdling;	// IMP=0x000000010006d11c
- (void)_cancelScheduledAutoDismissalForLongIdlingIfNeeded;	// IMP=0x000000010006d050
- (void)_scheduleAutoDismissalForLongIdling;	// IMP=0x000000010006cf64
- (void)siriRequestWillStartWithRequestOptions:(id)arg1;	// IMP=0x000000010006cf10
- (id)configureOptionsForImminentRequest:(id)arg1;	// IMP=0x000000010006ce84
- (void)_logParsecEndSearchFeedback;	// IMP=0x000000010006cd38
- (void)_logParsecStartSearchFeedback;	// IMP=0x000000010006cbf0
- (void)siriWillStartTextInputRequest;	// IMP=0x000000010006cb28
- (void)siriDidTransitionFromState:(long long)arg1 event:(long long)arg2;	// IMP=0x000000010006c90c
- (_Bool)siriIsShowingPasscodeUnlock;	// IMP=0x000000010006c8fc
- (void)siriDidHidePasscodeUnlock;	// IMP=0x000000010006c874
- (void)siriWillHidePasscodeUnlock;	// IMP=0x000000010006c870
- (void)siriWillShowPasscodeUnlockAndCancelRequest:(_Bool)arg1;	// IMP=0x000000010006c7e8
- (void)siriWillShowPasscodeUnlock;	// IMP=0x000000010006c7d8
- (void)reloadData;	// IMP=0x000000010006c790
- (void)startNewConversation;	// IMP=0x000000010006c720
- (void)siriDidFinishActionsForConversationItemWithIdentifier:(id)arg1 inConversation:(id)arg2;	// IMP=0x000000010006c6b0
- (void)conversation:(id)arg1 didChangePresentationStateForItemsAtIndexPaths:(id)arg2;	// IMP=0x000000010006c624
- (void)conversation:(id)arg1 didRemoveItemsWithIdentifiers:(id)arg2 atIndexPaths:(id)arg3 parentItemIdentifiers:(id)arg4;	// IMP=0x000000010006c558
- (void)conversation:(id)arg1 didUpdateItemsAtIndexPaths:(id)arg2;	// IMP=0x000000010006c4cc
- (void)conversation:(id)arg1 didInsertItemsAtIndexPaths:(id)arg2;	// IMP=0x000000010006c320
- (void)siriDidDeactivate;	// IMP=0x000000010006c1bc
- (_Bool)currentSnippetContainsFooterButtons;	// IMP=0x000000010006c170
- (_Bool)_isUsingBuiltInSpeaker;	// IMP=0x000000010006bf9c
- (void)siriDidActivateFromSource:(long long)arg1;	// IMP=0x000000010006bbfc
- (void)siriWillActivateFromSource:(long long)arg1;	// IMP=0x000000010006bac4
- (void)statusViewHeightDidChange;	// IMP=0x000000010006ba7c
- (void)statusBarFrameDidChange;	// IMP=0x000000010006b9f8
- (long long)options;	// IMP=0x000000010006b9f0
- (id)viewController;	// IMP=0x000000010006b9ec
- (void)_speakText:(id)arg1;	// IMP=0x000000010006b9dc
- (void)_speakText:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010006b950
- (void)_cancelRequest;	// IMP=0x000000010006b908
- (id)_conversationItemAtIndexPath:(id)arg1 forTranscriptStackViewController:(id)arg2;	// IMP=0x000000010006b884
- (id)_createTranscriptStackViewController;	// IMP=0x000000010006b848
- (id)_transcriptStackViewControllerForConversation:(id)arg1;	// IMP=0x000000010006b788
- (id)_freshTranscriptStackViewController;	// IMP=0x000000010006b6bc
- (id)_activeTranscriptStackViewController;	// IMP=0x000000010006b668
- (id)_previousTranscriptStackViewController;	// IMP=0x000000010006b5a4
- (id)_transcriptStackViewControllers;	// IMP=0x000000010006b550
- (id)_itemInCurrentConversationAtIndexPath:(id)arg1;	// IMP=0x000000010006b4d0
- (id)_itemInPreviousConversationAtIndexPath:(id)arg1;	// IMP=0x000000010006b450
- (id)_activeConversation;	// IMP=0x000000010006b3a0
- (id)_previousConversation;	// IMP=0x000000010006b310
- (id)_identifierOfPreviousConversation;	// IMP=0x000000010006b288
- (id)_conversationIdentifiers;	// IMP=0x000000010006b22c
- (void)_updatePreviousAndActiveConversation;	// IMP=0x000000010006b06c
- (void)conversationListDidChange;	// IMP=0x000000010006b060
- (void)_performTransitionForEvent:(long long)arg1;	// IMP=0x000000010006aeb0
- (id)stateMachine:(id)arg1 descriptionForEvent:(long long)arg2;	// IMP=0x000000010006ae84
- (void)stateMachine:(id)arg1 didTransitionFromState:(long long)arg2 forEvent:(long long)arg3;	// IMP=0x000000010006ae04
- (long long)_state;	// IMP=0x000000010006adb8
- (id)_stateMachine;	// IMP=0x000000010006ac1c
- (id)childViewControllerForHomeIndicatorAutoHidden;	// IMP=0x000000010006aba8
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000010006aa54
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000010006a8cc
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010006a82c
- (void)viewDidLoad;	// IMP=0x000000010006a69c
- (void)loadView;	// IMP=0x000000010006a648
- (void)updateKeyboardInfo:(CDStruct_a82615c4)arg1;	// IMP=0x000000010006a578
- (_Bool)_isTextInputEnabled;	// IMP=0x000000010006a53c
- (void)dealloc;	// IMP=0x000000010006a460
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 delegate:(id)arg3 dataSource:(id)arg4;	// IMP=0x000000010006a180
- (id)initWithDelegate:(id)arg1 dataSource:(id)arg2;	// IMP=0x000000010006a11c
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000010006a0b8
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010006a09c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) SRSirilandView *view; // @dynamic view;

@end
