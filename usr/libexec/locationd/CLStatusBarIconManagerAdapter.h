//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LocationSupport/CLIntersiloService.h>

#import "CLStatusBarIconManagerProtocol-Protocol.h"

@class NSString;

@interface CLStatusBarIconManagerAdapter : CLIntersiloService <CLStatusBarIconManagerProtocol>
{
    struct CLStatusBarIconManager *_manager;	// 8 = 0x8
}

+ (_Bool)isSupported;	// IMP=0x00000001004f5794
+ (id)getSilo;	// IMP=0x00000001004f5644
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00000001004f5620
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0000000100894d10
@property(nonatomic) struct CLStatusBarIconManager *manager; // @synthesize manager=_manager;
- (void)entityClass:(unsigned int)arg1 didChangeArrowState:(unsigned long long)arg2 dueToDeauthorization:(_Bool)arg3;	// IMP=0x00000001004f5e10
- (void)setE911Active:(_Bool)arg1;	// IMP=0x00000001004f5d90
- (void)setStatusBarIconForEntityClass:(int)arg1 visible:(_Bool)arg2;	// IMP=0x00000001004f5a30
- (_Bool)syncgetStatusBarIconForEntityClass:(int)arg1;	// IMP=0x00000001004f59cc
- (int)syncgetIconState;	// IMP=0x00000001004f579c
- (void)endService;	// IMP=0x00000001004f5768
- (void)beginService;	// IMP=0x00000001004f5700
- (id)init;	// IMP=0x00000001004f56bc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

