/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:37 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AFSpeechServiceDelegate <NSObject>
@required
-(oneway void)speechServiceDidRecognizeTokens:(id)arg1;
-(oneway void)speechServiceDidProcessAudioDuration:(double)arg1;
-(oneway void)speechServiceDidRecognizeRawEagerRecognitionCandidate:(id)arg1;
-(oneway void)speechServiceDidRecognizePackage:(id)arg1;
-(oneway void)speechServiceDidFinishRecognitionWithStatistics:(id)arg1 error:(id)arg2;

@end

