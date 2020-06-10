/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:23 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFAudio/AVAudioUnitEffect.h>

@interface AVAudioUnitDelay : AVAudioUnitEffect

@property (assign,nonatomic) double delayTime; 
@property (assign,nonatomic) float feedback; 
@property (assign,nonatomic) float lowPassCutoff; 
@property (assign,nonatomic) float wetDryMix; 
-(id)init;
-(void)setWetDryMix:(float)arg1 ;
-(void)setDelayTime:(double)arg1 ;
-(void)setFeedback:(float)arg1 ;
-(void)setLowPassCutoff:(float)arg1 ;
-(float)wetDryMix;
-(double)delayTime;
-(float)feedback;
-(float)lowPassCutoff;
@end

