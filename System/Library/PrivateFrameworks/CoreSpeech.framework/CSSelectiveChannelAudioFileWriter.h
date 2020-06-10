/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:40:51 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpeech/CoreSpeech-Structs.h>
#import <libobjc.A.dylib/CSAudioFileWriter.h>

@class NSArray, NSURL, NSString;

@interface CSSelectiveChannelAudioFileWriter : NSObject <CSAudioFileWriter> {

	BOOL isWriting;
	OpaqueExtAudioFileRef fFile;
	AudioStreamBasicDescription inASBD;
	AudioStreamBasicDescription outASBD;
	NSArray* selectedChannelList;
	unsigned _numberOfChannels;
	NSURL* _fileURL;

}

@property (nonatomic,readonly) NSURL * fileURL;                        //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,readonly) unsigned numberOfChannels;              //@synthesize numberOfChannels=_numberOfChannels - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSURL *)fileURL;
-(unsigned)numberOfChannels;
-(BOOL)endAudio;
-(BOOL)addSamples:(const void*)arg1 numSamples:(long long)arg2 ;
-(id)initWithURL:(id)arg1 inputFormat:(AudioStreamBasicDescription)arg2 outputFormat:(AudioStreamBasicDescription)arg3 channelBitset:(unsigned long long)arg4 ;
@end

