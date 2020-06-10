//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

@class ALSLocation, NSString;

@interface ALSWirelessAP : PBCodable
{
    unsigned int _channel;	// 8 = 0x8
    ALSLocation *_location;	// 16 = 0x10
    NSString *_macID;	// 24 = 0x18
    struct {
        unsigned int channel:1;
    } _has;	// 32 = 0x20
}

@property(nonatomic) unsigned int channel; // @synthesize channel=_channel;
@property(retain, nonatomic) ALSLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) NSString *macID; // @synthesize macID=_macID;
- (unsigned long long)hash;	// IMP=0x0000000100539fe4
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100539f00
- (void)copyTo:(id)arg1;	// IMP=0x0000000100539e48
- (void)writeTo:(id)arg1;	// IMP=0x0000000100539d58
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100539d50
- (id)dictionaryRepresentation;	// IMP=0x000000010053999c
- (id)description;	// IMP=0x000000010053991c
@property(nonatomic) _Bool hasChannel;
@property(readonly, nonatomic) _Bool hasLocation;
- (void)dealloc;	// IMP=0x000000010053984c

@end

