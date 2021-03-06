//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LocationSupport/CLIntersiloService.h>

#import "CLNewAppDiscoveryServiceProtocol-Protocol.h"

@class CLAvailabilityRegionChangeMonitor, NSString;
@protocol CLAppTileDataProviderProtocol, CLRoutineMonitorServiceProtocol, CLTilesManagerProtocol;

@interface CLNewAppDiscovery : CLIntersiloService <CLNewAppDiscoveryServiceProtocol>
{
    struct unique_ptr<CLLocationController_Type::Client, std::__1::default_delete<CLLocationController_Type::Client>> _locationClient;	// 8 = 0x8
    struct unique_ptr<CLNADController, std::__1::default_delete<CLNADController>> _controller;	// 16 = 0x10
    CLAvailabilityRegionChangeMonitor *_geoRegionChangeMonitor;	// 24 = 0x18
    _Bool _canInstallApps;	// 32 = 0x20
    unsigned int _maxAgeAllowed;	// 36 = 0x24
    id <CLTilesManagerProtocol> _tilesManagerProxy;	// 40 = 0x28
    id <CLAppTileDataProviderProtocol> _appTileDataProviderProxy;	// 48 = 0x30
    id <CLRoutineMonitorServiceProtocol> _routineMonitorProxy;	// 56 = 0x38
}

+ (id)getSilo;	// IMP=0x000000010040888c
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0000000100408868
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x000000010088db28
+ (_Bool)isSupported;	// IMP=0x0000000100408768
- (id).cxx_construct;	// IMP=0x000000010040aed4
- (void).cxx_destruct;	// IMP=0x000000010040ae7c
@property(nonatomic) unsigned int maxAgeAllowed; // @synthesize maxAgeAllowed=_maxAgeAllowed;
@property(nonatomic) _Bool canInstallApps; // @synthesize canInstallApps=_canInstallApps;
@property(retain, nonatomic) id <CLRoutineMonitorServiceProtocol> routineMonitorProxy; // @synthesize routineMonitorProxy=_routineMonitorProxy;
@property(retain, nonatomic) id <CLAppTileDataProviderProtocol> appTileDataProviderProxy; // @synthesize appTileDataProviderProxy=_appTileDataProviderProxy;
@property(retain, nonatomic) id <CLTilesManagerProtocol> tilesManagerProxy; // @synthesize tilesManagerProxy=_tilesManagerProxy;
- (void)onRegionChangeNotification;	// IMP=0x000000010040aca4
- (_Bool)isServiceEnabledViaGeoCountryOverrides;	// IMP=0x000000010040aae4
- (_Bool)isUsableLocation:(id)arg1;	// IMP=0x000000010040aa88
- (void)onLocation:(id)arg1;	// IMP=0x00000001004094e4
- (void)endService;	// IMP=0x00000001004093e0
- (void)beginService;	// IMP=0x0000000100408948
- (id)init;	// IMP=0x0000000100408904

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

