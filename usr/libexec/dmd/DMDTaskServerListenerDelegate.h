//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCListenerDelegate-Protocol.h"

@class CATTaskServer, NSString;

@interface DMDTaskServerListenerDelegate : NSObject <NSXPCListenerDelegate>
{
    CATTaskServer *_taskServer;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010006f274
@property(readonly, nonatomic) CATTaskServer *taskServer; // @synthesize taskServer=_taskServer;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000010006f170
- (id)initWithTaskServer:(id)arg1;	// IMP=0x000000010006f0f8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

