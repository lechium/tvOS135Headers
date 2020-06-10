/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:23 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VSSpeechSpeakableProtocol <VSSpeechTaskProtocol>
@optional
-(id)request;
-(id)voiceKey;
-(id)instrumentMetrics;
-(void)reportTimingInfo;
-(void)reportInstrumentMetrics;
-(void)reportSpeechStart;
-(id)audioPowerProvider;

@required
-(BOOL)isSpeaking;

@end

