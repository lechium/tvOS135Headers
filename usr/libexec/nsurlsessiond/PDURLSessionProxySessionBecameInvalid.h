//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class PDURLSessionProxyError, PDURLSessionProxySessionMessage;

@interface PDURLSessionProxySessionBecameInvalid : PBCodable <NSCopying>
{
    PDURLSessionProxyError *_error;	// 8 = 0x8
    PDURLSessionProxySessionMessage *_session;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010004f33c
@property(retain, nonatomic) PDURLSessionProxyError *error; // @synthesize error=_error;
@property(retain, nonatomic) PDURLSessionProxySessionMessage *session; // @synthesize session=_session;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010004f254
- (unsigned long long)hash;	// IMP=0x000000010004f1f8
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010004f124
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010004f074
- (void)copyTo:(id)arg1;	// IMP=0x000000010004f008
- (void)writeTo:(id)arg1;	// IMP=0x000000010004efa4
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010004ed6c
- (id)dictionaryRepresentation;	// IMP=0x000000010004ec8c
- (id)description;	// IMP=0x000000010004ebd8
@property(readonly, nonatomic) _Bool hasError;
@property(readonly, nonatomic) _Bool hasSession;

@end
