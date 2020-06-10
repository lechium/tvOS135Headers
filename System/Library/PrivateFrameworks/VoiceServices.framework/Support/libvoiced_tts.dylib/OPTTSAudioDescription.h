/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:24 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libvoiced_tts.dylib/libvoiced_tts.dylib-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData;

@interface OPTTSAudioDescription : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const AudioDescription* _root;

}

@property (nonatomic,readonly) double sample_rate; 
@property (nonatomic,readonly) unsigned format_id; 
@property (nonatomic,readonly) unsigned format_flags; 
@property (nonatomic,readonly) unsigned bytes_per_packet; 
@property (nonatomic,readonly) unsigned frames_per_packet; 
@property (nonatomic,readonly) unsigned bytes_per_frame; 
@property (nonatomic,readonly) unsigned channels_per_frame; 
@property (nonatomic,readonly) unsigned bits_per_channel; 
@property (nonatomic,readonly) unsigned reserved; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)reserved;
-(AudioStreamBasicDescription)audioStreamBasicDescription;
-(id)initWithFlatbuffData:(id)arg1 root:(const AudioDescription*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::AudioDescription>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const AudioDescription*)arg2 ;
-(double)sample_rate;
-(unsigned)format_id;
-(unsigned)format_flags;
-(unsigned)bytes_per_packet;
-(unsigned)frames_per_packet;
-(unsigned)bytes_per_frame;
-(unsigned)channels_per_frame;
-(unsigned)bits_per_channel;
@end

