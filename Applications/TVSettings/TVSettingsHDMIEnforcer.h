//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVOutputDeviceDiscoverySession, NSArray, NSMutableArray;
@protocol OS_dispatch_semaphore;

@interface TVSettingsHDMIEnforcer : NSObject
{
    _Bool _didDiscoverHDMI;	// 8 = 0x8
    _Bool _setHDMICancelled;	// 9 = 0x9
    AVOutputDeviceDiscoverySession *_discoverySession;	// 16 = 0x10
    NSArray *_preferredOutputDevices;	// 24 = 0x18
    NSMutableArray *_availablePreferredOutputDevices;	// 32 = 0x20
    NSObject<OS_dispatch_semaphore> *_waitForHDMI;	// 40 = 0x28
    CDUnknownBlockType _completion;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000001000a3dcc
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) _Bool setHDMICancelled; // @synthesize setHDMICancelled=_setHDMICancelled;
@property(nonatomic) _Bool didDiscoverHDMI; // @synthesize didDiscoverHDMI=_didDiscoverHDMI;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *waitForHDMI; // @synthesize waitForHDMI=_waitForHDMI;
@property(copy, nonatomic) NSMutableArray *availablePreferredOutputDevices; // @synthesize availablePreferredOutputDevices=_availablePreferredOutputDevices;
@property(copy, nonatomic) NSArray *preferredOutputDevices; // @synthesize preferredOutputDevices=_preferredOutputDevices;
@property(retain, nonatomic) AVOutputDeviceDiscoverySession *discoverySession; // @synthesize discoverySession=_discoverySession;
- (void)relinquishHDMIEnforcement;	// IMP=0x00000001000a3be4
- (void)outputDevicesDidChange;	// IMP=0x00000001000a3ae4
- (void)discoverySessionDidChangeAvailableOutputDevices;	// IMP=0x00000001000a34fc
- (void)completeWithError:(id)arg1;	// IMP=0x00000001000a3428
- (void)cancel;	// IMP=0x00000001000a3380
- (void)enforceHDMIOutput;	// IMP=0x00000001000a301c
- (_Bool)isCurrentOutputDeviceHDMI;	// IMP=0x00000001000a2f44
- (id)currentOutputDevices;	// IMP=0x00000001000a2ee8
- (id)initWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000a2de4

@end
