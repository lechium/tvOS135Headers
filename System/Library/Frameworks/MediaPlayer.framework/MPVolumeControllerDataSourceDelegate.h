/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:08 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPVolumeControllerDataSourceDelegate <NSObject>
@required
-(void)volumeControllerDataSource:(id)arg1 didChangeVolumeWarning:(long long)arg2;
-(void)volumeControllerDataSource:(id)arg1 didChangeEUVolumeLimit:(float)arg2;
-(void)volumeControllerDataSource:(id)arg1 didChangeEUVolumeLimitEnforced:(BOOL)arg2;
-(void)volumeControllerDataSource:(id)arg1 didChangeMuted:(BOOL)arg2;
-(void)volumeControllerDataSource:(id)arg1 didChangeVolume:(float)arg2;
-(void)volumeControllerDataSource:(id)arg1 didChangeVolumeLabel:(id)arg2;
-(void)volumeControllerDataSource:(id)arg1 didChangeVolumeCapabilities:(unsigned)arg2;
-(void)volumeControllerDataSource:(id)arg1 didChangeVolumeControlAvailability:(BOOL)arg2;
-(void)volumeControllerDataSource:(id)arg1 didChangeVolumeAudioCategory:(id)arg2;

@end
