//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@interface ALCMCoarseElevation : PBCodable <NSCopying>
{
    unsigned int _elevationAscended;	// 8 = 0x8
    int _source;	// 12 = 0xc
    struct {
        unsigned int source:1;
    } _has;	// 16 = 0x10
}

@property(nonatomic) unsigned int elevationAscended; // @synthesize elevationAscended=_elevationAscended;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001002f2184
- (unsigned long long)hash;	// IMP=0x00000001002f213c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001002f20a4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001002f2028
- (void)copyTo:(id)arg1;	// IMP=0x00000001002f1fe8
- (void)writeTo:(id)arg1;	// IMP=0x00000001002f1f80
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001002f1f78
- (id)dictionaryRepresentation;	// IMP=0x00000001002f1ba0
- (id)description;	// IMP=0x00000001002f1b20
- (int)StringAsSource:(id)arg1;	// IMP=0x00000001002f1ac8
- (id)sourceAsString:(int)arg1;	// IMP=0x00000001002f1a6c
@property(nonatomic) _Bool hasSource;
@property(nonatomic) int source; // @synthesize source=_source;

@end

