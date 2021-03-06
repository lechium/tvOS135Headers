//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSData, NSString;

@interface SDAutoUnlockEscrowSecretInfo : PBCodable <NSCopying>
{
    NSString *_pairingID;	// 8 = 0x8
    NSData *_secret;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000dd208
@property(retain, nonatomic) NSString *pairingID; // @synthesize pairingID=_pairingID;
@property(retain, nonatomic) NSData *secret; // @synthesize secret=_secret;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001000dd154
- (unsigned long long)hash;	// IMP=0x00000001000dd0f8
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000dd024
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000dcf74
- (void)copyTo:(id)arg1;	// IMP=0x00000001000dcf08
- (void)writeTo:(id)arg1;	// IMP=0x00000001000dcea4
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001000dce9c
- (id)dictionaryRepresentation;	// IMP=0x00000001000dcc40
- (id)description;	// IMP=0x00000001000dcb8c
@property(readonly, nonatomic) _Bool hasPairingID;
@property(readonly, nonatomic) _Bool hasSecret;

@end

