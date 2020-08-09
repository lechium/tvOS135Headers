//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class CADisplayLink, MPModelPlayEvent, MPModelSong, MSVLyricsSongInfo, NSArray, NSDateComponentsFormatter, NSMutableArray, NSMutableSet, NSObject, NSString, TVMusicLyricsLineLabel, TVMusicPlaceholderCountdownLabel, TVMusicTimestampLabel, TVSStateMachine, UIFont, UILabel, UIScrollView, UISpringTimingParameters, UITapGestureRecognizer, UIView;
@protocol TVMusicTimedLyricsViewControllerDelegate;

@interface TVMusicTimedLyricsViewController : UIViewController <UIScrollViewDelegate, UIGestureRecognizerDelegate>
{
    _Bool _activeForCurrentSong;	// 8 = 0x8
    _Bool _playButtonEnabled;	// 9 = 0x9
    _Bool _allowCascade;	// 10 = 0xa
    _Bool _viewReportedVisible;	// 11 = 0xb
    _Bool _isPlayingInterlude;	// 12 = 0xc
    NSObject<TVMusicTimedLyricsViewControllerDelegate> *_timedLyricsDelegate;	// 16 = 0x10
    double _currentLineCenterY;	// 24 = 0x18
    MPModelSong *_song;	// 32 = 0x20
    NSString *_PAFFeatureName;	// 40 = 0x28
    MPModelPlayEvent *_PAFContainerData;	// 48 = 0x30
    MSVLyricsSongInfo *_lyricsInfo;	// 56 = 0x38
    TVSStateMachine *_stateMachine;	// 64 = 0x40
    double _startViewTime;	// 72 = 0x48
    long long _highlightedLineIndex;	// 80 = 0x50
    double _leftMargin;	// 88 = 0x58
    NSArray *_textLabels;	// 96 = 0x60
    UIScrollView *_scrollView;	// 104 = 0x68
    CADisplayLink *_displayLink;	// 112 = 0x70
    double _lastPollTime;	// 120 = 0x78
    long long _currentLabelIndex;	// 128 = 0x80
    long long _selectedLabelIndex;	// 136 = 0x88
    TVMusicPlaceholderCountdownLabel *_dummyFirstLine;	// 144 = 0x90
    TVMusicPlaceholderCountdownLabel *_interludePlaceholder;	// 152 = 0x98
    TVMusicTimestampLabel *_lineStartTimeLabel;	// 160 = 0xa0
    UILabel *_songwritersLabel;	// 168 = 0xa8
    UIFont *_lyricsFont;	// 176 = 0xb0
    UIView *_contentView;	// 184 = 0xb8
    UITapGestureRecognizer *_tripleClickRecognizer;	// 192 = 0xc0
    UITapGestureRecognizer *_menuRecognizer;	// 200 = 0xc8
    double _lastMenuClickTime;	// 208 = 0xd0
    NSDateComponentsFormatter *_minutesFormatter;	// 216 = 0xd8
    NSDateComponentsFormatter *_secondsFormatter;	// 224 = 0xe0
    double _targetScrollY;	// 232 = 0xe8
    long long _userInterfaceStyle;	// 240 = 0xf0
    double _playButtonEnableTime;	// 248 = 0xf8
    UISpringTimingParameters *_springTimingParameters;	// 256 = 0x100
    NSMutableSet *_hiddenLabels;	// 264 = 0x108
    double _firstLineYPos;	// 272 = 0x110
    NSArray *_cascadeLabels;	// 280 = 0x118
    double _cascadeScrollStartY;	// 288 = 0x120
    NSMutableArray *_cascadeOffsets;	// 296 = 0x128
    TVMusicLyricsLineLabel *_animatingTopLabel;	// 304 = 0x130
    double _timestampYPosition;	// 312 = 0x138
    NSString *_translatedLanguage;	// 320 = 0x140
    double _selectYPosition;	// 328 = 0x148
    double _interludeStartTime;	// 336 = 0x150
    double _interludeEndTime;	// 344 = 0x158
    long long _indexOfLabelBeforeInterlude;	// 352 = 0x160
    double _lineSpacing;	// 360 = 0x168
    double _scrollAnimationSpringDamping;	// 368 = 0x170
    double _highlightAnimationDuration;	// 376 = 0x178
    double _textDownscaleRatio;	// 384 = 0x180
    double _preScrollTime;	// 392 = 0x188
    double _highlightedTextAlpha;	// 400 = 0x190
    double _unhighlightedTextAlpha;	// 408 = 0x198
    struct CGSize _viewSize;	// 416 = 0x1a0
}

- (void).cxx_destruct;	// IMP=0x00000001000c730c
@property(nonatomic) double unhighlightedTextAlpha; // @synthesize unhighlightedTextAlpha=_unhighlightedTextAlpha;
@property(nonatomic) double highlightedTextAlpha; // @synthesize highlightedTextAlpha=_highlightedTextAlpha;
@property(nonatomic) double preScrollTime; // @synthesize preScrollTime=_preScrollTime;
@property(nonatomic) double textDownscaleRatio; // @synthesize textDownscaleRatio=_textDownscaleRatio;
@property(nonatomic) double highlightAnimationDuration; // @synthesize highlightAnimationDuration=_highlightAnimationDuration;
@property(nonatomic) double scrollAnimationSpringDamping; // @synthesize scrollAnimationSpringDamping=_scrollAnimationSpringDamping;
@property(nonatomic) double lineSpacing; // @synthesize lineSpacing=_lineSpacing;
@property(nonatomic) long long indexOfLabelBeforeInterlude; // @synthesize indexOfLabelBeforeInterlude=_indexOfLabelBeforeInterlude;
@property(nonatomic) double interludeEndTime; // @synthesize interludeEndTime=_interludeEndTime;
@property(nonatomic) double interludeStartTime; // @synthesize interludeStartTime=_interludeStartTime;
@property(nonatomic) _Bool isPlayingInterlude; // @synthesize isPlayingInterlude=_isPlayingInterlude;
@property(nonatomic) double selectYPosition; // @synthesize selectYPosition=_selectYPosition;
@property(copy, nonatomic) NSString *translatedLanguage; // @synthesize translatedLanguage=_translatedLanguage;
@property(nonatomic, getter=isViewReportedVisible) _Bool viewReportedVisible; // @synthesize viewReportedVisible=_viewReportedVisible;
@property(nonatomic) double timestampYPosition; // @synthesize timestampYPosition=_timestampYPosition;
@property(retain, nonatomic) TVMusicLyricsLineLabel *animatingTopLabel; // @synthesize animatingTopLabel=_animatingTopLabel;
@property(retain, nonatomic) NSMutableArray *cascadeOffsets; // @synthesize cascadeOffsets=_cascadeOffsets;
@property(nonatomic) double cascadeScrollStartY; // @synthesize cascadeScrollStartY=_cascadeScrollStartY;
@property(retain, nonatomic) NSArray *cascadeLabels; // @synthesize cascadeLabels=_cascadeLabels;
@property(nonatomic) _Bool allowCascade; // @synthesize allowCascade=_allowCascade;
@property(nonatomic) double firstLineYPos; // @synthesize firstLineYPos=_firstLineYPos;
@property(retain, nonatomic) NSMutableSet *hiddenLabels; // @synthesize hiddenLabels=_hiddenLabels;
@property(retain, nonatomic) UISpringTimingParameters *springTimingParameters; // @synthesize springTimingParameters=_springTimingParameters;
@property(nonatomic) double playButtonEnableTime; // @synthesize playButtonEnableTime=_playButtonEnableTime;
@property(nonatomic) long long userInterfaceStyle; // @synthesize userInterfaceStyle=_userInterfaceStyle;
@property(nonatomic) double targetScrollY; // @synthesize targetScrollY=_targetScrollY;
@property(retain, nonatomic) NSDateComponentsFormatter *secondsFormatter; // @synthesize secondsFormatter=_secondsFormatter;
@property(retain, nonatomic) NSDateComponentsFormatter *minutesFormatter; // @synthesize minutesFormatter=_minutesFormatter;
@property(nonatomic) double lastMenuClickTime; // @synthesize lastMenuClickTime=_lastMenuClickTime;
@property(retain, nonatomic) UITapGestureRecognizer *menuRecognizer; // @synthesize menuRecognizer=_menuRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *tripleClickRecognizer; // @synthesize tripleClickRecognizer=_tripleClickRecognizer;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic, getter=isPlayButtonEnabled) _Bool playButtonEnabled; // @synthesize playButtonEnabled=_playButtonEnabled;
@property(retain, nonatomic) UIFont *lyricsFont; // @synthesize lyricsFont=_lyricsFont;
@property(retain, nonatomic) UILabel *songwritersLabel; // @synthesize songwritersLabel=_songwritersLabel;
@property(retain, nonatomic) TVMusicTimestampLabel *lineStartTimeLabel; // @synthesize lineStartTimeLabel=_lineStartTimeLabel;
@property(retain, nonatomic) TVMusicPlaceholderCountdownLabel *interludePlaceholder; // @synthesize interludePlaceholder=_interludePlaceholder;
@property(retain, nonatomic) TVMusicPlaceholderCountdownLabel *dummyFirstLine; // @synthesize dummyFirstLine=_dummyFirstLine;
@property(nonatomic) long long selectedLabelIndex; // @synthesize selectedLabelIndex=_selectedLabelIndex;
@property(nonatomic) long long currentLabelIndex; // @synthesize currentLabelIndex=_currentLabelIndex;
@property(nonatomic) double lastPollTime; // @synthesize lastPollTime=_lastPollTime;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) NSArray *textLabels; // @synthesize textLabels=_textLabels;
@property(nonatomic) double leftMargin; // @synthesize leftMargin=_leftMargin;
@property(nonatomic) struct CGSize viewSize; // @synthesize viewSize=_viewSize;
@property(nonatomic) long long highlightedLineIndex; // @synthesize highlightedLineIndex=_highlightedLineIndex;
@property(nonatomic) double startViewTime; // @synthesize startViewTime=_startViewTime;
@property(retain, nonatomic) TVSStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(retain, nonatomic) MSVLyricsSongInfo *lyricsInfo; // @synthesize lyricsInfo=_lyricsInfo;
@property(retain, nonatomic) MPModelPlayEvent *PAFContainerData; // @synthesize PAFContainerData=_PAFContainerData;
@property(copy, nonatomic) NSString *PAFFeatureName; // @synthesize PAFFeatureName=_PAFFeatureName;
@property(retain, nonatomic) MPModelSong *song; // @synthesize song=_song;
@property(nonatomic) double currentLineCenterY; // @synthesize currentLineCenterY=_currentLineCenterY;
@property(nonatomic) _Bool activeForCurrentSong; // @synthesize activeForCurrentSong=_activeForCurrentSong;
@property(nonatomic) __weak NSObject<TVMusicTimedLyricsViewControllerDelegate> *timedLyricsDelegate; // @synthesize timedLyricsDelegate=_timedLyricsDelegate;
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x00000001000c6b2c
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x00000001000c6abc
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x00000001000c6884
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x00000001000c6814
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x00000001000c675c
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x00000001000c66b8
- (void)_reportPAFEventForLyricsView;	// IMP=0x00000001000c627c
- (double)_springAnimate:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000c60dc
- (double)_springAnimate:(CDUnknownBlockType)arg1;	// IMP=0x00000001000c60cc
- (double)_scrollToLine:(long long)arg1 animated:(_Bool)arg2 cascading:(_Bool)arg3;	// IMP=0x00000001000c598c
- (double)_scrollOffsetForLine:(long long)arg1;	// IMP=0x00000001000c5840
- (void)_scaleView:(id)arg1 scaleFactor:(double)arg2;	// IMP=0x00000001000c575c
- (void)_unhighlightLabel:(id)arg1;	// IMP=0x00000001000c5598
- (void)_highlightLabel:(id)arg1;	// IMP=0x00000001000c540c
- (void)_unhideLabel:(id)arg1;	// IMP=0x00000001000c5318
- (void)_hideLabel:(id)arg1;	// IMP=0x00000001000c51b8
- (void)_updateInterludeProgressForPlayPosition:(double)arg1;	// IMP=0x00000001000c511c
- (void)_updateLyricsCountdownViewForPlayPosition:(double)arg1;	// IMP=0x00000001000c5008
- (void)_redisplayHiddenLines;	// IMP=0x00000001000c4d4c
- (id)_labelsToHide;	// IMP=0x00000001000c4bd0
- (void)_hideLinesAboveCurrentLine;	// IMP=0x00000001000c4a40
- (void)_displayLinkUpdate;	// IMP=0x00000001000c44ec
- (_Bool)_canShowPlayButton;	// IMP=0x00000001000c4458
@property(readonly, nonatomic) _Bool isAutoScrolling;
- (void)_animateLabelsForScrollPosition:(double)arg1;	// IMP=0x00000001000c4004
- (_Bool)_animateCascadeLabels:(id)arg1 relativeScrollOffset:(double)arg2;	// IMP=0x00000001000c3d40
- (_Bool)_animateCascadeLabel:(id)arg1 labelIndexOffset:(long long)arg2 labelStartY:(double)arg3 relativeScrollOffset:(double)arg4;	// IMP=0x00000001000c3bec
- (void)_highlightLine:(long long)arg1;	// IMP=0x00000001000c3978
- (void)_stopTimedLyricsUpdating;	// IMP=0x00000001000c384c
- (void)_startTimedLyricsUpdating;	// IMP=0x00000001000c3694
- (void)viewDidLayoutSubviews;	// IMP=0x00000001000c3564
- (id)_labelForText:(id)arg1 textColor:(id)arg2 yPos:(double)arg3;	// IMP=0x00000001000c3388
- (void)_play;	// IMP=0x00000001000c328c
- (void)_handleTripleClick:(id)arg1;	// IMP=0x00000001000c3280
- (void)_handleMenuButton:(id)arg1;	// IMP=0x00000001000c3220
- (void)_getDataFromAdjustmentPanel:(id)arg1;	// IMP=0x00000001000c2fc8
- (void)_showAdjustmentsView;	// IMP=0x00000001000c2c00
- (void)_jumpToCurrentLocation;	// IMP=0x00000001000c29e8
- (long long)_indexForLabelClosestTo:(double)arg1;	// IMP=0x00000001000c27ac
- (long long)_lyricsLineIndexForLabelClosestTo:(double)arg1;	// IMP=0x00000001000c2748
- (_Bool)_isInSystemNowPlaying;	// IMP=0x00000001000c26a4
- (_Bool)_isViewActuallyVisible;	// IMP=0x00000001000c2628
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000001000c25d4
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000001000c2584
- (void)_viewWillDisappear;	// IMP=0x00000001000c24ac
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000001000c2448
- (void)_viewDidAppear;	// IMP=0x00000001000c236c
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000001000c21cc
- (void)_updateLabelPositionsWithLinespacing:(double)arg1 font:(id)arg2;	// IMP=0x00000001000c1dfc
- (long long)_indexOfLyricsLineAtTime:(double)arg1;	// IMP=0x00000001000c1c58
- (id)_lyricsTextColor;	// IMP=0x00000001000c1be4
- (id)_stringForTimeInterval:(double)arg1;	// IMP=0x00000001000c1afc
- (void)_configureStartTimeLabelForLine:(long long)arg1;	// IMP=0x00000001000c1810
- (id)_createSongwritersLabelAtYPosition:(double)arg1;	// IMP=0x00000001000c159c
- (void)_registerStateMachineHandlers;	// IMP=0x00000001000c03a4
- (_Bool)_handleInterludeForLabelIndex:(long long)arg1 atElapsedTime:(double)arg2;	// IMP=0x00000001000bff7c
- (void)_closeInterludeGap;	// IMP=0x00000001000bfba4
- (double)_openInterludeGapAfterLabelIndex:(long long)arg1;	// IMP=0x00000001000bf918
- (void)_showInterludePlaceholderAfterLabelIndex:(long long)arg1;	// IMP=0x00000001000bf594
- (void)_serviceAutoscrollTimeout;	// IMP=0x00000001000bf4f0
- (void)_clearAutoscrollTimeout;	// IMP=0x00000001000bf4e0
- (void)_setAutoscrollTimeout;	// IMP=0x00000001000bf4b4
- (id)_labelAtIndex:(long long)arg1;	// IMP=0x00000001000bf3f4
- (void)setPlayButtonEnabled:(_Bool)arg1 updateLineHighlight:(_Bool)arg2;	// IMP=0x00000001000bf0a8
@property(nonatomic) double fontSize;
- (struct CGSize)preferredContentSize;	// IMP=0x00000001000bead8
- (void)_setTextAlphaForUserInterfaceStyle:(long long)arg1;	// IMP=0x00000001000bea88
- (void)_setTextVibrancyForUserInterfaceStyle:(long long)arg1;	// IMP=0x00000001000be9d0
- (void)_updateForUserInterfaceStyle:(long long)arg1;	// IMP=0x00000001000be7c0
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000001000be63c
- (void)viewDidLoad;	// IMP=0x00000001000bd340
- (void)applicationDidBecomeActive:(id)arg1;	// IMP=0x00000001000bd334
- (void)applicationWillResignActive:(id)arg1;	// IMP=0x00000001000bd2ac
- (_Bool)handleSelectGesture;	// IMP=0x00000001000bd1e4
- (id)initWithLyricsInfo:(id)arg1 viewSize:(struct CGSize)arg2;	// IMP=0x00000001000bcc98
- (id)initWithLyricsInfo:(id)arg1;	// IMP=0x00000001000bcc80

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

