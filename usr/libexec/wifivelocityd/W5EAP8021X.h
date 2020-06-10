//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface W5EAP8021X : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    struct __SCDynamicStore *_storeRef;	// 16 = 0x10
    _Bool _isMonitoringEvents;	// 24 = 0x18
    NSString *_interfaceName;	// 32 = 0x20
    CDUnknownBlockType _updatedEAP8021XCallback;	// 40 = 0x28
}

@property(copy, nonatomic) CDUnknownBlockType updatedEAP8021XCallback; // @synthesize updatedEAP8021XCallback=_updatedEAP8021XCallback;
@property(readonly, copy, nonatomic) NSString *interfaceName; // @synthesize interfaceName=_interfaceName;
- (int)clientStatus;	// IMP=0x000000010002f5b4
- (unsigned int)controlMode;	// IMP=0x000000010002f474
- (unsigned int)supplicantState;	// IMP=0x000000010002f334
- (unsigned int)controlState;	// IMP=0x000000010002f214
- (void)stopEventMonitoring;	// IMP=0x000000010002f16c
- (void)__stopEventMonitoring;	// IMP=0x000000010002f128
- (void)startEventMonitoring;	// IMP=0x000000010002f07c
- (void)__startEventMonitoring;	// IMP=0x000000010002efcc
- (void)dealloc;	// IMP=0x000000010002ef64
- (id)init;	// IMP=0x000000010002ee50
- (id)initWithInterfaceName:(id)arg1;	// IMP=0x000000010002ece4

@end
