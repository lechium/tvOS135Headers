//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CLNotifierServiceAdapter.h"

#import "CLSkiNotifierProtocol-Protocol.h"

@class NSString;

@interface CLSkiNotifierAdapter : CLNotifierServiceAdapter <CLSkiNotifierProtocol>
{
}

+ (id)getSilo;	// IMP=0x00000001004e9fb0
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00000001004e9f8c
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0000000100893944
+ (_Bool)isSupported;	// IMP=0x00000001004ea300
- (void)queryUsingRecord:(struct CLSkiEntry)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001004ea1d8
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x00000001004ea19c
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001004ea158
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x00000001004ea124
- (struct CLSkiNotifier *)adaptee;	// IMP=0x00000001004ea0e8
- (void)endService;	// IMP=0x00000001004ea0c4
- (void)beginService;	// IMP=0x00000001004ea06c
- (id)init;	// IMP=0x00000001004ea028

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

