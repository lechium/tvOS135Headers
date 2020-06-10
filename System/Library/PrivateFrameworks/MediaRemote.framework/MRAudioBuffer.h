/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:16 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVAudioCompressedBuffer, NSDictionary;

@interface MRAudioBuffer : NSObject {

	AVAudioCompressedBuffer* _buffer;
	NSDictionary* _formatSettings;

}

@property (nonatomic,readonly) AVAudioCompressedBuffer * buffer;              //@synthesize buffer=_buffer - In the implementation block
@property (nonatomic,readonly) NSDictionary * formatSettings;                 //@synthesize formatSettings=_formatSettings - In the implementation block
-(AVAudioCompressedBuffer *)buffer;
-(id)initWithFormatSettings:(id)arg1 packetCapacity:(unsigned long long)arg2 maximumPacketSize:(unsigned long long)arg3 ;
-(NSDictionary *)formatSettings;
@end

