/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:40 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/MCObject.h>

@class MCAssetAudio, MCAudioPlaylist, MCSlide;

@interface MCSong : MCObject {

	BOOL mStartTimeIsDefined;
	BOOL mDurationIsDefined;
	float mVolume;
	MCAssetAudio* mAsset;
	double mFadeInDuration;
	double mFadeOutDuration;
	unsigned long long mIndex;
	double mStartTime;
	double mDuration;
	MCAudioPlaylist* mAudioPlaylistIfAudioPlaylistSong;
	MCSlide* mSlideIfSlideSong;

}

@property (assign) MCAudioPlaylist * audioPlaylistIfAudioPlaylistSong; 
@property (assign) MCSlide * slideIfSlideSong; 
@property (retain) MCAssetAudio * asset; 
@property (assign,nonatomic) float volume; 
@property (assign,nonatomic) double fadeInDuration; 
@property (assign,nonatomic) double fadeOutDuration; 
@property (assign,nonatomic) unsigned long long index; 
@property (nonatomic,readonly) BOOL startTimeIsDefined; 
@property (assign,nonatomic) double startTime; 
@property (nonatomic,readonly) BOOL durationIsDefined; 
@property (assign,nonatomic) double duration; 
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
-(id)init;
-(double)startTime;
-(void)setStartTime:(double)arg1 ;
-(unsigned long long)index;
-(double)duration;
-(void)setIndex:(unsigned long long)arg1 ;
-(void)setDuration:(double)arg1 ;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(MCAssetAudio *)asset;
-(void)setAsset:(MCAssetAudio *)arg1 ;
-(double)fadeInDuration;
-(double)fadeOutDuration;
-(void)setFadeInDuration:(double)arg1 ;
-(void)setFadeOutDuration:(double)arg1 ;
-(void)demolish;
-(void)undefineStartTime;
-(void)undefineDuration;
-(BOOL)startTimeIsDefined;
-(BOOL)durationIsDefined;
-(id)imprint;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(id)initWithImprint:(id)arg1 andMontage:(id)arg2 ;
-(void)setAudioPlaylistIfAudioPlaylistSong:(MCAudioPlaylist *)arg1 ;
-(void)setSlideIfSlideSong:(MCSlide *)arg1 ;
-(MCAudioPlaylist *)audioPlaylistIfAudioPlaylistSong;
-(MCSlide *)slideIfSlideSong;
@end

