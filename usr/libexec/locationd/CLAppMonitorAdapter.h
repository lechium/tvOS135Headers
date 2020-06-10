//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CLNotifierServiceAdapter.h"

#import "CLAppMonitorProtocol-Protocol.h"

@class NSString;

@interface CLAppMonitorAdapter : CLNotifierServiceAdapter <CLAppMonitorProtocol>
{
}

+ (id)getSilo;	// IMP=0x000000010063659c
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0000000100636578
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x000000010089fd24
- (void)checkApplications:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100636b78
- (int)syncgetAppType:(id)arg1;	// IMP=0x00000001006369b8
- (void)isApplicationInstalledIncludingPairedDevices:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100636978
- (_Bool)syncgetIsApplicationInstalledLocally:(struct __CFString *)arg1;	// IMP=0x000000010063689c
- (_Bool)syncgetForegroundApp:(struct NotificationData *)arg1;	// IMP=0x0000000100636838
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x00000001006367fc
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001006367b8
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x0000000100636784
- (struct CLAppMonitor *)adaptee;	// IMP=0x0000000100636748
- (void)endService;	// IMP=0x0000000100636724
- (void)beginService;	// IMP=0x0000000100636658
- (id)init;	// IMP=0x0000000100636614

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

