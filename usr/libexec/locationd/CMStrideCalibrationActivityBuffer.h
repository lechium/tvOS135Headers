//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CMStrideCalibrationActivityBuffer : NSObject
{
    struct vector<std::__1::pair<double, CLMotionActivity::Type>, std::__1::allocator<std::__1::pair<double, CLMotionActivity::Type>>> fActivityWindow;	// 8 = 0x8
}

- (id).cxx_construct;	// IMP=0x000000010035126c
- (void).cxx_destruct;	// IMP=0x0000000100351254
- (void)feedMotionStateData:(const union NotificationData *)arg1;	// IMP=0x00000001003511a0
- (_Bool)isRunningStateInWindow;	// IMP=0x0000000100351104
- (void)ageOutMotionStateArray;	// IMP=0x0000000100350fe4

@end

