//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CLSensorRecorderAlmanacListener : NSObject
{
    int _subscriptionType;	// 8 = 0x8
    struct CLSensorRecorderNotifier *_notifier;	// 16 = 0x10
}

@property int subscriptionType; // @synthesize subscriptionType=_subscriptionType;
@property struct CLSensorRecorderNotifier *notifier; // @synthesize notifier=_notifier;
- (void)sensorWriterWillStartMonitoring:(id)arg1;	// IMP=0x00000001006cd424

@end
