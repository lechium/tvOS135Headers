/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:40:54 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _EARSpeechRecognitionResultStream <NSObject>
@optional
-(void)speechRecognizer:(id)arg1 didRecognizeFinalResults:(id)arg2 tokenSausage:(id)arg3 nBestChoices:(id)arg4;
-(void)speechRecognizer:(id)arg1 didRecognizeFinalResultPackage:(id)arg2;
-(void)speechRecognizer:(id)arg1 didProcessAudioDuration:(double)arg2;
-(void)speechRecognizer:(id)arg1 didRecognizeRawEagerRecognitionCandidate:(id)arg2;
-(void)speechRecognizer:(id)arg1 didProduceEndpointFeaturesWithWordCount:(long long)arg2 trailingSilenceDuration:(long long)arg3 eosLikelihood:(double)arg4 pauseCounts:(id)arg5 silencePosterior:(double)arg6 processedAudioDurationInMilliseconds:(long long)arg7;
-(void)speechRecognizer:(id)arg1 didRecognizePartialResultNbest:(id)arg2;

@required
-(void)speechRecognizer:(id)arg1 didRecognizePartialResult:(id)arg2;
-(void)speechRecognizer:(id)arg1 didFinishRecognitionWithError:(id)arg2;
-(void)speechRecognizer:(id)arg1 didRecognizeFinalResults:(id)arg2;

@end

