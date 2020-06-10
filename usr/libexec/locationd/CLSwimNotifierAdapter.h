//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CLNotifierServiceAdapter.h"

#import "CLSwimNotifierProtocol-Protocol.h"

@class NSString;

@interface CLSwimNotifierAdapter : CLNotifierServiceAdapter <CLSwimNotifierProtocol>
{
}

+ (_Bool)isSupported;	// IMP=0x00000001007b4bcc
+ (id)getSilo;	// IMP=0x00000001007b4930
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00000001007b490c
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00000001008adb34
- (void)onNotification:(int)arg1 withData:(id)arg2;	// IMP=0x00000001007b4edc
- (_Bool)syncget_prepareSessionEndForSessionType:(long long)arg1;	// IMP=0x00000001007b4de0
- (void)clearCalibrations;	// IMP=0x00000001007b4dc0
- (void)queryUsingRecord:(struct CLSwimEntry)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001007b4c54
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x00000001007b4b90
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001007b4b4c
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x00000001007b4b18
- (struct CLSwimNotifier *)adaptee;	// IMP=0x00000001007b4adc
- (void)endService;	// IMP=0x00000001007b4ab8
- (void)beginService;	// IMP=0x00000001007b49ec
- (id)init;	// IMP=0x00000001007b49a8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

