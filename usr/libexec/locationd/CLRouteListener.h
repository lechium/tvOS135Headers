//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GEONavigationListenerDelegate-Protocol.h"

@class CLDispatchSilo, GEONavigationListener, NSString;
@protocol CLIntersiloUniverse;

@interface CLRouteListener : NSObject <GEONavigationListenerDelegate>
{
    _Bool _enabled;	// 8 = 0x8
    GEONavigationListener *_geoNavListener;	// 16 = 0x10
    double _lastEtaInSeconds;	// 24 = 0x18
    double _lastEtaAbsTime;	// 32 = 0x20
    CDStruct_2c43369c _lastCoordinate;	// 40 = 0x28
    struct INotifier *_parentNotifier;	// 56 = 0x38
    struct unique_ptr<CLDarwinNotifier_Type::Client, std::__1::default_delete<CLDarwinNotifier_Type::Client>> _darwinNotifierClient;	// 64 = 0x40
    id <CLIntersiloUniverse> _universe;	// 72 = 0x48
    CLDispatchSilo *_silo;	// 80 = 0x50
}

- (id).cxx_construct;	// IMP=0x000000010022c9c0
- (void).cxx_destruct;	// IMP=0x000000010022c9a0
- (void)onDarwinNotification:(int)arg1 data:(NotificationData_825421d2)arg2;	// IMP=0x000000010022c8a8
- (void)logState:(id)arg1;	// IMP=0x000000010022c254
- (void)logTransitRoute:(id)arg1;	// IMP=0x000000010022b2cc
- (void)logRoute:(id)arg1;	// IMP=0x000000010022acd8
- (void)navigationListener:(id)arg1 didUpdateGuidanceState:(id)arg2;	// IMP=0x000000010022aab4
- (void)navigationListener:(id)arg1 didUpdateTransitSummary:(id)arg2;	// IMP=0x000000010022a9b4
- (void)navigationListener:(id)arg1 didUpdateRouteSummary:(id)arg2;	// IMP=0x000000010022a628
- (void)notifyFromLastInfo;	// IMP=0x000000010022a5a8
- (void)clearLocationData;	// IMP=0x000000010022a58c
- (void)disable;	// IMP=0x000000010022a430
- (void)enable;	// IMP=0x000000010022a310
- (void)dealloc;	// IMP=0x000000010022a2b0
- (id)initInUniverse:(id)arg1 withDelegate:(struct INotifier *)arg2;	// IMP=0x000000010022a154

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

