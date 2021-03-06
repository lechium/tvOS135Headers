//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "MTReachabilityObserver-Protocol.h"

@class IMActionSheetAction, MTColorTheme, MTEpisode, MTEpisodeArtworkView, MTEpisodeStateView, MTNowPlayingIndicatorView, MTTVEpisodeActionController, MTTouchInsetsButton, NSMutableDictionary, NSOperation, NSString, UIButton, UIImage, UIImageView, UILabel, UITextView;
@protocol MTEpisodeLockupDelegate;

@interface MTEpisodeLockup : UIView <MTReachabilityObserver>
{
    _Bool _initialized;	// 8 = 0x8
    NSMutableDictionary *_sizeCache;	// 16 = 0x10
    struct CGSize _descriptionSize;	// 24 = 0x18
    _Bool _editing;	// 40 = 0x28
    _Bool _expanded;	// 41 = 0x29
    _Bool _currentPlayerItem;	// 42 = 0x2a
    _Bool _shouldShowNowPlaying;	// 43 = 0x2b
    _Bool _showsPubDate;	// 44 = 0x2c
    _Bool _showsPlayState;	// 45 = 0x2d
    _Bool _showsDescriptionButton;	// 46 = 0x2e
    _Bool _showsFooterTextView;	// 47 = 0x2f
    _Bool _showsExplicitIcon;	// 48 = 0x30
    _Bool _showsStreamingIcon;	// 49 = 0x31
    _Bool _showsDocumentIcon;	// 50 = 0x32
    _Bool _showsErrorIcon;	// 51 = 0x33
    _Bool _showsAirplaneModeIcon;	// 52 = 0x34
    _Bool _showsArtwork;	// 53 = 0x35
    _Bool _showsMoreButton;	// 54 = 0x36
    MTEpisode *_episode;	// 56 = 0x38
    id <MTEpisodeLockupDelegate> _delegate;	// 64 = 0x40
    MTTVEpisodeActionController *_actionController;	// 72 = 0x48
    MTColorTheme *_colorTheme;	// 80 = 0x50
    unsigned long long _style;	// 88 = 0x58
    MTTouchInsetsButton *_moreButton;	// 96 = 0x60
    MTTouchInsetsButton *_descriptionButton;	// 104 = 0x68
    UIImage *_titleImage;	// 112 = 0x70
    NSOperation *_imageLoadingOperation;	// 120 = 0x78
    IMActionSheetAction *_moreAction;	// 128 = 0x80
    MTNowPlayingIndicatorView *_barsView;	// 136 = 0x88
    UITextView *_titleTextView;	// 144 = 0x90
    UILabel *_metadataLabel;	// 152 = 0x98
    UITextView *_descriptionTextView;	// 160 = 0xa0
    UITextView *_footerTextView;	// 168 = 0xa8
    MTEpisodeArtworkView *_artworkView;	// 176 = 0xb0
    UIImageView *_playStatusView;	// 184 = 0xb8
    UIImageView *_explicitIconView;	// 192 = 0xc0
    MTEpisodeStateView *_iconView;	// 200 = 0xc8
    MTEpisodeStateView *_buttonView;	// 208 = 0xd0
    unsigned long long _disabledReason;	// 216 = 0xd8
    struct UIEdgeInsets __layoutMargins;	// 224 = 0xe0
}

+ (id)metadataFooterFont;	// IMP=0x000000010010ad10
+ (id)descriptionFont;	// IMP=0x000000010010acac
+ (id)metadataHeaderFont;	// IMP=0x000000010010ac44
+ (id)titleFont;	// IMP=0x000000010010abe0
+ (id)footerTextStyle;	// IMP=0x000000010010abd0
+ (id)descriptionTextStyle;	// IMP=0x000000010010abc0
+ (id)titleTextStyle;	// IMP=0x000000010010abb0
+ (double)descriptionMaxHeightForCurrentOrientation;	// IMP=0x000000010010ab38
+ (double)leadingMarginForViewWidth:(double)arg1;	// IMP=0x000000010010ab00
+ (_Bool)useSelfSizingCells;	// IMP=0x000000010010aaf8
+ (_Bool)useLayoutForSkinnyPhones;	// IMP=0x000000010010aa90
+ (id)dependentPropertyKeys;	// IMP=0x000000010010a908
+ (id)mockEpisode;	// IMP=0x000000010010a56c
+ (_Bool)showsArtworkForStyle:(unsigned long long)arg1;	// IMP=0x000000010010a55c
+ (id)defaultArtworkWithSize:(struct CGSize)arg1;	// IMP=0x000000010010a4c4
+ (id)defaultArtworkForStyle:(unsigned long long)arg1;	// IMP=0x000000010010a490
+ (struct CGSize)artworkSizeForStyle:(unsigned long long)arg1;	// IMP=0x000000010010a248
+ (double)artworkHeightForStyle:(unsigned long long)arg1 sizeType:(unsigned long long)arg2;	// IMP=0x0000000100109f9c
+ (struct CGRect)frameForContentViewSize:(struct CGSize)arg1 style:(unsigned long long)arg2;	// IMP=0x0000000100109f1c
+ (double)maximumContentWidthForStyle:(unsigned long long)arg1;	// IMP=0x0000000100109f0c
+ (double)maximumContentWidthForStyle:(unsigned long long)arg1 showsPlayState:(_Bool)arg2;	// IMP=0x0000000100109e60
+ (unsigned long long)descriptionNumberOfLinesForStyle:(unsigned long long)arg1 isTitleMultipleLines:(_Bool)arg2;	// IMP=0x0000000100109de0
+ (unsigned long long)titleNumberOfLinesForStyle:(unsigned long long)arg1;	// IMP=0x0000000100109d7c
+ (double)estimatedHeightForWidth:(double)arg1 style:(unsigned long long)arg2;	// IMP=0x0000000100109cc4
+ (double)estimatedHeightForWidth:(double)arg1 showsArtwork:(_Bool)arg2;	// IMP=0x0000000100109c7c
+ (unsigned long long)styleForWidth:(double)arg1 showsArtwork:(_Bool)arg2;	// IMP=0x0000000100109c48
- (void).cxx_destruct;	// IMP=0x00000001001138dc
@property(nonatomic) _Bool showsMoreButton; // @synthesize showsMoreButton=_showsMoreButton;
@property(nonatomic) _Bool showsArtwork; // @synthesize showsArtwork=_showsArtwork;
@property(nonatomic) unsigned long long disabledReason; // @synthesize disabledReason=_disabledReason;
@property(retain, nonatomic) MTEpisodeStateView *buttonView; // @synthesize buttonView=_buttonView;
@property(retain, nonatomic) MTEpisodeStateView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UIImageView *explicitIconView; // @synthesize explicitIconView=_explicitIconView;
@property(retain, nonatomic) UIImageView *playStatusView; // @synthesize playStatusView=_playStatusView;
@property(retain, nonatomic) MTEpisodeArtworkView *artworkView; // @synthesize artworkView=_artworkView;
@property(retain, nonatomic) UITextView *footerTextView; // @synthesize footerTextView=_footerTextView;
@property(retain, nonatomic) UITextView *descriptionTextView; // @synthesize descriptionTextView=_descriptionTextView;
@property(retain, nonatomic) UILabel *metadataLabel; // @synthesize metadataLabel=_metadataLabel;
@property(retain, nonatomic) UITextView *titleTextView; // @synthesize titleTextView=_titleTextView;
@property(retain, nonatomic) MTNowPlayingIndicatorView *barsView; // @synthesize barsView=_barsView;
@property(retain, nonatomic) IMActionSheetAction *moreAction; // @synthesize moreAction=_moreAction;
@property(nonatomic) _Bool showsAirplaneModeIcon; // @synthesize showsAirplaneModeIcon=_showsAirplaneModeIcon;
@property(nonatomic) _Bool showsErrorIcon; // @synthesize showsErrorIcon=_showsErrorIcon;
@property(nonatomic) _Bool showsDocumentIcon; // @synthesize showsDocumentIcon=_showsDocumentIcon;
@property(nonatomic) _Bool showsStreamingIcon; // @synthesize showsStreamingIcon=_showsStreamingIcon;
@property(nonatomic) _Bool showsExplicitIcon; // @synthesize showsExplicitIcon=_showsExplicitIcon;
@property(nonatomic) _Bool showsFooterTextView; // @synthesize showsFooterTextView=_showsFooterTextView;
@property(nonatomic) _Bool showsDescriptionButton; // @synthesize showsDescriptionButton=_showsDescriptionButton;
@property(retain, nonatomic) NSOperation *imageLoadingOperation; // @synthesize imageLoadingOperation=_imageLoadingOperation;
@property(retain, nonatomic) UIImage *titleImage; // @synthesize titleImage=_titleImage;
@property(retain, nonatomic) MTTouchInsetsButton *descriptionButton; // @synthesize descriptionButton=_descriptionButton;
@property(retain, nonatomic) MTTouchInsetsButton *moreButton; // @synthesize moreButton=_moreButton;
@property(nonatomic) struct UIEdgeInsets _layoutMargins; // @synthesize _layoutMargins=__layoutMargins;
@property(nonatomic) _Bool showsPlayState; // @synthesize showsPlayState=_showsPlayState;
@property(nonatomic) _Bool showsPubDate; // @synthesize showsPubDate=_showsPubDate;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(retain, nonatomic) MTColorTheme *colorTheme; // @synthesize colorTheme=_colorTheme;
@property(nonatomic) _Bool shouldShowNowPlaying; // @synthesize shouldShowNowPlaying=_shouldShowNowPlaying;
@property(nonatomic, getter=isCurrentPlayerItem) _Bool currentPlayerItem; // @synthesize currentPlayerItem=_currentPlayerItem;
@property(nonatomic, getter=isExpanded) _Bool expanded; // @synthesize expanded=_expanded;
@property(nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_editing;
@property(retain, nonatomic) MTTVEpisodeActionController *actionController; // @synthesize actionController=_actionController;
@property(nonatomic) __weak id <MTEpisodeLockupDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MTEpisode *episode; // @synthesize episode=_episode;
- (void)_setNumberOfLinesForDescription:(unsigned long long)arg1;	// IMP=0x0000000100113418
- (id)_currentDescriptionColor;	// IMP=0x0000000100113348
- (id)_currentTitleColor;	// IMP=0x0000000100113278
- (id)_currentDescriptionFont;	// IMP=0x00000001001131e0
- (id)_currentTitleFont;	// IMP=0x0000000100113148
- (_Bool)_isRTL;	// IMP=0x0000000100113100
- (void)updateIconView;	// IMP=0x0000000100112f20
- (void)updateAssetStatusIcons;	// IMP=0x0000000100112e0c
- (void)updateStateForBarsView:(id)arg1;	// IMP=0x0000000100112d68
- (void)updatePlayStatusIcons;	// IMP=0x0000000100112c14
- (_Bool)updateIsCurrentPlayerItemState;	// IMP=0x0000000100112b28
- (void)updateIcons;	// IMP=0x0000000100112a2c
- (void)playbackStateDidChange;	// IMP=0x00000001001129e8
- (void)stopObservingPlaybackState;	// IMP=0x0000000100112988
- (void)startObservingPlaybackState;	// IMP=0x0000000100112920
- (void)updateTitleIncludingIcons;	// IMP=0x0000000100112538
- (_Bool)updateTitleFontIfNeeded;	// IMP=0x00000001001123cc
- (void)updateFooterTextViewVisbility;	// IMP=0x0000000100112314
- (void)updateMoreButtonVisibility;	// IMP=0x0000000100112170
- (void)beginLoadingArtwork;	// IMP=0x0000000100111cd8
- (_Bool)updateDisabledReason;	// IMP=0x00000001001119c4
- (void)updateDescriptionText;	// IMP=0x00000001001117bc
- (void)updateFooterText;	// IMP=0x00000001001115ac
- (void)updateMetadataText;	// IMP=0x00000001001114c4
- (void)update;	// IMP=0x00000001001113e0
- (struct CGRect)footerFrameForDescriptionButtonFrame:(struct CGRect)arg1 descriptionFrame:(struct CGRect)arg2;	// IMP=0x00000001001111dc
- (struct CGRect)descriptionButtonFrameForDescriptionFrame:(struct CGRect)arg1;	// IMP=0x0000000100110f20
- (struct CGRect)buttonsFrameForActionButtonFrame:(struct CGRect)arg1 downloadButtonFrame:(struct CGRect)arg2;	// IMP=0x0000000100110e74
- (struct CGRect)actionButtonFrameForViewWidth:(double)arg1 titleOriginY:(double)arg2;	// IMP=0x0000000100110d54
- (struct CGRect)downloadButtonFrameForActionButtonFrame:(struct CGRect)arg1 titleOriginY:(double)arg2;	// IMP=0x0000000100110d40
- (struct CGRect)playStatusViewFrameForViewWidth:(double)arg1 titleFrame:(struct CGRect)arg2 artworkFrame:(struct CGRect)arg3;	// IMP=0x0000000100110b70
- (struct CGRect)iconsViewFrameForViewWidth:(double)arg1 titleFrame:(struct CGRect)arg2 metadataFrame:(struct CGRect *)arg3 style:(unsigned long long)arg4;	// IMP=0x00000001001107dc
- (struct CGRect)moreButtonFrameForDescriptionFrame:(struct CGRect)arg1;	// IMP=0x0000000100110574
- (struct CGRect)metadataFrameForViewWidth:(double)arg1 titleFrame:(struct CGRect)arg2 style:(unsigned long long)arg3;	// IMP=0x0000000100110250
- (_Bool)isLabelMultipleLinesWithFrame:(struct CGRect)arg1 font:(id)arg2;	// IMP=0x000000010011017c
- (id)descriptionExclusionPathsForOrigin:(struct CGPoint)arg1 descriptionWidth:(double)arg2 buttonsFrame:(struct CGRect)arg3 titleFrame:(struct CGRect)arg4;	// IMP=0x0000000100110038
- (id)titleExclusionPathsForExplicitIconFrame:(struct CGRect)arg1 viewWidth:(double)arg2;	// IMP=0x000000010010fe74
- (id)titleExclusionPathsForButtonViewFrame:(struct CGRect)arg1;	// IMP=0x000000010010fd08
- (double)descriptionWidthForViewWidth:(double)arg1 titleFrame:(struct CGRect)arg2 style:(unsigned long long)arg3;	// IMP=0x000000010010fc28
- (struct CGSize)exactDescriptionSizeForOrigin:(struct CGPoint)arg1 viewWidth:(double)arg2 titleFrame:(struct CGRect)arg3 actionButtonFrame:(struct CGRect)arg4 downloadButtonFrame:(struct CGRect)arg5 style:(unsigned long long)arg6;	// IMP=0x000000010010f8b8
- (struct CGPoint)descriptionOriginForViewWidth:(double)arg1 artworkFrame:(struct CGRect)arg2 buttonViewFrame:(struct CGRect)arg3 titleFrame:(struct CGRect)arg4 metadataFrame:(struct CGRect)arg5 iconViewFrame:(struct CGRect)arg6 style:(unsigned long long)arg7;	// IMP=0x000000010010f40c
- (double)titleOriginYForArtworkFrame:(struct CGRect)arg1 style:(unsigned long long)arg2;	// IMP=0x000000010010f2e0
- (struct CGSize)titleSizeForViewWidth:(double)arg1 titleOrigin:(struct CGPoint)arg2 artworkFrame:(struct CGRect)arg3 buttonViewFrame:(struct CGRect)arg4 style:(unsigned long long)arg5;	// IMP=0x000000010010f020
- (double)titleOriginXForViewWidth:(double)arg1 artworkFrame:(struct CGRect)arg2 buttonFrame:(struct CGRect)arg3 style:(unsigned long long)arg4;	// IMP=0x000000010010ef14
- (struct CGRect)artworkFrameForStyle:(unsigned long long)arg1 forViewWidth:(double)arg2;	// IMP=0x000000010010ee50
- (double)heightForWidth:(double)arg1 style:(unsigned long long)arg2;	// IMP=0x000000010010e7d8
- (struct UIEdgeInsets)_layoutMarginsForViewWidth:(double)arg1;	// IMP=0x000000010010e678
- (void)layoutMarginsDidChange;	// IMP=0x000000010010e5b0
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x000000010010e504
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x000000010010e458
- (void)fixEmptyTextContainers;	// IMP=0x000000010010e224
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000010010e05c
- (struct CGRect)explicitIconFrameForViewWidth:(double)arg1 titleFrame:(struct CGRect)arg2;	// IMP=0x000000010010dd38
- (void)layoutSubviews;	// IMP=0x000000010010d408
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x000000010010d2a0
- (void)dismissActionSheetsAndPopovers;	// IMP=0x000000010010d1c8
- (void)updateActionSheetsAndPopovers;	// IMP=0x000000010010d0f0
- (void)invalidateLayoutMargins;	// IMP=0x000000010010d0d0
- (void)invalidateSizeMetrics;	// IMP=0x000000010010d084
- (void)prepareForReuse;	// IMP=0x000000010010ced8
- (void)reachabilityChangedFrom:(_Bool)arg1 to:(_Bool)arg2;	// IMP=0x000000010010c940
- (void)contentSizeCategoryDidChange:(id)arg1;	// IMP=0x000000010010c8c4
- (void)airplaneModeChanged:(id)arg1;	// IMP=0x000000010010c85c
- (void)descriptionButtonTapped:(id)arg1;	// IMP=0x000000010010c7ac
- (void)moreButtonTapped:(id)arg1;	// IMP=0x000000010010c73c
- (void)updateColorsForBarsView:(id)arg1;	// IMP=0x000000010010c694
- (void)updateColors;	// IMP=0x000000010010c304
@property(readonly, nonatomic) UIButton *actionButton;
- (void)configureSubviews;	// IMP=0x000000010010aff4
- (void)dealloc;	// IMP=0x000000010010af3c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010010ad74

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

