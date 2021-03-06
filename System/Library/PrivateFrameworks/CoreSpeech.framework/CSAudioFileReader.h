/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:40:50 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source, CSAudioFileReaderDelegate;
#import <CoreSpeech/CoreSpeech-Structs.h>
@class NSObject;

@interface CSAudioFileReader : NSObject {

	OpaqueExtAudioFileRef _fFile;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _audioFeedTimer;
	double _bufferDuration;
	AudioStreamBasicDescription _outASBD;
	id<CSAudioFileReaderDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CSAudioFileReaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id)initWithURL:(id)arg1 ;
-(void)close;
-(id<CSAudioFileReaderDelegate>)delegate;
-(void)setDelegate:(id<CSAudioFileReaderDelegate>)arg1 ;
-(BOOL)startRecording;
-(void)stopRecording;
-(BOOL)setRecordBufferDuration:(double)arg1 ;
-(void)_readAudioBufferAndFeed;
-(BOOL)prepareRecording:(id)arg1 ;
-(id)readSamplesFromChannelIdx:(unsigned)arg1 ;
@end

