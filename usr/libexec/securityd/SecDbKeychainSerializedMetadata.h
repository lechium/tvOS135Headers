//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface SecDbKeychainSerializedMetadata : PBCodable <NSCopying>
{
    NSData *_ciphertext;	// 8 = 0x8
    NSString *_tamperCheck;	// 16 = 0x10
    NSData *_wrappedKey;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100088820
@property(retain, nonatomic) NSString *tamperCheck; // @synthesize tamperCheck=_tamperCheck;
@property(retain, nonatomic) NSData *wrappedKey; // @synthesize wrappedKey=_wrappedKey;
@property(retain, nonatomic) NSData *ciphertext; // @synthesize ciphertext=_ciphertext;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100088728
- (unsigned long long)hash;	// IMP=0x00000001000886b4
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000885b4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000884dc
- (void)copyTo:(id)arg1;	// IMP=0x0000000100088450
- (void)writeTo:(id)arg1;	// IMP=0x00000001000883d4
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001000881e8
- (id)dictionaryRepresentation;	// IMP=0x0000000100088130
- (id)description;	// IMP=0x000000010008807c

@end

