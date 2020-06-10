//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BKSHIDEventDeferringResolution, NSSet;
@protocol BKHIDEventSenderInfo;

@protocol BKHIDEventDispatcher <NSObject>
- (void)postEvent:(struct __IOHIDEvent *)arg1 fromSender:(id <BKHIDEventSenderInfo>)arg2;
- (void)postEvent:(struct __IOHIDEvent *)arg1 toDestination:(BKSHIDEventDeferringResolution *)arg2;
- (NSSet *)destinationsForEvent:(struct __IOHIDEvent *)arg1 fromSender:(id <BKHIDEventSenderInfo>)arg2;
@end

