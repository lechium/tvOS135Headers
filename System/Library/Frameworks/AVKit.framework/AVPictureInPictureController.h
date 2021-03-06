/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:37 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVPictureInPicturePlatformAdapterDelegate.h>
#import <AVKit/AVPictureInPictureControlsStyleAppearance.h>

@protocol AVPictureInPictureControllerDelegate, AVPictureInPictureContentSource;
@class AVPlayerLayer, AVPictureInPicturePlatformAdapter, AVObservationController, AVPlayerController, AVPictureInPictureViewController, NSString;

@interface AVPictureInPictureController : NSObject <AVPictureInPicturePlatformAdapterDelegate, AVPictureInPictureControlsStyleAppearance> {

	BOOL _pictureInPicturePossible;
	BOOL _pictureInPictureActive;
	BOOL _pictureInPictureSuspended;
	BOOL _otherPictureInPictureActive;
	BOOL _wantsImmediateAssetInspection;
	BOOL _retainsSourceDuringPictureInPicturePlayback;
	BOOL _allowsPictureInPicturePlayback;
	BOOL _allowsPictureInPictureFromInlineWhenEnteringBackground;
	BOOL _pictureInPictureWasStartedWhenEnteringBackground;
	long long _controlsStyle;
	AVPlayerLayer* _playerLayer;
	id<AVPictureInPictureControllerDelegate> _delegate;
	AVPictureInPicturePlatformAdapter* _platformAdapter;
	AVObservationController* _observationController;
	id<AVPictureInPictureContentSource> _sourceIfRetainedDuringPictureInPicturePlayback;
	id<AVPictureInPictureContentSource> _source;
	AVPlayerController* _playerController;

}

@property (nonatomic,readonly) AVPictureInPicturePlatformAdapter * platformAdapter;                                           //@synthesize platformAdapter=_platformAdapter - In the implementation block
@property (nonatomic,readonly) AVObservationController * observationController;                                               //@synthesize observationController=_observationController - In the implementation block
@property (nonatomic,retain) id<AVPictureInPictureContentSource> sourceIfRetainedDuringPictureInPicturePlayback;              //@synthesize sourceIfRetainedDuringPictureInPicturePlayback=_sourceIfRetainedDuringPictureInPicturePlayback - In the implementation block
@property (assign,getter=isPictureInPicturePossible,nonatomic) BOOL pictureInPicturePossible;                                 //@synthesize pictureInPicturePossible=_pictureInPicturePossible - In the implementation block
@property (assign,getter=isPictureInPictureActive,nonatomic) BOOL pictureInPictureActive;                                     //@synthesize pictureInPictureActive=_pictureInPictureActive - In the implementation block
@property (assign,getter=isPictureInPictureSuspended,nonatomic) BOOL pictureInPictureSuspended;                               //@synthesize pictureInPictureSuspended=_pictureInPictureSuspended - In the implementation block
@property (assign,getter=isOtherPictureInPictureActive,nonatomic) BOOL otherPictureInPictureActive;                           //@synthesize otherPictureInPictureActive=_otherPictureInPictureActive - In the implementation block
@property (assign,nonatomic) BOOL wantsImmediateAssetInspection;                                                              //@synthesize wantsImmediateAssetInspection=_wantsImmediateAssetInspection - In the implementation block
@property (nonatomic,__weak,readonly) id<AVPictureInPictureContentSource> source;                                             //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) AVPictureInPictureViewController * pictureInPictureViewController; 
@property (nonatomic,retain) AVPlayerController * playerController;                                                           //@synthesize playerController=_playerController - In the implementation block
@property (assign,nonatomic) BOOL retainsSourceDuringPictureInPicturePlayback;                                                //@synthesize retainsSourceDuringPictureInPicturePlayback=_retainsSourceDuringPictureInPicturePlayback - In the implementation block
@property (assign,nonatomic) BOOL allowsPictureInPicturePlayback;                                                             //@synthesize allowsPictureInPicturePlayback=_allowsPictureInPicturePlayback - In the implementation block
@property (assign,nonatomic) BOOL allowsPictureInPictureFromInlineWhenEnteringBackground;                                     //@synthesize allowsPictureInPictureFromInlineWhenEnteringBackground=_allowsPictureInPictureFromInlineWhenEnteringBackground - In the implementation block
@property (assign,nonatomic) BOOL pictureInPictureWasStartedWhenEnteringBackground;                                           //@synthesize pictureInPictureWasStartedWhenEnteringBackground=_pictureInPictureWasStartedWhenEnteringBackground - In the implementation block
@property (nonatomic,readonly) AVPlayerLayer * playerLayer;                                                                   //@synthesize playerLayer=_playerLayer - In the implementation block
@property (assign,nonatomic,__weak) id<AVPictureInPictureControllerDelegate> delegate;                                        //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long controlsStyle;                                                                         //@synthesize controlsStyle=_controlsStyle - In the implementation block
+(BOOL)isPictureInPictureSupported;
+(id)pictureInPictureButtonStartImageCompatibleWithTraitCollection:(id)arg1 ;
+(id)pictureInPictureButtonStopImageCompatibleWithTraitCollection:(id)arg1 ;
+(id)pictureInPictureButtonStartImage;
+(id)pictureInPictureButtonStopImage;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(id<AVPictureInPictureControllerDelegate>)delegate;
-(void)setDelegate:(id<AVPictureInPictureControllerDelegate>)arg1 ;
-(id<AVPictureInPictureContentSource>)source;
-(id)initWithSource:(id)arg1 ;
-(AVPlayerLayer *)playerLayer;
-(void)setPictureInPicturePossible:(BOOL)arg1 ;
-(BOOL)isPictureInPictureActive;
-(BOOL)isPictureInPicturePossible;
-(void)setControlsStyle:(long long)arg1 ;
-(long long)controlsStyle;
-(BOOL)isPictureInPictureSuspended;
-(BOOL)pictureInPictureWasStartedWhenEnteringBackground;
-(void)startPictureInPicture;
-(BOOL)allowsPictureInPicturePlayback;
-(void)setAllowsPictureInPicturePlayback:(BOOL)arg1 ;
-(void)setPlayerController:(AVPlayerController *)arg1 ;
-(AVPlayerController *)playerController;
-(void)stopPictureInPicture;
-(void)pictureInPicturePlatformAdapter:(id)arg1 failedToStartError:(id)arg2 ;
-(void)pictureInPicturePlatformAdapter:(id)arg1 prepareToStopForRestoringUserInterface:(/*^block*/id)arg2 ;
-(void)pictureInPicturePlatformAdapterPrepareToStopForDismissal:(id)arg1 ;
-(void)pictureInPicturePlatformAdapter:(id)arg1 stopPictureInPictureAndRestoreUserInterface:(BOOL)arg2 ;
-(void)pictureInPicturePlatformAdapter:(id)arg1 handlePlaybackCommand:(long long)arg2 ;
-(void)pictureInPicturePlatformAdapter:(id)arg1 statusDidChange:(long long)arg2 fromStatus:(long long)arg3 ;
-(id)initWithPlayerLayer:(id)arg1 ;
-(void)_commonInitWithSource:(id)arg1 ;
-(void)stopPictureInPictureEvenWhenInBackground;
-(void)contentSourceVideoRectInWindowChanged;
-(AVPictureInPictureViewController *)pictureInPictureViewController;
-(void)setAllowsPictureInPictureFromInlineWhenEnteringBackground:(BOOL)arg1 ;
-(void)setPictureInPictureActive:(BOOL)arg1 ;
-(id)_delegateIfRespondsToSelector:(SEL)arg1 ;
-(void)_stopPictureInPictureAndRestoreUserInterface:(BOOL)arg1 ;
-(void)setPictureInPictureSuspended:(BOOL)arg1 ;
-(AVPictureInPicturePlatformAdapter *)platformAdapter;
-(AVObservationController *)observationController;
-(id<AVPictureInPictureContentSource>)sourceIfRetainedDuringPictureInPicturePlayback;
-(void)setSourceIfRetainedDuringPictureInPicturePlayback:(id<AVPictureInPictureContentSource>)arg1 ;
-(BOOL)isOtherPictureInPictureActive;
-(void)setOtherPictureInPictureActive:(BOOL)arg1 ;
-(BOOL)wantsImmediateAssetInspection;
-(void)setWantsImmediateAssetInspection:(BOOL)arg1 ;
-(BOOL)retainsSourceDuringPictureInPicturePlayback;
-(void)setRetainsSourceDuringPictureInPicturePlayback:(BOOL)arg1 ;
-(BOOL)allowsPictureInPictureFromInlineWhenEnteringBackground;
-(void)setPictureInPictureWasStartedWhenEnteringBackground:(BOOL)arg1 ;
@end

