//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface TRANSITPbMacModePair : PBCodable <NSCopying>
{
    double _mode;	// 8 = 0x8
    NSString *_mac;	// 16 = 0x10
    CDStruct_ad4540a6 _has;	// 24 = 0x18
}

@property(nonatomic) double mode; // @synthesize mode=_mode;
@property(retain, nonatomic) NSString *mac; // @synthesize mac=_mac;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100714960
- (unsigned long long)hash;	// IMP=0x00000001007148b8
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100714808
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100714764
- (void)copyTo:(id)arg1;	// IMP=0x00000001007146f8
- (void)writeTo:(id)arg1;	// IMP=0x000000010071468c
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100714684
- (id)dictionaryRepresentation;	// IMP=0x00000001007143bc
- (id)description;	// IMP=0x000000010071433c
@property(nonatomic) _Bool hasMode;
@property(readonly, nonatomic) _Bool hasMac;
- (void)dealloc;	// IMP=0x0000000100714280

@end

