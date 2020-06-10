//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class PDURLSessionProxyResponse, PDURLSessionProxyTaskMessage;

@interface PDURLSessionProxyDidReceiveResponse : PBCodable <NSCopying>
{
    PDURLSessionProxyResponse *_response;	// 8 = 0x8
    PDURLSessionProxyTaskMessage *_task;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010002da40
@property(retain, nonatomic) PDURLSessionProxyResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) PDURLSessionProxyTaskMessage *task; // @synthesize task=_task;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010002d958
- (unsigned long long)hash;	// IMP=0x000000010002d8fc
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010002d828
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010002d778
- (void)copyTo:(id)arg1;	// IMP=0x000000010002d70c
- (void)writeTo:(id)arg1;	// IMP=0x000000010002d6a8
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010002d470
- (id)dictionaryRepresentation;	// IMP=0x000000010002d390
- (id)description;	// IMP=0x000000010002d2dc
@property(readonly, nonatomic) _Bool hasResponse;
@property(readonly, nonatomic) _Bool hasTask;

@end
