//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@interface ALCLStepCountEntry : PBCodable <NSCopying>
{
    double _distance;	// 8 = 0x8
    double _pace;	// 16 = 0x10
    double _timestamp;	// 24 = 0x18
    unsigned int _count;	// 32 = 0x20
    unsigned int _floorsAscended;	// 36 = 0x24
    unsigned int _floorsDescended;	// 40 = 0x28
    int _recordId;	// 44 = 0x2c
    _Bool _regularEntry;	// 48 = 0x30
    struct {
        unsigned int pace:1;
        unsigned int timestamp:1;
        unsigned int recordId:1;
    } _has;	// 52 = 0x34
}

@property(nonatomic) _Bool regularEntry; // @synthesize regularEntry=_regularEntry;
@property(nonatomic) int recordId; // @synthesize recordId=_recordId;
@property(nonatomic) double pace; // @synthesize pace=_pace;
@property(nonatomic) unsigned int floorsDescended; // @synthesize floorsDescended=_floorsDescended;
@property(nonatomic) unsigned int floorsAscended; // @synthesize floorsAscended=_floorsAscended;
@property(nonatomic) double distance; // @synthesize distance=_distance;
@property(nonatomic) unsigned int count; // @synthesize count=_count;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001000c29ec
- (unsigned long long)hash;	// IMP=0x00000001000c2838
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000c26ec
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000c25e8
- (void)copyTo:(id)arg1;	// IMP=0x00000001000c2520
- (void)writeTo:(id)arg1;	// IMP=0x00000001000c241c
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001000c2414
- (id)dictionaryRepresentation;	// IMP=0x00000001000c1c2c
- (id)description;	// IMP=0x00000001000c1bac
@property(nonatomic) _Bool hasRecordId;
@property(nonatomic) _Bool hasPace;
@property(nonatomic) _Bool hasTimestamp;

@end

