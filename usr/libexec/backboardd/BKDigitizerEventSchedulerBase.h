//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface BKDigitizerEventSchedulerBase : NSObject
{
}

- (void)scheduleEvent:(struct __IOHIDEvent *)arg1 fromDigitizer:(struct OpaqueBKDigitizerInfo *)arg2 toClient:(unsigned int)arg3;	// IMP=0x0000000100044e7c
- (void)sendEvent:(struct __IOHIDEvent *)arg1 toClient:(unsigned int)arg2;	// IMP=0x0000000100044cd4
- (void)digitizer:(struct OpaqueBKDigitizerInfo *)arg1 touchingPathMaskDidChange:(unsigned int)arg2;	// IMP=0x0000000100044cd0

@end
