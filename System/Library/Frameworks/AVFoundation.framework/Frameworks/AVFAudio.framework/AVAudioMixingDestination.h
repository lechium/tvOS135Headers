/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:24 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFAudio/AVFAudio-Structs.h>
#import <AVFAudio/AVAudioMixing.h>

@class AVAudioConnectionPoint, NSString;

@interface AVAudioMixingDestination : NSObject <AVAudioMixing> {

	void* _impl;

}

@property (nonatomic,readonly) AVAudioConnectionPoint * connectionPoint; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) float volume; 
-(id)init;
-(void)dealloc;
-(AVAudio3DPoint)position;
-(void)setPosition:(AVAudio3DPoint)arg1 ;
-(void)setRate:(float)arg1 ;
-(float)rate;
-(float)pan;
-(void)setPan:(float)arg1 ;
-(long long)renderingAlgorithm;
-(void)setRenderingAlgorithm:(long long)arg1 ;
-(long long)sourceMode;
-(void)setSourceMode:(long long)arg1 ;
-(long long)pointSourceInHeadMode;
-(void)setPointSourceInHeadMode:(long long)arg1 ;
-(float)reverbBlend;
-(void)setReverbBlend:(float)arg1 ;
-(float)obstruction;
-(void)setObstruction:(float)arg1 ;
-(float)occlusion;
-(void)setOcclusion:(float)arg1 ;
-(id)destinationForMixer:(id)arg1 bus:(unsigned long long)arg2 ;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(id)initWithImpl:(AVAudioMixingImpl*)arg1 ;
-(AVAudioMixingImpl*)implementation;
-(AVAudioConnectionPoint *)connectionPoint;
@end

