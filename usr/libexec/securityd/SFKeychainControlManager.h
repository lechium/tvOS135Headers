//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCListenerDelegate-Protocol.h"
#import "SFKeychainControl-Protocol.h"

@class NSString, NSXPCListener;

__attribute__((visibility("hidden")))
@interface SFKeychainControlManager : NSObject <SFKeychainControl, NSXPCListenerDelegate>
{
    NSXPCListener *_listener;	// 8 = 0x8
}

+ (id)sharedManager;	// IMP=0x000000010005c928
- (void).cxx_destruct;	// IMP=0x000000010005c680
- (void)rpcDeleteCorruptedItemsWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000010005c5f8
- (void)rpcFindCorruptedItemsWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000010005c560
- (_Bool)deleteCorruptedItemsWithError:(id *)arg1;	// IMP=0x000000010005c278
- (id)findCorruptedItemsWithError:(id *)arg1;	// IMP=0x000000010005bb9c
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000010005b978
- (id)xpcControlEndpoint;	// IMP=0x000000010005b920
- (id)_init;	// IMP=0x000000010005b888

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

