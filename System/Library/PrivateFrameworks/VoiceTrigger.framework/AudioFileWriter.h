/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:59 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VoiceTrigger/VoiceTrigger-Structs.h>
@interface AudioFileWriter : NSObject {

	BOOL isWriting;
	OpaqueExtAudioFileRef fFile;

}
-(void)dealloc;
-(void)close;
-(id)initWithURL:(id)arg1 inputFormat:(AudioStreamBasicDescription)arg2 outputFormat:(AudioStreamBasicDescription)arg3 ;
-(short)addSamples:(void*)arg1 len:(long long)arg2 ;
@end
