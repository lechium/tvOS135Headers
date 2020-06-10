//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CLNotifierServiceAdapter.h"

#import "CLMotionHintLoggerProtocol-Protocol.h"

@class NSString;

@interface CLMotionHintLoggerAdapter : CLNotifierServiceAdapter <CLMotionHintLoggerProtocol>
{
}

+ (id)getSilo;	// IMP=0x0000000100860eb8
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0000000100860e94
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0000000100860e10
+ (_Bool)isSupported;	// IMP=0x00000001008612cc
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x0000000100861290
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x000000010086124c
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x0000000100861218
- (struct CLMotionHintLogger *)adaptee;	// IMP=0x00000001008611dc
- (void)endService;	// IMP=0x00000001008611b8
- (void)beginService;	// IMP=0x0000000100860f74
- (id)init;	// IMP=0x0000000100860f30

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
