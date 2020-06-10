//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CLBarometerCalibrationSourceClient-Protocol.h"

@class NSString;
@protocol CLBarometerCalibrationAggregatorClient, CLIntersiloUniverse;

@interface CLBarometerCalibrationSourceAggregator : NSObject <CLBarometerCalibrationSourceClient>
{
    id <CLIntersiloUniverse> _universe;	// 8 = 0x8
    array_c179b914 *_dataBuffers;	// 16 = 0x10
    struct map<unsigned int, CLBarometerCalibrationSource *, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, CLBarometerCalibrationSource *>>> _sources;	// 24 = 0x18
    double _lastDuplicatePressureLogTime;	// 48 = 0x30
    id <CLBarometerCalibrationAggregatorClient> _delegate;	// 56 = 0x38
}

- (id).cxx_construct;	// IMP=0x00000001005e754c
- (void).cxx_destruct;	// IMP=0x00000001005e753c
@property(nonatomic) id <CLBarometerCalibrationAggregatorClient> delegate; // @synthesize delegate=_delegate;
- (array_c179b914)copyDataBuffersForTrack:(unsigned long long)arg1;	// IMP=0x00000001005e7438
- (void)didUpdateSource:(unsigned long long)arg1 withData:(shared_ptr_16a5184d)arg2;	// IMP=0x00000001005e6b6c
- (void)trackInProgress:(_Bool)arg1;	// IMP=0x00000001005e6b68
- (void)disableAllDaySources;	// IMP=0x00000001005e6a9c
- (void)enableAllDaySources;	// IMP=0x00000001005e69d0
- (void)dealloc;	// IMP=0x00000001005e691c
- (id)initWithUniverse:(id)arg1 buffers:(array_c179b914 *)arg2;	// IMP=0x00000001005e67bc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

