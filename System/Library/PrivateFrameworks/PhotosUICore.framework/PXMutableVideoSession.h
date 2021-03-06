/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:24 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PXMutableVideoSession <NSObject>
@property (assign,nonatomic) SCD_Struct_PX9 playbackTimeRange; 
@property (assign,nonatomic) BOOL seekToBeginningAtEnd; 
@property (assign,getter=isLoopingEnabled,nonatomic) BOOL loopingEnabled; 
@property (assign,nonatomic) long long desiredPlayState; 
@property (assign,nonatomic) BOOL preventsSleepDuringVideoPlayback; 
@property (assign,nonatomic) BOOL allowsExternalPlayback; 
@required
-(void)setLoopingEnabled:(BOOL)arg1;
-(BOOL)isLoopingEnabled;
-(BOOL)allowsExternalPlayback;
-(void)setAllowsExternalPlayback:(BOOL)arg1;
-(long long)desiredPlayState;
-(void)setDesiredPlayState:(long long)arg1;
-(void)setAudioSessionCategory:(id)arg1 options:(unsigned long long)arg2;
-(void)setVolume:(float)arg1 withFade:(BOOL)arg2;
-(void)setPreventsSleepDuringVideoPlayback:(BOOL)arg1;
-(BOOL)preventsSleepDuringVideoPlayback;
-(SCD_Struct_PX9)playbackTimeRange;
-(void)setPlaybackTimeRange:(SCD_Struct_PX9)arg1;
-(BOOL)seekToBeginningAtEnd;
-(void)setSeekToBeginningAtEnd:(BOOL)arg1;

@end

