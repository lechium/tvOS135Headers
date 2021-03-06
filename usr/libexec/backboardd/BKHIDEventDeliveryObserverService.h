//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BKHIDEventDeliveryResolutionObserver-Protocol.h"
#import "BKSHIDEventObserverServerInterface-Protocol.h"

@class BKHIDEventDeliveryObserverServiceListener, BSMutableIntegerMap, NSMutableIndexSet, NSString;

@interface BKHIDEventDeliveryObserverService : NSObject <BKSHIDEventObserverServerInterface, BKHIDEventDeliveryResolutionObserver>
{
    BSMutableIntegerMap *_connectionsByPID;	// 8 = 0x8
    BKHIDEventDeliveryObserverServiceListener *_serviceListener;	// 16 = 0x10
    NSMutableIndexSet *_observerPIDs;	// 24 = 0x18
    struct os_unfair_lock_s _lock;	// 32 = 0x20
    BSMutableIntegerMap *_resolutionsByPID;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000100071800
- (id)setObservesDeferringResolutions:(id)arg1;	// IMP=0x00000001000716b4
- (void)resolutionsDidChange:(id)arg1 forPID:(int)arg2;	// IMP=0x0000000100071594
- (void)removeConnectionForPID:(int)arg1;	// IMP=0x0000000100071540
- (void)addConnection:(id)arg1 forPID:(int)arg2;	// IMP=0x00000001000714b0
- (id)init;	// IMP=0x0000000100071438

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

