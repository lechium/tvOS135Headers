/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:19 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class AVAudioFile, SNAudioStreamAnalyzer, NSObject;

@interface SNAudioFileAnalyzer : NSObject {

	AVAudioFile* _audioFile;
	SNAudioStreamAnalyzer* _streamAnalyzer;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _wasCancelled;

}
-(void)analyze;
-(id)detailedDescription;
-(id)initWithURL:(id)arg1 error:(id*)arg2 ;
-(void)removeRequest:(id)arg1 ;
-(void)analyzeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)removeAllRequests;
-(BOOL)addRequest:(id)arg1 withObserver:(id)arg2 error:(id*)arg3 ;
-(void)cancelAnalysis;
@end

