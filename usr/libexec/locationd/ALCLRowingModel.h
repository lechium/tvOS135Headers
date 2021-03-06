//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@interface ALCLRowingModel : PBCodable <NSCopying>
{
    float _strokeAmp;	// 8 = 0x8
    float _strokeFrequency;	// 12 = 0xc
    float _strokePower;	// 16 = 0x10
    struct {
        unsigned int strokeAmp:1;
        unsigned int strokeFrequency:1;
    } _has;	// 20 = 0x14
}

@property(nonatomic) float strokeFrequency; // @synthesize strokeFrequency=_strokeFrequency;
@property(nonatomic) float strokeAmp; // @synthesize strokeAmp=_strokeAmp;
@property(nonatomic) float strokePower; // @synthesize strokePower=_strokePower;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100309f70
- (unsigned long long)hash;	// IMP=0x0000000100309e38
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100309d78
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100309cd8
- (void)copyTo:(id)arg1;	// IMP=0x0000000100309c6c
- (void)writeTo:(id)arg1;	// IMP=0x0000000100309bd8
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100309bd0
- (id)dictionaryRepresentation;	// IMP=0x0000000100309820
- (id)description;	// IMP=0x00000001003097a0
@property(nonatomic) _Bool hasStrokeFrequency;
@property(nonatomic) _Bool hasStrokeAmp;

@end

