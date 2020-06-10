/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:53 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AFDictationServiceDelegate.h>

@class AFDictationConnection, NSString;

@interface AFDictationConnectionServiceDelegate : NSObject <AFDictationServiceDelegate> {

	AFDictationConnection* _connection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDictationConnection:(id)arg1 ;
-(oneway void)speechRecordingWillBeginWithInputAudioPowerXPCWrapper:(id)arg1 ;
-(oneway void)speechRecordingDidBeginWithOptions:(id)arg1 ;
-(oneway void)speechDidBeginLocalRecognitionWithModelInfo:(id)arg1 ;
-(oneway void)speechRecordingDidEnd;
-(oneway void)speechRecordingDidCancel;
-(oneway void)speechRecordingDidFail:(id)arg1 ;
-(oneway void)speechDidRecognizePhrases:(id)arg1 utterances:(id)arg2 usingSpeechModel:(id)arg3 correctionContext:(id)arg4 audioAnalytics:(id)arg5 ;
-(oneway void)speechDidRecognizePartialResult:(id)arg1 ;
-(oneway void)speechDidRecognizeTokens:(id)arg1 usingSpeechModel:(id)arg2 ;
-(oneway void)speechDidProcessAudioDuration:(double)arg1 ;
-(oneway void)speechDidRecognizeTranscriptionObjects:(id)arg1 usingSpeechModel:(id)arg2 ;
-(oneway void)speechRecognitionDidFinishWithError:(id)arg1 ;
-(oneway void)speechDidFinishWritingAudioFile:(id)arg1 error:(id)arg2 ;
-(oneway void)speechDidReceiveSearchResults:(id)arg1 recognitionText:(id)arg2 stable:(BOOL)arg3 final:(BOOL)arg4 ;
-(oneway void)speechDidRecognizePackage:(id)arg1 ;
-(oneway void)speechDidDetectLanguage:(id)arg1 confidenceScores:(id)arg2 isConfident:(BOOL)arg3 ;
-(oneway void)speechDidRecognizeMultilingualSpeech:(id)arg1 ;
-(oneway void)languageDetectorFailedWithError:(id)arg1 ;
@end

