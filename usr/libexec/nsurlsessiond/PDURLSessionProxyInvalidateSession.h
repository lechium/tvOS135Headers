//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class PDURLSessionProxySessionMessage;

@interface PDURLSessionProxyInvalidateSession : PBCodable <NSCopying>
{
    PDURLSessionProxySessionMessage *_session;	// 8 = 0x8
    _Bool _shouldCancel;	// 16 = 0x10
    struct {
        unsigned int shouldCancel:1;
    } _has;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x0000000100038ee0
@property(nonatomic) _Bool shouldCancel; // @synthesize shouldCancel=_shouldCancel;
@property(retain, nonatomic) PDURLSessionProxySessionMessage *session; // @synthesize session=_session;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100038e1c
- (unsigned long long)hash;	// IMP=0x0000000100038db4
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100038cd0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100038c28
- (void)copyTo:(id)arg1;	// IMP=0x0000000100038bb0
- (void)writeTo:(id)arg1;	// IMP=0x0000000100038b40
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100038894
- (id)dictionaryRepresentation;	// IMP=0x00000001000387a4
- (id)description;	// IMP=0x00000001000386f0
@property(nonatomic) _Bool hasShouldCancel;
@property(readonly, nonatomic) _Bool hasSession;

@end

