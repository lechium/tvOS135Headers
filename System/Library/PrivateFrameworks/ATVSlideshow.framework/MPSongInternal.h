/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:38 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MPSongInternal : NSObject {

	double duration;
	double startTime;
	double audioVolume;
	double fadeInDuration;
	double fadeOutDuration;
	BOOL assetLogging;

}

@property (assign,nonatomic) double duration; 
@property (assign,nonatomic) double startTime; 
@property (assign,nonatomic) double audioVolume; 
@property (assign,nonatomic) double fadeInDuration; 
@property (assign,nonatomic) double fadeOutDuration; 
@property (assign,nonatomic) BOOL assetLogging; 
-(double)startTime;
-(void)setStartTime:(double)arg1 ;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(double)audioVolume;
-(void)setAudioVolume:(double)arg1 ;
-(double)fadeInDuration;
-(double)fadeOutDuration;
-(void)setFadeInDuration:(double)arg1 ;
-(void)setFadeOutDuration:(double)arg1 ;
-(BOOL)assetLogging;
-(void)setAssetLogging:(BOOL)arg1 ;
@end
