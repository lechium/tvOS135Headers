//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface PRXPCActivityManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableDictionary *_activities;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100126fbc
- (void)runActivityWithIdentifier:(id)arg1;	// IMP=0x0000000100126e28
- (void)onActivity:(id)arg1 withIdentifier:(id)arg2;	// IMP=0x0000000100126cac
- (void)checkInForActivityWithCriteria:(id)arg1 identifier:(id)arg2;	// IMP=0x0000000100126a28
- (void)registerForActivityWithIdentifier:(id)arg1;	// IMP=0x000000010012686c
- (id)initWithQueue:(id)arg1;	// IMP=0x0000000100126794
- (id)init;	// IMP=0x0000000100126744

@end

