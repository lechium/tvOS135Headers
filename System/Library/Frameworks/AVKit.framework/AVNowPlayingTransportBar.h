/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:36 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKitCore/UIView.h>

@protocol AVNowPlayingFrameSource, AVThumbLayerController;
@class UIView, UIVisualEffectView, UIImageView, NSLayoutConstraint, UIDynamicAnimator, UIDynamicItemBehavior, UIAttachmentBehavior, UIPushBehavior, _AVPlayerLayerThumbnailView, AVGradientView, UILabel, AVAnimatingLabel, AVSpinnerView, _AVBlockedView, AVPlayer, AVPlayerItem, UIImage, _UIVisualEffectBackdropView, NSDate, NSString, NSArray, AVTransportBarMask, AVDurationTimeFormatter, NSDateFormatter, AVFrameSet;

@interface AVNowPlayingTransportBar : UIView {

	UIView* _barView;
	UIVisualEffectView* _barVisualEffectView;
	UIView* _barBorderView;
	UIImageView* _barFillImageView;
	UIView* _visualEffectMaskView;
	UIView* _visibleScrubNeedle;
	NSLayoutConstraint* _scrubNeedleHeight;
	UIView* _animatedScrubNeedle;
	UIDynamicAnimator* _scrubNeedleAnimator;
	UIDynamicItemBehavior* _scrubNeedleBehavior;
	UIAttachmentBehavior* _scrubNeedleMovementBehavior;
	UIAttachmentBehavior* _scrubNeedleSlidingBehavior;
	UIPushBehavior* _scrubNeedleMomentumBehavior;
	double _accumulatedScrubTranslation;
	UIView* _elapsedTimeMarker;
	NSLayoutConstraint* _elapsedTimeMarkerLeft;
	UIView* _thumbnailView;
	NSLayoutConstraint* _thumbnailWidthZero;
	NSLayoutConstraint* _thumbnailHeightZero;
	_AVPlayerLayerThumbnailView* _clonedPlayerView;
	_AVPlayerLayerThumbnailView* _scrubPlayerView;
	UIImageView* _scrubImageView;
	AVGradientView* _gradientView;
	BOOL _isClonedPlayerViewActive;
	BOOL _shouldFadeTimeLabels;
	UILabel* _scrubNeedleTimeLabel;
	AVAnimatingLabel* _elapsedTimeLabel;
	AVAnimatingLabel* _currentClockTimeLabel;
	UILabel* _startTimeLabel;
	AVAnimatingLabel* _remainingTimeLabel;
	AVAnimatingLabel* _endingClockTimeLabel;
	UILabel* _interstitialTimeLabel;
	UIImageView* _hintIconLeft;
	UIImageView* _hintIconRight;
	NSLayoutConstraint* _hintIconLeftRelativeTimeHorizontalConstraint;
	NSLayoutConstraint* _hintIconLeftClockTimeHorizontalConstraint;
	NSLayoutConstraint* _hintIconRightRelativeTimeHorizontalConstraint;
	NSLayoutConstraint* _hintIconRightClockTimeHorizontalConstraint;
	AVSpinnerView* _loadingSpinner;
	_AVBlockedView* _blockedView;
	double _timeCorrespondingToElapsedTimeTextLabel;
	double _timeCorrespondingToRemainingTimeTextLabel;
	double _timeIntervalFromStreamTimeToClockDate;
	AVPlayer* _clonedPlayer;
	AVPlayerItem* _scrubPlayerItem;
	BOOL _animatingVisibility;
	BOOL _live;
	BOOL _loading;
	BOOL _unusable;
	BOOL _hidesSeekableRange;
	BOOL _displaysClockTimes;
	BOOL _honorsActualThumbnailTime;
	BOOL _displaysCurrentTime;
	BOOL _displaysRemainingTime;
	BOOL _scrubbing;
	BOOL _displaysScrubbingFrames;
	UIImage* _maskImage;
	_UIVisualEffectBackdropView* _transportBarCaptureView;
	id<AVNowPlayingFrameSource> _frameSource;
	id<AVThumbLayerController> _thumbLayerController;
	double _startTime;
	NSDate* _startDate;
	NSDate* _endDate;
	NSDate* _clockDateForTimeZero;
	double _duration;
	double _currentTimeInterval;
	double _savedTimeInterval;
	NSString* _needleText;
	long long _hint;
	NSArray* _interstitialTimes;
	AVTransportBarMask* _mask;
	AVDurationTimeFormatter* _durationTimeFormatter;
	double _unavailableFractionLeading;
	double _availableFraction;
	NSDateFormatter* _dateFormatter;
	NSDateFormatter* _currentDateFormatter;
	NSDate* _dateCorrespondingToStartTimeTextLabel;
	NSDate* _dateCorrespondingToTimeRemainingTextLabel;
	CGRect _scrubbingRegionBounds;

}

@property (nonatomic,retain) UIImage * maskImage;                                                     //@synthesize maskImage=_maskImage - In the implementation block
@property (nonatomic,retain) id<AVThumbLayerController> thumbLayerController;                         //@synthesize thumbLayerController=_thumbLayerController - In the implementation block
@property (nonatomic,retain) NSArray * interstitialTimes;                                             //@synthesize interstitialTimes=_interstitialTimes - In the implementation block
@property (readonly) AVTransportBarMask * mask;                                                       //@synthesize mask=_mask - In the implementation block
@property (readonly) AVDurationTimeFormatter * durationTimeFormatter;                                 //@synthesize durationTimeFormatter=_durationTimeFormatter - In the implementation block
@property (assign,nonatomic) double unavailableFractionLeading;                                       //@synthesize unavailableFractionLeading=_unavailableFractionLeading - In the implementation block
@property (assign,nonatomic) double availableFraction;                                                //@synthesize availableFraction=_availableFraction - In the implementation block
@property (readonly) NSDateFormatter * dateFormatter;                                                 //@synthesize dateFormatter=_dateFormatter - In the implementation block
@property (readonly) NSDateFormatter * currentDateFormatter;                                          //@synthesize currentDateFormatter=_currentDateFormatter - In the implementation block
@property (nonatomic,retain) NSDate * dateCorrespondingToStartTimeTextLabel;                          //@synthesize dateCorrespondingToStartTimeTextLabel=_dateCorrespondingToStartTimeTextLabel - In the implementation block
@property (nonatomic,retain) NSDate * dateCorrespondingToTimeRemainingTextLabel;                      //@synthesize dateCorrespondingToTimeRemainingTextLabel=_dateCorrespondingToTimeRemainingTextLabel - In the implementation block
@property (assign,nonatomic) CGRect scrubbingRegionBounds;                                            //@synthesize scrubbingRegionBounds=_scrubbingRegionBounds - In the implementation block
@property (getter=isAnimatingVisibility,nonatomic,readonly) BOOL animatingVisibility;                 //@synthesize animatingVisibility=_animatingVisibility - In the implementation block
@property (nonatomic,retain) _UIVisualEffectBackdropView * transportBarCaptureView;                   //@synthesize transportBarCaptureView=_transportBarCaptureView - In the implementation block
@property (nonatomic,readonly) UIVisualEffectView * barVisualEffectView; 
@property (assign,nonatomic,__weak) id<AVNowPlayingFrameSource> frameSource;                          //@synthesize frameSource=_frameSource - In the implementation block
@property (nonatomic,retain) AVPlayer * clonedPlayer; 
@property (nonatomic,retain) AVPlayerItem * scrubPlayerItem; 
@property (nonatomic,retain) AVFrameSet * scrubFrameSet; 
@property (assign,getter=isLive,nonatomic) BOOL live;                                                 //@synthesize live=_live - In the implementation block
@property (assign,getter=isLoading,nonatomic) BOOL loading;                                           //@synthesize loading=_loading - In the implementation block
@property (assign,getter=isUnusable,nonatomic) BOOL unusable;                                         //@synthesize unusable=_unusable - In the implementation block
@property (assign,nonatomic) BOOL hidesSeekableRange;                                                 //@synthesize hidesSeekableRange=_hidesSeekableRange - In the implementation block
@property (assign,nonatomic) double startTime;                                                        //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,readonly) double endTime; 
@property (nonatomic,copy) NSDate * startDate;                                                        //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,copy) NSDate * endDate;                                                          //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,retain) NSDate * clockDateForTimeZero;                                           //@synthesize clockDateForTimeZero=_clockDateForTimeZero - In the implementation block
@property (assign,nonatomic) BOOL displaysClockTimes;                                                 //@synthesize displaysClockTimes=_displaysClockTimes - In the implementation block
@property (assign,nonatomic) double duration;                                                         //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) double currentTimeInterval;                                            //@synthesize currentTimeInterval=_currentTimeInterval - In the implementation block
@property (nonatomic,readonly) double savedTimeInterval;                                              //@synthesize savedTimeInterval=_savedTimeInterval - In the implementation block
@property (nonatomic,readonly) double currentTimeIntervalForThumbnailOrNeedle; 
@property (assign,nonatomic) BOOL honorsActualThumbnailTime;                                          //@synthesize honorsActualThumbnailTime=_honorsActualThumbnailTime - In the implementation block
@property (assign,getter=isCurrentTimeDisplayed,nonatomic) BOOL displaysCurrentTime;                  //@synthesize displaysCurrentTime=_displaysCurrentTime - In the implementation block
@property (assign,getter=isRemainingTimeDisplayed,nonatomic) BOOL displaysRemainingTime;              //@synthesize displaysRemainingTime=_displaysRemainingTime - In the implementation block
@property (nonatomic,retain) NSArray * interstitialDisplayTimes; 
@property (getter=isScrubbing,nonatomic,readonly) BOOL scrubbing;                                     //@synthesize scrubbing=_scrubbing - In the implementation block
@property (assign,nonatomic) BOOL displaysScrubbingFrames;                                            //@synthesize displaysScrubbingFrames=_displaysScrubbingFrames - In the implementation block
@property (nonatomic,readonly) unsigned long long currentFrameIndex; 
@property (nonatomic,copy) NSString * needleText;                                                     //@synthesize needleText=_needleText - In the implementation block
@property (assign,nonatomic) long long hint;                                                          //@synthesize hint=_hint - In the implementation block
+(CGSize)maximumSizeForFrameImages;
-(double)timeIntervalSinceNow;
-(double)startTime;
-(double)endTime;
-(void)setStartTime:(double)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(double)duration;
-(NSDateFormatter *)dateFormatter;
-(void)setDuration:(double)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(id)_endDate;
-(BOOL)isHidden;
-(AVTransportBarMask *)mask;
-(UIImage *)maskImage;
-(void)setMaskImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isLive;
-(BOOL)isLoading;
-(BOOL)isHiddenOrHasHiddenAncestor;
-(CGSize)intrinsicContentSize;
-(void)layoutSubviews;
-(void)setLoading:(BOOL)arg1 ;
-(double)currentTimeInterval;
-(id)accessibilityElements;
-(long long)hint;
-(void)setLive:(BOOL)arg1 ;
-(void)setHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)createViews;
-(void)_setupScrubNeedleAnimatorIfNeeded;
-(void)setAnimatingVisibility:(BOOL)arg1 ;
-(UIVisualEffectView *)barVisualEffectView;
-(void)setTransportBarCaptureView:(_UIVisualEffectBackdropView *)arg1 ;
-(void)setUnusable:(BOOL)arg1 ;
-(void)setUnavailableFractionLeading:(double)arg1 ;
-(void)setAvailableFraction:(double)arg1 ;
-(void)setAvailableFractionFrom:(double)arg1 to:(double)arg2 animated:(BOOL)arg3 ;
-(void)setAvailableTimeFrom:(double)arg1 to:(double)arg2 ;
-(id)currentDateReal;
-(double)_currentTimeFraction;
-(double)_savedTimeFraction;
-(void)setThumbLayerController:(id<AVThumbLayerController>)arg1 ;
-(void)setDisplaysScrubbingFrames:(BOOL)arg1 ;
-(void)startScrubbingForPauseTime:(double)arg1 ;
-(double)currentTimeIntervalForThumbnailOrNeedle;
-(void)stopScrubbingWithResetToPauseMarker:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_updateScrubbingRegionBounds;
-(void)_updateTransportBarMaskIfNeeded;
-(void)_updateBorderWidth;
-(void)setDisplaysClockTimes:(BOOL)arg1 ;
-(void)setDisplaysClockTimes:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_updateStartTimeText;
-(void)_updateRemainingTimeText;
-(void)_updateElapsedTimeText;
-(BOOL)_areTimeLabelsVisible;
-(void)_updateTimeLabelVisibility;
-(void)setCurrentTimeInterval:(double)arg1 animated:(BOOL)arg2 ;
-(void)_setCurrentTimeInterval:(double)arg1 updatingNeedlePositions:(BOOL)arg2 animated:(BOOL)arg3 ;
-(double)_timeIntervalFromScrubNeedlePosition;
-(double)_timeIntervalFromScrubNeedlePositionOrThumbnail;
-(void)updateNeedlePositionToReflectThumbnailTime;
-(void)setDisplaysCurrentTime:(BOOL)arg1 ;
-(void)setDisplaysRemainingTime:(BOOL)arg1 ;
-(void)_updateNeedlePositions;
-(void)_updateNeedlePositionsShouldUpdateElapsedTimeMarker:(BOOL)arg1 ;
-(void)maskCornersForNeedlePosition:(double)arg1 ;
-(void)scrubBegan;
-(void)scrubMovedWithTranslation:(double)arg1 velocity:(double)arg2 ;
-(void)scrubEndedWithTranslation:(double)arg1 velocity:(double)arg2 ;
-(void)_stopScrubNeedleMomentum;
-(void)setHint:(long long)arg1 ;
-(void)_updateAccessoryVisibility;
-(void)setNeedleText:(NSString *)arg1 ;
-(unsigned long long)frameIndexForTime:(double)arg1 ;
-(unsigned long long)currentFrameIndex;
-(AVPlayer *)clonedPlayer;
-(void)setClonedPlayer:(AVPlayer *)arg1 ;
-(AVPlayerItem *)scrubPlayerItem;
-(void)setScrubPlayerItem:(AVPlayerItem *)arg1 ;
-(AVFrameSet *)scrubFrameSet;
-(void)setScrubFrameSet:(AVFrameSet *)arg1 ;
-(void)_updateThumbnailImage;
-(void)reloadFrames;
-(NSArray *)interstitialDisplayTimes;
-(void)setInterstitialDisplayTimes:(NSArray *)arg1 ;
-(id)makeMaskImageWasDirty:(BOOL*)arg1 ;
-(BOOL)isAnimatingVisibility;
-(_UIVisualEffectBackdropView *)transportBarCaptureView;
-(id<AVNowPlayingFrameSource>)frameSource;
-(void)setFrameSource:(id<AVNowPlayingFrameSource>)arg1 ;
-(id<AVThumbLayerController>)thumbLayerController;
-(BOOL)isUnusable;
-(BOOL)hidesSeekableRange;
-(void)setHidesSeekableRange:(BOOL)arg1 ;
-(NSDate *)clockDateForTimeZero;
-(void)setClockDateForTimeZero:(NSDate *)arg1 ;
-(BOOL)displaysClockTimes;
-(double)savedTimeInterval;
-(BOOL)honorsActualThumbnailTime;
-(void)setHonorsActualThumbnailTime:(BOOL)arg1 ;
-(BOOL)isCurrentTimeDisplayed;
-(BOOL)isRemainingTimeDisplayed;
-(BOOL)isScrubbing;
-(BOOL)displaysScrubbingFrames;
-(CGRect)scrubbingRegionBounds;
-(void)setScrubbingRegionBounds:(CGRect)arg1 ;
-(NSString *)needleText;
-(NSArray *)interstitialTimes;
-(void)setInterstitialTimes:(NSArray *)arg1 ;
-(AVDurationTimeFormatter *)durationTimeFormatter;
-(double)unavailableFractionLeading;
-(double)availableFraction;
-(NSDateFormatter *)currentDateFormatter;
-(NSDate *)dateCorrespondingToStartTimeTextLabel;
-(void)setDateCorrespondingToStartTimeTextLabel:(NSDate *)arg1 ;
-(NSDate *)dateCorrespondingToTimeRemainingTextLabel;
-(void)setDateCorrespondingToTimeRemainingTextLabel:(NSDate *)arg1 ;
-(id)layoutConstraintsForPresentationInView:(id)arg1 ;
@end

