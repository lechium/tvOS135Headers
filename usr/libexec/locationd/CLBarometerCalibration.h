//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LocationSupport/CLIntersiloService.h>

#import "CLBarometerCalibrationAggregatorClient-Protocol.h"
#import "CLBarometerCalibrationContextClient-Protocol.h"
#import "CLBarometerCalibrationProtocol-Protocol.h"

@class CLBarometerCalibrationSourceAggregator, NSMutableSet, NSString;

@interface CLBarometerCalibration : CLIntersiloService <CLBarometerCalibrationProtocol, CLBarometerCalibrationAggregatorClient, CLBarometerCalibrationContextClient>
{
    array_c179b914 fDataBuffers;	// 8 = 0x8
    struct array<CLBarometerCalibrationContextManager *, 5> _contextManagers;	// 200 = 0xc8
    CLBarometerCalibrationSourceAggregator *_sourceAggregator;	// 240 = 0xf0
    NSMutableSet *_clients;	// 248 = 0xf8
    NSMutableSet *_bufferClients;	// 256 = 0x100
}

+ (_Bool)isSupported;	// IMP=0x000000010035c250
+ (id)getSilo;	// IMP=0x000000010035c194
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x000000010035c170
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00000001008888f8
- (id).cxx_construct;	// IMP=0x000000010035d7bc
- (void).cxx_destruct;	// IMP=0x000000010035d780
- (void)logBuffers;	// IMP=0x000000010035cfbc
- (void)stopTrack:(id)arg1;	// IMP=0x000000010035cbfc
- (void)startTrack:(id)arg1;	// IMP=0x000000010035cabc
- (void)stopBufferingForClient:(id)arg1;	// IMP=0x000000010035c934
- (void)startBufferingForClient:(id)arg1;	// IMP=0x000000010035c7d0
- (void)didUpdateDataBuffer:(unsigned long long)arg1;	// IMP=0x000000010035c778
- (void)unregisterForUpdates:(byref id)arg1;	// IMP=0x000000010035c61c
- (void)registerForUpdates:(byref id)arg1;	// IMP=0x000000010035c47c
- (void)releaseContextManagers;	// IMP=0x000000010035c414
- (void)endService;	// IMP=0x000000010035c3c0
- (void)beginService;	// IMP=0x000000010035c304
- (id)init;	// IMP=0x000000010035c20c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

