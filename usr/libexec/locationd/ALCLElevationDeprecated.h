//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@interface ALCLElevationDeprecated : PBCodable <NSCopying>
{
    unsigned int _elevationAscended;	// 8 = 0x8
    unsigned int _elevationDescended;	// 12 = 0xc
    int _gradeType;	// 16 = 0x10
    float _verticalSpeed;	// 20 = 0x14
    struct {
        unsigned int elevationDescended:1;
        unsigned int gradeType:1;
        unsigned int verticalSpeed:1;
    } _has;	// 24 = 0x18
}

@property(nonatomic) float verticalSpeed; // @synthesize verticalSpeed=_verticalSpeed;
@property(nonatomic) unsigned int elevationDescended; // @synthesize elevationDescended=_elevationDescended;
@property(nonatomic) unsigned int elevationAscended; // @synthesize elevationAscended=_elevationAscended;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100446630
- (unsigned long long)hash;	// IMP=0x0000000100446554
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010044646c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010044639c
- (void)copyTo:(id)arg1;	// IMP=0x0000000100446308
- (void)writeTo:(id)arg1;	// IMP=0x000000010044624c
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100446244
- (id)dictionaryRepresentation;	// IMP=0x0000000100445cac
- (id)description;	// IMP=0x0000000100445c2c
@property(nonatomic) _Bool hasVerticalSpeed;
- (int)StringAsGradeType:(id)arg1;	// IMP=0x0000000100445b34
- (id)gradeTypeAsString:(int)arg1;	// IMP=0x0000000100445aac
@property(nonatomic) _Bool hasGradeType;
@property(nonatomic) int gradeType; // @synthesize gradeType=_gradeType;
@property(nonatomic) _Bool hasElevationDescended;

@end
