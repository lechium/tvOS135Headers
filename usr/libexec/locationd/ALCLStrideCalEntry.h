//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@interface ALCLStrideCalEntry : PBCodable <NSCopying>
{
    double _endTime;	// 8 = 0x8
    double _startTime;	// 16 = 0x10
    double _timestamp;	// 24 = 0x18
    float _distance;	// 32 = 0x20
    float _kvalue;	// 36 = 0x24
    float _kvalueTrack;	// 40 = 0x28
    unsigned int _pacebin;	// 44 = 0x2c
    int _recordId;	// 48 = 0x30
    float _score;	// 52 = 0x34
    int _session;	// 56 = 0x38
    float _speed;	// 60 = 0x3c
    int _steps;	// 64 = 0x40
    _Bool _regularEntry;	// 68 = 0x44
    struct {
        unsigned int timestamp:1;
        unsigned int pacebin:1;
        unsigned int recordId:1;
        unsigned int regularEntry:1;
    } _has;	// 72 = 0x48
}

@property(nonatomic) _Bool regularEntry; // @synthesize regularEntry=_regularEntry;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) float speed; // @synthesize speed=_speed;
@property(nonatomic) int session; // @synthesize session=_session;
@property(nonatomic) int steps; // @synthesize steps=_steps;
@property(nonatomic) float distance; // @synthesize distance=_distance;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) float score; // @synthesize score=_score;
@property(nonatomic) float kvalueTrack; // @synthesize kvalueTrack=_kvalueTrack;
@property(nonatomic) float kvalue; // @synthesize kvalue=_kvalue;
@property(nonatomic) unsigned int pacebin; // @synthesize pacebin=_pacebin;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) int recordId; // @synthesize recordId=_recordId;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001000c181c
- (unsigned long long)hash;	// IMP=0x00000001000c14e8
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000c1310
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000c11a8
- (void)copyTo:(id)arg1;	// IMP=0x00000001000c1074
- (void)writeTo:(id)arg1;	// IMP=0x00000001000c0ee0
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001000c0ed8
- (id)dictionaryRepresentation;	// IMP=0x00000001000c0420
- (id)description;	// IMP=0x00000001000c03a0
@property(nonatomic) _Bool hasRegularEntry;
@property(nonatomic) _Bool hasTimestamp;
@property(nonatomic) _Bool hasPacebin;
@property(nonatomic) _Bool hasRecordId;

@end

