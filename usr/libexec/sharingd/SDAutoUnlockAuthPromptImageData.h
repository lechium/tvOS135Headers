//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSData;

@interface SDAutoUnlockAuthPromptImageData : PBCodable <NSCopying>
{
    NSData *_imageData;	// 8 = 0x8
    unsigned int _version;	// 16 = 0x10
    _Bool _finalMessage;	// 20 = 0x14
    struct {
        unsigned int version:1;
        unsigned int finalMessage:1;
    } _has;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001000abd80
@property(nonatomic) _Bool finalMessage; // @synthesize finalMessage=_finalMessage;
@property(retain, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001000abc98
- (unsigned long long)hash;	// IMP=0x00000001000abc04
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000abaf0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000aba1c
- (void)copyTo:(id)arg1;	// IMP=0x00000001000ab978
- (void)writeTo:(id)arg1;	// IMP=0x00000001000ab8e0
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001000ab8d8
- (id)dictionaryRepresentation;	// IMP=0x00000001000ab49c
- (id)description;	// IMP=0x00000001000ab3e8
@property(nonatomic) _Bool hasFinalMessage;
@property(readonly, nonatomic) _Bool hasImageData;
@property(nonatomic) _Bool hasVersion;

@end
