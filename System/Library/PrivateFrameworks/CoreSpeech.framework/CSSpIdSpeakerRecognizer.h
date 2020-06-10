/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:40:51 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDictionary;


@protocol CSSpIdSpeakerRecognizer <NSObject>
@property (nonatomic,readonly) NSDictionary * lastSpeakerIdInfo; 
@required
-(id)initWithContext:(id)arg1 delegate:(id)arg2;
-(void)processAudioChunk:(id)arg1;
-(void)setCVTTriggerPhraseDetected;
-(void)recordingStoppedForReason:(long long)arg1;
-(void)processMyriadDecision:(unsigned long long)arg1;
-(NSDictionary *)lastSpeakerIdInfo;

@end
