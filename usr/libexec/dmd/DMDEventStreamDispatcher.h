//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSPointerArray;

@interface DMDEventStreamDispatcher : NSObject
{
    NSPointerArray *_alarmListeners;	// 8 = 0x8
    NSMutableDictionary *_distributedNotificationNameToListenersMap;	// 16 = 0x10
    NSMutableDictionary *_notifyMatchingNotificationToListenersMap;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010004a394
@property(readonly, nonatomic) NSMutableDictionary *notifyMatchingNotificationToListenersMap; // @synthesize notifyMatchingNotificationToListenersMap=_notifyMatchingNotificationToListenersMap;
@property(readonly, nonatomic) NSMutableDictionary *distributedNotificationNameToListenersMap; // @synthesize distributedNotificationNameToListenersMap=_distributedNotificationNameToListenersMap;
@property(readonly, nonatomic) NSPointerArray *alarmListeners; // @synthesize alarmListeners=_alarmListeners;
- (void)_dispatchToListenerForKey:(id)arg1 inMap:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000010004a1a4
- (void)_registerListener:(id)arg1 forKeys:(id)arg2 inMap:(id)arg3;	// IMP=0x0000000100049f8c
- (void)_registerEventStreamHandlers;	// IMP=0x00000001000497e4
- (id)initWithListeners:(id)arg1;	// IMP=0x0000000100049500

@end

