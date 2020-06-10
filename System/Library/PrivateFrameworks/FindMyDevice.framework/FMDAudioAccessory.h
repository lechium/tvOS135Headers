/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:52 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/FindMyDevice.framework/FindMyDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSURL;


@protocol FMDAudioAccessory <NSObject>
@property (nonatomic,readonly) unsigned long long audioSafetyStatus; 
@property (nonatomic,readonly) NSString * audioRoutingIdentifier; 
@property (nonatomic,readonly) NSURL * audioURL; 
@property (nonatomic,readonly) BOOL playingSound; 
@optional
-(BOOL)shouldStopSoundNow;

@required
-(NSURL *)audioURL;
-(BOOL)updateAudioAsset:(id)arg1;
-(BOOL)updatePlaybackChannels:(id)arg1;
-(unsigned long long)audioSafetyStatus;
-(NSString *)audioRoutingIdentifier;
-(BOOL)playingSound;

@end
