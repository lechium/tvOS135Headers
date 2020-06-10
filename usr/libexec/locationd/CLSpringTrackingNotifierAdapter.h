//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CLNotifierServiceAdapter.h"

#import "CLSpringTrackingNotifierProtocol-Protocol.h"

@class NSString;

@interface CLSpringTrackingNotifierAdapter : CLNotifierServiceAdapter <CLSpringTrackingNotifierProtocol>
{
}

+ (id)getSilo;	// IMP=0x00000001006dca94
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00000001006dca70
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00000001008a547c
+ (_Bool)isSupported;	// IMP=0x00000001006dd21c
- (void)querySinceRecord:(struct CLSpringTrackerEntry)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001006dd050
- (int)syncgetStopTracking;	// IMP=0x00000001006dcf40
- (int)syncgetStartTracking;	// IMP=0x00000001006dcd58
- (_Bool)syncgetIsTracking;	// IMP=0x00000001006dcd30
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x00000001006dccf4
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001006dccb0
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x00000001006dcc7c
- (struct CLSpringTrackingNotifier *)adaptee;	// IMP=0x00000001006dcc40
- (void)endService;	// IMP=0x00000001006dcc1c
- (void)beginService;	// IMP=0x00000001006dcb50
- (id)init;	// IMP=0x00000001006dcb0c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

