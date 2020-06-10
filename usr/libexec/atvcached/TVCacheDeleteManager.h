//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TVCacheDeletePurging-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue, TVCacheDeleteManagerDelegate;

@interface TVCacheDeleteManager : NSObject <TVCacheDeletePurging>
{
    _Bool _canceled;	// 8 = 0x8
    NSString *_cacheDeleteID;	// 16 = 0x10
    id <TVCacheDeleteManagerDelegate> _delegate;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_purgeQueue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100002c20
@property(getter=isCanceled) _Bool canceled; // @synthesize canceled=_canceled;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *purgeQueue; // @synthesize purgeQueue=_purgeQueue;
@property(nonatomic) __weak id <TVCacheDeleteManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSString *cacheDeleteID; // @synthesize cacheDeleteID=_cacheDeleteID;
- (id)_purgeTasksForUrgency:(long long)arg1;	// IMP=0x0000000100002b1c
- (void)cancelPurge;	// IMP=0x0000000100002ab0
- (long long)purgeAmount:(long long)arg1 withUrgency:(long long)arg2 isPeriodic:(_Bool)arg3;	// IMP=0x00000001000025f0
- (long long)purgeAmount:(long long)arg1 withUrgency:(long long)arg2;	// IMP=0x00000001000025e0
- (long long)purgeableAmountWithUrgency:(long long)arg1;	// IMP=0x00000001000021f8
- (void)registerForCallbacks;	// IMP=0x0000000100001ed4
- (id)initWithCacheDeleteID:(id)arg1;	// IMP=0x0000000100001e20

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
