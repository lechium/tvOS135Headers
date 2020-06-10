/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:35 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosPlayer/PhotosPlayer-Structs.h>
#import <PhotosPlayer/ISObservable.h>
#import <libobjc.A.dylib/ISChangeObserver.h>
#import <libobjc.A.dylib/ISWrappedAVPlayerDelegate.h>

@protocol OS_dispatch_queue, ISBasePlayerDelegate;
@class AVPlayer, NSObject, NSHashTable, NSString, ISPlayerItem, NSError, ISWrappedAVPlayer, ISBehavior, ISPlayerState, ISPlayerOutputContent;

@interface ISBasePlayer : ISObservable <ISChangeObserver, ISWrappedAVPlayerDelegate> {

	float _videoVolume;
	AVPlayer* _providedAVPlayer;
	NSObject*<OS_dispatch_queue> _outputQueue;
	NSHashTable* _outputs;
	NSString* _apertureMode;
	SCD_Struct_IS5 _isValid;
	BOOL _audioEnabled;
	float _audioVolume;
	ISPlayerItem* _playerItem;
	long long _status;
	NSError* _error;
	id<ISBasePlayerDelegate> _delegate;
	ISWrappedAVPlayer* _videoPlayer;
	ISBehavior* _activeBehavior;
	id __videoWillPlayToEndObserver;
	id __videoWillPlayToPhotoObserver;
	ISPlayerState* _lastAppliedLayoutInfo;
	ISPlayerOutputContent* __outputContent;
	double _lastAppliedScale;
	SCD_Struct_IS1 __videoForwardPlaybackEndTime;

}

@property (setter=setActiveBehavior:,nonatomic,retain) ISBehavior * activeBehavior;                                            //@synthesize activeBehavior=_activeBehavior - In the implementation block
@property (setter=_setVideoWillPlayToEndObserver:,nonatomic,retain) id _videoWillPlayToEndObserver;                            //@synthesize _videoWillPlayToEndObserver=__videoWillPlayToEndObserver - In the implementation block
@property (setter=_setVideoWillPlayToPhotoObserver:,nonatomic,retain) id _videoWillPlayToPhotoObserver;                        //@synthesize _videoWillPlayToPhotoObserver=__videoWillPlayToPhotoObserver - In the implementation block
@property (setter=_setLastAppliedLayoutInfo:,nonatomic,retain) ISPlayerState * lastAppliedLayoutInfo;                          //@synthesize lastAppliedLayoutInfo=_lastAppliedLayoutInfo - In the implementation block
@property (setter=_setOutputContent:,nonatomic,retain) ISPlayerOutputContent * _outputContent;                                 //@synthesize _outputContent=__outputContent - In the implementation block
@property (assign,setter=_setLastAppliedScale:,nonatomic) double lastAppliedScale;                                             //@synthesize lastAppliedScale=_lastAppliedScale - In the implementation block
@property (assign,setter=_setStatus:,nonatomic) long long status;                                                              //@synthesize status=_status - In the implementation block
@property (assign,setter=_setVideoForwardPlaybackEndTime:,nonatomic) SCD_Struct_IS1 _videoForwardPlaybackEndTime;              //@synthesize _videoForwardPlaybackEndTime=__videoForwardPlaybackEndTime - In the implementation block
@property (setter=_setError:,nonatomic,retain) NSError * error;                                                                //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) ISPlayerItem * playerItem;                                                                        //@synthesize playerItem=_playerItem - In the implementation block
@property (assign,nonatomic) float audioVolume;                                                                                //@synthesize audioVolume=_audioVolume - In the implementation block
@property (assign,getter=isAudioEnabled,nonatomic) BOOL audioEnabled;                                                          //@synthesize audioEnabled=_audioEnabled - In the implementation block
@property (assign,nonatomic,__weak) id<ISBasePlayerDelegate> delegate;                                                         //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) ISWrappedAVPlayer * videoPlayer;                                                                //@synthesize videoPlayer=_videoPlayer - In the implementation block
@property (nonatomic,readonly) BOOL videoLayersReadyForDisplay; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id<ISBasePlayerDelegate>)delegate;
-(void)setDelegate:(id<ISBasePlayerDelegate>)arg1 ;
-(NSError *)error;
-(void)_setError:(id)arg1 ;
-(long long)status;
-(void)addOutput:(id)arg1 ;
-(id)apertureMode;
-(void)setApertureMode:(id)arg1 ;
-(ISPlayerItem *)playerItem;
-(void)removeOutput:(id)arg1 ;
-(void)setPlayerItem:(ISPlayerItem *)arg1 ;
-(void)_setStatus:(long long)arg1 ;
-(BOOL)_needsUpdate;
-(float)audioVolume;
-(void)setAudioVolume:(float)arg1 ;
-(void)setAudioEnabled:(BOOL)arg1 ;
-(BOOL)isAudioEnabled;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(id)mutableChangeObject;
-(void)_updateIfNeeded;
-(void)didPerformChanges;
-(ISWrappedAVPlayer *)videoPlayer;
-(void)avPlayer:(id)arg1 itemDidPlayToEnd:(id)arg2 ;
-(void)avPlayerDidDeallocate;
-(id)initWithVideoPlayer:(id)arg1 ;
-(void)playerItemDidChange;
-(void)configurePlayerItem;
-(void)statusDidChange;
-(void)activeBehaviorDidChange;
-(void)_outputVideoReadyForDisplayDidChange:(id)arg1 ;
-(BOOL)videoLayersReadyForDisplay;
-(BOOL)behaviorIsVideoReadyForDisplay:(id)arg1 ;
-(void)didAddOutput:(id)arg1 ;
-(void)willRemoveOutput:(id)arg1 ;
-(void)_videoDidPlayToEnd;
-(void)_videoWillPlayToPhoto;
-(void)_videoWillPlayToEnd;
-(double)videoWillPlayToEndInterval;
-(double)videoWillPlayToPhotoInterval;
-(void)setActiveBehavior:(ISBehavior *)arg1 ;
-(void)applyScale:(double)arg1 withTransitionOptions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)applyOutputInfo:(id)arg1 fromBehavior:(id)arg2 withTransitionOptions:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)enumerateOutputsWithBlock:(/*^block*/id)arg1 ;
-(void)_configureNewOutput:(id)arg1 ;
-(void)_invalidateContentFromPlayerItem;
-(void)_updateContentFromPlayerItemIfNeeded;
-(void)_setOutputContent:(id)arg1 ;
-(void)_invalidateWillPlayToEndObserver;
-(void)_updateWillPlayToEndObserverIfNeeded;
-(void)_invalidateWillPlayToPhotoObserver;
-(void)_updateWillPlayToPhotoObserverIfNeeded;
-(void)_invalidateStatus;
-(void)_updateStatusIfNeeded;
-(void)_setForwardPlaybackEndTime:(SCD_Struct_IS1)arg1 ;
-(float)videoVolume;
-(void)setVideoVolume:(float)arg1 ;
-(void)_invalidateVideoPlayerVolume;
-(void)_updateVideoPlayerVolumeIfNeeded;
-(void)_invalidateVideoPlayer;
-(void)_updateVideoPlayerIfNeeded;
-(void)_handleErrorsIfNeeded;
-(void)_handleMediaServicesReset;
-(void)_setVideoPlayer:(id)arg1 ;
-(void)behavior:(id)arg1 didSetOutputInfo:(id)arg2 withTransitionOptions:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)behavior:(id)arg1 setVideoPlayRate:(float)arg2 ;
-(float)videoPlayRate;
-(BOOL)behavior:(id)arg1 seekVideoPlayerToTime:(SCD_Struct_IS1)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)behavior:(id)arg1 seekVideoPlayerToTime:(SCD_Struct_IS1)arg2 toleranceBefore:(SCD_Struct_IS1)arg3 toleranceAfter:(SCD_Struct_IS1)arg4 completionHandler:(/*^block*/id)arg5 ;
-(BOOL)behavior:(id)arg1 prerollVideoAtRate:(float)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)behavior:(id)arg1 setVideoForwardPlaybackEndTime:(SCD_Struct_IS1)arg2 ;
-(void)behavior:(id)arg1 setVideoVolume:(float)arg2 ;
-(id)behavior:(id)arg1 addBoundaryTimeObserverForTimes:(id)arg2 queue:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(void)behavior:(id)arg1 removeTimeObserver:(id)arg2 ;
-(void)behavior:(id)arg1 playVideoToTime:(SCD_Struct_IS1)arg2 initialRate:(float)arg3 overDuration:(double)arg4 progressHandler:(/*^block*/id)arg5 ;
-(ISBehavior *)activeBehavior;
-(id)_videoWillPlayToEndObserver;
-(void)_setVideoWillPlayToEndObserver:(id)arg1 ;
-(id)_videoWillPlayToPhotoObserver;
-(void)_setVideoWillPlayToPhotoObserver:(id)arg1 ;
-(ISPlayerState *)lastAppliedLayoutInfo;
-(void)_setLastAppliedLayoutInfo:(id)arg1 ;
-(ISPlayerOutputContent *)_outputContent;
-(double)lastAppliedScale;
-(void)_setLastAppliedScale:(double)arg1 ;
-(SCD_Struct_IS1)_videoForwardPlaybackEndTime;
-(void)_setVideoForwardPlaybackEndTime:(SCD_Struct_IS1)arg1 ;
@end

