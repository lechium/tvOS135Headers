//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CLIntersiloClientProtocol-Protocol.h"

@class CLBarometerCalibrationTrack;

@protocol CLBarometerCalibrationClientProtocol <CLIntersiloClientProtocol>
- (void)onBarometerCalibrationNotification:(unsigned long long)arg1 track:(CLBarometerCalibrationTrack *)arg2 data:(struct array<std::__1::deque<std::__1::shared_ptr<CLBarometerCalibration_Types::CLBarometerCalibrationData>, std::__1::allocator<std::__1::shared_ptr<CLBarometerCalibration_Types::CLBarometerCalibrationData>>>, 4> (^)(void))arg3;
@end
