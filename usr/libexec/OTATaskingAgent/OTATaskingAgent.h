//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCListenerDelegate-Protocol.h"
#import "OTAAgentServices-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface OTATaskingAgent : NSObject <NSXPCListenerDelegate, OTAAgentServices>
{
    NSObject<OS_dispatch_queue> *_serialQueue;	// 8 = 0x8
}

+ (id)sharedListenerDelegate;	// IMP=0x0000000100001d98
- (void).cxx_destruct;	// IMP=0x0000000100002e9c
@property(retain) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
- (id)randomHashWithKey:(id)arg1;	// IMP=0x0000000100002cb4
- (id)hexStringForSHA1Digest:(const char *)arg1;	// IMP=0x0000000100002bf8
- (id)legacyCrashreporterKey;	// IMP=0x0000000100002a3c
- (id)checkForExistenceAndCreateKey:(id)arg1;	// IMP=0x000000010000279c
- (void)awdKeyWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000100002714
- (void)crashreporterKeyWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000010000268c
- (void)deletePreferenceForDomain:(id)arg1 preference:(id)arg2 UID:(unsigned int)arg3 withReply:(CDUnknownBlockType)arg4;	// IMP=0x00000001000023b4
- (void)setPreferenceForDomain:(id)arg1 preference:(id)arg2 value:(id)arg3 UID:(unsigned int)arg4 withReply:(CDUnknownBlockType)arg5;	// IMP=0x0000000100001fb0
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0000000100001ec0
- (id)init;	// IMP=0x0000000100001e04

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

