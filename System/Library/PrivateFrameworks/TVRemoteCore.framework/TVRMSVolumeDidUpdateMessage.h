/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:44 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVRemoteCore/TVRemoteCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TVRMSVolumeDidUpdateMessage : PBCodable <NSCopying> {

	int _sessionIdentifier;
	float _volume;
	SCD_Struct_TV2 _has;

}

@property (assign,nonatomic) BOOL hasSessionIdentifier; 
@property (assign,nonatomic) int sessionIdentifier;                  //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasVolume; 
@property (assign,nonatomic) float volume;                           //@synthesize volume=_volume - In the implementation block
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
-(int)sessionIdentifier;
-(void)setSessionIdentifier:(int)arg1 ;
-(void)setHasVolume:(BOOL)arg1 ;
-(BOOL)hasVolume;
-(BOOL)hasSessionIdentifier;
-(void)setHasSessionIdentifier:(BOOL)arg1 ;
@end

