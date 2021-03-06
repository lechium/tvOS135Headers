/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:40:51 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SFSpeechRecognitionTaskDelegate <NSObject>
@optional
-(void)speechRecognitionDidDetectSpeech:(id)arg1;
-(void)speechRecognitionTask:(id)arg1 didHypothesizeTranscription:(id)arg2;
-(void)speechRecognitionTask:(id)arg1 didFinishRecognition:(id)arg2;
-(void)speechRecognitionTaskFinishedReadingAudio:(id)arg1;
-(void)speechRecognitionTaskWasCancelled:(id)arg1;
-(void)speechRecognitionTask:(id)arg1 didFinishSuccessfully:(BOOL)arg2;

@end

