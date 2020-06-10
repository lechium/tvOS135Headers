/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:43 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVPlayback/TVPlayback-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol TVPMusicNowPlayingViewDelegate, TVPMusicNowPlayingImage;
@class UIFocusGuide, _TVPMusicArtworkImageView, UIView, UILabel, MPRouteLabel, UIStackView, TVPRoundButton, UILayoutGuide, TVPCollectionView, NSArray, TVPFloatingButton, MPAVRoute, TVPMusicNowPlayingBackgroundContainerView, UITapGestureRecognizer, TVPMusicNowPlayingCollectionViewFlowLayout, NSIndexPath, NSString;

@interface TVPMusicNowPlayingView : UIView <UIGestureRecognizerDelegate> {

	UIFocusGuide* _collectionViewFocusGuide;
	UIFocusGuide* _controlsContainerFocusGuide;
	UIFocusGuide* _nothingPlayingFocusGuide;
	_TVPMusicArtworkImageView* _placeholderImageView;
	UIView* _containerView;
	UIView* _controlsContainerView;
	UILabel* _nothingPlayingLabel;
	UIView* _lastFocusedView;
	BOOL _forceFocusToPlaylistView;
	MPRouteLabel* _routePickerLabel;
	UIStackView* _rightControlsView;
	TVPRoundButton* _shuffleButton;
	TVPRoundButton* _repeatButton;
	BOOL _playlistVisible;
	BOOL _showControls;
	BOOL _nothingPlaying;
	BOOL _repeatVisible;
	BOOL _shuffleVisible;
	BOOL _shuffleEnabled;
	id<TVPMusicNowPlayingViewDelegate> _nowPlayingDelegate;
	UIView* _idleContentView;
	UILayoutGuide* _artworkLayoutGuide;
	TVPCollectionView* _playlistCollectionView;
	NSArray* _additionalRightControlItems;
	NSArray* _controlItems;
	TVPFloatingButton* _routePickerControl;
	MPAVRoute* _audioRoute;
	long long _repeatMode;
	id<TVPMusicNowPlayingImage> _backgroundImage;
	TVPMusicNowPlayingBackgroundContainerView* _backgroundView;
	TVPRoundButton* _contextMenuButton;
	NSArray* _controls;
	UIView* _coverArtPlaceholder;
	UITapGestureRecognizer* _playPauseGestureRecognizer;

}

@property (nonatomic,retain) TVPMusicNowPlayingBackgroundContainerView * backgroundView;                           //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,readonly) TVPRoundButton * contextMenuButton;                                                 //@synthesize contextMenuButton=_contextMenuButton - In the implementation block
@property (nonatomic,retain) NSArray * controls;                                                                   //@synthesize controls=_controls - In the implementation block
@property (nonatomic,retain) UIView * coverArtPlaceholder;                                                         //@synthesize coverArtPlaceholder=_coverArtPlaceholder - In the implementation block
@property (nonatomic,readonly) TVPMusicNowPlayingCollectionViewFlowLayout * collectionViewFlowLayout; 
@property (nonatomic,readonly) UITapGestureRecognizer * playPauseGestureRecognizer;                                //@synthesize playPauseGestureRecognizer=_playPauseGestureRecognizer - In the implementation block
@property (assign,nonatomic,__weak) id<TVPMusicNowPlayingViewDelegate> nowPlayingDelegate;                         //@synthesize nowPlayingDelegate=_nowPlayingDelegate - In the implementation block
@property (nonatomic,readonly) UIView * idleContentView;                                                           //@synthesize idleContentView=_idleContentView - In the implementation block
@property (nonatomic,readonly) UIView * containerView; 
@property (nonatomic,readonly) UILayoutGuide * artworkLayoutGuide;                                                 //@synthesize artworkLayoutGuide=_artworkLayoutGuide - In the implementation block
@property (assign,getter=isPlaylistVisible,nonatomic) BOOL playlistVisible;                                        //@synthesize playlistVisible=_playlistVisible - In the implementation block
@property (getter=isControlFocused,nonatomic,readonly) BOOL controlFocused; 
@property (nonatomic,retain) NSIndexPath * singleCoverIndexPath; 
@property (nonatomic,readonly) TVPCollectionView * playlistCollectionView;                                         //@synthesize playlistCollectionView=_playlistCollectionView - In the implementation block
@property (assign,nonatomic) BOOL showControls;                                                                    //@synthesize showControls=_showControls - In the implementation block
@property (nonatomic,copy) NSArray * additionalRightControlItems;                                                  //@synthesize additionalRightControlItems=_additionalRightControlItems - In the implementation block
@property (nonatomic,retain) NSArray * controlItems;                                                               //@synthesize controlItems=_controlItems - In the implementation block
@property (nonatomic,retain) TVPFloatingButton * routePickerControl;                                               //@synthesize routePickerControl=_routePickerControl - In the implementation block
@property (nonatomic,retain) MPAVRoute * audioRoute;                                                               //@synthesize audioRoute=_audioRoute - In the implementation block
@property (assign,nonatomic) BOOL nothingPlaying;                                                                  //@synthesize nothingPlaying=_nothingPlaying - In the implementation block
@property (assign,nonatomic) BOOL repeatVisible;                                                                   //@synthesize repeatVisible=_repeatVisible - In the implementation block
@property (assign,nonatomic) long long repeatMode;                                                                 //@synthesize repeatMode=_repeatMode - In the implementation block
@property (assign,nonatomic) BOOL shuffleVisible;                                                                  //@synthesize shuffleVisible=_shuffleVisible - In the implementation block
@property (assign,getter=isShuffleEnabled,nonatomic) BOOL shuffleEnabled;                                          //@synthesize shuffleEnabled=_shuffleEnabled - In the implementation block
@property (nonatomic,retain) id<TVPMusicNowPlayingImage> backgroundImage;                                          //@synthesize backgroundImage=_backgroundImage - In the implementation block
@property (nonatomic,retain) id<TVPMusicNowPlayingBackgroundProvider> backgroundProvider; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<TVPMusicNowPlayingImage>)backgroundImage;
-(void)setBackgroundImage:(id<TVPMusicNowPlayingImage>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSArray *)controls;
-(void)setControls:(NSArray *)arg1 ;
-(MPAVRoute *)audioRoute;
-(void)setAudioRoute:(MPAVRoute *)arg1 ;
-(long long)repeatMode;
-(void)setRepeatMode:(long long)arg1 ;
-(void)setShuffleEnabled:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)setBackgroundView:(TVPMusicNowPlayingBackgroundContainerView *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIView *)containerView;
-(TVPMusicNowPlayingBackgroundContainerView *)backgroundView;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)willMoveToWindow:(id)arg1 ;
-(BOOL)canBecomeFocused;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(BOOL)shouldUpdateFocusInContext:(id)arg1 ;
-(id)preferredFocusEnvironments;
-(TVPMusicNowPlayingCollectionViewFlowLayout *)collectionViewFlowLayout;
-(void)_updateControlsVisibility;
-(UITapGestureRecognizer *)playPauseGestureRecognizer;
-(BOOL)isShuffleEnabled;
-(NSArray *)controlItems;
-(id)initWithFrame:(CGRect)arg1 layout:(long long)arg2 ;
-(id<TVPMusicNowPlayingBackgroundProvider>)backgroundProvider;
-(void)setBackgroundProvider:(id<TVPMusicNowPlayingBackgroundProvider>)arg1 ;
-(void)setSingleCoverIndexPath:(NSIndexPath *)arg1 ;
-(void)setNothingPlaying:(BOOL)arg1 ;
-(void)setRoutePickerControl:(TVPFloatingButton *)arg1 ;
-(void)setShowControls:(BOOL)arg1 ;
-(void)setNowPlayingDelegate:(id<TVPMusicNowPlayingViewDelegate>)arg1 ;
-(void)setRepeatVisible:(BOOL)arg1 ;
-(void)setShuffleVisible:(BOOL)arg1 ;
-(TVPCollectionView *)playlistCollectionView;
-(void)setControlItems:(NSArray *)arg1 ;
-(void)setFocusToDataView;
-(NSIndexPath *)singleCoverIndexPath;
-(BOOL)isPlaylistVisible;
-(void)setPlaylistVisible:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)nothingPlaying;
-(void)setControlItems:(id)arg1 animated:(BOOL)arg2 ;
-(void)setPlaylistVisible:(BOOL)arg1 wasSelected:(BOOL)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(UIView *)idleContentView;
-(UILayoutGuide *)artworkLayoutGuide;
-(void)setPlaylistVisible:(BOOL)arg1 wasSelected:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)isControlFocused;
-(void)setArtworkVisible:(BOOL)arg1 ;
-(id)_addLabel;
-(id)_constraintsForLayout;
-(void)_selectedContextMenu;
-(void)shuffleButtonAction;
-(void)repeatButtonAction;
-(void)_updateForNothingPlayingState:(BOOL)arg1 ;
-(void)_updateControlsPreferredFocus;
-(void)_playPausePressedGestureRecognized:(id)arg1 ;
-(BOOL)_isNothingPlaying;
-(void)_updateRoutePickerLabel;
-(id<TVPMusicNowPlayingViewDelegate>)nowPlayingDelegate;
-(UIView *)coverArtPlaceholder;
-(TVPFloatingButton *)routePickerControl;
-(void)_updateRoutePickerTextColorForCurrentFocusState;
-(BOOL)showControls;
-(id)_routePickerTextColorForFocusState:(BOOL)arg1 ;
-(void)setSingleCoverIndexPath:(id)arg1 animated:(BOOL)arg2 ;
-(TVPRoundButton *)contextMenuButton;
-(void)allowInteraction:(BOOL)arg1 ;
-(void)_dissolveFromPlaylistWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_shouldShowRoutePickerControl;
-(void)setPlaylistVisible:(BOOL)arg1 ;
-(BOOL)isArtworkVisible;
-(BOOL)isRepeatVisible;
-(BOOL)isShuffleVisible;
-(void)setAdditionalRightControlItems:(NSArray *)arg1 ;
-(NSArray *)additionalRightControlItems;
-(BOOL)repeatVisible;
-(BOOL)shuffleVisible;
-(void)setCoverArtPlaceholder:(UIView *)arg1 ;
@end
