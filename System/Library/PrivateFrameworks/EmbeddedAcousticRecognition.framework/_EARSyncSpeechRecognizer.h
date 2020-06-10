/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:47 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
@class NSObject, _EARFormatter, NSString;

@interface _EARSyncSpeechRecognizer : NSObject {

	NSObject*<OS_dispatch_queue> _formatterQueue;
	_EARFormatter* _formatter;
	shared_ptr<quasar::SyncSpeechRecognizer>* _syncRecognizer;
	NSString* _configPath;

}
+(void)initialize;
-(id)initWithConfiguration:(id)arg1 ;
-(id)getSpeechRecognitionResultFromTokens:(vector<std::__1::vector<quasar::Token, std::__1::allocator<quasar::Token> >, std::__1::allocator<std::__1::vector<quasar::Token, std::__1::allocator<quasar::Token> > > >*)arg1 taskName:(id)arg2 ;
-(void)resetWithSamplingRate:(unsigned)arg1 language:(id)arg2 taskType:(id)arg3 userId:(id)arg4 sessionId:(id)arg5 deviceId:(id)arg6 farField:(BOOL)arg7 audioSource:(id)arg8 maxAudioBufferSizeSeconds:(unsigned)arg9 ;
-(id)resultsWithAddedAudio:(id)arg1 numberOfSamples:(unsigned long long)arg2 taskName:(id)arg3 ;
-(id)resultsWithEndedAudio;
@end

