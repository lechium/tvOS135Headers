//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AFConversationDelegate-Protocol.h"
#import "SRTranscriptStackViewControllerDataSource-Protocol.h"
#import "SRTranscriptStackViewControllerDelegate-Protocol.h"
#import "SiriUISuggestionsViewDelegate-Protocol.h"

@class AFConversation, NSString, SRTranscriptStackViewController, SiriUISuggestionsView;
@protocol SRSuggestionsViewControllerDelegate;

@interface SRSuggestionsViewController : UIViewController <SiriUISuggestionsViewDelegate, SRTranscriptStackViewControllerDelegate, SRTranscriptStackViewControllerDataSource, AFConversationDelegate>
{
    AFConversation *_conversation;	// 8 = 0x8
    SRTranscriptStackViewController *_guideController;	// 16 = 0x10
    id <SRSuggestionsViewControllerDelegate> _delegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100027fbc
@property(nonatomic) __weak id <SRSuggestionsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)_canShowWhileLocked;	// IMP=0x0000000100027f84
- (_Bool)suggestionsViewIsInTextInputMode:(id)arg1;	// IMP=0x0000000100027ef0
- (double)contentWidthForSuggestionsView:(id)arg1;	// IMP=0x0000000100027e94
- (void)suggestionsView:(id)arg1 didHideVibrantView:(id)arg2;	// IMP=0x0000000100027dfc
- (double)statusViewHeightForSuggestionsView:(id)arg1;	// IMP=0x0000000100027da0
- (double)statusBarHeightForSuggestionsView:(id)arg1;	// IMP=0x0000000100027d40
- (void)didShowSuggestionsForSuggestionsView:(id)arg1;	// IMP=0x0000000100027cac
- (void)conversation:(id)arg1 presentationStateDidChangeForItemsAtIndexPaths:(id)arg2;	// IMP=0x0000000100027c90
- (void)siriDidFinishActionsForConversationItemWithIdentifier:(id)arg1 inConversation:(id)arg2;	// IMP=0x0000000100027c48
- (void)conversation:(id)arg1 didRemoveItemsWithIdentifiers:(id)arg2 atIndexPaths:(id)arg3 parentItemIdentifiers:(id)arg4;	// IMP=0x0000000100027bd4
- (void)conversation:(id)arg1 didUpdateItemsAtIndexPaths:(id)arg2;	// IMP=0x0000000100027bb8
- (void)conversation:(id)arg1 didInsertItemsAtIndexPaths:(id)arg2;	// IMP=0x0000000100027b9c
- (void)transcriptStackViewController:(id)arg1 setTypeToSiriViewHidden:(_Bool)arg2;	// IMP=0x0000000100027b98
- (_Bool)inTextInputModeForTranscriptStackViewController:(id)arg1;	// IMP=0x0000000100027b04
- (void)transcriptStackViewController:(id)arg1 failTest:(id)arg2 withReason:(id)arg3;	// IMP=0x0000000100027b00
- (void)willSendStartRequestForTranscriptStackViewController:(id)arg1;	// IMP=0x0000000100027afc
- (void)transcriptStackViewController:(id)arg1 didDelayPresentationOfItemsWithIdentifiers:(id)arg2;	// IMP=0x0000000100027af8
- (void)transcriptStackViewController:(id)arg1 willDiscardConversationItemsWithIdentifiers:(id)arg2;	// IMP=0x0000000100027af4
- (void)transcriptStackViewController:(id)arg1 setStatusBarHidden:(_Bool)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100027af0
- (void)transcriptStackViewController:(id)arg1 setStatusBarHidden:(_Bool)arg2 animated:(_Bool)arg3;	// IMP=0x0000000100027aec
- (void)transcriptStackViewController:(id)arg1 didFinishTest:(id)arg2;	// IMP=0x0000000100027ae8
- (void)transcriptStackViewController:(id)arg1 willStartTest:(id)arg2;	// IMP=0x0000000100027ae4
- (void)transcriptStackViewController:(id)arg1 viewDidSetContentSizeForTranscriptAtIndex:(long long)arg2;	// IMP=0x0000000100027ae0
- (void)transcriptStackViewController:(id)arg1 requestPasscodeUnlockWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100027adc
- (void)transcriptStackViewController:(id)arg1 didShowGuideStartDate:(id)arg2 endDate:(id)arg3;	// IMP=0x0000000100027ad8
- (void)transcriptStackViewController:(id)arg1 didShowTipWithIdentifier:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 flowID:(id)arg5;	// IMP=0x0000000100027ad4
- (void)transcriptStackViewController:(id)arg1 didShowAceViewWithIdentifier:(id)arg2 aceViewClass:(Class)arg3 metricsContext:(id)arg4 forInterval:(double)arg5;	// IMP=0x0000000100027ad0
- (void)transcriptStackViewController:(id)arg1 didScrollForInterval:(double)arg2 metricsContext:(id)arg3;	// IMP=0x0000000100027acc
- (void)transcriptStackViewController:(id)arg1 didEditSpeechRecognized:(id)arg2 forInterval:(double)arg3;	// IMP=0x0000000100027ac8
- (void)transcriptStackViewController:(id)arg1 shouldPresentPicker:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100027ac4
- (void)transcriptStackViewController:(id)arg1 setStatusBarHidden:(_Bool)arg2;	// IMP=0x0000000100027ac0
- (void)transcriptStackViewController:(id)arg1 didRequestKeyboardWithVisibility:(_Bool)arg2;	// IMP=0x0000000100027abc
- (void)transcriptStackViewController:(id)arg1 didDismissViewController:(id)arg2;	// IMP=0x0000000100027ab8
- (void)transcriptStackViewController:(id)arg1 willDismissViewController:(id)arg2;	// IMP=0x0000000100027ab4
- (void)transcriptStackViewController:(id)arg1 didPresentViewController:(id)arg2;	// IMP=0x0000000100027ab0
- (void)transcriptStackViewController:(id)arg1 willPresentViewController:(id)arg2;	// IMP=0x0000000100027aac
- (void)transcriptStackViewController:(id)arg1 setStatusViewHidden:(_Bool)arg2;	// IMP=0x0000000100027aa8
- (void)transcriptStackViewController:(id)arg1 openURL:(id)arg2 conversationItemIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100027aa4
- (void)transcriptStackViewController:(id)arg1 synthesizeSpeechWithPhoneticText:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100027aa0
- (void)stopSpeakingForTranscriptStackViewController:(id)arg1;	// IMP=0x0000000100027a9c
- (void)transcriptStackViewController:(id)arg1 speakText:(id)arg2 isPhonetic:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100027a98
- (void)cancelRequestForTranscriptStackViewController:(id)arg1;	// IMP=0x0000000100027a94
- (void)transcriptStackViewController:(id)arg1 didCorrectRecognition:(id)arg2 correctionIdentifier:(id)arg3 forItemAtIndexPath:(id)arg4 userSelectionResults:(id)arg5;	// IMP=0x0000000100027a90
- (void)transcriptStackViewControllerDidResignFirstResponder:(id)arg1;	// IMP=0x0000000100027a8c
- (void)transcriptStackViewControllerDidEndEditing:(id)arg1;	// IMP=0x0000000100027a88
- (void)transcriptStackViewControllerWillBeginEditing:(id)arg1;	// IMP=0x0000000100027a84
- (void)transcriptStackViewControllerRequestKeyboardForTapToEditWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100027a80
- (void)transcriptStackViewController:(id)arg1 didPresentConversationItemsWithIdentifiers:(id)arg2;	// IMP=0x0000000100027a7c
- (void)transcriptStackViewController:(id)arg1 didHideVibrantView:(id)arg2;	// IMP=0x0000000100027a78
- (void)transcriptStackViewControllerDidShowSuggestions:(id)arg1;	// IMP=0x0000000100027a74
- (void)transcriptStackViewControllerDidExitSiriland:(id)arg1;	// IMP=0x0000000100027a70
- (void)transcriptStackViewControllerWillEnterSiriland:(id)arg1;	// IMP=0x0000000100027a6c
- (CDStruct_a82615c4)keyboardInfoForTranscriptStackViewController:(id)arg1;	// IMP=0x00000001000279fc
- (unsigned long long)deviceLockStateForTranscriptStackViewController:(id)arg1;	// IMP=0x00000001000279f4
- (id)transcriptStackViewController:(id)arg1 updatedUserUtteranceForRefId:(id)arg2;	// IMP=0x00000001000279ec
- (id)transcriptStackViewController:(id)arg1 additionalSpeechInterpretationsForRefId:(id)arg2;	// IMP=0x00000001000279e4
- (id)effectiveCoreLocationBundleForTranscriptStackViewController:(id)arg1;	// IMP=0x00000001000279dc
- (_Bool)transcriptStackViewControllerShouldPreventUserInteraction:(id)arg1;	// IMP=0x00000001000279d4
- (_Bool)transcriptStackViewControllerWillShowSuggestions:(id)arg1;	// IMP=0x00000001000279cc
- (_Bool)transcriptStackViewControllerShouldDelaySuggestions:(id)arg1;	// IMP=0x00000001000279c4
- (void)transcriptStackViewController:(id)arg1 performAceCommand:(id)arg2 conversationItemIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100027914
- (long long)initialDisplayTypeForTranscriptStackViewController:(id)arg1;	// IMP=0x000000010002790c
- (double)statusViewHeightForTranscriptStackViewController:(id)arg1;	// IMP=0x00000001000278b0
- (struct CGRect)statusBarFrameForTranscriptStackViewController:(id)arg1;	// IMP=0x0000000100027834
- (double)contentWidthForTranscriptStackViewController:(id)arg1;	// IMP=0x00000001000277d8
- (id)siriEnabledAppListForTranscriptStackViewController:(id)arg1;	// IMP=0x000000010002777c
- (id)domainObjectStoreForTranscriptStackViewController:(id)arg1;	// IMP=0x0000000100027774
- (id)conversationForTranscriptStackViewController:(id)arg1;	// IMP=0x0000000100027764
- (long long)siriStateForTranscriptStackViewController:(id)arg1;	// IMP=0x000000010002775c
- (void)keyboardHeightDidChange;	// IMP=0x0000000100027744
- (void)_createGuideController;	// IMP=0x0000000100027598
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0000000100027508
- (void)animateOut;	// IMP=0x0000000100027468
- (void)showRootGuide;	// IMP=0x0000000100027450
- (void)showGuideStart;	// IMP=0x0000000100027438
- (_Bool)isShowingGuide;	// IMP=0x00000001000273ec
- (void)showGuideAnimated:(_Bool)arg1;	// IMP=0x00000001000272ac
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000001000271e4
- (void)hideAcousticIDSpinner;	// IMP=0x00000001000271a4
- (void)showAcousticIDSpinner;	// IMP=0x0000000100027164
- (void)_showHeaderText:(id)arg1 subheaderText:(id)arg2 largeSubheaderText:(id)arg3;	// IMP=0x0000000100026ffc
- (void)showEmptyView;	// IMP=0x0000000100026f98
- (_Bool)isShowingUserNudge;	// IMP=0x0000000100026eac
- (void)showUserNudge;	// IMP=0x0000000100026e24
- (void)showGreeting;	// IMP=0x0000000100026da0
- (void)showUnavailable;	// IMP=0x0000000100026c34
- (id)_nudgeHeaderText;	// IMP=0x0000000100026b50
- (id)_initialHeaderText;	// IMP=0x0000000100026a6c
- (void)loadView;	// IMP=0x00000001000269b4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) SiriUISuggestionsView *view; // @dynamic view;

@end

