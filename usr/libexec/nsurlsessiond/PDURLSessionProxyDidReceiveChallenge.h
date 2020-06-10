//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class PDURLSessionProxyAuthChallenge, PDURLSessionProxyTaskMessage;

@interface PDURLSessionProxyDidReceiveChallenge : PBCodable <NSCopying>
{
    PDURLSessionProxyAuthChallenge *_challenge;	// 8 = 0x8
    PDURLSessionProxyTaskMessage *_task;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010003fbcc
@property(retain, nonatomic) PDURLSessionProxyAuthChallenge *challenge; // @synthesize challenge=_challenge;
@property(retain, nonatomic) PDURLSessionProxyTaskMessage *task; // @synthesize task=_task;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010003fae4
- (unsigned long long)hash;	// IMP=0x000000010003fa88
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010003f9b4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010003f904
- (void)copyTo:(id)arg1;	// IMP=0x000000010003f898
- (void)writeTo:(id)arg1;	// IMP=0x000000010003f834
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010003f5fc
- (id)dictionaryRepresentation;	// IMP=0x000000010003f51c
- (id)description;	// IMP=0x000000010003f468
@property(readonly, nonatomic) _Bool hasChallenge;
@property(readonly, nonatomic) _Bool hasTask;

@end

