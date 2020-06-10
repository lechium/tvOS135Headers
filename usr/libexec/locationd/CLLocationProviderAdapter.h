//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CLNotifierServiceAdapter.h"

#import "CLLocationProviderProtocol-Protocol.h"

@class NSString;

@interface CLLocationProviderAdapter : CLNotifierServiceAdapter <CLLocationProviderProtocol>
{
}

- (id)syncgetName;	// IMP=0x00000001001db968
- (_Bool)syncgetLocationUnavailable;	// IMP=0x00000001001db944
- (_Bool)syncgetLocationPrivate:(struct CLDaemonLocationPrivate *)arg1;	// IMP=0x00000001001db910
- (_Bool)syncgetLocation:(CDStruct_c412fcbb *)arg1;	// IMP=0x00000001001db8dc
- (_Bool)syncgetNotification:(const int *)arg1 data:(struct NotificationData *)arg2;	// IMP=0x00000001001db8a0
- (void)sendSimulatedLocationUnavailable;	// IMP=0x00000001001db87c
- (void)sendSimulatedLocation:(struct CLDaemonLocation)arg1;	// IMP=0x00000001001db848
- (void)setSimulationEnabled:(_Bool)arg1;	// IMP=0x00000001001db7e4
- (void)shutdown;	// IMP=0x00000001001db794
- (void)start;	// IMP=0x00000001001db744
- (void)register:(byref id)arg1 forNotification:(int)arg2 distanceFilter:(double)arg3;	// IMP=0x00000001001db5b4
- (void)updateNotification:(int)arg1 withRegistrationInfo:(id)arg2 forClient:(byref id)arg3;	// IMP=0x00000001001db430
- (struct CLLocationProvider *)locationProvider;	// IMP=0x00000001001db3f4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

