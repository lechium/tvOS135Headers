//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import "NSCopying-Protocol.h"

@class NSData;

@interface SDUnlockSessionKeyExchangeRequest : PBRequest <NSCopying>
{
    unsigned int _errorCode;	// 8 = 0x8
    NSData *_key;	// 16 = 0x10
    unsigned int _sessionID;	// 24 = 0x18
    unsigned int _version;	// 28 = 0x1c
    _Bool _usingRecord;	// 32 = 0x20
    struct {
        unsigned int errorCode:1;
        unsigned int sessionID:1;
        unsigned int version:1;
        unsigned int usingRecord:1;
    } _has;	// 36 = 0x24
}

- (void).cxx_destruct;	// IMP=0x0000000100051640
@property(nonatomic) unsigned int errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) NSData *key; // @synthesize key=_key;
@property(nonatomic) _Bool usingRecord; // @synthesize usingRecord=_usingRecord;
@property(nonatomic) unsigned int sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001000514e4
- (unsigned long long)hash;	// IMP=0x0000000100051410
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000512b4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010005118c
- (void)copyTo:(id)arg1;	// IMP=0x0000000100051094
- (void)writeTo:(id)arg1;	// IMP=0x0000000100050fb0
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100050fa8
- (id)dictionaryRepresentation;	// IMP=0x0000000100050960
- (id)description;	// IMP=0x00000001000508ac
@property(nonatomic) _Bool hasErrorCode;
@property(readonly, nonatomic) _Bool hasKey;
@property(nonatomic) _Bool hasUsingRecord;
@property(nonatomic) _Bool hasSessionID;
@property(nonatomic) _Bool hasVersion;

@end

