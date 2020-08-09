//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface HBSiriRemoteAnalyticsEventLogger : NSObject
{
    long long _trackingTouchesCount;	// 8 = 0x8
    NSMutableArray *_events;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x0000000100025ee8
- (void).cxx_destruct;	// IMP=0x00000001000268cc
@property(readonly, nonatomic) NSMutableArray *events; // @synthesize events=_events;
@property(readonly, nonatomic) long long trackingTouchesCount; // @synthesize trackingTouchesCount=_trackingTouchesCount;
- (void)_logSelectEventWithVendorInfo:(CDStruct_912cb5d2)arg1;	// IMP=0x0000000100026450
- (void)_logEvent:(CDStruct_7f320dbc)arg1;	// IMP=0x000000010002631c
- (void)_focusDidUpdate;	// IMP=0x000000010002625c
- (void)receiveEvent:(id)arg1;	// IMP=0x0000000100025f60
- (id)_init;	// IMP=0x0000000100025e50

@end

