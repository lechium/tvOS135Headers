//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSString, PDURLSessionProxyTaskMessage;

@interface PDURLSessionProxySetTaskDescription : PBCodable <NSCopying>
{
    PDURLSessionProxyTaskMessage *_task;	// 8 = 0x8
    NSString *_taskDescription;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010002e918
@property(retain, nonatomic) NSString *taskDescription; // @synthesize taskDescription=_taskDescription;
@property(retain, nonatomic) PDURLSessionProxyTaskMessage *task; // @synthesize task=_task;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010002e84c
- (unsigned long long)hash;	// IMP=0x000000010002e7f0
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010002e71c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010002e66c
- (void)copyTo:(id)arg1;	// IMP=0x000000010002e600
- (void)writeTo:(id)arg1;	// IMP=0x000000010002e59c
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010002e388
- (id)dictionaryRepresentation;	// IMP=0x000000010002e2d0
- (id)description;	// IMP=0x000000010002e21c
@property(readonly, nonatomic) _Bool hasTaskDescription;
@property(readonly, nonatomic) _Bool hasTask;

@end
