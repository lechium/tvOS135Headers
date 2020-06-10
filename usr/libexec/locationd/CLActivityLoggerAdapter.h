//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LocationSupport/CLIntersiloService.h>

#import "CLActivityLoggerProtocol-Protocol.h"

@class NSString;

@interface CLActivityLoggerAdapter : CLIntersiloService <CLActivityLoggerProtocol>
{
    struct CLActivityLogger *_logger;	// 8 = 0x8
}

+ (id)getSilo;	// IMP=0x00000001000db698
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00000001000db674
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x000000010086f830
@property(nonatomic) struct CLActivityLogger *logger; // @synthesize logger=_logger;
- (void)logData:(id)arg1;	// IMP=0x00000001000db838
- (void)endService;	// IMP=0x00000001000db800
- (void)beginService;	// IMP=0x00000001000db754
- (id)init;	// IMP=0x00000001000db710

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
