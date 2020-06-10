//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PRService-Protocol.h"

@class NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface PRAidedRangingService : NSObject <PRService>
{
    NSMutableSet *_xpcSessions;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSString *machServiceName;	// 24 = 0x18
}

+ (id)serviceWithQueue:(id)arg1;	// IMP=0x0000000100004638
- (void).cxx_destruct;	// IMP=0x0000000100004eec
- (void)handleXPCDisconnection:(id)arg1;	// IMP=0x0000000100004c2c
- (_Bool)shouldAcceptNewConnection:(id)arg1;	// IMP=0x00000001000046ac
@property(readonly) NSString *machServiceName; // @synthesize machServiceName;
- (id)initWithQueue:(id)arg1;	// IMP=0x000000010000449c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

