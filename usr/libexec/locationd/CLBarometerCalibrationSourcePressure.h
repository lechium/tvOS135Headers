//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CLBarometerCalibrationSource.h"

@interface CLBarometerCalibrationSourcePressure : CLBarometerCalibrationSource
{
    struct unique_ptr<CLMotionNotifier::Dispatcher, std::__1::default_delete<CLMotionNotifier::Dispatcher>> _filteredPressureDispatcher;	// 32 = 0x20
}

- (id).cxx_construct;	// IMP=0x00000001007b2fb8
- (void).cxx_destruct;	// IMP=0x00000001007b2f90
- (void)onPressureData:(const Sample_b71dd899 *)arg1;	// IMP=0x00000001007b2df0
- (void)disableSource;	// IMP=0x00000001007b2d9c
- (void)enableSource;	// IMP=0x00000001007b2d40
- (void)dealloc;	// IMP=0x00000001007b2ce0
- (id)initWithUniverse:(id)arg1 delegate:(id)arg2;	// IMP=0x00000001007b2bf4

@end

