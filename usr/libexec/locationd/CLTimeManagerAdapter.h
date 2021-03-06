//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CLNotifierServiceAdapter.h"

#import "CLTimeManagerProtocol-Protocol.h"

@class NSString;

@interface CLTimeManagerAdapter : CLNotifierServiceAdapter <CLTimeManagerProtocol>
{
}

+ (id)getSilo;	// IMP=0x00000001001a3594
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00000001001a3570
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x000000010087a5d0
- (void)setGpsTime:(unsigned long long)arg1;	// IMP=0x00000001001a38c4
- (_Bool)syncgetReferenceTime:(double *)arg1 andError:(double *)arg2;	// IMP=0x00000001001a3878
- (_Bool)syncgetReferenceTime:(double *)arg1;	// IMP=0x00000001001a3830
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x00000001001a37f4
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001001a37b0
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x00000001001a377c
- (struct CLTimeManager *)adaptee;	// IMP=0x00000001001a3740
- (void)endService;	// IMP=0x00000001001a371c
- (void)beginService;	// IMP=0x00000001001a3650
- (id)init;	// IMP=0x00000001001a360c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

