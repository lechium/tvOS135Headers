//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "RTCReportingBackend.h"

@class NSBundle;

@interface AWDBackend : RTCReportingBackend
{
    NSBundle *_clientBundle;	// 224 = 0xe0
    Class _awdAdaptorClass;	// 232 = 0xe8
    id _awdAdaptor;	// 240 = 0xf0
}

- (void)dealloc;	// IMP=0x0000000100010690
- (id)initWithName:(id)arg1 profile:(id)arg2 productFamily:(id)arg3 clientType:(int)arg4;	// IMP=0x00000001000104f4
- (_Bool)isClientTypeAllowed:(int)arg1;	// IMP=0x00000001000104d0
- (id)initWithName:(id)arg1 profile:(id)arg2 productFamily:(id)arg3;	// IMP=0x00000001000104c0
- (id)sendMessage:(id)arg1 timestamp:(const struct timeval *)arg2 method:(unsigned short)arg3 respCode:(unsigned short)arg4 eventID:(unsigned short)arg5 flag:(int)arg6;	// IMP=0x0000000100010374

@end
