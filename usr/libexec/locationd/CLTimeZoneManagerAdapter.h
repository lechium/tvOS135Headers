//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LocationSupport/CLIntersiloService.h>

#import "CLTimeZoneManagerProtocol-Protocol.h"

@class NSString;

@interface CLTimeZoneManagerAdapter : CLIntersiloService <CLTimeZoneManagerProtocol>
{
    struct CLTimeZoneManager *_manager;	// 8 = 0x8
}

+ (_Bool)isSupported;	// IMP=0x00000001002c79f4
+ (id)getSilo;	// IMP=0x00000001002c77fc
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00000001002c77d8
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0000000100881954
@property(nonatomic) struct CLTimeZoneManager *manager; // @synthesize manager=_manager;
- (void)endService;	// IMP=0x00000001002c7920
- (void)beginService;	// IMP=0x00000001002c78b8
- (id)init;	// IMP=0x00000001002c7874

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
