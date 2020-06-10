//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class PDURLSessionProxyTaskMessage;

@interface PDURLSessionProxyTaskWaiting : PBCodable <NSCopying>
{
    unsigned int _reason;	// 8 = 0x8
    PDURLSessionProxyTaskMessage *_task;	// 16 = 0x10
    struct {
        unsigned int reason:1;
    } _has;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100037bc0
@property(nonatomic) unsigned int reason; // @synthesize reason=_reason;
@property(retain, nonatomic) PDURLSessionProxyTaskMessage *task; // @synthesize task=_task;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100037afc
- (unsigned long long)hash;	// IMP=0x0000000100037a94
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000379b8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100037910
- (void)copyTo:(id)arg1;	// IMP=0x0000000100037898
- (void)writeTo:(id)arg1;	// IMP=0x0000000100037828
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100037588
- (id)dictionaryRepresentation;	// IMP=0x0000000100037498
- (id)description;	// IMP=0x00000001000373e4
@property(nonatomic) _Bool hasReason;
@property(readonly, nonatomic) _Bool hasTask;

@end

