//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@interface ALCLStairClimbingModel : PBCodable <NSCopying>
{
    float _machineFrequency;	// 8 = 0x8
}

@property(nonatomic) float machineFrequency; // @synthesize machineFrequency=_machineFrequency;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001002f4d20
- (unsigned long long)hash;	// IMP=0x00000001002f4cb8
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001002f4c64
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001002f4c14
- (void)copyTo:(id)arg1;	// IMP=0x00000001002f4c00
- (void)writeTo:(id)arg1;	// IMP=0x00000001002f4be8
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001002f4be0
- (id)dictionaryRepresentation;	// IMP=0x00000001002f49b0
- (id)description;	// IMP=0x00000001002f4930

@end

