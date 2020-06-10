//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CLNotifierServiceAdapter.h"

#import "CLCompanionNotifierProtocol-Protocol.h"

@class NSString;

@interface CLCompanionNotifierAdapter : CLNotifierServiceAdapter <CLCompanionNotifierProtocol>
{
}

+ (id)getSilo;	// IMP=0x0000000100169e3c
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0000000100169e18
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0000000100873824
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x000000010016a09c
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x000000010016a058
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x000000010016a024
- (struct CLCompanionNotifier *)adaptee;	// IMP=0x0000000100169fe8
- (void)endService;	// IMP=0x0000000100169fc4
- (void)beginService;	// IMP=0x0000000100169ef8
- (id)init;	// IMP=0x0000000100169eb4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

