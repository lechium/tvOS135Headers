//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep  6 2019 11:16:02).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AFUserUtterance, AFUserUtteranceSelectionResults, AceObject, NSArray, NSBundle, NSDate, NSIndexPath, NSString, NSURL, NSUUID, SASSpeechRecognized, SRTranscriptStackViewController, UIView, UIViewController;
@protocol SAAceCommand;

@protocol SRTranscriptStackViewControllerDelegate <NSObject>
- (void)willSendStartRequestForTranscriptStackViewController:(SRTranscriptStackViewController *)arg1;
- (void)transcriptStackViewControllerDidResignFirstResponder:(SRTranscriptStackViewController *)arg1;
- (void)transcriptStackViewController:(SRTranscriptStackViewController *)arg1 failTest:(NSString *)arg2 withReason:(NSString *)arg3;
- (void)transcriptStackViewController:(SRTranscriptStackViewController *)arg1 didFinishTest:(NSString *)arg2;
- (void)transcriptStackViewController:(SRTranscriptStackViewController *)arg1 willStartTest:(NSString *)arg2;
- (_Bool)inTextInputModeForTranscriptStackViewController:(SRTranscriptStackViewController *)arg1;
- (void)transcriptStackViewController:(SRTranscriptStackViewController *)arg1 viewDidSetContentSizeForTranscriptAtIndex:(long long)arg2;
- (void)transcriptStackViewController:(SRTranscriptStackViewController *)arg1 requestPasscodeUnlockWithCompletion:(void (^)(long long))arg2;
- (unsigned long long)deviceLockStateForTranscriptStackViewController:(SRTranscriptStackViewController *)arg1;
- (AFUserUtterance *)transcriptStackViewController:(SRTranscriptStackViewController *)arg1 updatedUserUtteranceForRefId:(NSString *)arg2;
- (NSArray *)transcriptStackViewController:(SRTranscriptStackViewController *)arg1 additionalSpeechInterpretationsForRefId:(NSString *)arg2;
- (void)transcriptStackViewController:(SRTranscriptStackViewController *)arg1 didShowGuideStartDate:(NSDate *)arg2 endDate:(NSDate *)arg3;
- (void)transcriptStackViewController:(SRTranscriptStackViewController *)arg1 didShowTipWithIdentifier:(NSUUID *)arg2 startDate:(NSDate *)arg3 endDate:(NSDate *)arg4 flowID:(NSString *)arg5;
- (void)transcriptStackViewController:(SRTranscriptStackViewController *)arg1 didShowAceViewWithIdentifier:(NSUUID *)arg2 aceViewClass:(Class)arg3 metricsContext:(NSString *)arg4 forInterval:(double)arg5;
- (void)transcriptStackViewController:(SRTranscriptStackViewController *)arg1 didScrollForInterval:(double)arg2 metricsContext:(NSString *)arg3;
- (void)transcriptStackViewController:(SRTranscriptStackViewController *)arg1 didEditSpeechRecognized:(SASSpeechRecognized *)arg2 forInterval:(double)arg3;
- (void)transcriptStackViewController:(SRTranscriptStackViewController *)arg1 shouldPresentPicker:(UIViewController *)arg2 completion:(void (^)(_Bool))arg3;
- (void)transcriptStackViewController:(SRTranscriptStackViewController *)arg1 setStatusBarHidden:(_Bool)arg2 animated:(_Bool)arg3 completion:(void (^)(_Bool))arg4;
- (void)transcriptStackViewController:(SRTranscriptStackViewController *)arg1 setStatusBarHidden:(_Bool)arg2 animated:(_Bool)arg3;
- (void)transcriptStackViewController:(SRTranscriptStackViewController *)arg1 didRequestKeyboardWithVisibility:(_Bool)arg2;
- (void)transcriptStackViewController:(SRTranscriptStackViewController *)arg1 didDismissViewController:(UIViewController *)arg2;
- (void)transcriptStackViewController:(SRTranscriptStackViewController *)arg1 willDismissViewController:(UIViewController *)arg2;
- (void)transcriptStackViewController:(SRTranscriptStackViewController *)arg1 didPresentViewController:(UIViewController *)arg2;
- (void)transcriptStackViewController:(SRTranscriptStackViewController *)arg1 willPresentViewController:(UIViewController *)arg2;
- (void)transcriptStackViewController:(SRTranscriptStackViewController *)arg1 setTypeToSiriViewHidden:(_Bool)arg2;
- (void)transcriptStackViewController:(SRTranscriptStackViewController *)arg1 setStatusViewHidden:(_Bool)arg2;
- (_Bool)transcriptStackViewControllerShouldPreventUserInteraction:(SRTranscriptStackViewController *)arg1;
- (void)transcriptStackViewController:(SRTranscriptStackViewController *)arg1 openURL:(NSURL *)arg2 conversationItemIdentifier:(NSUUID *)arg3 completion:(void (^)(_Bool))arg4;
- (NSBundle *)effectiveCoreLocationBundleForTranscriptStackViewController:(SRTranscriptStackViewController *)arg1;
- (void)transcriptStackViewController:(SRTranscriptStackViewController *)arg1 synthesizeSpeechWithPhoneticText:(NSString *)arg2 completion:(void (^)(void))arg3;
- (void)stopSpeakingForTranscriptStackViewController:(SRTranscriptStackViewController *)arg1;
- (void)transcriptStackViewController:(SRTranscriptStackViewController *)arg1 speakText:(NSString *)arg2 isPhonetic:(_Bool)arg3 completion:(void (^)(void))arg4;
- (void)cancelRequestForTranscriptStackViewController:(SRTranscriptStackViewController *)arg1;
- (void)transcriptStackViewController:(SRTranscriptStackViewController *)arg1 performAceCommand:(AceObject<SAAceCommand> *)arg2 conversationItemIdentifier:(NSUUID *)arg3 completion:(void (^)(_Bool))arg4;
- (void)transcriptStackViewController:(SRTranscriptStackViewController *)arg1 didCorrectRecognition:(NSString *)arg2 correctionIdentifier:(id)arg3 forItemAtIndexPath:(NSIndexPath *)arg4 userSelectionResults:(AFUserUtteranceSelectionResults *)arg5;
- (void)transcriptStackViewControllerDidEndEditing:(SRTranscriptStackViewController *)arg1;
- (void)transcriptStackViewControllerWillBeginEditing:(SRTranscriptStackViewController *)arg1;
- (void)transcriptStackViewControllerRequestKeyboardForTapToEditWithCompletion:(void (^)(_Bool))arg1;
- (void)transcriptStackViewController:(SRTranscriptStackViewController *)arg1 didDelayPresentationOfItemsWithIdentifiers:(NSArray *)arg2;
- (void)transcriptStackViewController:(SRTranscriptStackViewController *)arg1 willDiscardConversationItemsWithIdentifiers:(NSArray *)arg2;
- (void)transcriptStackViewController:(SRTranscriptStackViewController *)arg1 didPresentConversationItemsWithIdentifiers:(NSArray *)arg2;
- (void)transcriptStackViewController:(SRTranscriptStackViewController *)arg1 didHideVibrantView:(UIView *)arg2;
- (void)transcriptStackViewControllerDidShowSuggestions:(SRTranscriptStackViewController *)arg1;
- (_Bool)transcriptStackViewControllerWillShowSuggestions:(SRTranscriptStackViewController *)arg1;
- (_Bool)transcriptStackViewControllerShouldDelaySuggestions:(SRTranscriptStackViewController *)arg1;
- (long long)initialDisplayTypeForTranscriptStackViewController:(SRTranscriptStackViewController *)arg1;
- (double)statusViewHeightForTranscriptStackViewController:(SRTranscriptStackViewController *)arg1;
- (struct CGRect)statusBarFrameForTranscriptStackViewController:(SRTranscriptStackViewController *)arg1;
- (void)transcriptStackViewControllerDidExitSiriland:(SRTranscriptStackViewController *)arg1;
- (void)transcriptStackViewControllerWillEnterSiriland:(SRTranscriptStackViewController *)arg1;
- (double)contentWidthForTranscriptStackViewController:(SRTranscriptStackViewController *)arg1;
@end

