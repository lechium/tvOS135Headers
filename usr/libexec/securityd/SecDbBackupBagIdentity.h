//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSData;

__attribute__((visibility("hidden")))
@interface SecDbBackupBagIdentity : PBCodable <NSCopying>
{
    NSData *_baghash;	// 8 = 0x8
    NSData *_baguuid;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100165cb4
@property(retain, nonatomic) NSData *baghash; // @synthesize baghash=_baghash;
@property(retain, nonatomic) NSData *baguuid; // @synthesize baguuid=_baguuid;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100165c00
- (unsigned long long)hash;	// IMP=0x0000000100165ba4
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100165ad0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100165a20
- (void)copyTo:(id)arg1;	// IMP=0x00000001001659b4
- (void)writeTo:(id)arg1;	// IMP=0x0000000100165950
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100165948
- (id)dictionaryRepresentation;	// IMP=0x00000001001658b4
- (id)description;	// IMP=0x0000000100165800
@property(readonly, nonatomic) _Bool hasBaghash;
@property(readonly, nonatomic) _Bool hasBaguuid;

@end
