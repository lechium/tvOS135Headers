/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:37 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <AVKit/AVInfoPanelContentViewController.h>
#import <AVKit/AVInfoPanelMediaOptionSelectionDelegate.h>

@protocol AVInfoPanelLanguageDelegate;
@class AVInfoPanelAudioCollectionViewController, UIView, NSLayoutConstraint, AVObservationController, AVSpeakerManager, NSString;

@interface AVInfoPanelAudioViewController : AVInfoPanelContentViewController <AVInfoPanelMediaOptionSelectionDelegate> {

	AVInfoPanelAudioCollectionViewController* _languageCollectionViewController;
	AVInfoPanelAudioCollectionViewController* _soundCollectionViewController;
	AVInfoPanelAudioCollectionViewController* _speakerCollectionViewController;
	UIView* _languageHeaderView;
	UIView* _soundHeaderView;
	UIView* _speakerHeaderView;
	NSLayoutConstraint* _languageCollectionViewWidthConstraint;
	NSLayoutConstraint* _soundCollectionViewWidthConstraint;
	NSLayoutConstraint* _speakerCollectionViewWidthConstraint;
	NSLayoutConstraint* _languageCollectionViewHeightConstraint;
	NSLayoutConstraint* _soundCollectionViewHeightConstraint;
	NSLayoutConstraint* _speakerCollectionViewHeightConstraint;
	BOOL _hasSetupColumnWidthConstraints;
	BOOL _hasSetupColumnHeightConstraints;
	AVObservationController* _kvoController;
	int _lateNightModeNotificationToken;
	BOOL _isSpeakerRefreshPending;
	id<AVInfoPanelLanguageDelegate> _delegate;
	unsigned long long _selectedLanguageOptionIndex;
	unsigned long long _selectedSoundOptionIndex;
	AVSpeakerManager* _speakerManager;

}

@property (nonatomic,retain) AVSpeakerManager * speakerManager;                            //@synthesize speakerManager=_speakerManager - In the implementation block
@property (assign,nonatomic,__weak) id<AVInfoPanelLanguageDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long selectedLanguageOptionIndex;               //@synthesize selectedLanguageOptionIndex=_selectedLanguageOptionIndex - In the implementation block
@property (assign,nonatomic) unsigned long long selectedSoundOptionIndex;                  //@synthesize selectedSoundOptionIndex=_selectedSoundOptionIndex - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_preventsAppearanceProxyCustomization;
-(id)init;
-(void)dealloc;
-(id<AVInfoPanelLanguageDelegate>)delegate;
-(void)setDelegate:(id<AVInfoPanelLanguageDelegate>)arg1 ;
-(BOOL)hasContent;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)mediaOptionCollectionViewController:(id)arg1 didSelectMediaOption:(id)arg2 ;
-(void)setAudibleMediaSelectionOptions:(id)arg1 ;
-(void)setSelectedLanguageOptionIndex:(unsigned long long)arg1 ;
-(void)_viewWillAppearSoon;
-(void)_setupLanguageColumn;
-(void)_setupSoundColumn;
-(void)_setupSpeakerColumn;
-(double)_preferredCellHeight;
-(double)_preferredLanguageColumnHeightForCellHeight:(double)arg1 ;
-(double)_preferredSoundColumnHeightForCellHeight:(double)arg1 ;
-(double)_preferredSpeakersColumnHeightForCellHeight:(double)arg1 ;
-(double)_largestColumnHeight;
-(double)_headerViewHeight;
-(CGSize)contentSizeForWidth:(double)arg1 ;
-(void)_createOrUpdateColumnHeightConstraints;
-(void)_createOrUpdateColumnWidthConstraints;
-(void)_updateSelectedSoundOption;
-(void)_scheduleAvailableSpeakersUpdate;
-(void)_updateSpeakerSelection;
-(void)_updateAvailableSpeakersOnlyAdding;
-(void)_updateAvailableSpeakers;
-(id)_newHeaderViewWithTitle:(id)arg1 ;
-(long long)_textAlignmentForUserInterfaceLayout;
-(unsigned long long)selectedLanguageOptionIndex;
-(unsigned long long)selectedSoundOptionIndex;
-(void)setSelectedSoundOptionIndex:(unsigned long long)arg1 ;
-(AVSpeakerManager *)speakerManager;
-(void)setSpeakerManager:(AVSpeakerManager *)arg1 ;
@end

