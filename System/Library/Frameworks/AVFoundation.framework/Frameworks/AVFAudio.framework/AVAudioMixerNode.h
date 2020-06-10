/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:23 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFAudio/AVAudioNode.h>
#import <AVFAudio/AVAudioMixing.h>

@class NSString;

@interface AVAudioMixerNode : AVAudioNode <AVAudioMixing>

@property (assign,nonatomic) float outputVolume; 
@property (nonatomic,readonly) unsigned long long nextAvailableInputBus; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) float volume; 
-(id)init;
-(void)didAttachToEngine:(id)arg1 ;
-(void)setOutputVolume:(float)arg1 ;
-(float)outputVolume;
-(void)setInputVolume:(float)arg1 bus:(unsigned long long)arg2 ;
-(void)setInputPan:(float)arg1 bus:(unsigned long long)arg2 ;
-(void)inputConnected:(unsigned long long)arg1 ;
-(unsigned long long)nextAvailableInputBus;
@end

