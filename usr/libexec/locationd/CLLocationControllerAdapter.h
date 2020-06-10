//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CLLocationProviderAdapter.h"

#import "CLLocationControllerProtocol-Protocol.h"

@class NSString;

@interface CLLocationControllerAdapter : CLLocationProviderAdapter <CLLocationControllerProtocol>
{
}

+ (id)getSilo;	// IMP=0x00000001001a7464
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00000001001a7440
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x000000010087aa64
- (void)setGpsAssistantHasClients:(_Bool)arg1 forNotification:(int)arg2;	// IMP=0x00000001001a7b9c
- (_Bool)syncgetActiveTechs:(set_7b7d70f4 *)arg1;	// IMP=0x00000001001a7738
- (_Bool)syncgetMetric:(struct LocationMapMatching *)arg1;	// IMP=0x00000001001a7700
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x00000001001a76c4
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001001a7680
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x00000001001a764c
- (struct CLLocationController *)adaptee;	// IMP=0x00000001001a7610
- (void)endService;	// IMP=0x00000001001a75ec
- (void)beginService;	// IMP=0x00000001001a7520
- (id)init;	// IMP=0x00000001001a74dc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

