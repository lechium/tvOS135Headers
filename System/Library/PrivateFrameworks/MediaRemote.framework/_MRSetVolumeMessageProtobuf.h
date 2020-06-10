/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:22 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface _MRSetVolumeMessageProtobuf : PBCodable <NSCopying> {

	NSString* _outputDeviceUID;
	float _volume;
	SCD_Struct_MR4 _has;

}

@property (assign,nonatomic) BOOL hasVolume; 
@property (assign,nonatomic) float volume;                            //@synthesize volume=_volume - In the implementation block
@property (nonatomic,readonly) BOOL hasOutputDeviceUID; 
@property (nonatomic,retain) NSString * outputDeviceUID;              //@synthesize outputDeviceUID=_outputDeviceUID - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(void)setOutputDeviceUID:(NSString *)arg1 ;
-(BOOL)hasOutputDeviceUID;
-(NSString *)outputDeviceUID;
-(void)setHasVolume:(BOOL)arg1 ;
-(BOOL)hasVolume;
@end

