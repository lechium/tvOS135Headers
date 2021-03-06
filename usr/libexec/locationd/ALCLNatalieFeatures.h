//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@interface ALCLNatalieFeatures : PBCodable <NSCopying>
{
    int _fEpochType;	// 8 = 0x8
    float _fIQRX;	// 12 = 0xc
    float _fIQRY;	// 16 = 0x10
    float _fIQRZ;	// 20 = 0x14
    float _fMachineFrequency;	// 24 = 0x18
    float _fVectorMagnitude;	// 28 = 0x1c
    _Bool _fStanding;	// 32 = 0x20
}

@property(nonatomic) _Bool fStanding; // @synthesize fStanding=_fStanding;
@property(nonatomic) int fEpochType; // @synthesize fEpochType=_fEpochType;
@property(nonatomic) float fMachineFrequency; // @synthesize fMachineFrequency=_fMachineFrequency;
@property(nonatomic) float fIQRZ; // @synthesize fIQRZ=_fIQRZ;
@property(nonatomic) float fIQRY; // @synthesize fIQRY=_fIQRY;
@property(nonatomic) float fIQRX; // @synthesize fIQRX=_fIQRX;
@property(nonatomic) float fVectorMagnitude; // @synthesize fVectorMagnitude=_fVectorMagnitude;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001000c4704
- (unsigned long long)hash;	// IMP=0x00000001000c4544
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000c4450
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000c43a0
- (void)copyTo:(id)arg1;	// IMP=0x00000001000c432c
- (void)writeTo:(id)arg1;	// IMP=0x00000001000c4268
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001000c4260
- (id)dictionaryRepresentation;	// IMP=0x00000001000c3c08
- (id)description;	// IMP=0x00000001000c3b88
- (int)StringAsFEpochType:(id)arg1;	// IMP=0x00000001000c3b04
- (id)fEpochTypeAsString:(int)arg1;	// IMP=0x00000001000c3a94

@end

