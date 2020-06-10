//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class PDURLSessionProxyResponse, PDURLSessionProxyTaskMessage;

@interface PDURLSessionProxyGetAuthHeaders : PBCodable <NSCopying>
{
    PDURLSessionProxyResponse *_response;	// 8 = 0x8
    PDURLSessionProxyTaskMessage *_task;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010000c788
@property(retain, nonatomic) PDURLSessionProxyResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) PDURLSessionProxyTaskMessage *task; // @synthesize task=_task;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010000c6a0
- (unsigned long long)hash;	// IMP=0x000000010000c644
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010000c570
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010000c4c0
- (void)copyTo:(id)arg1;	// IMP=0x000000010000c454
- (void)writeTo:(id)arg1;	// IMP=0x000000010000c3f0
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010000c1b8
- (id)dictionaryRepresentation;	// IMP=0x000000010000c0d8
- (id)description;	// IMP=0x000000010000c024
@property(readonly, nonatomic) _Bool hasResponse;
@property(readonly, nonatomic) _Bool hasTask;

@end
