//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NRLink, NSUUID;

@interface NRLinkDirectorMessage : NSObject
{
    unsigned char _messageVersion;	// 8 = 0x8
    unsigned short _messageHeaderSize;	// 10 = 0xa
    unsigned short _payloadLength;	// 12 = 0xc
    unsigned int _messageLen;	// 16 = 0x10
    NRLink *_preferredLink;	// 24 = 0x18
    NSUUID *_nrUUID;	// 32 = 0x20
    char *_messageBufferPtr;	// 40 = 0x28
    unsigned long long _identifier;	// 48 = 0x30
}

+ (_Bool)testForNRUUID:(id)arg1;	// IMP=0x0000000100008964
+ (void)testCleanupForNRUUID:(id)arg1;	// IMP=0x00000001000088fc
+ (_Bool)testMessage:(id)arg1;	// IMP=0x0000000100008138
+ (id)createTestEndpointIPv6;	// IMP=0x000000010000806c
+ (id)createTestEndpointIPv4;	// IMP=0x0000000100007fa0
+ (id)createArrayFromSubDataArray:(id)arg1;	// IMP=0x0000000100007e50
+ (id)createSubDataArrayFromData:(id)arg1;	// IMP=0x0000000100007d1c
+ (id)testData;	// IMP=0x0000000100007b14
+ (id)createMessageWithData:(id)arg1 nrUUID:(id)arg2;	// IMP=0x0000000100007770
- (void).cxx_destruct;	// IMP=0x00000001000075f0
@property(nonatomic) unsigned short payloadLength; // @synthesize payloadLength=_payloadLength;
@property(nonatomic) unsigned long long identifier; // @synthesize identifier=_identifier;
@property(nonatomic) unsigned int messageLen; // @synthesize messageLen=_messageLen;
@property(nonatomic) unsigned short messageHeaderSize; // @synthesize messageHeaderSize=_messageHeaderSize;
@property(nonatomic) unsigned char messageVersion; // @synthesize messageVersion=_messageVersion;
@property(nonatomic) char *messageBufferPtr; // @synthesize messageBufferPtr=_messageBufferPtr;
@property(retain, nonatomic) NSUUID *nrUUID; // @synthesize nrUUID=_nrUUID;
@property(retain, nonatomic) NRLink *preferredLink; // @synthesize preferredLink=_preferredLink;
- (_Bool)send;	// IMP=0x000000010000739c
- (id)copySendBuffer;	// IMP=0x0000000100007268
- (id)copyFirstDataForType:(unsigned char)arg1;	// IMP=0x000000010000721c
- (id)copyUpdateWiFiAddressEndpointsForInterfaceIndex:(unsigned int)arg1;	// IMP=0x0000000100006e40
- (id)copyFirstBoolForType:(unsigned char)arg1;	// IMP=0x0000000100006da0
- (_Bool)hasType:(unsigned char)arg1;	// IMP=0x0000000100006d6c
- (id)copyAllDataForType:(unsigned char)arg1;	// IMP=0x0000000100006838
- (id)copyDeviceLinkState;	// IMP=0x000000010000660c
- (void)addDeviceLinkState:(id)arg1;	// IMP=0x00000001000062a8
- (void)addUpdateWiFiAddressEndpoint:(id)arg1 portHBO:(unsigned short)arg2;	// IMP=0x0000000100006000
- (void)addType:(unsigned char)arg1;	// IMP=0x0000000100005ff0
- (void)addType:(unsigned char)arg1 boolValue:(_Bool)arg2;	// IMP=0x0000000100005f78
- (void)addType:(unsigned char)arg1 data:(id)arg2;	// IMP=0x0000000100005b00
- (id)description;	// IMP=0x0000000100005a6c
- (void)dealloc;	// IMP=0x00000001000057b4
- (id)initOutgoingDirectorMessageWithNRUUID:(id)arg1;	// IMP=0x0000000100005730
- (id)initOutgoingDirectorMessageWithNRUUIDInner:(id)arg1 messageVersion:(unsigned char)arg2;	// IMP=0x0000000100005504
- (void)writeMessagePayloadLengthNBOToSendBuffer:(const char *)arg1 len:(unsigned short)arg2;	// IMP=0x00000001000052c4
- (void)writeMessageIdentifierNBOToSendBuffer:(const char *)arg1 len:(unsigned int)arg2;	// IMP=0x0000000100005064
- (void)writeMessageOptionsToSendBuffer:(const char *)arg1 len:(unsigned char)arg2;	// IMP=0x0000000100004e68
- (void)writeMessageVersionToSendBuffer:(unsigned char)arg1;	// IMP=0x0000000100004c80
- (id)initDirectorMessageWithNRUUID:(id)arg1 messageLen:(unsigned int)arg2 messageVersion:(unsigned char)arg3;	// IMP=0x00000001000048e0

@end
