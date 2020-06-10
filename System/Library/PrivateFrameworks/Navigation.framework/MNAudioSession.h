/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:52 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNAudioSession <NSObject>
@property (assign,nonatomic,__weak) id delegate; 
@property (assign,nonatomic) unsigned long long voiceGuidanceLevel; 
@required
-(id)delegate;
-(void)setDelegate:(id)arg1;
-(void)stop;
-(void)endSession;
-(BOOL)isSpeaking;
-(void)beginSession;
-(void)setVoiceGuidanceLevel:(unsigned long long)arg1;
-(void)speak:(id)arg1 shortPromptType:(unsigned long long)arg2 ignorePromptStyle:(BOOL)arg3 minimumRequiredLevel:(unsigned long long)arg4 completionBlock:(/*^block*/id)arg5;
-(void)prepareToAnnounce;
-(void)speak:(id)arg1 shortPromptType:(unsigned long long)arg2 ignorePromptStyle:(BOOL)arg3 completionBlock:(/*^block*/id)arg4;
-(BOOL)vibrateForPrompt:(unsigned long long)arg1;
-(void)clearAllAnnouncements;
-(unsigned long long)voiceGuidanceLevel;

@end

