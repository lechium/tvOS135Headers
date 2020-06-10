/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:24 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface VCMediaNegotiationBlobMomentsSettings : PBCodable <NSCopying> {

	unsigned _capabilities;
	unsigned _multiwayCapabilities;
	unsigned _supportedImageTypes;
	unsigned _supportedVideoCodecs;
	SCD_Struct_VC53 _has;

}

@property (assign,nonatomic) unsigned capabilities;                      //@synthesize capabilities=_capabilities - In the implementation block
@property (assign,nonatomic) BOOL hasSupportedVideoCodecs; 
@property (assign,nonatomic) unsigned supportedVideoCodecs;              //@synthesize supportedVideoCodecs=_supportedVideoCodecs - In the implementation block
@property (assign,nonatomic) BOOL hasSupportedImageTypes; 
@property (assign,nonatomic) unsigned supportedImageTypes;               //@synthesize supportedImageTypes=_supportedImageTypes - In the implementation block
@property (assign,nonatomic) BOOL hasMultiwayCapabilities; 
@property (assign,nonatomic) unsigned multiwayCapabilities;              //@synthesize multiwayCapabilities=_multiwayCapabilities - In the implementation block
+(unsigned)avcMomentsCapabilitiesForMultiwayMomentsCapabilities:(int)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setCapabilities:(unsigned)arg1 ;
-(unsigned)capabilities;
-(unsigned)supportedImageTypes;
-(void)setSupportedVideoCodecs:(unsigned)arg1 ;
-(void)setHasSupportedVideoCodecs:(BOOL)arg1 ;
-(BOOL)hasSupportedVideoCodecs;
-(void)setSupportedImageTypes:(unsigned)arg1 ;
-(void)setHasSupportedImageTypes:(BOOL)arg1 ;
-(BOOL)hasSupportedImageTypes;
-(void)setMultiwayCapabilities:(unsigned)arg1 ;
-(void)setHasMultiwayCapabilities:(BOOL)arg1 ;
-(BOOL)hasMultiwayCapabilities;
-(unsigned)supportedVideoCodecs;
-(unsigned)multiwayCapabilities;
-(id)newVideoCodecSet;
-(id)initWithVideoCodecs:(id)arg1 imageTypes:(id)arg2 ;
-(id)newImageTypeSet;
@end

