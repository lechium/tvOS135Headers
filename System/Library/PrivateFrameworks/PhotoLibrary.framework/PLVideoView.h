/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:58 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIMovieScrubberDelegate.h>
#import <UIKit/UIMovieScrubberDataSource.h>
#import <libobjc.A.dylib/PLMoviePlayerControllerDelegate.h>
#import <libobjc.A.dylib/PLSlalomRegionEditorDelegate.h>

@protocol PLVideoViewDelegate, OS_dispatch_queue, PLVideoOverlayButton;
@class PLManagedAsset, NSString, NSURL, PLPhotoTileViewController, PLVideoPosterFrameView, UIView, PLVideoEditingOverlayView, UIImage, NSTimer, NSDictionary, PLPhotoBakedThumbnails, AVAssetExportSession, PLProgressStack, PLMoviePlayerController, NSArray, NSLock, NSObject, NSMutableArray, UIMovieScrubber, PLSlalomRegionEditor, NSMutableDictionary, UIActivityIndicatorView, PFVideoAVObjectBuilder, PFVideoAdjustments, UIImageView;

@interface PLVideoView : UIView <UIMovieScrubberDelegate, UIMovieScrubberDataSource, PLMoviePlayerControllerDelegate, PLSlalomRegionEditorDelegate> {

	PLManagedAsset* _videoCameraImage;
	NSString* _pathToOriginalVideo;
	NSURL* _videoURL;
	PLPhotoTileViewController* _imageTile;
	PLVideoPosterFrameView* _posterFrameView;
	UIView* _videoOverlayBackgroundView;
	PLVideoEditingOverlayView* _trimMessageView;
	UIImage* _posterFrameImage;
	UIImage* _snapshotImage;
	double _scrubberWidth;
	long long _scaleMode;
	UIView* _scrubberBackgroundView;
	UIView* _scrubberTitleView;
	NSTimer* _scrubberUpdateTimer;
	NSDictionary* _thumbnailOptionsDict;
	CGSize _thumbnailSize;
	PLPhotoBakedThumbnails* _bakedLandscapeThumbnails;
	PLPhotoBakedThumbnails* _bakedPortraitThumbnails;
	AVAssetExportSession* _exportSession;
	double _remakerStartTime;
	double _remakerEndTime;
	NSString* _trimmedPath;
	NSString* _videoPathAfterTrim;
	NSTimer* _trimProgressTimer;
	PLManagedAsset* _trimmedVideoClip;
	PLProgressStack* _trimProgressStack;
	float _progress;
	PLMoviePlayerController* _moviePlayer;
	id<PLVideoViewDelegate> _delegate;
	double _maximumTrimLength;
	double _lastScrubbedValue;
	double _lastActualValue;
	double _duration;
	double _cachedCurrentPlaybackTime;
	NSArray* _imageGenerators;
	NSLock* _thumbnailReqlock;
	NSObject*<OS_dispatch_queue> _thumbnailReqQueue;
	AVAssetExportSession* _airplayExportSession;
	BOOL _isAirPlay;
	unsigned _showsPlayButton : 1;
	unsigned _showsScrubber : 1;
	unsigned _canEdit : 1;
	unsigned _loadMediaImmediately : 1;
	unsigned _scrubberIsSubview : 1;
	unsigned _viewWillAppear : 1;
	unsigned _didLayout : 1;
	unsigned _wasPlayingBeforeScrub : 1;
	unsigned _playFromBeginning : 1;
	unsigned _needsReloadScrubberThumbnails : 1;
	unsigned _playing : 1;
	unsigned _editing : 1;
	unsigned _disableEditAfterTrim : 1;
	unsigned _scrubbing : 1;
	unsigned _scrubbingToRight : 1;
	unsigned _deleteOriginalFile : 1;
	unsigned _passthroughTrimming : 1;
	unsigned _preparingMoviePlayer : 1;
	unsigned _preparedMoviePlayer : 1;
	unsigned _isMoviePlayerActive : 1;
	unsigned _moviePlayerIsReady : 1;
	unsigned _moviePlayerIsReadyForDisplay : 1;
	unsigned _moviePlayerDidBuffer : 1;
	unsigned _showingOverlay : 1;
	unsigned _showingScrubber : 1;
	unsigned _showScrubberWhenMovieIsReady : 1;
	unsigned _playbackDidBegin : 1;
	unsigned _loadScrubberThumbnails : 1;
	unsigned _videoIsLandscape : 1;
	unsigned _canCreateMetadata : 1;
	unsigned _createPreviewPosterFrame : 1;
	unsigned _isTrimming : 1;
	unsigned _wasTrimmedInPlace : 1;
	unsigned _remakingFailed : 1;
	NSMutableArray* _summaryThumbnailRequestTimestamps;
	NSMutableArray* _detailThumbnailRequestTimestamps;
	UIMovieScrubber* _scrubber;
	PLSlalomRegionEditor* _slalomRegionEditor;
	NSMutableDictionary* _cachedThumbnails;
	NSArray* _landscapeSummaryThumbnailTimestamps;
	NSArray* _portraitSummaryThumbnailTimestamps;
	UIActivityIndicatorView* _spinner;
	UIActivityIndicatorView* _shadowSpinner;
	UIView*<PLVideoOverlayButton> _videoOverlayPlayButton;
	BOOL _useLandscapeCache;
	double _videoStreamingStartTime;
	BOOL _allowSlalomEditor;
	BOOL _prepareMoviePlayerForScrubberAutomatically;
	BOOL _shouldPlayVideoWhenViewAppears;
	BOOL __didInsertMoviePlayerView;
	BOOL __didEditSlalom;
	BOOL __isFetchingVideo;
	BOOL __localVideoUnavailable;
	BOOL __canAttemptFetchingVideoDerivative;
	BOOL __attemptFetchingVideoDerivative;
	BOOL __slalomRegionEditorCreatedForScrubber;
	PFVideoAVObjectBuilder* __videoAVObjectBuilder;
	long long __expectedNotificationsCount;
	PFVideoAdjustments* __adjustmentsToCommit;

}

@property (nonatomic,retain,readonly) NSString * _pathForVideoPreviewFile; 
@property (nonatomic,retain,readonly) NSString * _pathForPrebakedLandscapeScrubberThumbnails; 
@property (nonatomic,retain,readonly) NSString * _pathForPrebakedPortraitScrubberThumbnails; 
@property (nonatomic,readonly) BOOL _mediaIsPlayable; 
@property (nonatomic,readonly) BOOL _didSetPhotoData; 
@property (assign,nonatomic) BOOL _didInsertMoviePlayerView;                                                                     //@synthesize _didInsertMoviePlayerView=__didInsertMoviePlayerView - In the implementation block
@property (assign,setter=_setDidEditSlalom:,nonatomic) BOOL _didEditSlalom;                                                      //@synthesize _didEditSlalom=__didEditSlalom - In the implementation block
@property (nonatomic,readonly) PFVideoAVObjectBuilder * _videoAVObjectBuilder;                                                   //@synthesize _videoAVObjectBuilder=__videoAVObjectBuilder - In the implementation block
@property (nonatomic,readonly) BOOL _isFetchingVideo;                                                                            //@synthesize _isFetchingVideo=__isFetchingVideo - In the implementation block
@property (assign,setter=_setLocalVideoUnavailable:,nonatomic) BOOL _localVideoUnavailable;                                      //@synthesize _localVideoUnavailable=__localVideoUnavailable - In the implementation block
@property (nonatomic,readonly) long long _expectedNotificationsCount;                                                            //@synthesize _expectedNotificationsCount=__expectedNotificationsCount - In the implementation block
@property (nonatomic,readonly) PFVideoAdjustments * _adjustmentsToCommit;                                                        //@synthesize _adjustmentsToCommit=__adjustmentsToCommit - In the implementation block
@property (assign,setter=_setCanAttemptFetchingVideoDerivative:,nonatomic) BOOL _canAttemptFetchingVideoDerivative;              //@synthesize _canAttemptFetchingVideoDerivative=__canAttemptFetchingVideoDerivative - In the implementation block
@property (assign,setter=_setAttemptFetchingVideoDerivative:,nonatomic) BOOL _attemptFetchingVideoDerivative;                    //@synthesize _attemptFetchingVideoDerivative=__attemptFetchingVideoDerivative - In the implementation block
@property (nonatomic,retain) PLProgressStack * trimProgressStack;                                                                //@synthesize trimProgressStack=_trimProgressStack - In the implementation block
@property (nonatomic,readonly) BOOL _slalomRegionEditorCreatedForScrubber;                                                       //@synthesize _slalomRegionEditorCreatedForScrubber=__slalomRegionEditorCreatedForScrubber - In the implementation block
@property (nonatomic,retain,readonly) NSString * pathForVideoFile; 
@property (assign,nonatomic) id<PLVideoViewDelegate> delegate; 
@property (assign,nonatomic) PLPhotoTileViewController * imageTile; 
@property (nonatomic,readonly) PLManagedAsset * videoCameraImage; 
@property (nonatomic,retain) PLManagedAsset * trimmedVideoClip; 
@property (assign,nonatomic) BOOL allowSlalomEditor;                                                                             //@synthesize allowSlalomEditor=_allowSlalomEditor - In the implementation block
@property (nonatomic,readonly) UIView * scrubberBackgroundView;                                                                  //@synthesize scrubberBackgroundView=_scrubberBackgroundView - In the implementation block
@property (nonatomic,readonly) UIImage * posterFrameImage; 
@property (nonatomic,retain,readonly) PLVideoPosterFrameView * posterFrameView;                                                  //@synthesize posterFrameView=_posterFrameView - In the implementation block
@property (nonatomic,readonly) double duration; 
@property (assign,getter=isEditing,nonatomic) BOOL editing; 
@property (nonatomic,readonly) double startTime; 
@property (nonatomic,readonly) double endTime; 
@property (nonatomic,readonly) NSString * videoPathAfterTrim; 
@property (nonatomic,readonly) UIImageView * previewImageView; 
@property (assign,nonatomic) BOOL showsPlayOverlay; 
@property (assign,nonatomic) BOOL showsScrubber; 
@property (assign,nonatomic) BOOL prepareMoviePlayerForScrubberAutomatically;                                                    //@synthesize prepareMoviePlayerForScrubberAutomatically=_prepareMoviePlayerForScrubberAutomatically - In the implementation block
@property (assign,nonatomic) BOOL loadMediaImmediately; 
@property (assign,nonatomic) BOOL shouldPlayVideoWhenViewAppears;                                                                //@synthesize shouldPlayVideoWhenViewAppears=_shouldPlayVideoWhenViewAppears - In the implementation block
@property (assign,nonatomic) BOOL canEdit; 
@property (assign,nonatomic) BOOL scrubberIsSubview; 
@property (assign,nonatomic) double scrubberWidth;                                                                               //@synthesize scrubberWidth=_scrubberWidth - In the implementation block
@property (assign,nonatomic) double currentTime; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_enqueueOverlayPlayButton:(id)arg1 ;
+(id)_dequeueOverlayPlayButton;
+(id)videoViewForVideoFileAtURL:(id)arg1 ;
-(NSString *)description;
-(void)dealloc;
-(id<PLVideoViewDelegate>)delegate;
-(void)setDelegate:(id<PLVideoViewDelegate>)arg1 ;
-(double)startTime;
-(double)endTime;
-(void)stop;
-(void)pause;
-(void)setProgress:(id)arg1 ;
-(void)_reset;
-(double)duration;
-(void)_setDuration:(double)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(BOOL)isEditing;
-(BOOL)isPlaying;
-(void)play;
-(double)currentTime;
-(void)setCurrentTime:(double)arg1 ;
-(void)setEditing:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(NSString *)pathForVideoFile;
-(void)_networkReachabilityDidChange:(id)arg1 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)didMoveToSuperview;
-(id)_moviePlayer;
-(void)willMoveToSuperview:(id)arg1 ;
-(void)toggleScaleMode:(float)arg1 ;
-(void)_screenDidConnect:(id)arg1 ;
-(void)_screenDidDisconnect:(id)arg1 ;
-(void)_cancelRemaking:(id)arg1 ;
-(PLPhotoTileViewController *)imageTile;
-(BOOL)_canCreateMetadata;
-(void)_exportCompletedWithSuccess:(BOOL)arg1 ;
-(PFVideoAVObjectBuilder *)_videoAVObjectBuilder;
-(void)slalomRegionEditorDidBeginEditing:(id)arg1 withStartHandle:(BOOL)arg2 ;
-(void)slalomRegionEditorDidEndEditing:(id)arg1 ;
-(void)slalomRegionEditorStartValueChanged:(id)arg1 ;
-(void)slalomRegionEditorEndValueChanged:(id)arg1 ;
-(BOOL)slalomRegionEditorRequestForceZoom:(id)arg1 ;
-(void)slalomRegionEditorRequestForceUnzoom:(id)arg1 ;
-(void)moviePlayerControllerDidBecomeActiveController:(id)arg1 ;
-(void)moviePlayerControllerWillResignAsActiveController:(id)arg1 ;
-(BOOL)moviePlayerExitRequest:(id)arg1 exitReason:(int)arg2 ;
-(void)moviePlayerReadyToPlay:(id)arg1 ;
-(void)moviePlayerReadyToDisplay:(id)arg1 ;
-(void)moviePlayerBufferingStateDidChange:(id)arg1 ;
-(void)moviePlayerPlaybackStateDidChange:(id)arg1 fromPlaybackState:(unsigned long long)arg2 ;
-(void)moviePlayerPlaybackRateDidChange:(id)arg1 ;
-(void)moviePlayerPlaybackDidEnd:(id)arg1 ;
-(void)moviePlayerDurationAvailable:(id)arg1 ;
-(void)moviePlayerUpdatedDestinationPlaceholder:(id)arg1 ;
-(void)moviePlayerWasSuspendedDuringPlayback:(id)arg1 ;
-(void)moviePlayerEncounteredAuthenticationError:(id)arg1 ;
-(BOOL)moviePlayerShouldNotifyOnPreparationError:(id)arg1 ;
-(BOOL)moviePlayerControllerShouldAllowExternalPlayback:(id)arg1 ;
-(void)moviePlayerDidChangeExternalPlaybackType:(id)arg1 ;
-(id)moviePlayerRequestsPickedAirplayRoute:(id)arg1 ;
-(void)moviePlayerHeadsetPlayPausePressed:(id)arg1 ;
-(void)moviePlayerHeadsetNextTrackPressed:(id)arg1 ;
-(void)moviePlayerHeadsetPreviousTrackPressed:(id)arg1 ;
-(void)movieScrubber:(id)arg1 requestThumbnailImageForTimestamp:(id)arg2 isSummaryThumbnail:(BOOL)arg3 ;
-(double)movieScrubberDuration:(id)arg1 ;
-(id)movieScrubber:(id)arg1 evenlySpacedTimestamps:(int)arg2 startingAt:(id)arg3 endingAt:(id)arg4 ;
-(double)movieScrubberThumbnailAspectRatio:(id)arg1 ;
-(void)movieScrubber:(id)arg1 requestThumbnailImageForTimestamp:(id)arg2 ;
-(void)movieScrubber:(id)arg1 valueDidChange:(double)arg2 ;
-(void)movieScrubber:(id)arg1 editingStartValueDidChange:(double)arg2 ;
-(void)movieScrubber:(id)arg1 editingEndValueDidChange:(double)arg2 ;
-(void)movieScrubberDidBeginScrubbing:(id)arg1 withHandle:(int)arg2 ;
-(void)movieScrubberDidEndScrubbing:(id)arg1 withHandle:(int)arg2 ;
-(void)movieScrubber:(id)arg1 widthDelta:(float)arg2 originXDelta:(float)arg3 ;
-(void)movieScrubberWillBeginRequestingThumbnails:(id)arg1 ;
-(void)movieScrubberDidFinishRequestingThumbnails:(id)arg1 ;
-(void)movieScrubberWillBeginEditing:(id)arg1 ;
-(void)movieScrubberDidBeginEditing:(id)arg1 ;
-(void)movieScrubberDidCancelEditing:(id)arg1 ;
-(void)movieScrubberEditingAnimationFinished:(id)arg1 ;
-(void)movieScrubber:(id)arg1 willZoomToMinimumValue:(double)arg2 maximumValue:(double)arg3 ;
-(void)movieScrubberDidBeginAnimatingZoom:(id)arg1 ;
-(void)movieScrubberDidEndAnimatingZoom:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 videoCameraImage:(id)arg2 orientation:(long long)arg3 ;
-(id)_initWithFrame:(CGRect)arg1 videoCameraImage:(id)arg2 orientation:(long long)arg3 ;
-(void)_setupMoviePlayerIfNecessary;
-(void)_insertMoviePlayerViewIfNecessary;
-(void)_tearDownMoviePlayer;
-(void)_updateScrubberFrame;
-(double)scrubberWidth;
-(double)_scrubberBackgroundHeight;
-(void)_createScrubberIfNeeded;
-(void)_removeScrubber;
-(BOOL)_shouldShowSlalomEditor;
-(BOOL)_canAccessVideo;
-(id)videoScrubber;
-(id)slalomRegionEditor;
-(id)videoOverlayPlayButton;
-(void)_showVideoOverlay;
-(void)_videoOverlayFadeOutDidFinish;
-(void)_hideVideoOverlay:(BOOL)arg1 ;
-(void)removeVideoOverlay;
-(void)_hideTrimMessageView:(BOOL)arg1 ;
-(void)updateScaleMode;
-(void)_updateScaleModeForSize:(CGSize)arg1 ;
-(void)_setNeedsReloadScrubberThumbnails:(BOOL)arg1 ;
-(void)_reloadScrubberThumbnailsIfNeeded;
-(void)_requestPreviewPosterFrameForVideoSize:(CGSize)arg1 ;
-(void)_savePreviewPosterFrameImage:(CGImageRef)arg1 ;
-(void)_prepareAndResumePlayback;
-(void)_fetchNonlocalVideo;
-(void)_fetchLocalContentEditingInput;
-(BOOL)_prepareMoviePlayerIfNeeded;
-(BOOL)_canHandleAdjustmentData:(id)arg1 ;
-(void)_updateVideoAVObjectBuilderFromContentEditingInput:(id)arg1 ;
-(id)_optionsForAVURLAsset;
-(id)_assetForVideoPath:(id)arg1 ;
-(id)_assetForVideoURL:(id)arg1 ;
-(void)_configurePlayerForStreamedVideoIfNecessary;
-(void)_updateScrubberForSlowMotion;
-(void)_setMoviePlayerActive:(BOOL)arg1 ;
-(BOOL)_playerIsAirplay;
-(id)movieScrubber:(id)arg1 timestampsStartingAt:(id)arg2 endingAt:(id)arg3 maxCount:(int)arg4 ;
-(void)_saveCachedThumbnailsIfNecessary;
-(id)_pathForOriginalFile;
-(NSString *)_pathForVideoPreviewFile;
-(NSString *)_pathForPrebakedLandscapeScrubberThumbnails;
-(NSString *)_pathForPrebakedPortraitScrubberThumbnails;
-(BOOL)_mediaIsPlayable;
-(BOOL)_mediaIsVideo;
-(BOOL)_mediaIsCloudSharedStreamedVideo;
-(BOOL)_shouldStreamCloudPhotoLibraryVideo;
-(BOOL)_shouldStreamVideo;
-(BOOL)_canPlayCloudSharedStreamedVideoWithLocalVideo;
-(BOOL)_didSetPhotoData;
-(id)_loadThumbnailsIntoDictionary:(id)arg1 isLandscape:(BOOL)arg2 aspectRatio:(float)arg3 ;
-(void)_removeScrubberUpdateTimer;
-(void)_resetScrubberUpdateTimer;
-(void)_didScrubToValue:(double)arg1 withHandle:(int)arg2 ;
-(void)_addThumbnailRequestForTimestamp:(id)arg1 isSummaryThumbnail:(BOOL)arg2 ;
-(void)_serviceImageGenerationRequests;
-(void)_configureImageGenerator:(id)arg1 thumbnailSize:(CGSize)arg2 forSummaryThumbnails:(BOOL)arg3 ;
-(void)_clearImageGenerators;
-(void)setMaximumTrimLength:(double)arg1 ;
-(void)showTrimMessage:(id)arg1 withBottomY:(float)arg2 ;
-(void)hideTrimMessage;
-(void)_updateForEditing;
-(void)_updateSlalomRegionEditorState;
-(void)_setPlaying:(BOOL)arg1 ;
-(void)_setPlaybackDidBegin:(BOOL)arg1 ;
-(void)_scrubberAnimationFinished;
-(void)_thumbnailsWereRegenerated:(id)arg1 error:(id)arg2 contextInfo:(void*)arg3 ;
-(void)importerFinishedProcessingTrimmedVideo:(id)arg1 ;
-(void)_removeTrimProgressTimer;
-(void)_resetTrimProgressTimer;
-(void)_informDelegateAboutProgressChange:(float)arg1 ;
-(void)_updateTrimProgress;
-(BOOL)deleteOriginalFileAfterTrim;
-(BOOL)isTrimming;
-(BOOL)wasTrimmedInPlace;
-(void)trimUsingMode:(int)arg1 saveACopy:(BOOL)arg2 ;
-(void)cancelTrim;
-(double)_scrubberStartTime;
-(NSString *)videoPathAfterTrim;
-(PLManagedAsset *)trimmedVideoClip;
-(void)setTrimmedVideoClip:(PLManagedAsset *)arg1 ;
-(id)newPreviewImageData:(id*)arg1 ;
-(id)_videoSnapshot;
-(UIImageView *)previewImageView;
-(PLManagedAsset *)videoCameraImage;
-(void)setImageTile:(PLPhotoTileViewController *)arg1 ;
-(void)handleDoubleTap;
-(void)_didBeginPlayback;
-(void)_verifyOrRestartPlayback;
-(void)playButtonClicked:(id)arg1 ;
-(BOOL)playingToAirTunes;
-(BOOL)playingToVideoOut;
-(void)_displayPlaySpinner;
-(void)_removePlaySpinner;
-(void)forceStop;
-(void)_updateScrubberVisibilityWithDuration:(double)arg1 ;
-(void)viewDidAppear;
-(void)viewDidDisappear;
-(void)commitPendingUpdatesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)applicationWillResignActive;
-(void)applicationDidEnterBackground;
-(void)setPosterFrameImage:(UIImage *)arg1 ;
-(UIImage *)posterFrameImage;
-(void)_updateSnapshotImage;
-(void)_invalidateSnapshotImage;
-(void)_updatePosterImageView;
-(void)_updatePosterFrameVisibility;
-(void)setShowsPlayOverlay:(BOOL)arg1 ;
-(BOOL)showsPlayOverlay;
-(void)setShowsScrubber:(BOOL)arg1 ;
-(void)setShowsScrubber:(BOOL)arg1 duration:(double)arg2 ;
-(BOOL)showsScrubber;
-(void)prepareMoviePlayer;
-(void)notifyRequiredResourcesDownloaded;
-(void)setCanEdit:(BOOL)arg1 ;
-(void)_setLocalVideoUnavailable:(BOOL)arg1 ;
-(BOOL)canEdit;
-(BOOL)_canEditDuration:(double)arg1 ;
-(void)setScrubberIsSubview:(BOOL)arg1 ;
-(BOOL)scrubberIsSubview;
-(void)setLoadMediaImmediately:(BOOL)arg1 ;
-(BOOL)loadMediaImmediately;
-(void)_scrubToMovieTime:(double)arg1 ;
-(void)notifyOfChange:(id)arg1 shouldReloadBlock:(/*^block*/id)arg2 ;
-(BOOL)_scrubberTimeNeedsMapping;
-(double)_movieScrubberDuration;
-(id)_thumbnailSourceAsset;
-(double)_thumbnailTimeFromScrubberTime:(double)arg1 ;
-(double)_movieTimeFromScrubberTime:(double)arg1 ;
-(double)_scrubberTimeFromMovieTime:(double)arg1 ;
-(BOOL)shouldShowCopyCalloutAtPoint:(CGPoint)arg1 ;
-(void)_handleScreenConnectionChange:(BOOL)arg1 ;
-(void)_playbackFinished;
-(void)_updateSlalomRegionEditorRange;
-(void)_updateScrubberValue;
-(void)updateForRotationWithDuration:(double)arg1 isLandscape:(BOOL)arg2 ;
-(void)_enqueueAdjustmentsForCommit;
-(void)_commitPendingAdjustmentsUpdate;
-(void)_cancelDelayedCommitPendingAdjustmentsUpdate;
-(void)_commitPendingAdjustmentsUpdateAndWait:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_scrubToSlalomRegionEditorStartHandle:(BOOL)arg1 ;
-(BOOL)_canAirPlayCurrentVideo;
-(BOOL)_shouldPlayFlattenedVideo;
-(BOOL)_isFlattenedVideoUpToDate;
-(id)_metadataForFlattenedVideo;
-(id)_readMetadataFromPath:(id)arg1 ;
-(void)_writeMetadata:(id)arg1 toPath:(id)arg2 ;
-(id)_filePathForFlattenedVideo;
-(id)_filePathForFlattenedVideoMetadata;
-(void)_deleteFileAtPath:(id)arg1 ;
-(void)_flattenVideoWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_cancelAirplayExportSession;
-(void)setScrubberWidth:(double)arg1 ;
-(PLVideoPosterFrameView *)posterFrameView;
-(PLProgressStack *)trimProgressStack;
-(void)setTrimProgressStack:(PLProgressStack *)arg1 ;
-(BOOL)allowSlalomEditor;
-(void)setAllowSlalomEditor:(BOOL)arg1 ;
-(UIView *)scrubberBackgroundView;
-(BOOL)prepareMoviePlayerForScrubberAutomatically;
-(void)setPrepareMoviePlayerForScrubberAutomatically:(BOOL)arg1 ;
-(BOOL)shouldPlayVideoWhenViewAppears;
-(void)setShouldPlayVideoWhenViewAppears:(BOOL)arg1 ;
-(BOOL)_didInsertMoviePlayerView;
-(void)set_didInsertMoviePlayerView:(BOOL)arg1 ;
-(BOOL)_didEditSlalom;
-(void)_setDidEditSlalom:(BOOL)arg1 ;
-(BOOL)_isFetchingVideo;
-(BOOL)_localVideoUnavailable;
-(long long)_expectedNotificationsCount;
-(PFVideoAdjustments *)_adjustmentsToCommit;
-(BOOL)_canAttemptFetchingVideoDerivative;
-(void)_setCanAttemptFetchingVideoDerivative:(BOOL)arg1 ;
-(BOOL)_attemptFetchingVideoDerivative;
-(void)_setAttemptFetchingVideoDerivative:(BOOL)arg1 ;
-(BOOL)_slalomRegionEditorCreatedForScrubber;
@end

