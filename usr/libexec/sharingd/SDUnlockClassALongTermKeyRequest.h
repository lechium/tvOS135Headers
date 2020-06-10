//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import "NSCopying-Protocol.h"

@class NSData;

@interface SDUnlockClassALongTermKeyRequest : PBRequest <NSCopying>
{
    NSData *_longTermKey;	// 8 = 0x8
    unsigned int _sessionID;	// 16 = 0x10
    unsigned int _version;	// 20 = 0x14
    CDStruct_6358cc24 _has;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100153374
@property(retain, nonatomic) NSData *longTermKey; // @synthesize longTermKey=_longTermKey;
@property(nonatomic) unsigned int sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100153294
- (unsigned long long)hash;	// IMP=0x0000000100153210
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100153110
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100153044
- (void)copyTo:(id)arg1;	// IMP=0x0000000100152fa8
- (void)writeTo:(id)arg1;	// IMP=0x0000000100152f10
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100152f08
- (id)dictionaryRepresentation;	// IMP=0x0000000100152ad8
- (id)description;	// IMP=0x0000000100152a24
@property(readonly, nonatomic) _Bool hasLongTermKey;
@property(nonatomic) _Bool hasSessionID;
@property(nonatomic) _Bool hasVersion;

@end
