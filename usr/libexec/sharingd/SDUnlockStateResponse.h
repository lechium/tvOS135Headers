//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@interface SDUnlockStateResponse : PBCodable <NSCopying>
{
    unsigned int _version;	// 8 = 0x8
    _Bool _passcodeEnabled;	// 12 = 0xc
    _Bool _unlockEnabled;	// 13 = 0xd
    struct {
        unsigned int version:1;
        unsigned int passcodeEnabled:1;
        unsigned int unlockEnabled:1;
    } _has;	// 16 = 0x10
}

@property(nonatomic) _Bool passcodeEnabled; // @synthesize passcodeEnabled=_passcodeEnabled;
@property(nonatomic) _Bool unlockEnabled; // @synthesize unlockEnabled=_unlockEnabled;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001000f2cd4
- (unsigned long long)hash;	// IMP=0x00000001000f2c60
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000f2b64
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000f2aa4
- (void)copyTo:(id)arg1;	// IMP=0x00000001000f2a00
- (void)writeTo:(id)arg1;	// IMP=0x00000001000f2958
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001000f2950
- (id)dictionaryRepresentation;	// IMP=0x00000001000f2458
- (id)description;	// IMP=0x00000001000f23a4
@property(nonatomic) _Bool hasPasscodeEnabled;
@property(nonatomic) _Bool hasUnlockEnabled;
@property(nonatomic) _Bool hasVersion;

@end

