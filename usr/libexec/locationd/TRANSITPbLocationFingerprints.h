//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSMutableArray;

@interface TRANSITPbLocationFingerprints : PBCodable <NSCopying>
{
    NSMutableArray *_locationFingerprints;	// 8 = 0x8
}

@property(retain, nonatomic) NSMutableArray *locationFingerprints; // @synthesize locationFingerprints=_locationFingerprints;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010028d3f4
- (unsigned long long)hash;	// IMP=0x000000010028d3dc
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010028d368
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010028d1fc
- (void)copyTo:(id)arg1;	// IMP=0x000000010028d154
- (void)writeTo:(id)arg1;	// IMP=0x000000010028d048
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010028d040
- (id)dictionaryRepresentation;	// IMP=0x000000010028cc94
- (id)description;	// IMP=0x000000010028cc14
- (id)locationFingerprintAtIndex:(unsigned long long)arg1;	// IMP=0x000000010028cbfc
- (unsigned long long)locationFingerprintsCount;	// IMP=0x000000010028cbe4
- (void)addLocationFingerprint:(id)arg1;	// IMP=0x000000010028cb90
- (void)clearLocationFingerprints;	// IMP=0x000000010028cb78
- (void)dealloc;	// IMP=0x000000010028cb28

@end

