//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol NDCallbackQueueDelegate;

@interface NDCallbackQueue : NSObject
{
    NSMutableArray *_callbacks;	// 8 = 0x8
    id <NDCallbackQueueDelegate> _delegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010004d9c0
@property __weak id <NDCallbackQueueDelegate> delegate; // @synthesize delegate=_delegate;
- (unsigned long long)count;	// IMP=0x000000010004d98c
- (void)drainCallbacksForTaskIdentifier:(unsigned long long)arg1;	// IMP=0x000000010004d728
- (void)performAllCallbacks;	// IMP=0x000000010004d5e8
- (void)addPendingCallback:(id)arg1 forceWakeup:(_Bool)arg2;	// IMP=0x000000010004d4ec
- (void)addPendingCallbackToFront:(id)arg1;	// IMP=0x000000010004d4d8
- (void)drainCallback:(id)arg1;	// IMP=0x000000010004d0c4
- (void)performCallback:(id)arg1;	// IMP=0x000000010004bad0
- (id)initWithDelegate:(id)arg1;	// IMP=0x000000010004b9fc

@end
